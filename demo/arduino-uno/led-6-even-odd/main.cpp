#include "hwcpp.hpp"

using target = hwcpp::target<>;
using timing = target::waiting;

using pins = hwcpp::fanout< 
   hwcpp::invert< target::d8 >,
   target::d9,
   hwcpp::invert< target::d10 >,
   target::d11,
   hwcpp::invert< target::d12 >,
   target::d13
>;

int main(){ 
   hwcpp::blink< pins, timing::ms< 200 > >();
}