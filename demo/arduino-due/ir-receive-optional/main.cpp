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
   };
    
   static std::optional< uint_fast16_t > receive_pulse( 
      bool v, 
      uint_fast16_t min,
      uint_fast16_t max 
   ){
      for( auto start = timing::now_us(); ; ){
         auto d = timing::now_us() - start;
         if( d > max ){ return {}; }
         if( v != pin::get() ){
            if( d < min ){ return {}; }
            return d; 
         }
      }        
   }
   
   static std::optional< bool > receive_bit(){
      if( ! receive_pulse( 1, 300, 800 ) ){ return {}; }
      auto t = receive_pulse( 0, 300, 2'000 );
      return t ? ( *t > 1'000  ): std::optional< bool >{};
   }
    
   static bool receive_byte( uint8_t & byte ){     
      for( uint_fast8_t i = 0; i < 8; ++i ){
         auto b = receive_bit();
         if( ! b ){ return false; }
         byte = ( byte << 1 ) | ( *b ? 0x01 : 0x00 );
      }
      return true;
   }
    
   static std::optional< message > receive_message(){
      if( ! receive_pulse( 1, 7'000, 11'000 ) ){ return {}; }
      if( ! receive_pulse( 0, 3'500, 5'500 ) ){ return {}; }
      message msg;
      return (
            receive_byte( msg.address )
         && receive_byte( msg.address_inverted )
         && receive_byte( msg.command )
         && receive_byte( msg.command_inverted )
      ) ? msg : std::optional< message >{};
   }              
       
    static message receive(){
       for(;;){
          if( auto msg = receive_message() ){ 
             return *msg; 
          }
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
      auto msg = receiver::receive();
      cout 
         << "received "
         << hwcpp::hex << msg.address
         << hwcpp::hex << " (" << msg.address_inverted << ") : " 
         << hwcpp::hex << msg.command 
         << hwcpp::hex << " (" << msg.command_inverted << ")\n";
   }
   
}
