#include "hwcpp.hpp"

using target = hwcpp::target<>;
using timing = target::waiting;
using uart   = target::uart;

int main( void ){
   hwcpp::ostream< uart > cout;    

   using gnd = hwcpp::pin_low< target::d54 >;
   using adc = target::a2;
   using vcc = hwcpp::pin_high< target::d58 >;
   
   gnd::init();
   adc::init();
   vcc::init();
   
   for(;;){
      timing::ms<500 >::wait();
	  cout << (int) adc::get() << "\n";
   }
}
