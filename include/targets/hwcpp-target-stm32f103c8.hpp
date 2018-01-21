// ==========================================================================
//
// file : target-stm32f103.hpp
//
// HAL for stm32f103 chip target
//
// ==========================================================================

#include "hwcpp-chip-stm32f103c8.hpp"

namespace hwcpp {
    
template< uint64_t clock = 72'000'000 >
struct target_stm32f103c8 :
   chip_stm32f103c8< clock >   
{       
   using chip = chip_stm32f103c8< clock >;

#define make_pin_in_out( NAME, PORT, PIN)      \
   using NAME  = typename chip:: template      \
      _pin_in_out< chip::_port::PORT, PIN >;   \
   
#define make_pin_adc( NAME, CHANNEL ) \
   using NAME  = typename chip:: template pin_adc< CHANNEL >;   

   make_pin_in_out(   a0,  a,  0 );
   make_pin_in_out(   a1,  a,  1 );
   make_pin_in_out(   a2,  a,  2 );
   make_pin_in_out(   a3,  a,  3 );
   make_pin_in_out(   a4,  a,  4 );
   make_pin_in_out(   a5,  a,  5 );
   make_pin_in_out(   a6,  a,  6 );
   make_pin_in_out(   a7,  a,  7 );
   make_pin_in_out(   a8,  a,  8 );
   make_pin_in_out(   a9,  a,  9 );
   make_pin_in_out(  a10,  a, 10 );
   make_pin_in_out(  a11,  a, 11 );
   make_pin_in_out(  a12,  a, 12 );
   make_pin_in_out(  a13,  a, 13 );
   make_pin_in_out(  a14,  a, 14 );
   make_pin_in_out(  a15,  a, 15 );

   make_pin_in_out(   b0,  b,  0 );
   make_pin_in_out(   b1,  b,  1 );
   make_pin_in_out(   b2,  b,  2 );
   make_pin_in_out(   b3,  b,  3 );
   make_pin_in_out(   b4,  b,  4 );
   make_pin_in_out(   b5,  b,  5 );
   make_pin_in_out(   b6,  b,  6 );
   make_pin_in_out(   b7,  b,  7 );
   make_pin_in_out(   b8,  b,  8 );
   make_pin_in_out(   b9,  b,  9 );
   make_pin_in_out(  b10,  b, 10 );
   make_pin_in_out(  b11,  b, 11 );
   make_pin_in_out(  b12,  b, 12 );
   make_pin_in_out(  b13,  b, 13 );
   make_pin_in_out(  b14,  b, 14 );
   make_pin_in_out(  b15,  b, 15 );

   make_pin_in_out(  c13,  c, 13 );
/*      
   make_pin_adc(  ad0,  0 );
   make_pin_adc(  ad1,  1 );
   make_pin_adc(  ad2,  2 );
   make_pin_adc(  ad3,  3 );
   make_pin_adc(  ad4,  4 );
   make_pin_adc(  ad5,  5 );
   make_pin_adc(  ad6,  6 );
   make_pin_adc(  ad7,  7 );
   make_pin_adc(  ad8,  8 );
   make_pin_adc(  ad9,  9 );
   make_pin_adc( ad10, 10 );
   make_pin_adc( ad11, 11 );
   make_pin_adc( ad12, 12 );
   make_pin_adc( ad13, 13 );
   make_pin_adc( ad14, 14 );
   make_pin_adc( ad15, 15 );
*/
   make_pin_in_out(   _tx,  a,  9 );
   make_pin_in_out(   _rx,  a, 10 );
    
   using  tx = hwcpp::pin_out<  _tx >;
   using  rx = hwcpp::pin_in<   _rx >;
   
#undef make_pin_in_out   
#undef make_pin_adc

   using waiting = typename chip::waiting;	  
   using timing = waiting;	  

}; // template<...> struct target_stm32f103
	
template< uint64_t clock = 72'000'000 >    
using target = target_stm32f103c8< clock >; 
   
}; // namespace hwcpp




