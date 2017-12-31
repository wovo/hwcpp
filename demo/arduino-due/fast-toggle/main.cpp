#include "hwcpp.hpp"

using target = hwcpp::target<>;
// using target = hwcpp::target< 4'000'000 >;
using pin = target::led;

int main(){ 
   pin::init();
   for(;;){
      pin::set( 1 );
      //target::_waiting_foundation::wait_ticks_function( 100 );
      //auto volatile n = target::now_ticks();(void)n;
      //target::timing::ns< 0 >::wait();
      target::_waiting_foundation::wait_ticks_template< 30 >();
      pin::set( 0 );
   }
}

// 84 MHz : 16.8 MHz, p = 60 ns 
// 4 MHz : 750 kHz, p = 1.35 us

// at 84 MHz
// now_ticks() call : 875 us
// wait_ticks(0) : 1.5 us
// wait_ticks granularity ~ 750 us