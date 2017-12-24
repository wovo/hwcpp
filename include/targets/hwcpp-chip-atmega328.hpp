// ==========================================================================
//
// file : hwcpp-chipo-atmega328.hpp
//
// HAL for the atmega328 AVR chip
//
// ==========================================================================

#include "hwcpp-all.hpp"

// the atmel header files use 'register', which is removed in C++17
#define register 
#include "io.h"
#undef register

namespace hwcpp {
    
template< uint64_t clock >	
struct chip_atmega328 {
	

// ==========================================================================
//
// PUBLIC
//
// chip initialization
//
// ==========================================================================	

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
   
   
// ==========================================================================
//
// LIBRARY-INTERNAL
//
// GPIO
//
// ==========================================================================

enum class _port {
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

template< _port p, uint32_t pin >
struct _pin_in_out_foundation : 
   _pin_in_out_root 
{
	
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

// ========= GPIO constructor used in the actual targets

template< _port p, uint32_t pin >
using pin_in_out = _box_builder< _pin_in_out_foundation< p, pin > >;	


// ==========================================================================
//
// LIBRARY-INTERNAL
//
// ADC
//
// ==========================================================================

template< uint_fast64_t pin >
struct _pin_adc_foundation :
   _adc_root< 10 >
{
	
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

// ========= ADC pin constructor used in the actual targets

template< uint_fast64_t pin >
using pin_adc = _adc_builder< _pin_adc_foundation< pin > > ;


// ==========================================================================
//
// LIBRARY-INTERNAL
//
// UART
//
// ==========================================================================


struct _uart_foundation :
   _stream_out_root< char >,
   _stream_in_root< char >
{
	
   static void init(){   
	   
      // set baudrate	   
      uint64_t UBRR_VALUE = ((( clock / ( BMPTK_BAUDRATE * 16UL ))) - 1 );
      UBRR0H = (uint8_t) (UBRR_VALUE>>8);
      UBRR0L = (uint8_t) UBRR_VALUE;
	  
	  // format : 8 data bits, no parity, 1 stop bit
      UCSR0C = 0x06;
	  
	  // enable rx and tx
	  UCSR0B = (1<<RXEN0)|(1<<TXEN0);
   }	

   static bool HWLIB_INLINE read_blocks(){
      return !( UCSR0A & ( 0x01<<RXC0 ));
   }

   static char HWLIB_INLINE read_direct_unchecked(){
      return UDR0; 
   }

   static bool HWLIB_INLINE write_blocks(){
      return !( UCSR0A & ( 0x01 << UDRE0 ));
   }

   static void HWLIB_INLINE write_direct_unchecked( char c ){
      UDR0 = c;
   }   
};

using uart = _stream_builder< _uart_foundation >;


// ==========================================================================
//
// LIBRARY-INTERNAL
//
// timing
//
// ==========================================================================

struct _waiting :
   _waiting_root< uint_fast32_t, std::ratio< clock, 16 > >
{

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

      const auto chunk = 8192;
      while( n > chunk ){
         wait_us_asm( chunk );
         n -= chunk;  
      }
      if( n > 0 ){
         wait_us_asm( n );
      }
   }  
};

using waiting = _waiting_creator< _waiting >;   

}; // struct atmega328

}; // namespace hwcpp
