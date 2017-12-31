#include "hwcpp.hpp"

using target   = hwcpp::target<>;
using timing   = target::waiting;
using i2c_bus  = hwcpp::i2c_bus_scl_sda< target::scl, target::sda, timing >;
using lcd      = hwcpp::shields::i2c_lcd< i2c_bus, 20, 4, timing >;

int main(){ 
   hwcpp::ostream< lcd > cout;
   int n  = 0;
   
   timing::init();
   i2c_bus::init();
   if(0) for(;;){
      timing::ms< 1 >::wait();   
      i2c_bus::write( 0x55, nullptr, 0 );
   }   
   
   for(;;){
      timing::ms< 1000 >::wait();
	  cout << "\v" << ++n << "\a\n";
      // timing of the operation
   }
}
