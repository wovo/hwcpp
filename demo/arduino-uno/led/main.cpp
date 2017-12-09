#include "hwcpp.hpp"

using target = hwcpp::target<>;

int main(){ 
   target::led::init();
   target::led::set( 1 );
}