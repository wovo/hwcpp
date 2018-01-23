// ==========================================================================
//
// file : hwcpp-oled.hpp
//
// ==========================================================================   

   glcd_oled( i2c_bus & bus, const uint_fast8_t  ):
      window( location( 128, 64 ), black, white ),
      bus( bus ),
      address( address ),
      cursor_x( 255 ), cursor_y( 255 )
	  
template< typename chip >  
struct glcd_oled : public chip {
	
   static void init(){
	   
      chip::init();	   

      wait_ms( 20 );	
	  
      chip::command( display_off                 );
      chip::command( set_displayclockdiv,   0x80 );
      chip::command( set_multiplex,         0x3f ); 
      chip::command( set_displayoffset,     0x00 );   
      chip::command( set_startline        | 0x00 );  
      chip::command( charge_pump,           0x14 );   
      chip::command( memory_mode,           0x00 );   
      chip::command( seg_remap            | 0x01 );
      chip::command( com_scan_dec                );
      chip::command( set_com_pins,          0x12 );   
      chip::command( set_contrast,          0xcf ); 
      chip::command( set_precharge,         0xf1 );
      chip::command( set_vcomdetect,        0x40 );
      chip::command( display_allon_resume        ); 
      chip::command( normal_display              ); 
      chip::command( display_on                  );
   }
     
};

template< typename bus, int address = 0x3C >
using glcd_oled_i2c = window< 
   128, 64,
   glcd_oled< ssd1306_i2c< ssd1306_i2c< bus, address > > >
>;
