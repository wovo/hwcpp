// ============================================================================
//
// file : hwcpp-target-arduino-uno.hpp
//
// HAL for the arduino uno board target
//
// ============================================================================

#include "hwcpp-chip-atmega328.hpp"

namespace hwcpp {
    
template< uint64_t clock >
struct target_arduino_uno :
   chip_atmega328< clock >    
{       
	
using chip = chip_atmega328< clock >;	

#define make_pin_in_out( NAME, PORT, PIN ) \
   using NAME = typename chip:: template pin_in_out< chip::port::PORT, PIN >;
   
#define make_pin_adc( NAME, PIN ) \
   using NAME = typename chip:: template pin_adc< PIN >;
   
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
   
   make_pin_in_out(  _scl,  c,  5 );
   make_pin_in_out(  _sda,  c,  4 );
   make_pin_in_out(    tx,  d,  0 );
   make_pin_in_out(    rx,  d,  1 );
   make_pin_in_out(  _led,  b,  5 );
  
   using scl = pin_oc< _scl >;
   using sda = pin_oc< _sda >;
   using led = pin_out< _led >;
   
   make_pin_in_out(  _sck,  b,  5 );
   make_pin_in_out( _miso,  b,  4 );
   make_pin_in_out( _mosi,  b,  3 );
   make_pin_in_out(   _ss,  b,  2 );

   using sck  = pin_out<  _sck >;
   using miso = pin_in<  _miso >;
   using mosi = pin_out< _mosi >;
   using ss   = pin_out<  _ss >;

#undef make_pin_in_out   
#undef make_pin_adc 
   
   using waiting = timing_waiting< 
      chip_atmega328< clock >, 
	  long long int, 
      std::ratio< clock, 16 > >;   
   
}; // template<...> struct target_arduino_uno

template< uint64_t clock = 8'000'000 >
using target = target_arduino_uno< clock >; 
	
}; // namespace hwcpp





