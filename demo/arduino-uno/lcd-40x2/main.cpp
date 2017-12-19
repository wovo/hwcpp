#include "hwcpp.hpp"

using target = hwcpp::target<>;
using timing = target::waiting;

using lcd = hwcpp::hd44780_rs_e_d_x_y_timing< 
   target::d8, 
   target::d9,  
   hwcpp::port_out< 
	  target::d4, 
	  target::d5, 
      target::d6, 
      target::d7 >,
   40, 2,
   timing >; 	

int main( void ){
	
   hwcpp::ostream< lcd > cout;	

   cout
      << "\fThis is the top line, 40 is quite wide !\n"
      <<   "And of course line two is just as long.\n";
}