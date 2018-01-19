#include "hwcpp.hpp"

using target = hwcpp::target< 16'000'000 >;

int main( void ){
   hwcpp::blink< target::b5, target::waiting::ms< 200 > >();
}