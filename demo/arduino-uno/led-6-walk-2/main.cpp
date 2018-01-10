#include "hwcpp.hpp"

using target = hwcpp::target<>;
using timing = target::waiting;

using pins = hwcpp::port_out< 
   target::d8,
   target::d9,
   target::d10,
   target::d11,
   target::d12,
   target::d13
>;

int main(){ 
   hwcpp::walk< hwcpp::mirror< pins >, timing::ms< 50 > >();
}