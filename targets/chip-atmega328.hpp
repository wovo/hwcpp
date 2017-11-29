// ============================================================================
//
// file : atmega328.hpp
//
// HAL for the atmega328 AVR chip
//
// ============================================================================

#include "hwcpp-all.hpp"

// the atmel header files use 'register', which is removed in C++17
#define register 
#include "io.h"
#undef register

namespace hwcpp {
    
struct chip_atmega328 {
	
enum class port {
//   a,
   b, 
   c, 
   d
};	

typedef volatile unsigned char regs;

static constexpr regs * port_data[] = { 
//   &PORTA,
   &PORTB,
   &PORTC,
   &PORTD
};
   
static constexpr regs * port_direction[] = { 
//   &DDRA,
   &DDRB,
   &DDRC,
   &DDRD
};

static void HWLIB_INLINE init(){
}
   

// ========= pin_in_out ==========

template< port p, uint32_t pin >
struct _pin_in_out {
	
   static void HWLIB_INLINE init(){
      hwcpp::chip_atmega328::init();
   }
   
   static void HWLIB_INLINE direction_set_direct( direction d ){
      if( d == direction::input ){
         *port_direction[ (int)p ] &= ~ ( 0x1U << pin );
      } else {
         *port_direction[ (int)p ] |= ( 0x1U << pin );
     }
   }
   
   static void HWLIB_INLINE set_direct( bool v ){
      if( v ){
         *port_data[ (int)p ] |= ( 0x1U << pin );
      } else {
         *port_data[ (int)p ] &= ~ ( 0x1U << pin );
      }
   }

   static int HWLIB_INLINE get_direct( bool v ){
      return ( *port_data[ (int)p ] & ( 0x1U << pin ) ) != 0;
   }
   
};

// ========= timing ==========

static void wait_us_asm( int n ){ 
    // first int parameter is passd in r24/r25
    __asm volatile(                   // clocks
       "1:  cp    r1, r24     \t\n"   // 1
       "    cpc   r1, r25     \t\n"   // 1
       "    brge  3f          \t\n"   // 1
       "    rcall 3f          \t\n"   // 7
       "    rjmp  2f          \t\n"   // 2
       "2:  sbiw  r24, 0x01   \t\n"   // 2
       "    rjmp  1b          \t\n"   // 2
       "3:                    \t\n"   // 16 total
   ); 
    
}

static void wait_ticks( uint_fast64_t n ){
//   n = 17'000ULL;	
   while( n > 0 ){
      wait_us_asm( 1 );
      n--;  
 }

   // this doesn't work. Why??
   while( n > 0 ){
      //int t = std::min( (uint_fast64_t)n, 10'000ULL );
	  unsigned int t = 10'000;
	  if( t > n ){ t = n; }
      wait_us_asm( t );
      n -= t;  
 }
}  
   
template< port p, uint32_t pin >
using pin_in_out = pin_in_out_direct_base< _pin_in_out< p, pin > >;	

}; // struct atmega328

}; // namespace hwcpp
