// ==========================================================================
//
// file : hwcpp-ssd106.hpp
//
// ==========================================================================   

  
struct ssd1306_commands {

   enum class cmd {
      set_contrast                           = 0x81
      display_all_on_resume                  = 0xa4,
      display_all_on                         = 0xa5,
      normal_display                         = 0xa6,
      invert_display                         = 0xa7,
      display_off                            = 0xae,
      display_on                             = 0xaf,
      set_display_offset                     = 0xd3,
      set_com_pins                           = 0xda,
      set_vcomdetect                         = 0xdb,
      set_display_clock_div                  = 0xd5,
      set_precharge                          = 0xd9,
      set_multiplex                          = 0xa8,
      set_low_column                         = 0x00,
      set_high_column                        = 0x10,
      set_start_line                         = 0x40,
      memory_mode                            = 0x20,
      column_addr                            = 0x21,
      page_addr                              = 0x22,
      com_scan_inc                           = 0xc0,
      com_scan_dec                           = 0xc8,
      seg_remap                              = 0xa0,
      charge_pump                            = 0x8d,
      external_vcc                           = 0x01,
      switch_cap_vcc                         = 0x02,
      activate_scroll                        = 0x2f,
      deactivate_scroll                      = 0x2e,
      set_vertical_scroll_area               = 0xa3,
      right_horizontal_scroll                = 0x26,
      left_horizontal_scroll                 = 0x27,
      vertical_and_right_horizontal_scroll   = 0x29,
      vertical_and_left_horizontal_scroll    = 0x2a   
   }
	
};

template< typename _bus, uint_fast8_t address >
struct ssd1306_i2c : ssd1306_commands { 

   using bus = _bus;
   
   static const uint_fast8_t data_mode = 0x40;
   static const uint_fast8_t cmd_mode  = 0x80;  
   
   static void command( cmd d ){
      uint8_t data[] = { 
          static_cast< uint8_t >( cmd_mode ), 
          static_cast< uint8_t >( d )
      };
      bus.write( 
         address, 
         data, 
         sizeof( data ) / sizeof( uint8_t ) 
      );    
   }
   
   static void command( cmd d0, uint_fast8_t d1 ){
      uint8_t data[] = { 
         static_cast< uint8_t >( cmd_mode ), 
         static_cast< uint8_t >( d0 ),
         static_cast< uint8_t >( cmd_mode ), 
         static_cast< uint8_t >( d1 ) 
      };
      bus.write( 
         address, 
         data, 
         sizeof( data ) / sizeof( uint8_t ) 
      );   
   }
   
   static void command( cmd d0, uint_fast8_t d1, uint_fast8_t d2 ){
      uint8_t data[] = { 
         static_cast< uint8_t >( cmd_mode ), 
         static_cast< uint8_t >( d0 ),
         static_cast< uint8_t >( cmd_mode ), 
         static_cast< uint8_t >( d1 ),
         static_cast< uint8_t >( cmd_mode ), 
         static_cast< uint8_t >( d2 ) 		 
      };
      bus.write( 
         address, 
         data, 
         sizeof( data ) / sizeof( uint8_t ) 
      );   
   }
   
   static void data( const auto & data, int n ){
      bus::write_start();
	  
      bus::write_byte( address << 1 );
      bus::read_ack();
	  
      bus::write_byte( data_mode );
      bus::read_ack();
	  
      for( const auto d : data ){
         write_byte( s );
         read_ack();
      }               
 
      write_stop();	   
   }   
      
};

template< typename chip >
struct glcd_ssd1306 {

   // current cursor setting in the controller;
   // used to avoid explicit cursor updates when such are not needed
   static inline uint_fast8_t cursor_x, cursor_y;
   
   static void pixels_to_chip( 
      uint_fast8_t x, 
      uint_fast8_t y, 
      uint_fast8_t d 
   ){
      if(( x != cursor_x ) || ( y != cursor_y )){
         chip::command( chip::cmd::columnaddr,  x,  127 );
         chip::command( chip::cmd::pageaddr,    y,    7 );
         cursor_x = x;
         cursor_y = y;
      }   
  
      const uint8_t data[] = { d };
      chip::data( data );
      cursor_x++;      
   }
   
   static auto constexpr buffer_entries = 128 * 64 / 8;
   static inline uint8_t buffer[ buffer_entries ];
   static inline bool dirty[ buffer_entries ];
   
   static void write_to_buffer( location pos, uint_fast8_t a, bool v ){
      if( v ){ 
         buffer[ a ] |=  ( 0x01 << (pos.y % 8 ));  
      } else {
         buffer[ a ] &= ~( 0x01 << ( pos.y % 8 )); 
      }   
   }      
   
   static void set_direct( location pos, color col ){
      const uint_fast8_t a = pos.x + ( pos.y / 8 ) * size.x;
      write_to_buffer( pos, a, col == foreground );
      pixels_to_chip( pos.x, pos.y / 8, buffer[ a ] );      
   }
   
   static void set_buffered( location pos, color col ){
      const uint_fast8_t a = pos.x + ( pos.y / 8 ) * size.x;
      write_to_buffer( pos, a, col == foreground );
      dirty[ a ] = true;     
   }
   
   static void flush(){      
      command( columnaddr,  0,  127 );
      command( pageaddr,    0,    7 );   
      bus.write( address, buffer );
   }      
  

}; // class glcd_oled

