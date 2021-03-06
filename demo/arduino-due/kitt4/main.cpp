#include "hwcpp.hpp"

using target = hwcpp::target<>;
using timing = target::timing;

using pins = hwcpp::port_out< 
   target::d4,
   target::d5,
   target::d6,
   target::d7
>;

int main(){ 	
   hwcpp::kitt< pins, timing::ms< 200 > >();
}