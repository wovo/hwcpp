#include "hwcpp.hpp"

using target = hwcpp::target<>;

int main(){ 
   hwcpp::blink< 
      target::led, 
      target::timing::ms< 200 > 
   >(); 
}