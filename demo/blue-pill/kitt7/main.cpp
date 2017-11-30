#include "hwcpp.hpp"

using target = hwcpp::target<>;
using timing = target::waiting;

using pins = hwcpp::port_in_out< 
   target::b11,
   target::b10,
   target::b1,
   target::b0,
   target::a7,
   target::a6,
   target::a5
>;

int main(){ 
   hwcpp::kitt< pins, timing::ms< 50 > >();
}