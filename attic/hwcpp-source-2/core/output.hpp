// ==========================================================================
//
// File      : output.hpp
// Part of   : hwcpp library (www.voti.nl/hwcpp)
// Copyright : wouter@voti.nl 2014
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at 
// http://www.boost.org/LICENSE_1_0.txt)
//
// ==========================================================================


namespace hwcpp {
namespace io {

   constexpr char endl = '\n';
   constexpr char ends = '\0';

   // =======================================================================
   //
   // ostream format manipulators
   //
   // =======================================================================

   struct setw {
      const int x;
      constexpr setw( int x ) : x( x ){}
   };
         
   struct setbase {
      const int x;
      constexpr setbase( int x ) : x( x ){}
   };
   
   constexpr setbase bin( 2 );
   constexpr setbase oct( 8 );
   constexpr setbase dec( 10 );
   constexpr setbase hex( 16 );
   
   struct _showpos {
      bool x; 
      constexpr _showpos( bool x ) : x( x ){}
   };
           
   constexpr _showpos showpos( true );
   constexpr _showpos noshowpos( false );
   
   struct _showbase {
      const bool x;
      constexpr _showbase( bool x ) : x( x ){}
   };
           
   constexpr _showbase showbase( true );
   constexpr _showbase noshowbase( false );
   
   struct _boolalpha {
      const bool x;
      constexpr _boolalpha( bool x ) : x( x ){}
   };
           
   constexpr _boolalpha boolalpha( true );
   constexpr _boolalpha noboolalpha( false );
   
   struct setfill {
      const char x;
      constexpr setfill( char x ) : x( x ){}
   };
           
   struct _right {
      constexpr _right(){}
   }; 
           
   constexpr _right right;
   
   struct _left {
      constexpr _left(){}
   }; 
                 
   constexpr _left left;
            
   struct _flush {
      constexpr _flush( void ){}
   }; 
           
   constexpr _flush flush;
   
   
   // =======================================================================
   //
   // ostream
   //
   // =======================================================================   
  
   class ostream {
   private:
   
      int field_width;
      int numerical_radix;
      char fill_char;
      char hex_base;
      bool align_right;
      bool show_pos;
      bool bool_alpha;
      bool show_base;
      
      void (*fputc)(char c );
      
      // not copyable
      ostream( const ostream& ) = delete;
      ostream& operator=( const ostream& ) = delete;      
      
      static int strlen( const char *s ){
         int n = 0;
         while( *s != '\0' ){
            n++;
            s++;
         }
         return n; 
      }     
   
      void filler( int n ){
         while( n-- > 0 ){
            *this << fill_char;
         }
      }      
       
               
      // ====================================================================
      //
      // helper for printing integer values, which are generated
      // in reverse order
      //
      // ====================================================================
      
      struct reverse {
         static constexpr int length = 70;
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
         
         void add_prefix( const ostream & s ){
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
  
   public:
      
	   constexpr ostream(): 
         field_width( 0 ), 
         numerical_radix( 10 ),
         fill_char( ' ' ), 
         hex_base( 'A' ),
         align_right( true ), 
         show_pos( false ),
         bool_alpha( false ),
         show_base( false ),
         fputc( nullptr )
      {}
      
      void use( void f(char c ) ){
         fputc = f;
      }
      
      template< class channel >
      void connect(){
         channel::init();
         use( channel::put );
      }   
      
      void putc( char c ){
	      if( *fputc ){
		     fputc( c );
         }         
      }
       
      ostream & operator<< ( char c ){ 
         putc( c ); 
         return *this; 
      }
      
      void flush( void ){}
      friend ostream & operator<< ( ostream & stream, const _flush x ){
         stream.flush();
         return stream;
      }
      
      
      // ====================================================================
      //
      // manipulators
      //
      // ====================================================================
  
      int width( void ) const { return field_width; }
      void width( int x ) { field_width = x; }
      
      friend ostream & operator<< ( ostream & stream, const setw & x ){
         stream.field_width = x.x;
         return stream;
      }
      
      int base( void ) const { return numerical_radix; }
      void base( int x ) { numerical_radix = x; }
      
      friend ostream & operator<< ( ostream & stream, const setbase & x ){
         stream.numerical_radix = x.x;
         return stream;
      }
      
      bool showpos( void ) const { return show_pos; }
      void showpos( bool x ) { show_pos = x; }
      
      friend ostream & operator<< ( ostream & stream, const _showpos & x ){
         stream.show_pos = x.x;
         return stream;
      }
   
      bool showbase( void ) const { return show_base; }
      void showbase( bool x ){ show_base = x; }
      
      friend ostream & operator<< ( ostream & stream, const _showbase & x ){
         stream.show_base = x.x;
         return stream;
      }      
      
      bool boolalpha( void ) const { return bool_alpha; }
      void boolalpha( bool x ) { bool_alpha = x; }
      
      friend ostream & operator<< ( ostream & stream, const _boolalpha & x ){
         stream.bool_alpha = x.x;
         return stream;
      }
     
      char fill( void ) const { return fill_char; }
      void fill( char x ){ fill_char = x; }
      
      friend ostream & operator<< ( ostream & stream, const setfill x ){
         stream.fill_char = x.x;
         return stream;
      }      
     
      void right( void ){ align_right = true; }      
      friend ostream & operator<< ( ostream & stream, const _right x ){
         stream.align_right = true;
         return stream;
      }
   
      void left( void ){ align_right = false; }     
      friend ostream & operator<< ( ostream & stream, const _left x ){
         stream.align_right = false;
         return stream;
      }
   
      bool must_align_right( void ){ return align_right; }
      
      
      // ====================================================================
      //
      // print bool and string types
      //
      // ====================================================================
      
      friend ostream & operator<< ( ostream & stream, bool x ){
         if( stream.boolalpha()){
            if( x ){
               stream << "true";
            } else {
               stream << "false";
            }
         } else {
            if( x ){
               stream << "1";
            } else {
               stream << "0";
            }
         }
         return stream;   
      }      
  
      friend ostream & operator<< ( ostream & stream, const char *s ){
         if( stream.must_align_right()){
            stream.filler( stream.width() - strlen( s )); 
         }       
         for( const char *p = s; *p != '\0'; p++ ){
            stream << *p;
         }
         if( ! stream.must_align_right()){
           stream.filler( stream.width() - strlen( s )); 
         }  
         stream.width( 0 );
         return stream;
      }   
  
      // ====================================================================
      //
      // print integers
      //
      // ====================================================================
      
      friend ostream & operator<< ( ostream & stream, int x ){
         reverse s;
         
         bool minus = ( x < 0 );
         if( x < 0 ){ x = -x; }
         
         if( x == 0 ){
            s.add_digit( 0, stream.hex_base );
         }
         while( x > 0 ){
            s.add_digit( x % stream.base(), stream.hex_base );
            x = x / stream.base();
         }
         s.add_prefix( stream );
         
         if( minus ){
            s.add_char( '-' );
         } else if( stream.showpos() ){
            s.add_char( '+' );
         }   
         
         stream << s.content;
         return stream;   
      }
   
      friend ostream & operator<< ( ostream & stream, long int x ){
         return stream << (int) x;
      }
   
      friend ostream & operator<< ( ostream & stream, long long int x ){
         reverse s;

         bool minus = ( x < 0 );
         if( x < 0 ){ x = -x; }

         if( x == 0 ){
            s.add_digit( 0, stream.hex_base );
         }
   	   while( x != 0 ){
            s.add_digit( x % stream.base(), stream.hex_base );
            x = x / stream.base();
         }
         s.add_prefix( stream );

         if( minus ){
            s.add_char( '-' );
         } else if( stream.showpos() ){
            s.add_char( '+' );
         }   
         
         stream << s.content;
         return stream;   
      }
   
      friend ostream & operator<< ( ostream & stream, unsigned int x ){
         return stream << (long long int) x;      
      }
   
      friend ostream & operator<< ( ostream & stream, unsigned long int x ){
         return stream << (long long int) x;
      }
   
      friend ostream & operator<< ( ostream & stream, unsigned long long x ){
         return stream << (long long int) x;
      }
   
      friend ostream & operator<< ( ostream & stream, signed char c ){
         stream.putc( c );
   	   return stream;
      }
   
      friend ostream & operator<< ( ostream & stream, unsigned char c ){
         stream.putc( c );
	      return stream;
      }
      
   }; // class ostream    
   
   // must be weak because it is in a header
   ostream __attribute__((weak)) cout;   
   
}; // namespace io 
}; // namespace hwcpp 

      
