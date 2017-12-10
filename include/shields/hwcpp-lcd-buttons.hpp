// ============================================================================
//
// file : hwcpp-lcd-buttons.hpp
//
// ============================================================================   
   
template< typename target, typename waiting >
struct lcd_buttons {
	
   // www.dfrobot.com/wiki/index.php/Arduino_LCD_KeyPad_Shield_(SKU:_DFR0009)
	
   using lcd = hwcpp::hd44780_rs_e_d_x_y_timing< 
      typename target::d8, 
	  typename target::d9,  
	  port_out< 
	     typename target::d4, 
		 typename target::d5, 
		 typename target::d6, 
		 typename target::d7 >,
      16, 2,
      waiting >; 	
	  
   using backlight = pin_out< typename target::d10 >;	  
   
   using adc = typename target::a0;
   
   static void init(){
      lcd::init();
      backlight::init();
      adc::init();	   
   }
	
}; // class lcd_buttons
