// ============================================================================
//
// file : target-arduino-uno.hpp
//
// HAL for the arduino uno board target
//
// ============================================================================

#include "chip-atmega328.hpp"

namespace hwcpp {
    
template< int clock = 100 >
struct target_arduino_uno :
   chip_atmega328    
{       

#define make_pin_in_out( NAME, PORT, PIN ) \
   using NAME  = chip_atmega328::pin_in_out< chip_atmega328::port::PORT, PIN >;
   
#define make_pin_adc( NAME, PIN ) \
   using NAME  = chip_atmega328::pin_adc< PIN >;
   
   make_pin_in_out(    d0,  d,  0 );
   make_pin_in_out(    d1,  d,  1 );
   make_pin_in_out(    d2,  d,  2 );
   make_pin_in_out(    d3,  d,  3 );
   make_pin_in_out(    d4,  d,  4 );
   make_pin_in_out(    d5,  d,  5 );
   make_pin_in_out(    d6,  d,  6 );
   make_pin_in_out(    d7,  d,  7 );
   make_pin_in_out(    d8,  b,  0 );
   make_pin_in_out(    d9,  b,  1 );
   make_pin_in_out(   d10,  b,  2 );
   make_pin_in_out(   d11,  b,  3 );
   make_pin_in_out(   d12,  b,  4 );
   make_pin_in_out(   d13,  b,  5 );
   
   make_pin_in_out(   d14,  c,  0 );
   make_pin_in_out(   d15,  c,  1 );
   make_pin_in_out(   d16,  c,  2 );
   make_pin_in_out(   d17,  c,  3 );
   make_pin_in_out(   d18,  c,  4 );
   make_pin_in_out(   d19,  c,  4 );
   
   make_pin_adc(    a0,  0 );
   make_pin_adc(    a1,  1 );
   make_pin_adc(    a2,  2 );
   make_pin_adc(    a3,  3 );
   make_pin_adc(    a4,  4 );
   make_pin_adc(    a5,  4 );
   
   make_pin_in_out(   scl,  c,  5 );
   make_pin_in_out(   sda,  c,  4 );
   make_pin_in_out(    tx,  d,  0 );
   make_pin_in_out(    rx,  d,  1 );
   make_pin_in_out(   led,  b,  5 );
  
   make_pin_in_out(   sck,  b,  5 );
   make_pin_in_out(  miso,  b,  4 );
   make_pin_in_out(  mosi,  b,  3 );
   make_pin_in_out(    ss,  b,  2 );
   
#undef make_pin_in_out   
#undef make_pin_adc 
   
   using waiting = timing_waiting< chip_atmega328, long long int, MHz< 1 > >;   
   
}; // template<...> struct target_arduino_uno

template< long long int clock = 100 >
using target = target_arduino_uno< clock >; 
	
}; // namespace hwcpp





