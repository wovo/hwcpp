#include "hwcpp.hpp"
#include <optional>

using target   = hwcpp::target<>;
using timing   = target::clocking;

template< hwcpp::can_pin_in _pin, typename timing >
struct ir_receiver {
    
   using pin = hwcpp::invert< hwcpp::pin_in< _pin >>;    
    
   static void init(){
      pin::init();
      timing::init();
   }
    
   struct message {
      uint8_t address;
      uint8_t address_inverted;
      uint8_t command;
      uint8_t command_inverted;
      
      static void shift( uint8_t & a, uint8_t b ){
         a = ( a << 1 ) | ( b & 0x80 ) ? 0x01 : 0x00;
      }
      
      void operator<<( bool b ){
         shift( address, address_inverted );
         shift( address_inverted, command );
         shift( command, command_inverted ); 
         shift( command_inverted, b ? 0xFF : 0x00 );
      }
   };
   
   template< typename T >
   friend T & operator<<( T & cout, const ir_receiver::message & msg ){
      return cout 
      << hwcpp::hex << msg.address
      << hwcpp::hex << " (" << msg.address_inverted << ") : " 
      << hwcpp::hex << msg.command 
      << hwcpp::hex << " (" << msg.command_inverted << ")";
   }   
    
   static bool receive_pulse( 
      bool v, 
      uint_fast16_t & d,
      uint_fast16_t min,
      uint_fast16_t max 
   ){
      for( auto start = timing::now_us(); ; ){
         d = timing::now_us() - start;
         if( d > max ){ return 0; }
         if( v == pin::get() ){ continue; }
         return d > min;
      }        
   }
      
   static bool receive_byte( uint8_t & byte ){     
      for( uint_fast8_t i = 0; i < 8; ++i ){
         uint_fast16_t d; 
         if( ! receive_pulse( 1, d, 300, 800 ) ){ return false; }
         if( ! receive_pulse( 0, d, 300, 2'000 ) ){ return false; }
         byte = ( byte << 1 ) | ( d > 1'000 ? 0x01 : 0x00 );
      }
      return true;
   }
       
   static message receive(){
      for(;;){
         message msg;
         uint_fast16_t d; 
         if( 
               receive_pulse( 1, d, 7'000, 11'000 )
            && receive_pulse( 0, d, 3'500, 5'500 )
            && receive_byte( msg.address )
            && receive_byte( msg.address_inverted )
            && receive_byte( msg.command )
            && receive_byte( msg.command_inverted )
         ){ return msg; }
      }        
   }
};

int main(){ 
   hwcpp::ostream< target::uart > cout;
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
