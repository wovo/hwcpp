// ==========================================================================
//
// file : hwcpp-target-sam3xa.hpp
//
// HAL for atsam3x chip target
//
// ==========================================================================

#include "hwcpp-chip-sam3x8e.hpp"

namespace hwcpp {
    
template< uint64_t clock >
struct target_sam3x8e :
   chip_sam3x8e< clock >    
{
    
using chip = chip_sam3x8e< clock >;

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
   make_pin_in_out(  a16,  a, 16 );
   make_pin_in_out(  a17,  a, 17 );
   make_pin_in_out(  a18,  a, 18 );
   make_pin_in_out(  a19,  a, 19 );
   make_pin_in_out(  a20,  a, 20 );
   make_pin_in_out(  a21,  a, 21 );
   make_pin_in_out(  a22,  a, 22 );
   make_pin_in_out(  a23,  a, 23 );
   make_pin_in_out(  a24,  a, 24 );
   make_pin_in_out(  a25,  a, 25 );
   make_pin_in_out(  a26,  a, 26 );
   make_pin_in_out(  a27,  a, 27 );
   make_pin_in_out(  a28,  a, 28 );
   make_pin_in_out(  a29,  a, 29 );

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
   make_pin_in_out(  b16,  b, 16 );
   make_pin_in_out(  b17,  b, 17 );
   make_pin_in_out(  b18,  b, 18 );
   make_pin_in_out(  b19,  b, 19 );
   make_pin_in_out(  b20,  b, 20 );
   make_pin_in_out(  b21,  b, 21 );
   make_pin_in_out(  b22,  b, 22 );
   make_pin_in_out(  b23,  b, 23 );
   make_pin_in_out(  b24,  b, 24 );
   make_pin_in_out(  b25,  b, 25 );
   make_pin_in_out(  b26,  b, 26 );
   make_pin_in_out(  b27,  b, 27 );
   make_pin_in_out(  b28,  b, 28 );
   make_pin_in_out(  b29,  b, 29 );
   make_pin_in_out(  b30,  b, 30 );
   make_pin_in_out(  b31,  b, 31 );

   make_pin_in_out(   c0,  c,  0 );
   make_pin_in_out(   c1,  c,  1 );
   make_pin_in_out(   c2,  c,  2 );
   make_pin_in_out(   c3,  c,  3 );
   make_pin_in_out(   c4,  c,  4 );
   make_pin_in_out(   c5,  c,  5 );
   make_pin_in_out(   c6,  c,  6 );
   make_pin_in_out(   c7,  c,  7 );
   make_pin_in_out(   c8,  c,  8 );
   make_pin_in_out(   c9,  c,  9 );
   make_pin_in_out(  c10,  c, 10 );
   make_pin_in_out(  c11,  c, 11 );
   make_pin_in_out(  c12,  c, 12 );
   make_pin_in_out(  c13,  c, 13 );
   make_pin_in_out(  c14,  c, 14 );
   make_pin_in_out(  c15,  c, 15 );
   make_pin_in_out(  c16,  c, 16 );
   make_pin_in_out(  c17,  c, 17 );
   make_pin_in_out(  c18,  c, 18 );
   make_pin_in_out(  c19,  c, 19 );
   make_pin_in_out(  c20,  c, 20 );
   make_pin_in_out(  c21,  c, 21 );
   make_pin_in_out(  c22,  c, 22 );
   make_pin_in_out(  c23,  c, 23 );
   make_pin_in_out(  c24,  c, 24 );
   make_pin_in_out(  c25,  c, 25 );
   make_pin_in_out(  c26,  c, 26 );
   make_pin_in_out(  c27,  c, 27 );
   make_pin_in_out(  c28,  c, 28 );
   make_pin_in_out(  c29,  c, 29 );
   make_pin_in_out(  c30,  c, 30 );

   make_pin_in_out(   d0,  d,  0 );
   make_pin_in_out(   d1,  d,  1 );
   make_pin_in_out(   d2,  d,  2 );
   make_pin_in_out(   d3,  d,  3 );
   make_pin_in_out(   d4,  d,  4 );
   make_pin_in_out(   d5,  d,  5 );
   make_pin_in_out(   d6,  d,  6 );
   make_pin_in_out(   d7,  d,  7 );
   make_pin_in_out(   d8,  d,  8 );
   make_pin_in_out(   d9,  d,  9 );
   make_pin_in_out(  d10,  d, 10 );

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

   make_pin_in_out(  _scl,  b, 13 );
   make_pin_in_out(  _sda,  b, 12 );
   make_pin_in_out( _scl1,  a, 18 );
   make_pin_in_out( _sda1,  a, 17 );

   using  scl = hwcpp::pin_oc<  _scl >;
   using  sda = hwcpp::pin_oc<  _sda >;
   using scl1 = hwcpp::pin_oc< _scl1 >;
   using sda1 = hwcpp::pin_oc< _sda1 >;

   make_pin_in_out(   _tx,  a,  9 );
   make_pin_in_out(   _rx,  a,  8 );
    
   using  tx = hwcpp::pin_out<  _tx >;
   using  rx = hwcpp::pin_in<   _rx >;

#undef make_pin_in_out   
#undef make_pin_adc

   using waiting = typename chip::waiting;	  
   using timing = waiting;	 

}; // template<...> struct target_sam3xa
	
template< uint64_t clock >
using target = target_sam3x8e< clock >;  
   
}; // namespace hwcpp




