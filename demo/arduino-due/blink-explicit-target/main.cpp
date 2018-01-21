#include "hwcpp-target-arduino-due.hpp"

using target = hwcpp::target<>;
using timing = target::timing;

int main(){ 
   hwcpp::blink< target::led, timing::ms< 200 > >();
}