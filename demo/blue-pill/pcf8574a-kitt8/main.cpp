#include "hwcpp.hpp"

using target   = hwcpp::target<>;
using timing   = target::waiting;
using i2c_bus  = hwcpp::i2c_bus_bb_scl_sda< target::b10, target::b11, timing >;
// using leds     = hwcpp::invert< hwcpp::pcf8574a< i2c_bus > >;

using chip = hwcpp::pcf8574a< i2c_bus >;
using leds     = hwcpp::invert< hwcpp::port_out <
    hwcpp::pin_out< chip::p0 >,
    hwcpp::pin_out< chip::p1 >, 
    hwcpp::pin_out< chip::p2 >,
    hwcpp::pin_out< chip::p3 > > >;

int main(){ 
   hwcpp::kitt< leds, timing::ms< 50 > >();
}
