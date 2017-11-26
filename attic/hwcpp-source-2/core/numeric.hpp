// ==========================================================================
//
// File      : numeric.hpp
// Part of   : hwcpp library (www.voti.nl/hwcpp)
// Copyright : wouter@voti.nl 2014
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at 
// http://www.boost.org/LICENSE_1_0.txt)
//
// ==========================================================================

namespace hwcpp {

   // =======================================================================
   //
   // archetypes
   //
   // =======================================================================
   
   struct seven_segment_digit_archetype {
      typedef void has_seven_segment_digit;
      static void init();
      static unsigned char segments( unsigned char value );
      static void set_segments( unsigned char segs );
      static void set_value( unsigned char value, bool point = false );
      static void set_decimal_point( bool enable );
   };
   
   template< unsigned int _n_digits >
   struct seven_segment_display_archetype {
      typedef void has_seven_segment_display;
      static constexpr unsigned int n_digits = _n_digits;
      static void init();
      static void set_digit_segments( unsigned int n, unsigned char segs );
      static void set_digit_value( unsigned int n, unsigned char value );   
   };
   
   template< unsigned int _n_digits >
   struct numeric_display_archteype {
      typedef void as_numeric_display;
      static void init();
      static constexpr unsigned int n_digits = _n_digits;
      static void set_decimal_value( unsigned int n, unsigned char points = 0 );      
      static void set_hexadecimal_value( unsigned int n, unsigned char points = 0 );      
   };   
   
   
   // =======================================================================
   //
   // a seven-segment display 
   //
   // =======================================================================
   
   template< unsigned int _n >
   struct seven_segments_table_archetype {
      typedef void has_seven_segments_table;
      static constexpr unsigned int n = _n;
      static constexpr unsigned char seven_segments_default[ _n ] = {};
   };
   
   template< class dummy = void >
   struct seven_segments_table_default :
      public seven_segments_table_archetype< 16 >
   {   
      static constexpr unsigned char translate[ 16 ] = {
         0b00111111,
         0b00000110,
         0b01011011,
         0b01001111,
         0b01100110,
         0b01101101,
         0b01111101,
         0b00000111,
         0b01111111,
         0b01101111,
         0b01110111,
         0b01111100,
         0b00111001,
         0b01011110,
         0b01111001,
         0b01110001
      };   
   };   
   
   template< class dummy > constexpr unsigned char 
      seven_segments_table_default< dummy >::translate[ 16 ];
   
   template< class _p, class table = seven_segments_table_default<> >
   struct seven_segment_digit :
      public seven_segment_digit_archetype
   {
      HARDWARE_REQUIRE_ARCHETYPE( table, seven_segments_table );
      typedef port_out_from < _p > p;
   
      static void init(){
         p::init();
      }
      
      static void set_segments( unsigned char segs ){
         p::set( segs );
      }
      
      static unsigned char segments( unsigned char value ){
         return value < table::n
            ? table::translate[ value ]
            : 0;
      }
      
      static void set_value( unsigned char value, bool point = false ){
         set_segments( segments[ value ] | point ? 0x80 : 0x00 );
      }
      
   };   
   
   template< 
      class timing,
      class _segments, 
      class _digits, 
      class table = seven_segments_table_default<> 
   >
   struct seven_segment_display :
      public seven_segment_display_archetype< _segments::n_pins >
   {
      HARDWARE_REQUIRE_ARCHETYPE( table, seven_segments_table );
      HARDWARE_REQUIRE_ARCHETYPE( timing, callback );
      
      typedef port_out_from < _digits > digits;
      typedef port_out_from < _segments > segments;     
      typedef seven_segment_digit< segments, table > digit;
      
      static constexpr unsigned int n_digits = _digits::n_pins;
      
      static unsigned char segment_values[ _segments::n_pins ];
      static unsigned int current_digit;
      
      typedef typename timing::template ms< 10 > interval;
      
      struct multiplexing : 
         public timing::template clock< interval >
      {
         void function() override {
            if( ++current_digit >= n_digits ){
               current_digit = 0;
            }
            digits::set( 0 );
            digit::set_segments( segment_values[ current_digit ] );
            digits::set( 1 << current_digit );
         }
      };      
      
      static void init(){
         timing::init();
         digits::init();
         segments::init();
         current_digit = 0;
         static multiplexing instance;  
         instance.function();
      }
      
      static void set_decimal_value( 
         unsigned int n, 
         unsigned int points = 0,
         bool suppress = true         
      ){
         for( int i = 0; i < n_digits; i++ ){
         
            unsigned int digit_value = n % 10;
            n = n / 10;
            
            if(
               ( digit_value == 0 ) 
               && ( n == 0 ) 
               && ( i > 0 ) 
               && ( points == 0 )
            ){
               segment_values[ i ] = 0;
            } else {
               segment_values[ i ] = digit::segments( digit_value );
            }
            
            if( points & 0x01 ){
               segment_values[ i ] |= 0x80;
            }
            points = points >> 1;
         }      
      }      
      
      static void mux(){
         //return;
         if( ++current_digit >= n_digits ){
            current_digit = 0;
         }
         digits::set( 0 );
         digit::set_segments( segment_values[ current_digit ] );
         digits::set( 1 << current_digit );
         //digits::set( 1 );
      }
      
   };   
   
   template< class ti, class se, class di, class ta  >
      unsigned char seven_segment_display< ti, se, di, ta >
         ::segment_values[ se::n_pins ];
   
   template< class ti, class se, class di, class ta  >
      unsigned int seven_segment_display< ti, se, di, ta >
         ::current_digit;
   
/*   
   template< class ti, class se, class di, class ta  >
      typename seven_segment_display< ti, se, di, ta >::multiplexing 
         seven_segment_display< ti, se, di, ta >::instance;
*/   

}; // namespace hwcpp