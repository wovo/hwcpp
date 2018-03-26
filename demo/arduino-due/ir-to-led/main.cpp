#include "hwcpp.hpp"

using target   = hwcpp::target<>;
using timing   = target::clocking;

int main(){ 
   using ir  = hwcpp::invert< target::d5 >;
   using gnd = hwcpp::pin_fixed< target::d6, 0 >;
   using vcc = hwcpp::pin_fixed< target::d7, 1 >;
   using led = target::led;
   
   ir::init();
   gnd::init();
   vcc::init();
   led::init();
   
   for(;;){
      led::set( ir::get() );
   }
   
}
