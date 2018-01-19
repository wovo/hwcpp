#include "hwcpp.hpp"

using target   = hwcpp::target<>;
using timing   = target::timing;
using i2c_bus  = hwcpp::i2c_bus_bb_scl_sda< target::scl, target::sda, timing >;
using uart     = target::uart;

namespace hwcpp {
    
template< is_i2c_bus bus, uint8_t address = 0x48 >
struct ads1115 {
    
   static void adr( uint8_t a ){
      uint8_t cmd[ 1 ] = { a };
      bus::write( address, cmd, 1 );
   }
   
   static void wr( uint8_t a, uint8_t d1, uint8_t d2 ){
      uint8_t cmd[ 3 ] = { a, d1, d2 };
      bus::write( address, cmd, 3 );
   }
   
   static void init(){
      bus::init();
      wr( 1, 0x44, 0x83 );
   }
   
   static int get(){   
      adr( 0 ); 
      
      uint8_t results[ 2 ];
      bus::read( address, results, 2 );
      
      return ( results[ 0 ] << 8 ) | results[ 1 ];
   }
   
}; // struct ads1115   
    
};

using adc = hwcpp::ads1115< i2c_bus >;

int main( void ){
   hwcpp::ostream< uart > cout;    
   timing::init();
   adc::init();
 
   for(;;){
      uart::write( "Hello world!\n" );      
      timing::ms< 500 >::wait();
      volatile int x = adc::get();
      cout << "adc = " << x << "\n";
   }

}