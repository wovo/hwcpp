// ==========================================================================
//
// file : hwcpp-target-atmega328.hpp
//
// HAL for the arduino uno board target
//
// ==========================================================================

#include "hwcpp-chip-atmega328.hpp"

namespace hwcpp {
    
template< uint64_t clock >
struct target_atmega328 :
   chip_atmega328    
{       

#define make_pin_in_out( NAME, PORT, PIN ) \
   using NAME  = chip_atmega328::pin_in_out< chip_atmega328::_port::PORT, PIN >;

#define make_pin_adc( NAME, PIN ) \
   using NAME  = chip_atmega328::pin_adc< PIN >;   
   
   make_pin_in_out(    b0,  b,  0 );
   make_pin_in_out(    b1,  b,  1 );
   make_pin_in_out(    b2,  b,  2 );
   make_pin_in_out(    b3,  b,  3 );
   make_pin_in_out(    b4,  b,  4 );
   make_pin_in_out(    b5,  b,  5 );
   make_pin_in_out(    b6,  b,  6 );
   make_pin_in_out(    b7,  b,  7 );
  
   make_pin_in_out(    c0,  c,  0 );
   make_pin_in_out(    c1,  c,  1 );
   make_pin_in_out(    c2,  c,  2 );
   make_pin_in_out(    c3,  c,  3 );
   make_pin_in_out(    c4,  c,  4 );
   make_pin_in_out(    c5,  c,  5 );
   make_pin_in_out(    c6,  c,  6 );
   
   make_pin_in_out(    d0,  d,  0 );
   make_pin_in_out(    d1,  d,  1 );
   make_pin_in_out(    d2,  d,  2 );
   make_pin_in_out(    d3,  d,  3 );
   make_pin_in_out(    d4,  d,  4 );
   make_pin_in_out(    d5,  d,  5 );
   make_pin_in_out(    d6,  d,  6 );
   make_pin_in_out(    d7,  d,  7 );
  
   make_pin_adc(    a0,  0 );
   make_pin_adc(    a1,  1 );
   make_pin_adc(    a2,  2 );
   make_pin_adc(    a3,  3 );
   make_pin_adc(    a4,  4 );
   make_pin_adc(    a5,  4 );

   pin_out< make_pin_in_out(   sck,  b,  5 ) >;
   pin_in<  make_pin_in_out(  miso,  b,  4 ) >;
   pin_out< make_pin_in_out(  mosi,  b,  3 ) >;
   pin_out< make_pin_in_out(    ss,  b,  2 ) >;
   
   pin_oc<  make_pin_in_out(   scl,  c,  5 ) >;
   pin_oc<  make_pin_in_out(   sda,  c,  4 ) >;
   pin_out< make_pin_in_out(    tx,  d,  0 ) >;
   pin_in<  make_pin_in_out(    rx,  d,  1 ) >;   
   
   
#undef make_pin_in_out   
#undef make_pin_adc 

   using waiting = timing_waiting< 
      chip_atmega328< clock >, 
	  uint_fast32_t, 
      std::ratio< clock, 16 > >;   
    
}; // template<...> struct target_atmega328
	
using target = target_atmega328;    
   
}; // namespace hwcpp





