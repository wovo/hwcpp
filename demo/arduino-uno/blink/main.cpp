#include "hwcpp.hpp"

using target = hwcpp::target<>;
using timing = target::waiting;

using x = hwcpp::pin_out< target::d0 >;
using y = hwcpp::pin_out< x >;

int main(){ 
   y::set( 1 );
   hwcpp::blink< target::led, timing::ms< 2 > >();
}