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
   
   make_pin_in_out(   d0, d,  0 );
   make_pin_in_out(   d1, d,  1 );
   make_pin_in_out(   d2, d,  2 );
   make_pin_in_out(   d3, d,  3 );
   make_pin_in_out(   d4, d,  4 );
   make_pin_in_out(   d5, d,  5 );
   make_pin_in_out(   d6, d,  6 );
   make_pin_in_out(   d7, d,  7 );
   make_pin_in_out(   d8, b,  0 );
   make_pin_in_out(   d9, b,  1 );
   make_pin_in_out(  d10, b,  2 );
   make_pin_in_out(  d11, b,  3 );
   make_pin_in_out(  d12, b,  4 );
   make_pin_in_out(  d13, b,  5 );
   
   make_pin_in_out(   a0, c,  0 );
   make_pin_in_out(   a1, c,  1 );
   make_pin_in_out(   a2, c,  2 );
   make_pin_in_out(   a3, c,  3 );
   make_pin_in_out(   a4, c,  4 );
   make_pin_in_out(   a5, c,  4 );
   
   make_pin_in_out(  scl, c,  5 );
   make_pin_in_out(  sda, c,  4 );
   make_pin_in_out(   tx, d,  0 );
   make_pin_in_out(   rx, d,  1 );
   make_pin_in_out(  led, b,  5 );
  
   make_pin_in_out(  sck, b,  5 );
   make_pin_in_out( miso, b,  4 );
   make_pin_in_out( mosi, b,  3 );
   make_pin_in_out(   ss, b,  2 );
   
   using waiting = timing_waiting< chip_atmega328, long long int, MHz< 1 > >;   
   
}; // template<...> struct target_arduino_uno

template< long long int clock = 100 >
using target = target_arduino_uno< clock >; 
	
}; // namespace hwcpp





