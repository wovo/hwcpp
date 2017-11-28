#include "hwcpp.hpp"

using target = hwcpp::target<>;
using timing = target::waiting;

int main(){ 
   hwcpp::blink< target::led, timing::ms< 200 > >();
}