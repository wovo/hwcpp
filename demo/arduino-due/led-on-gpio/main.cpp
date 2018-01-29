#include "hwcpp.hpp"

using pin = hwcpp::target<>::d13;

int main(){ 
   pin::init();
   pin::direction_set( hwcpp::pin_direction::output );
   pin::set( 1 );
}