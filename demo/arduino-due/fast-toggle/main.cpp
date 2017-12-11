#include "hwcpp.hpp"

using target = hwcpp::target<>;
// using target = hwcpp::target< 4'000'000 >;
using pin = target::led;

int main(){ 
   pin::init();
   for(;;){
      pin::set( 1 );
      pin::set( 0 );
   }
}

// 84 MHz : 16.8 MHz, p = 60 ns 
// 4 MHz : 750 kHz, p = 1.35 us