#include "hwcpp.hpp"

using target = hwcpp::target< 8'000'000 >;
using pin = target::led;

volatile uint_fast64_t dummy;

int main(){ 
    
   hwcpp::blink< pin, target::timing::ticks< 27 > >();     
    
   pin::init();
   target::init();
   for(;;){
      pin::set( 1 );
      target::timing::ns< 100'000 >::wait();
      // volatile auto d = target::now_ticks();(void)d;
      //target::timing::ticks< 5 >::wait();
      pin::set( 0 );
      target::timing::ns< 100'000 >::wait();
   }
}

// 8 MHz : 
//    H = 500 ns / 250
//    L = 250 ns
//    P = 750 ns
//    F = 1.3 Mhz
//    now_ticks() : 5500 ns
//
// 72 MHz :
//    H = 75 ns
//    L = 50 ns / 25 ns (instruction alignment?)
//    P = 125 ns
//    F = 8 Mhz
//    now_ticks() : 800 ns