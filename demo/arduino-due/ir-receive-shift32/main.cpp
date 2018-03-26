#include "hwcpp.hpp"
#include <optional>

using target   = hwcpp::target<>;
using timing   = target::clocking;

void shift( uint8_t & a, uint8_t b ){
   a = ( a << 1 ) | (b & 0x80 ? 0x01 : 0x00 );
}

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
      
      message( uint_fast32_t bits ):
         address( bits >> 24 ),
         address_inverted( bits >> 16 ),
         command( bits >> 8 ),
         command_inverted( bits )
      {} 
   };
   
   template< typename T >
   friend T & operator<<( T & cout, const ir_receiver::message & msg ){
      return cout 
      << hwcpp::hex << msg.address
      << hwcpp::hex << " (" << msg.address_inverted << ") : " 
      << hwcpp::hex << msg.command 
      << hwcpp::hex << " (" << msg.command_inverted << ")";
   }   
   
   uint_fast16_t d;
    
   static bool receive_pulse( bool v, uint_fast16_t min, uint_fast16_t max ){
      for( auto start = timing::now_us(); ; ){
         d = timing::now_us() - start;
         if( d > max ){ return 0; }
         if( v == pin::get() ){ continue; }
         return d > min;
      }        
   }
      
   static message receive(){
      for(;;){
         uint_fast16_t d; 
         if( ! receive_pulse( 1, 7'000, 11'000 )){ continue; }
         if( ! receive_pulse( 0, 3'500, 5'500 )){ continue; }
         uint_fast32_t bits;
         for( uint_fast8_t i = 0; i < 32; ++i ){ 
            if( ! receive_pulse( 1, 300, 800 ) ){ continue; }
            if( ! receive_pulse( 0, 300, 2'000 ) ){ continue; }
            bits = ( bits << 1 ) | ( d > 1'000 ? 0x01 : 00 );
         }
         return message( bits );         
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
