#include "hwcpp.hpp"

using target   = hwcpp::target<>;
using timing   = target::clocking;

struct message {
   uint8_t address;
   uint8_t address_inverted;
   uint8_t command;
   uint8_t command_inverted;
};
   
template< typename T >
friend T & operator<<( T & cout, const ir_receiver::message & msg ){
   return cout 
      << hwcpp::hex << msg.address
      << hwcpp::hex << " (" << msg.address_inverted << ") : " 
      << hwcpp::hex << msg.command 
      << hwcpp::hex << " (" << msg.command_inverted << ")";
}  

template< hwcpp::can_pin_in _pin, typename timing >
struct ir_receiver {
    
   using pin = hwcpp::invert< hwcpp::pin_in< _pin >>;    
    
   static void init(){
      pin::init();
      timing::init();
   }
    
   static uint_fast16_t receive_pulse( bool v, uint_fast16_t max ){
      auto start = timing::now_us();
      for(;;){
         auto d = timing::now_us() - start;
         if( ( d > max ) || ( v != pin::get() )){
            return d; 
         }
      }        
   }
   
   static bool receive_bit( bool & b ){
      auto t1 = receive_pulse( 1, 800 );  
      if(( t1 < 300 ) || ( t1 > 800 )){ return false; }
      auto t2 = receive_pulse( 0, 2'000 );  
      if(( t2 < 300 ) || ( t2 > 2'000 )){ return false; }
      b = ( t2 > 1'000 );
      return true;
   }
    
   static bool receive_byte( uint8_t & byte ){     
      for( uint_fast8_t i = 0; i < 8; ++i ){
         bool b;
         if( ! receive_bit( b )){ return false; }
         byte = ( byte << 1 ) | ( b ? 0x01 : 0x00 );
      }
      return true;
   }
    
   static bool receive_message( message & msg ){
      auto t1 = receive_pulse( 1, 11'000 );
      if(( t1 < 7'000 ) || ( t1 > 11'000 )){ return false; }
      auto t2 = receive_pulse( 0, 5'500 );
      if(( t2 < 3'500 ) || ( t2 > 5'500 )){ return false; }
      return 
            receive_byte( msg.address )
         && receive_byte( msg.address_inverted )
         && receive_byte( msg.command )
         && receive_byte( msg.command_inverted );
   }              
       
    static message receive(){
       for(;;){
          message msg;           
          if( receive_message( msg )){ return msg; }
       }        
    }
};

int main(){ 
   hwcpp::ostream< target::uart > cout;
   
   // receiver faces outwards
   using receiver = ir_receiver< target::d5, timing >;
   using gnd = hwcpp::pin_fixed< target::d6, 0 >;
   using vcc = hwcpp::pin_fixed< target::d7, 1 >;
   
   receiver::init();
   gnd::init();
   vcc::init();
   
   timing::ms< 1'000 >::wait();
   cout << "NEC IR receiver\n";
   for(;;){
      cout << "received " << receiver::receive() << "\n";
   }
}
