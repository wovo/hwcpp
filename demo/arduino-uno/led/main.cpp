#include "hwcpp.hpp"

int main(){ 
   hwcpp::target::led::init();
   hwcpp::target::led::set( 1 );
}