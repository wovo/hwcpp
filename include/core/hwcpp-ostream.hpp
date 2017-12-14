// ==========================================================================
//
// file : hwcpp-ostream.hpp
//
// ==========================================================================


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
};   

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

// ========== ostream decorator ==========

      struct reverse {
         static constexpr uint_fast16_t length = 70;
         char body[ length ];
         char *content;
         
         reverse(){
            body[ length - 1 ] = '\0';
            content = & body[ length - 1 ];
         }
         
         void add_char( char c ){
            content--;
            *content = c;
         }
         
         void add_digit( char c, char hex_base ){
            if( c > 9 ){
               c += ( hex_base - 10 );
            } else {
               c += '0';
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

template< typename T >
struct ostream :
   ostream_marker,
   ostream_base
{
    
   T sink;    
   
   ostream(){
      T::init();	   
   }
	
   ostream< T > & putc( char c ){
      sink.put( c );  
      return *this;	  
   }  
   
   // must handle negative numbers!
   void fill( int_fast16_t n ){
      while( n-- > 0 ){
         putc( fill_char );
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
   
   uint_fast16_t strlen( const char *s ){
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
         reverse s;
         
         bool minus = ( x < 0 );
         if( x < 0 ){ x = -x; }
       
         if( x == 0 ){
            s.add_digit( 0, hex_base );
         }
         while( x > 0 ){
            s.add_digit( x % numerical_radix, hex_base );
            x = x / numerical_radix;
//T::putc( '0' + x % numerical_radix );
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
 

	  
