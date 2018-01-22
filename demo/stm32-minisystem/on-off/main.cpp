#include "hwcpp.hpp"

using target  = hwcpp::target<>;
using led     = target::led;
using button  = target::button;

int main(){ 
   led::init();
   button::init();    
   for(;;){ led::set( ! button::get() ); }
}