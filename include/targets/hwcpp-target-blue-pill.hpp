// ==========================================================================
//
// file : hwcpp-target-blue-pill.hpp
//
// HAL for the blue pill board target
//
// ==========================================================================

#include "hwcpp-chip-stm32f103.hpp"

namespace hwcpp {
    
template< uint64_t clock >
struct target_blue_pill :
   chip_stm32f103< clock >    
{       
	
   using chip = chip_stm32f103< clock >;
	
// ========= chip pins ==========

#define make_pin_in_out( NAME, PORT, PIN ) \
   using NAME  = typename chip:: template pin_in_out< chip::port::PORT, PIN >

   make_pin_in_out(   a0,  a,   0 );
   make_pin_in_out(   a1,  a,   1 );
   make_pin_in_out(   a2,  a,   2 );
   make_pin_in_out(   a3,  a,   3 );
   make_pin_in_out(   a4,  a,   4 );
   make_pin_in_out(   a5,  a,   5 );
   make_pin_in_out(   a6,  a,   6 );
   make_pin_in_out(   a7,  a,   7 );
   make_pin_in_out(   a8,  a,   6 );
   make_pin_in_out(   a9,  a,   7 );
   make_pin_in_out(  a10,  a,  10 );
   make_pin_in_out(  a11,  a,  11 );

   make_pin_in_out(   b0,  b,   0 );
   make_pin_in_out(   b1,  b,   1 );
   make_pin_in_out(   b2,  b,   2 );
   make_pin_in_out(   b3,  b,   3 );
   make_pin_in_out(   b4,  b,   4 );
   make_pin_in_out(   b5,  b,   5 );
   make_pin_in_out(   b6,  b,   6 );
   make_pin_in_out(   b7,  b,   7 );
   make_pin_in_out(   b8,  b,   5 );
   make_pin_in_out(   b9,  b,   6 );
   make_pin_in_out(  b10,  b,  10 );
   make_pin_in_out(  b11,  b,  11 );
   make_pin_in_out(  b12,  b,  12 );
   make_pin_in_out(  b13,  b,  13 );
   make_pin_in_out(  b14,  b,  14 );
   make_pin_in_out(  b15,  b,  15 );

   make_pin_in_out(  c13,  c,  13 );

#undef make_pin_in_out	
    
   using led = invert< pin_out< c13 > >;
   
   using waiting = typename chip::waiting;	  
   using timing = waiting; 
   
}; // template<...> struct target_blue_pill

template< uint64_t clock = 72'000'000 >
using target = target_blue_pill< clock >; 
	
}; // namespace hwcpp





