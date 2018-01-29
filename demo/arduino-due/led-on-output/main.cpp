#include "hwcpp.hpp"

using pin = hwcpp::pin_out< hwcpp::target<>::d13 >;

int main(){ 
   pin::init();
   pin::set( 1 );
}