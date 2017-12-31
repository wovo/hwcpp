#include "hwcpp.hpp"

using target   = hwcpp::target<>;
using timing   = target::waiting;
using i2c_bus  = hwcpp::i2c_bus_scl_sda< target::b10, target::b11, timing >;
using port     = hwcpp::invert< hwcpp::pcf8574a< i2c_bus > >;

int main(){ 
   hwcpp::blink< port::p0, timing::ms< 200 > >();
}
