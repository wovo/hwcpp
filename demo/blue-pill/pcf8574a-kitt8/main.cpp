#include "hwcpp.hpp"

using target   = hwcpp::target<>;
using timing   = target::waiting;
using i2c_bus  = hwcpp::i2c_bus_scl_sda< target::b10, target::b11, timing >;
using leds     = hwcpp::pcf8574a< i2c_bus >;

int main(){ 
   hwcpp::kitt< leds, timing::ms< 40 > >();
}