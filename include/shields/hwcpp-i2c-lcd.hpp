// ==========================================================================
//
// file : hwcpp-i2c-lcd.hpp
//
// ==========================================================================   

template< 
   is_i2c_bus bus, 
   uint8_t x_size, uint8_t y_size, 
   is_waiting timing, 
   uint8_t address = 0x07 
>
struct _i2c_lcd {
	
   using pcf      = pcf8574a< bus, address >;
   using lcd      = hd44780_rs_e_d_x_y_timing< 
      typename pcf::p0, 
	  typename pcf::p2,  
	  hwcpp::port_out< 
	     typename pcf::p4, 
		 typename pcf::p5, 
		 typename pcf::p6, 
		 typename pcf::p7 >,
      x_size, y_size,
      timing >; 
	  
   using _write    = typename pcf::p1;	  
   using backlight = typename pcf::p3;	  
   
   static void init(){
      lcd::init();
      pcf::init();
     _write::set( 0 );
      backlight::set( 1 );	 
   }
	
}; // class _i2c_lcd

template<    
   is_i2c_bus bus, 
   uint8_t x_size, uint8_t y_size, 
   is_waiting waiting, 
   uint8_t address = 0x07  
>
struct i2c_lcd :
   _i2c_lcd< bus, x_size, y_size, waiting, address >,
   _i2c_lcd< bus, x_size, y_size, waiting, address >::lcd
{
   static void init(){
      _i2c_lcd< bus, x_size, y_size, waiting, address >::init();
   }    
}; // class i2c_lcd
