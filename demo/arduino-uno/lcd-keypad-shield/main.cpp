#include "hwcpp.hpp"

using target = hwcpp::target<>;
using timing = target::waiting;

using lcd_t = hwcpp::hd44780_rs_e_d_x_y_timing< 
    target::d8, target::d9,  
	hwcpp::port_out< target::d4, target::d5, target::d6, target::d7 >,
    2, 16,
    timing >;   
// 10 == backlight	

int main( void ){
	
   hwcpp::make_ostream< lcd_t > lcd();	
	     
//    bl.set( 0 );
//    hwlib::wait_ms( 500 );    
//    bl.set( 1 );

//hwcpp::blink< target::d10, timing::ms< 500 > >();

lcd_t::init();
lcd_t::putc('x');
  
//   lcd.putc('x');
   
/*
    lcd 
       << "\fHello world!        | this is only for a"
       << "\nnice to meet you    | 40 col. display." 
       << "\t0002line 3 ============X"
       << "\nline 4 ============X";
       //<< hwlib::flush;
*/
 
}