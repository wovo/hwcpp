#include "hwcpp.hpp"

using target = hwcpp::target<>;
using timing = target::timing;
using input  = hwcpp::pin_in< target::d13 >;
using output = target::led;

int main(){ 
   input::init();
   output::init();
   for(;;){
      output::set( input::get() );       
   }
}