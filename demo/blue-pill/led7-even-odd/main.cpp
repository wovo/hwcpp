#include "hwcpp.hpp"

using target = hwcpp::target<>;
using timing = target::waiting;

using leds_all = hwcpp::fanout< 
   target::b11,
   target::b10,
   target::b1,
   target::b0,
   target::a7,
   target::a6,
   target::a5
>;

using leds_alternate = hwcpp::fanout< 
   target::b11,
   hwcpp::invert< target::b10 >,
   target::b1,
   hwcpp::invert< target::b0 >,
   target::a7,
   hwcpp::invert< target::a6 >,
   target::a5
>;

using leds_lr = hwcpp::fanout< 
   target::b11,
   target::b10,
   target::b1,
   // b0
   hwcpp::invert< target::a7 >,
   hwcpp::invert< target::a6 >,
   hwcpp::invert< target::a5 >
>;

int main(){ 
   hwcpp::blink< leds_lr, timing::ms< 500 > >();
}