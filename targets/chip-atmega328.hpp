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

template< port p, uint32_t pin >
using pin_in_out = pin_in_out_direct_base< _pin_in_out< p, pin > >;	

}; // struct atmega328

}; // namespace hwcpp





