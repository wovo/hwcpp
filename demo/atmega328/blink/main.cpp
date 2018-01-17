#include "hwcpp.hpp"

using target = hwcpp::target< 16'000'000 >;

int main( void ){
   hwcpp::blink< target::b1, target::waiting::ms< 200 > >();
}