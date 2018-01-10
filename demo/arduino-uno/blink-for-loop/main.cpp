#include "hwcpp.hpp"

using target = hwcpp::target<>;
using timing = target::timing;
using led    = target::led;

int main(){ 
   led::init();
   timing::init();
   
   for(;;){
      led::set( 1 );
      timing::ms< 200 >::wait();
      led::set( 0 );
      timing::ms< 200 >::wait();
   }
}