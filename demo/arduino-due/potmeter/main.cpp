#include "hwcpp.hpp"

using target = hwcpp::target<>;
using timing = target::waiting;
using uart   = target::uart;

namespace hwcpp {
   template< can_pin_out pin, bool v >
   struct pin_fixed : pin_out< pin > {
      static void init(){
         pin_out< pin >::init();
         pin_out< pin >::set( v );
      }
   };
   
   template< can_pin_out pin >
   using pin_low = pin_fixed< pin, 0 >;
   
   template< can_pin_out pin >
   using pin_high = pin_fixed< pin, 1 >;
};

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
	  cout << adc::get() << "\n";
   }

}