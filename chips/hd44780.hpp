// ============================================================================
//
// file : hd44780.hpp
//
// ============================================================================

template< typename T >
struct waiting : T {};
/*{
   static void init(){
      T::init();
   }	
	
   template< int n >
   struct us {
      static void wait(){ 
         T::us< n >::wait();   
      }		 
   };
};*/   

template< 
   typename _rs,
   typename _e,
   typename _port,
   int _size_x,
   int _size_y,
   typename _timing
> class _hd44780_rs_e_d_x_y_timing {
private:	
	
   using rs      = pin_out< _rs >;
   using e       = pin_out< _e >;
   using port    = port_out< _port >;  
   using timing  = waiting< _timing >;
   
   template< long long int n >
   static void wait_us(){
	   timing:: template us< n >::wait();
   }	   
   
   static inline uint_fast8_t cursor_x; 
   static inline uint_fast8_t cursor_y;   
   
   static constexpr uint_fast8_t size_x = _size_x; 
   static constexpr uint_fast8_t size_y = _size_y;   
   
   static void write4( uint_fast8_t d ){
      wait_us< 10 >();
      port::set_direct( d );
      wait_us< 20 >();
      e::set( 1 );
      wait_us< 20 >();
      e::set( 0 );
	  
	  // enough for most instructions
	  // if an instrution needs more, that is his responsibilitty
      wait_us< 100 >();
   }

   static void write8( bool is_data, uint_fast8_t d ){
      rs::set( is_data );
      write4( d >> 4 );
      write4( d );
   }      
           
public:

   static void command( uint_fast8_t cmd ){
      write8( 0, cmd );
   }

   static void data( uint_fast8_t chr ){
      write8( 1, chr );
   }

   static void clear(){
      command( 0x01 );
      wait_us< 5'000 >();
      goto_xy( 0, 0 );
   }   
   
   static void goto_xy( uint_fast8_t x, uint_fast8_t y ){

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

   static void putc( char chr ){

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
      wait_us< 100'000 >();

      // interface initialisation: make sure the LCD is in 4 bit mode
      // (magical sequence, taken from the HD44780 datasheet)
      write4( 0x03 );
      wait_us< 15'000 >();
      write4( 0x03 );
      wait_us< 100'000 >();
      write4( 0x03 );
      write4( 0x02 );     // now we are in 4 bit mode

      // functional initialisation
      command( 0x28 );    // 4 bit mode, 2 lines, 5x8 font
      command( 0x0C );    // display on, no cursor, no blink
      clear();            // clear display, 'cursor' home
      goto_xy( 0, 0 );    // 'cursor' home    
   }    
   
}; // class _hd44780

template< 
   typename rs,
   typename e,
   typename port,
   int size_x,
   int size_y,
   typename timing
> using hd44780_rs_e_d_x_y_timing = 
   _hd44780_rs_e_d_x_y_timing< rs, e, port, size_x, size_y, timing >;