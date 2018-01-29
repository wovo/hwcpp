// ==========================================================================
//
// file : hwcpp-hd44780.hpp
//
// ==========================================================================
//
// This file is part of HwCpp, 
// a C++ library for close-to-the-hardware programming.
//
// Copyright Wouter van Ooijen 2017
// 
// Distributed under the Boost Software License, Version 1.0.
// (See the accompanying LICENSE_1_0.txt in the root directory of this
// library, or a copy at http://www.boost.org/LICENSE_1_0.txt)
//
// ==========================================================================

template< 
   can_pin_out   _rs,
   can_pin_out   _e,
   can_port_out  _port,
   uint32_t      _size_x,
   uint32_t      _size_y,
   is_waiting    timing
> struct _hd44780_rs_e_d_x_y_timing_foundation :
   _stream_out_root< char >   
{
private:	
	
   using rs      = pin_out< _rs >;
   using e       = pin_out< _e >;
   using port    = port_out< _port >;  
   
   using xy_t    = uint_fast8_t;
   
public:   
   
   static constexpr xy_t size_x = _size_x; 
   static constexpr xy_t size_y = _size_y;   
   
   static inline xy_t cursor_x; 
   static inline xy_t cursor_y;   
   
private:
   
   static void write4( uint_fast8_t d ){

      port::set_buffered( d );      
      port::flush();
      rs::flush();
      
      // minumum tAS
      timing::template ns< 40 >::wait();
      e::set( 1 );
      
      // minimum PW-EH
      timing::template ns< 230 >::wait();
      e::set( 0 );
      
      // minumum TcycE = 500 ns
	  timing::template ns< 270 >::wait();
   }

   static void write8( bool is_data, uint_fast8_t d ){
      rs::set_buffered( is_data );
      write4( d >> 4 );
      write4( d );
      
	  // enough for most instructions
	  // if an instruction needs more, that is his responsibilitty
      timing::template us< 100 >::wait();
   }      
           
public:

   static void HWCPP_INLINE command( uint_fast8_t cmd ){
      write8( 0, cmd );
   }

   static void HWCPP_INLINE data( uint_fast8_t chr ){
      write8( 1, chr );
   }

   static void clear(){
      command( 0x01 );
      timing::template us< 5'000 >::wait();
      goto_xy( 0, 0 );
   }   
   
   static void goto_xy( xy_t x, xy_t y ){

      if( size_y == 1 ){
         if( x < 8 ){
            command( 0x80 + x );
         } else {
            command( 0x80 + 0x40 + ( x - 8 ));
         }
      } else {
         if( size_y == 2 ){
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
	  
	  cursor_x = x;
	  cursor_y = y;
   }
   
   static bool HWCPP_INLINE write_blocks(){
      return false;
   }

   static void HWCPP_INLINE flush(){}

   static void write_direct_unchecked( char chr ){

      if( size_y == 1 ){
         if( cursor_x == 8 ){
            goto_xy( cursor_x, cursor_y );
         }
      }   
      
      data( chr );
	  ++cursor_x;
   }     
   
   static void init(){
	  
      // init the dependencies 
	  rs::init();
	  e:: init();
      port::init();
      timing::init(); 

      // give LCD time to wake up
      e::set( 0 );
      rs::set( 0 );
      timing::template ms< 40 >::wait();

      // interface initialisation: make sure the LCD is in 4 bit mode
      // (magical sequence, taken from the HD44780 datasheet)
      write4( 0x03 );
      timing::template ms< 5 >::wait();
      write4( 0x03 );
      timing::template us< 100 >::wait();
      write4( 0x03 );
      write4( 0x02 );     // now we are in 4 bit mode

      // functional initialisation
      command( 0x28 );    // 4 bit mode, 2 lines, 5x8 font
      command( 0x0C );    // display on, no cursor, no blink
      clear();            // clear display, 'cursor' home
      goto_xy( 0, 0 );    // 'cursor' home    
   }    
   
}; // class _hd44780_rs_e_d_x_y_timing_foundation

template< 
   can_pin_out   rs,
   can_pin_out   e,
   can_port_out  port,
   uint32_t      size_x,
   uint32_t      size_y,
   is_waiting    timing
> using hd44780_rs_e_d_x_y_timing = 
    formatter<
    console<
	_stream_builder<
    _hd44780_rs_e_d_x_y_timing_foundation< 
       rs, e, port, size_x, size_y, timing > > > >;