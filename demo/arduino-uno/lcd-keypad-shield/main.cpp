#include "hwcpp.hpp"

using target = hwcpp::target<>;
using timing = target::waiting;

namespace hwcpp {

template< typename target, typename waiting >
struct lcd_buttons_shield {
	
   // https://www.dfrobot.com/wiki/index.php/Arduino_LCD_KeyPad_Shield_(SKU:_DFR0009)
	
   using lcd = hwcpp::hd44780_rs_e_d_x_y_timing< 
      typename target::d8, 
	  typename target::d9,  
	  port_out< 
	     typename target::d4, 
		 typename target::d5, 
		 typename target::d6, 
		 typename target::d7 >,
      2, 16,
      waiting >; 	
	  
   using backlight = port_out< typename target::d10 >;	  
   
   using adc = typename target::a0;
   
   static void init(){
      lcd::init();
      backlight::init();
      adc::init();	   
   }
	
}; // class lcd_buttons_shield

};

using shield = hwcpp::lcd_buttons_shield< target, timing >;

/*
using lcd_t = hwcpp::hd44780_rs_e_d_x_y_timing< 
    target::d8, target::d9,  
	hwcpp::port_out< target::d4, target::d5, target::d6, target::d7 >,
    2, 16,
    timing >;   
// 10 == backlight	

using adc = target::a0;
*/



int main( void ){
	
   hwcpp::make_ostream< shield::lcd > lcd;	
   shield::init();
   
   for(;;){
      timing::ms< 200 >::wait();
      auto n = shield::adc::get();	      
	  lcd << "\f" << (int)n;
   }
   //hwcpp::kitt< hwcpp::port_out< target::d4, target::d5, target::d6, target::d7, target::d8, target::d9 >, timing::ms< 200 > >();
	     
//    bl.set( 0 );
//    hwlib::wait_ms( 500 );    
//    bl.set( 1 );

//hwcpp::blink< target::d10, timing::ms< 500 > >();

//lcd_t::init();
//lcd_t::putc('a');
//lcd_t::putc('b');
  
//lcd.putc('x');
   

    lcd 
       << "\fHello world!        | this is only for a"
       << "\nnice to meet you    | 40 col. display." 
       << "\t0002line 3 ============X"
       << "\nline 4 ============X";
       //<< hwlib::flush;

 
}