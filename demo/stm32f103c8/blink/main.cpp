#include "hwcpp.hpp"

using target = hwcpp::target< 72'000'000 >;

int main( void ){
   hwcpp::blink< target::c13, target::waiting::ms< 200 > >();
}