#include "hwcpp.hpp"

using target = hwcpp::target<>;
using timing = target::waiting;

using pins = hwcpp::pfanout< 
   hwcpp::mirror< hwcpp::port_out< 
      target::d8,
      target::d9,
      target::d10 > >,
   hwcpp::port_out< 
      target::d11,
      target::d12,
      target::d13 >
>;

int main(){ 
   hwcpp::walk< pins, timing::ms< 200 > >();
}