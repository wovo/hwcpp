#include "hwcpp.hpp"

using target = hwcpp::target<>;
usding pin = target::d8;

int main(){ 
   pin::init();
   for(;;){
      pin::set( 1 );
      pin::set( 0 );
   }
}