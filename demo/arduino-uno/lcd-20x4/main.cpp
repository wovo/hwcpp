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
   40, 4,
   timing >; 	

int main( void ){
	
   hwcpp::ostream< lcd > cout;	

   cout
      << "\fLine 1 ======== end.\n"
      <<   "And line 2 likewise.\n"
      <<   "This is line 3;\n"
      <<   "And finally line 4!\n";
}