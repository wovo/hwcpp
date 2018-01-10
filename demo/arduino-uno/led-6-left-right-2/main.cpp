#include "hwcpp.hpp"

using target = hwcpp::target<>;
using timing = target::waiting;

using pins = hwcpp::fanout< 
   hwcpp::invert< hwcpp::fanout< 
      target::d8,
      target::d9,
      target::d10 > >,
   hwcpp::fanout< 
      target::d11,
      target::d12,
      target::d13 >
>;

int main(){ 
   hwcpp::blink< pins, timing::ms< 200 > >();
}