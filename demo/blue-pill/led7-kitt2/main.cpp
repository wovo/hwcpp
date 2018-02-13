#include "hwcpp.hpp"

using target = hwcpp::target<>;
using timing = target::waiting;

int main(){ 
   hwcpp::kitt< 
      hwcpp::port_out< 
         hwcpp::fanout<    
            target::b11,
            target::b10
         >,
         hwcpp::fanout<    
            target::b1,
            target::b0
         >,
         hwcpp::fanout<    
            target::a7,
            target::a6
         >>,
      timing::ms< 500 > >();
}