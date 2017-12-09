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

#define make_pin_in_out( PORT, PIN, NAME ) \
   using NAME  = chip_sam3xa::pin_in_out< chip_sam3xa::pio::PORT, PIN >;
   
#define make_pin_adc( NAME, PORT, PIN ) \
   using NAME  = chip_sam3xa::pin_adc< chip_sam3xa::adcp::PORT, PIN >;   

   make_pin_in_out(  a,  8,   d0 );
   make_pin_in_out(  a,  9,   d1 );
   make_pin_in_out(  b, 25,   d2 );
   make_pin_in_out(  c, 28,   d3 );
   make_pin_in_out(  c, 26,   d4 );
   make_pin_in_out(  c, 25,   d5 );
   make_pin_in_out(  c, 24,   d6 );
   make_pin_in_out(  c, 23,   d7 );
   make_pin_in_out(  c, 22,   d8 );
   make_pin_in_out(  c, 21,   d9 );
   make_pin_in_out(  c, 29,  d10 );
   
   make_pin_in_out(  d,  7,  d11 );
   make_pin_in_out(  d,  8,  d12 );
   make_pin_in_out(  b, 27,  d13 );
   make_pin_in_out(  d,  4,  d14 );
   make_pin_in_out(  d,  5,  d15 );
   make_pin_in_out(  a, 13,  d16 );
   make_pin_in_out(  a, 12,  d17 );
   make_pin_in_out(  a, 11,  d18 );
   make_pin_in_out(  a, 10,  d19 );
   make_pin_in_out(  b, 12,  d20 );
   
   make_pin_in_out(  b, 13,  d21 );
   make_pin_in_out(  b, 26,  d22 );
   make_pin_in_out(  a, 14,  d23 );
   make_pin_in_out(  a, 15,  d24 );
   make_pin_in_out(  d,  0,  d25 );
   make_pin_in_out(  d,  1,  d26 );
   make_pin_in_out(  d,  2,  d27 );
   make_pin_in_out(  d,  3,  d28 );
   make_pin_in_out(  d,  6,  d29 );
   make_pin_in_out(  d,  9,  d30 );

   make_pin_in_out(  a,  7,  d31 );
   make_pin_in_out(  d, 10,  d32 );
   make_pin_in_out(  c,  1,  d33 );
   make_pin_in_out(  c,  2,  d34 );
   make_pin_in_out(  c,  3,  d35 );
   make_pin_in_out(  c,  4,  d36 );
   make_pin_in_out(  c,  5,  d37 );
   make_pin_in_out(  c,  6,  d38 );
   make_pin_in_out(  c,  7,  d39 );
   make_pin_in_out(  c,  8,  d40 );

   make_pin_in_out(  c,  9,  d41 );
   make_pin_in_out(  a, 19,  d42 );
   make_pin_in_out(  a, 20,  d43 );
   make_pin_in_out(  c, 19,  d44 );
   make_pin_in_out(  c, 18,  d45 );
   make_pin_in_out(  c, 17,  d46 );
   make_pin_in_out(  c, 16,  d47 );
   make_pin_in_out(  c, 15,  d48 );
   make_pin_in_out(  c, 14,  d49 );
   make_pin_in_out(  c, 13,  d50 );
   
   make_pin_in_out(  c, 12,  d51 );
   make_pin_in_out(  b, 21,  d52 );
   make_pin_in_out(  b, 14,  d53 );
   
   make_pin_adc( a0, a, 16 );

/*   
      { 0, 16 },  // a0
      { 0, 24 },  // a1
      { 0, 23 },  // a2
      { 0, 22 },  // a3
      { 0,  6 },  // a4
      { 0,  4 },  // a5
      { 0,  3 },  // a6
      { 0,  2 },  // a7
      { 1, 17 },  // a8
      { 1, 18 },  // a9
      { 1, 19 },  // a10
      { 1, 20 },  // a11
   
      { 1, 15 },  // dac0
      { 1, 16 },  // dac1
      { 0,  1 },  // cantx
      { 0,  0 },  // canrx
   
      { 1, 13 },  // scl
      { 1, 12 },  // sda
      { 0, 18 },  // scl1
      { 0, 17 },  // sda1
   
      { 0,  9 },  // tx
      { 0,  8 },  // rx
      { 1, 27 },  // led

      { 0, 27 },  // sck
      { 0, 25 },  // miso
      { 0, 26 },  // mosi
      { 2, 29 },  // cs0
      { 2, 26 }   // cs1
*/
   make_pin_in_out(  b, 27,  _led );
    
   using led = hwcpp::pin_out< _led >;
   
#undef make_pin_in_out   

   using waiting = timing_waiting< chip_sam3xa, long long int, MHz< 84 > >;
   
}; // template<...> struct target_arduino_due

template< int clock = 100 >
using target = target_arduino_due< clock >; 
	
}; // namespace hwcpp





