#include "hwcpp.hpp"

using target = hwcpp::target<>;
using pin = target::led;

int main(){ 
   pin::init();
   for(;;){
      pin::set( 1 );
      pin::set( 0 );
   }
}

// 16 MHz : p = 375 ns 