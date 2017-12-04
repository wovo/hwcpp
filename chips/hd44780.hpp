// ============================================================================
//
// file : hd44780.hpp
//
// ============================================================================

class hd44780 : public console {
private:
   pin_out & pin_e;
   pin_out & pin_rs;
   port_out & port_data;
   
   void write4( unsigned char n ){
      wait_us( 10 );
      port_data.set( n );
      wait_us( 20 );
      pin_e.set( 1 );
      wait_us( 20 );
      pin_e.set( 0 );
      wait_us( 100 );  // enough for most instructions
   }

   void write8( bool is_data, unsigned char b ){
      pin_rs.set( is_data );
      write4( b >> 4 );
      write4( b );
   }      
           
public:

   /// \brief
   /// construct an interface to an hd44780 chip
   /// \details
   /// This constructor creates an interface to 
   /// an hd44780 LCD controller from the RS and E pins, and the 4-bit port
   /// to the D4..D8 pins, and the number of lines and characters per line,
   /// and initializes the controller.
   hd44780( 
      pin_out & rs, 
      pin_out & e, 
      port_out & data, 
      uint_fast8_t lines, 
      uint_fast8_t columns
    ):
      console{ columns, lines },
      pin_e( e ), 
      pin_rs( rs ), 
      port_data( data )
   {
      // give LCD time to wake up
      pin_e.set( 0 );
      pin_rs.set( 0 );
      wait_ms( 100  );

      // interface initialisation: make sure the LCD is in 4 bit mode
      // (magical sequence, taken from the HD44780 datasheet)
      write4( 0x03 );
      wait_ms( 15 );
      write4( 0x03 );
      wait_us( 100 );
      write4( 0x03 );
      write4( 0x02 );     // 4 bit mode

      // functional initialisation
      command( 0x28 );    // 4 bit mode, 2 lines, 5x8 font
      command( 0x0C );    // display on, no cursor, no blink
      clear();            // clear display, 'cursor' home
      goto_xy( 0, 0 );    // 'cursor' home    
   }    
   
   /// \brief
   /// write a command byte to the LCD
   /// \details
   /// Use this function only for features that are not 
   /// provided by the console interface, like the definition
   /// of the user-defined characters.
   void command( unsigned char cmd ){
      write8( 0, cmd );
   }

   /// \brief
   /// write a data byte to the LCD
   /// \details
   /// Use this function only for features that are not 
   /// provided by the console interface, like the definition
   /// of the user-defined characters.
   void data( unsigned char chr ){
      write8( 1, chr );
   }

   void clear() override {
      command( 0x01 );
      wait_ms( 5 );
      goto_xy( 0, 0 );
   }   
   
private:

   void goto_xy_implementation( uint_fast16_t new_x, uint_fast16_t new_y ) override {
      // the NVI goto_xy() has already set the x and y variables
      
      if( lines == 1 ){
         if( x < 8 ){
            command( 0x80 + x );
         } else {
            command( 0x80 + 0x40 + ( x - 8 ));
         }
      } else {
         if( lines == 2 ){
            command( 
               0x80
               + (( y > 0 ) 
                  ? 0x40 
                  : 0x00 )
               + ( x )
            );
         } else {
            command( 
                0x80
                 + (( y & 0x01 )
                    ? 0x40 
                    : 0x00 )
                 + (( y & 0x02 )
                    ? 0x14 
                    : 0x00 )
                 + ( x )
             );              
         }
      }
   }   

   void putc_implementation( char chr ) override {
      // the NVI putc() handles the x and y variables
      
      // handle the gap for 1-line displays
      if( lines == 1 ){
         if( x == 8 ){
            goto_xy( x, y );
         }
      }   
      
      data( chr );
   }  
   
}; // class hd44780
   
}; // namespace hwlib

#endif // HWLIB_HD44780_H