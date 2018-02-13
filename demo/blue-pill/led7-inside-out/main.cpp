#include "hwcpp.hpp"

using target = hwcpp::target<>;
using timing = target::waiting;

using pins = hwcpp::fanout< 
   hwcpp::port_out< 
      target::b11,
      target::b10,
      target::b1,
      target::b0,
      hwcpp::pin_out_dummy
   >,      
   hwcpp::port_out< 
      target::a5,
      target::a6,
      target::a7 
   >
>;

int main(){ 
   hwcpp::walk< pins, timing::ms< 200 > >();
}