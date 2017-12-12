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
    
template< uint64_t clock >	
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
    
   if constexpr ( clock == 16'000'000 ){
      // 16 MHz crystal	   
	  
   } else {
      static_assert( 
         clock == 0, 
         "Only 16 MHz (crystal) "
		 "clock is supported for atmega328.");
   }		 
}
   

// ========= pin_in_out ==========

template< port p, uint32_t pin >
struct _pin_in_out {
	
   static void HWLIB_INLINE init(){
      hwcpp::chip_atmega328< clock >::init();
   }
   
   static void HWLIB_INLINE direction_set_direct( pin_direction d ){
      if( d == pin_direction::input ){
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

   static bool HWLIB_INLINE get_direct(){
      return ( *port_data[ (int)p ] & ( 0x1U << pin ) ) != 0;
   }
   
};

template< port p, uint32_t pin >
using pin_in_out = _pin_in_out_from_direct< _pin_in_out< p, pin > >;	


// ========= pin_adc ==========

template< uint_fast64_t pin >
struct _pin_adc {
	
   static void init(){
      hwcpp::chip_atmega328< clock >::init();
      
      // reference is AVCC
      ADMUX = 0x01 << REFS0;
	  
      // Enable the ADC and prescale
      ADCSRA = 7 | ( 0x01 << ADEN );	  
   }

   static uint_fast16_t get_direct(){
	   
      // select the ADC input pin 
      ADMUX = ( 0x01 << REFS0 ) | pin;

      // start the conversion.
      ADCSRA |= 0x01 << ADSC;

      // wait for the conversion to finish
      while ( (ADCSRA & ( 0x01 << ADSC )) != 0 ){}

      return ADCW;
   }
   
};

template< uint_fast64_t pin >
using pin_adc = _adc_from_direct< _pin_adc< pin >, 10 > ;


// ========= uart ==========

struct uart {
	
   static void init(){
      static bool init_done = false;
      if( init_done ){
         return;
      }
      init_done = true;	   
	   
      // set baudrate	   
      uint64_t UBRR_VALUE = ((( clock / ( BMPTK_BAUDRATE * 16UL ))) - 1 );
      UBRR0H = (uint8_t) (UBRR_VALUE>>8);
      UBRR0L = (uint8_t) UBRR_VALUE;
	  
	  // format : 8 data bits, no parity, 1 stop bit
      UCSR0C = 0x06;
	  
	  // enable rx and tx
	  UCSR0B = (1<<RXEN0)|(1<<TXEN0);
   }	

   static bool get_is_blocked(){
      init();	
      return !( UCSR0A & ( 0x01<<RXC0 ));
   }

   static char get(){
      // init() is not needed because get_is_blocked() does that
      while( get_is_blocked() ){}
      return UDR0; 
   }

   static bool put_is_blocked(){
      init();	
      return !( UCSR0A & ( 0x01 << UDRE0 ));
   }

   static void put( char c ){
      // init() is not needed because put_is_blocked() does that
      while( put_is_blocked() ){}
      UDR0 = c;
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
       : : "r" ( n )                  // reads n
   ); 
}

static void wait_ticks( uint_fast32_t n ){

/* doesn't work, why?? 
   while( n > 0 ){
      int t = std::min( n, 1024U );
      wait_us_asm( t );
      n -= t;  
   } 
*/
   const auto chunk = 8192;
   while( n > chunk ){
      wait_us_asm( chunk );
      n -= chunk;  
   }
   if( n > 0 ){
       wait_us_asm( n );
   }
}  

}; // struct atmega328

}; // namespace hwcpp
