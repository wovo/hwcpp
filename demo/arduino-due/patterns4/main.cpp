#include "hwcpp.hpp"

using target = hwcpp::target<>;
using timing = target::waiting;

using leds0 = target::d4;

using leds1 = hwcpp::fanout< 
   target::d4,
   target::d5,
   target::d6,
   target::d7
>;

using leds2 = hwcpp::fanout< 
   hwcpp::invert< target::d4 >,
   hwcpp::invert< target::d5 >,
   target::d6,
   target::d7
>;

using leds3 = hwcpp::fanout< 
   hwcpp::invert< target::d4 >,
   target::d5,
   hwcpp::invert< target::d6 >,
   target::d7
>;

int main(){ 
   hwcpp::blink< leds2, timing::ms< 500 > >();
}