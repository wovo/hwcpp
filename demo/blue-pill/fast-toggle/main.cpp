#include "hwcpp.hpp"

using target = hwcpp::target<>;
using pin = target::led;

volatile uint_fast64_t dummy;

int main(){ 
    
   // hwcpp::blink< pin, target::timing::ns< 0 > >();     
    
   pin::init();
   target::init();
   for(;;){
      pin::set( 1 );
      dummy = target::now_ticks();
      pin::set( 0 );
   }
}

// 8 MHz : 
//    H = 500 ns
//    L = 250 ns
//    P = 750 ns
//    F = 1.3 Mhz
//
// 72 MHz :
//    H = 75 ns
//    L = 50 ns
//    P = 125 ns
//    F = 8 Mhz
//
//    now_ticks() : 800 ns