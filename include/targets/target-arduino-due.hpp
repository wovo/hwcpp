// ============================================================================
//
// file : target-arduino-due.hpp
//
// HAL for the arduino due board target
//
// ============================================================================

#include "chip-sam3xa.hpp"

namespace hwcpp {
    
template< int clock = 100 >
struct target_arduino_due :
   chip_sam3xa    
{       

#define make_pin_in_out( NAME, PORT, PIN) \
   using NAME  = chip_sam3xa::pin_in_out< chip_sam3xa::pio::PORT, PIN >;
   
#define make_pin_adc( NAME, CHANNEL ) \
   using NAME  = chip_sam3xa::pin_adc< CHANNEL >;   

   make_pin_in_out(   d0,  a,  8 );
   make_pin_in_out(   d1,  a,  9 );
   make_pin_in_out(   d2,  b, 25 );
   make_pin_in_out(   d3,  c, 28 );
   make_pin_in_out(   d4,  c, 26 );
   make_pin_in_out(   d5,  c, 25 );
   make_pin_in_out(   d6,  c, 24 );
   make_pin_in_out(   d7,  c, 23 );
   make_pin_in_out(   d8,  c, 22 );
   make_pin_in_out(   d9,  c, 21 );
   make_pin_in_out(  d10,  c, 29 );
   
   make_pin_in_out(  d11,  d,  7 );
   make_pin_in_out(  d12,  d,  8 );
   make_pin_in_out(  d13,  b, 27 );
   make_pin_in_out(  d14,  d,  4 );
   make_pin_in_out(  d15,  d,  5 );
   make_pin_in_out(  d16,  a, 13 );
   make_pin_in_out(  d17,  a, 12 );
   make_pin_in_out(  d18,  a, 11 );
   make_pin_in_out(  d19,  a, 10 );
   make_pin_in_out(  d20,  b, 12 );
   
   make_pin_in_out(  d21,  b, 13 );
   make_pin_in_out(  d22,  b, 26 );
   make_pin_in_out(  d23,  a, 14 );
   make_pin_in_out(  d24,  a, 15 );
   make_pin_in_out(  d25,  d,  0 );
   make_pin_in_out(  d26,  d,  1 );
   make_pin_in_out(  d27,  d,  2 );
   make_pin_in_out(  d28,  d,  3 );
   make_pin_in_out(  d29,  d,  6 );
   make_pin_in_out(  d30,  d,  9 );

   make_pin_in_out(  d31,  a,  7 );
   make_pin_in_out(  d32,  d, 10 );
   make_pin_in_out(  d33,  c,  1 );
   make_pin_in_out(  d34,  c,  2 );
   make_pin_in_out(  d35,  c,  3 );
   make_pin_in_out(  d36,  c,  4 );
   make_pin_in_out(  d37,  c,  5 );
   make_pin_in_out(  d38,  c,  6 );
   make_pin_in_out(  d39,  c,  7 );
   make_pin_in_out(  d40,  c,  8 );

   make_pin_in_out(  d41,  c,  9 );
   make_pin_in_out(  d42,  a, 19 );
   make_pin_in_out(  d43,  a, 20 );
   make_pin_in_out(  d44,  c, 19 );
   make_pin_in_out(  d45,  c, 18 );
   make_pin_in_out(  d46,  c, 17 );
   make_pin_in_out(  d47,  c, 16 );
   make_pin_in_out(  d48,  c, 15 );
   make_pin_in_out(  d49,  c, 14 );
   make_pin_in_out(  d50,  c, 13 );
   
   make_pin_in_out(  d51,  c, 12 );
   make_pin_in_out(  d52,  b, 21 );
   make_pin_in_out(  d53,  b, 14 );
   
   make_pin_in_out(  d54,  a, 16 );
   make_pin_in_out(  d55,  a, 24 );
   make_pin_in_out(  d56,  a, 23 );
   make_pin_in_out(  d57,  a, 22 );
   make_pin_in_out(  d58,  a,  6 );
   make_pin_in_out(  d59,  a,  4 );
   make_pin_in_out(  d60,  a,  3 );
   make_pin_in_out(  d61,  a,  2 );
   
   make_pin_in_out(  d62,  b, 17 );
   make_pin_in_out(  d63,  b, 18 );
   make_pin_in_out(  d64,  b, 19 );
   make_pin_in_out(  d65,  b, 20 );
   make_pin_in_out(  d66,  b, 15 );
   make_pin_in_out(  d67,  b, 16 );
   make_pin_in_out(  d68,  a,  1 );
   make_pin_in_out(  d69,  a,  0 );
      
   make_pin_adc(  a0,  7 );
   make_pin_adc(  a1,  6 );
   make_pin_adc(  a2,  5 );
   make_pin_adc(  a3,  4 );
   make_pin_adc(  a4,  3 );
   make_pin_adc(  a5,  2 );
   make_pin_adc(  a6,  1 );
   make_pin_adc(  a7,  0 );
   make_pin_adc(  a8, 10 );
   make_pin_adc(  a9, 11 );
   make_pin_adc( a10, 12 );
   make_pin_adc( a11, 13 );

/*   
   
      { 1, 15 },  // dac0
      { 1, 16 },  // dac1
      { 0,  1 },  // cantx
      { 0,  0 },  // canrx
   
      { 1, 13 },  // scl
      { 1, 12 },  // sda
      { 0, 18 },  // scl1
      { 0, 17 },  // sda1

      { 0, 27 },  // sck
      { 0, 25 },  // miso
      { 0, 26 },  // mosi
      { 2, 29 },  // cs0
      { 2, 26 }   // cs1
*/
   make_pin_in_out(  _ltx,  a,  9 );
   make_pin_in_out(  _lrx,  a,  8 );
   make_pin_in_out(  _led,  b, 27 );
    
   using  tx = hwcpp::pin_out< _tx >;
   using  rx = hwcpp::pin_out< _rx >;
   using led = hwcpp::pin_out< _led >;
   
#undef make_pin_in_out   

   using waiting = timing_waiting< chip_sam3xa, long long int, MHz< 84 > >;
   
}; // template<...> struct target_arduino_due

template< int clock = 100 >
using target = target_arduino_due< clock >; 
	
}; // namespace hwcpp





