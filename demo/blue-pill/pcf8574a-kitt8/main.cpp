#include "hwcpp.hpp"

using target   = hwcpp::target<>;
using timing   = target::waiting;
using i2c_bus  = hwcpp::i2c_bus_scl_sda< target::b11, target::b10, timing >;
using chip     = hwcpp::pcf8574a< i2c_bus >;

int main(){ 
   hwcpp::kitt< chip, timing::ms< 200 > >();
}