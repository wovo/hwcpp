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
   chip_atmega328< clock >  
{       
    
   using chip = chip_atmega328< clock >;	

   #define make_pin_in_out( NAME, PORT, PIN )                  \
      using NAME = typename chip::                             \
	     template pin_in_out< chip::_port::PORT, PIN >;        \
   
   #define make_pin_adc( NAME, PIN )                           \
      using NAME = typename chip:: template pin_adc< PIN >;    \
   
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

   make_pin_in_out(   _tx,  d,  0 );
   make_pin_in_out(   _rx,  d,  1 );
   
   using tx  = pin_out<  _tx >;
   using rx  = pin_in<   _rx >;
   
#undef make_pin_in_out   
#undef make_pin_adc  
    
}; // template<...> struct target_atmega328

template< uint64_t clock >	
using target = target_atmega328< clock >;    
   
}; // namespace hwcpp





