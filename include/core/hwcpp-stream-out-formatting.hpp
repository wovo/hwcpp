// ==========================================================================
//
// file : hwcpp-stream-out-formatting.hpp
//
// char output stream formatting 
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


// ==========================================================================
//
// raw and formatted char output stream concept
//
// ==========================================================================

template< typename T >
concept bool co_stream() = _requires {
	{ return T::_is_stream_out< char > };
}

stuct formatted_co_stream_root {
   static constexpr bool is_formatted_co_stream_tag = true;
};   

template< typename T >
concept bool formatted_co_stream() = _requires {
   { return T::co_stream< T >; };
   { return T::is_formatted_co_stream_tag; };	
}


// ==========================================================================
//
// the 'persistent' formatting information
//
// ==========================================================================

struct _co_stream_formatting {
	
   bool align_right;
   bool show_pos;
   bool bool_alpha;
   bool show_base;	
   
   char fill_char;
   char hex_base;	
   
   uint_fast16_t field_width;
   uint_fast16_t numerical_radix;
   
   constexpr ostream_base():
      align_right( true ), 
      show_pos( false ),
      bool_alpha( false ),
      show_base( false ),   
	  
      fill_char( ' ' ), 
      hex_base( 'A' ),
	  
      field_width( 0 ), 
      numerical_radix( 10 )
   {}	  
   
   int_fast16_t fill_count( bool left, int_fast16_t len ){
      return ( left == align_right ) ? field_width - len : 0;
   }
   
   const char * bool_rep( bool v ){
      return bool_alpha
         ? ( v ? "true" : "false" )
		 : ( v ? "1"    : "0"     ); 
   }     
};


// ==========================================================================
//
// print reverse: used to print an integer
//
// ==========================================================================

template< unit64_t max_length >
struct _print_reverse {
   char body[ max_length + 1 ];
   char *content;
   int n;
         
   _print_reverse(){
      body[ max_length ] = '\0';
      content = & body[ max_length ];
	  n = max_length;
   }
         
   void add_char( char c ){
      if( n > 0 ){
         --n;		   
         *--content = c;
      }		 
   }
         
   void add_digit( char c, char hex_base ){
      if( c > 9 ){
         c = (char) ( c + ( hex_base - 10 ));
      } else {
         c = (char) ( c + '0' );
      } 
      add_char( c );
   }
         
   void add_prefix( const _co_stream_formatting & format ){
      if( format.show_base ){
         switch( s.numerical_radix ){
            case 2  : add_char( 'b' ); break;
            case 8  : add_char( 'o' ); break;
            case 10 : return;
            case 16 : add_char( 'x' ); break;
            default : add_char( '?' ); break; 
         }
         add_char( '0' );
      }
   }          
};


// ==========================================================================
//
// the formatter
//
// ==========================================================================

template< typename T >
struct formatter :
   formatted_co_stream_root
{
   
   static void HWLIB_INLINE ostream(){
      T::init();	   
   }
   
   static void HWLIB_INLINE write( char c ){
      T::write( c );
   }	  
   
   template< typename lambda >
   ostream & print_aligned( int_fast16_t field_len, lambda print_field ){	
      fill( fill_count( true, field_len ));   
	  print_field();
      fill( fill_count( false, field_len ));
      field_width = 0;	  
      return *this;	  
   }
   
   uint_fast16_t __attribute__ ((pure)) strlen( const char *s ){
      uint_fast16_t n = 0;
      while( *s++ ){ ++n; }
      return n;
   }
   
   ostream & print_aligned( const char * s ){	
      return print_aligned( 
         strlen( s ), 
	     [&](){ 
		    for( const char *p = s; *p != '\0'; p++ ){
               putc( *p );
            }   
         }
      );  
   }
   
   ostream & print_aligned( bool v ){	 
      return print_aligned( bool_rep( v ) );
   }   
      
   ostream & print_int( int x ){
         _print_reverse s;
         
         bool minus = ( x < 0 );
         if( x > 0 ){ x = -x; }
       
         if( x == 0 ){
            s.add_digit( 0, hex_base );
         }
		 
         while( x != 0 ){
            s.add_digit( (char) ( ( - x ) % numerical_radix ), hex_base );
            x = - ( - x / numerical_radix );
         }
		 
         s.add_prefix( *this );
         
         if( minus ){
            s.add_char( '-' );
         } else if( show_pos ){
            s.add_char( '+' );
         }        
         
         print_aligned( s.content );
         return *this;
      }   

   ostream & print_int( int64_t x ){
         _print_reverse s;
         
         bool minus = ( x < 0 );
         if( x > 0 ){ x = -x; }
       
         if( x == 0 ){
            s.add_digit( 0, hex_base );
         }
		 
         while( x != 0 ){
            s.add_digit( (char) ( ( - x ) % numerical_radix ), hex_base );
            x = - ( - x / numerical_radix );
         }
		 
         s.add_prefix( *this );
         
         if( minus ){
            s.add_char( '-' );
         } else if( show_pos ){
            s.add_char( '+' );
         }        
         
         print_aligned( s.content );
         return *this;
      }   

};


