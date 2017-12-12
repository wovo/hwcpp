#include "hwcpp.hpp"

using target = hwcpp::target<>;
//using target = hwcpp::target< 58'000'000 >;
using timing = target::waiting;

int main(){ 
   hwcpp::blink< target::d4, timing::ms< 200 > >();
}