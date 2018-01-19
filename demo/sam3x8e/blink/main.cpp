#include "hwcpp.hpp"

using target = hwcpp::target< 84'000'000 >;

int main( void ){
   hwcpp::blink< target::b27, target::waiting::ms< 200 > >();
}