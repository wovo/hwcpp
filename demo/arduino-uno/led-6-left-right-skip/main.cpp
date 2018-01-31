#include "hwcpp.hpp"

using target = hwcpp::target<>;
using timing = target::waiting;

using pins = hwcpp::port_out< 
   hwcpp::pin_out_dummy,
   hwcpp::fanout< 
      target::d8,
      target::d9,
      target::d10 >,
   hwcpp::pin_out_dummy,
   hwcpp::pin_out_dummy,
   hwcpp::pin_out_dummy,
   hwcpp::fanout< 
      target::d11,
      target::d12,
      target::d13 >,
   hwcpp::pin_out_dummy
>;

int main(){ 
   hwcpp::kitt< pins, timing::ms< 200 > >();
}