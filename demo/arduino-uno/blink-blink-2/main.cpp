#include "hwcpp.hpp"

int main(){ 
   hwcpp::blink< 
      hwcpp::target<>::led, 
      hwcpp::target<>::timing::ms< 200 > 
   >();
}