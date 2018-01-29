#include "hwcpp.hpp"

using pin = hwcpp::target<>::d13;

template< template _pin >
void set(){
   using pin = hwcpp::pin_out< _pin >;
   pin::init();
   pin::set( 1 );
}

int main(){ 
   set< pin >();
}