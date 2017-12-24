// ==========================================================================
//
// file : hwcpp-stream-object.hpp
//
// create an ostream-like object from a stream cto
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
// helpers
//
// ==========================================================================

/// end-of-line constant
constexpr char endl = '\n';
   
/// 0-character constant
constexpr char ends = '\0';



#define HWCPP_MANIPULATOR( TYPE, FIELD, NAME )              \
                                                            \
struct NAME {                                               \
   const TYPE v;                                            \
   constexpr NAME( TYPE v ): v{ v }{}                       \
};                                                          \
                                                            \
template< is_ostream ostream >                              \
ostream & operator<<( ostream & lhs, const NAME & rhs ){    \
   lhs.FIELD = rhs.v;	                                    \
   return lhs;                                              \
}   

HWCPP_MANIPULATOR( bool,           align_right,      _align_right      )
HWCPP_MANIPULATOR( bool,           bool_alpha,       _boolalpha        )
HWCPP_MANIPULATOR( bool,           show_pos,         _show_pos         )
HWCPP_MANIPULATOR( bool,           show_base,        _show_base        )

HWCPP_MANIPULATOR( char,           fill_char,        setfill           )
HWCPP_MANIPULATOR( char,           hex_base,         _hex_base         )

HWCPP_MANIPULATOR( uint_fast16_t,  field_width,      setw              )
HWCPP_MANIPULATOR( uint_fast16_t,  numerical_radix,  _numerical_radix  )

#undef HWCPP_MANIPULATOR

constexpr _align_right right( true );
constexpr _align_right left( false );

constexpr _boolalpha boolalpha( true );
constexpr _boolalpha noboolalhpa( false );

constexpr _show_pos showpos( true );
constexpr _show_pos noshowpos( false );

constexpr _show_base showbase( true );
constexpr _show_base noshowbase( false );

constexpr _numerical_radix bin(  2 );
constexpr _numerical_radix oct(  8 );
constexpr _numerical_radix dec( 10 );
constexpr _numerical_radix hex( 16 );


   _co_stream_formatting format;








struct ostream_base {
	
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

struct _print_reverse {
   static constexpr uint_fast16_t length = 70;
   char body[ length ];
   char *content;
         
   _print_reverse(){
      body[ length - 1 ] = '\0';
      content = & body[ length - 1 ];
   }
         
   void add_char( char c ){
      content--;
      *content = c;
   }
         
   void add_digit( char c, char hex_base ){
      if( c > 9 ){
         c = (char) ( c + ( hex_base - 10 ));
      } else {
         c = (char) ( c + '0' );
      } 
      add_char( c );
   }
         
   void add_prefix( const ostream_base & s ){
      if( s.show_base ){
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


// ========== ostream marker and concept ==========

struct ostream_marker {
   static constexpr bool is_ostream = true;
};

template< typename T >
concept bool is_ostream(){ 
   return T::is_ostream;
}

// ========== ostream base and associated functions ==========

/// end-of-line constant
constexpr char endl = '\n';
   
/// 0-character constant
constexpr char ends = '\0';



#define _HWCPP_MANIPULATOR( TYPE, FIELD, NAME )             \
                                                            \
struct NAME {                                               \
   const TYPE v;                                            \
   constexpr NAME( TYPE v ): v{ v }{}                       \
};                                                          \
                                                            \
template< is_ostream ostream >                              \
ostream & operator<<( ostream & lhs, const NAME & rhs ){    \
   lhs.FIELD = rhs.v;	                                    \
   return lhs;                                              \
}   

_HWCPP_MANIPULATOR( bool,           align_right,      _align_right      )
_HWCPP_MANIPULATOR( bool,           bool_alpha,       _boolalpha        )
_HWCPP_MANIPULATOR( bool,           show_pos,         _show_pos         )
_HWCPP_MANIPULATOR( bool,           show_base,        _show_base        )

_HWCPP_MANIPULATOR( char,           fill_char,        setfill           )
_HWCPP_MANIPULATOR( char,           hex_base,         _hex_base         )

_HWCPP_MANIPULATOR( uint_fast16_t,  field_width,      setw              )
_HWCPP_MANIPULATOR( uint_fast16_t,  numerical_radix,  _numerical_radix  )

#undef _HWCPP_MANIPULATOR

constexpr _align_right right( true );
constexpr _align_right left( false );

constexpr _boolalpha boolalpha( true );
constexpr _boolalpha noboolalhpa( false );

constexpr _show_pos showpos( true );
constexpr _show_pos noshowpos( false );

constexpr _show_base showbase( true );
constexpr _show_base noshowbase( false );

constexpr _numerical_radix bin(  2 );
constexpr _numerical_radix oct(  8 );
constexpr _numerical_radix dec( 10 );
constexpr _numerical_radix hex( 16 );


// ==========================================================================
//
// the formatter
//
// ==========================================================================

auto __attribute__ ((pure)) _strlen( const char *s ){
   uint_fast32_t n = 0;
   while( *s++ ){ ++n; }
   return n;
}

template< co_stream T >
struct formatter {
	
   _co_stream_formatting format;

   formatter(){
      T::init();	   
   }
   
   auto & write( char c ){
      T::write( c );  
      return *this;	  
   }  
   
   // must handle negative numbers!
   void fill( int_fast16_t n ){
      while( n-- > 0 ){
         write( format.fill_char );
      }
   }   

   template< typename lambda >
   ostream & print_aligned( int_fast16_t field_len, lambda print_field ){	
      fill( fill_count( true, field_len ));   
	  print_field();
      fill( fill_count( false, field_len ));
      field_width = 0;	  
      return *this;	  
   }
   
   ostream & print_aligned( const char * s ){	
      return print_aligned( 
         _strlen( s ), 
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
         _print_reverse s< 70 >;
         
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

// ========== worker functions ==========

template< is_ostream ostream >
auto & operator<<( ostream & stream, char c ){
   return stream.putc( c );     	      
}

template< is_ostream ostream >
auto & operator<< ( ostream & stream, const char *s ){
   return stream.print_aligned( s );
}

/* 
template< is_ostream ostream >
auto & operator<< ( ostream & stream, bool v ){
   return stream.print_aligned( stream.bool_rep( v ) );
}
*/

template< is_ostream ostream >
auto & operator<< ( ostream & stream, uint_fast16_t v ){   
   return stream.print_int( v );
}

template< is_ostream ostream >
auto & operator<< ( ostream & stream, int v ){   
   return stream.print_int( v );
}
 
template< is_ostream ostream >
auto & operator<< ( ostream & stream, int64_t v ){   
   return stream.print_int( v );
}
 

	  
