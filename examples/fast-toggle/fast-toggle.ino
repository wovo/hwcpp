#include "hwcpp.hpp"
using led = hwcpp::target<>::led;

int main(){ 
   led::init();
   for(;;){
      led::set( 1 );
      led::set( 0 );
   }    
}