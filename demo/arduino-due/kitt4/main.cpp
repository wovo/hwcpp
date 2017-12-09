#include "hwcpp.hpp"

using target = hwcpp::target<>;
using timing = target::waiting;

using pins = hwcpp::port_out< 
   target::d4,
   target::d5,
   target::d6,
   target::d7
>;

// using p = hwcpp::port_out< pins >;

int main(){ 
   //hwcpp::kitt< pins, timing::ms< 100 > >();
   // p::init();
   pins::init();
   pins::set( 1 );
}