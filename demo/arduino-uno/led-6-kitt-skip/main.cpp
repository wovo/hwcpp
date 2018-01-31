#include "hwcpp.hpp"

using target = hwcpp::target<>;
using timing = target::waiting;

using pins = hwcpp::port_out< 
   hwcpp::pin_out_dummy,
   target::d8,
   hwcpp::pin_out_dummy,
   target::d9,
   hwcpp::pin_out_dummy,
   target::d10,
   hwcpp::pin_out_dummy,
   target::d11,
   hwcpp::pin_out_dummy,
   target::d12,
   hwcpp::pin_out_dummy,
   target::d13,
   hwcpp::pin_out_dummy
>;

int main(){ 
   hwcpp::kitt< pins, timing::ms< 80 > >();
}