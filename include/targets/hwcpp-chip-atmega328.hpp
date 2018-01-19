// ==========================================================================
//
// file : hwcpp-chip-atmega328.hpp
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
    
extern "C" void HWLIB_NO_INLINE _hwlib_avr_ret(){}
    
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

   // don't do this over and over	
   _HWCPP_RUN_ONCE;	
    
   if constexpr ( clock == 20'000'000 ){
      // 20 MHz crystal	   
	  
   } else if constexpr ( clock == 16'000'000 ){
      // 16 MHz crystal	   
	  
   } else if constexpr ( clock == 8'000'000 ){
      // 16 MHz crystal	   
	  
   } else if constexpr ( clock == 1'000'000 ){
      // 1 MHz crystal	   
	  
   } else {
      static_assert( 
         clock == 0, 
         "Only 1 MHz (internal), "
		 "or 16 or 20 MHz (external crystal) "
		 "clock is supported for atmega328.");
   }		 

    // set up timer without prescaler (input=CPU clock)
    TCCR1B = 0x01;
  
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
   
static constexpr regs * port_in[] = { 
//   &PINA,
   &PINB,
   &PINC,
   &PIND
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
      return ( *port_in[ (int)p ] & ( 0x1U << pin ) ) != 0;
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
    
   using value_type = char; // would otherwise be ambiguous
	
   static void init(){   
	   
      // set baudrate	   
      uint64_t UBRR_VALUE = ((( clock / ( HWCPP_UART_BAUDRATE * 16UL ))) - 1 );
      UBRR0H = (uint8_t) ( UBRR_VALUE >> 8 );
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

using uart = formatter< _stream_builder< _uart_foundation >>;


// ==========================================================================
//
// LIBRARY-INTERNAL
//
// timing
//
// ==========================================================================

// ========= timer1

static inline uint16_t    last_low = 0;
static inline ticks_type  high = 0;

static ticks_type now_ticks(){

   uint16_t low = TCNT1L;
   low |= ( TCNT1H << 8 );

   if( low < last_low ){
   
       // the timer rolled over, so increment the high part
      high += 0x1ULL << 16;
   }
   last_low = low;

   return ( low | high ); 
} 

// ========= inline small delay

template< ticks_type n >
static void HWLIB_INLINE inline_small_delay(){
       
   static_assert( n < 16 );
       
   if constexpr ( n > 7 ){
      __asm volatile(                  
         "call _hwlib_avr_ret"     
      );        
   }

   constexpr ticks_type t = ( n % 8 );   
       
   if constexpr ( t  == 0 ){
      // nothing
         
   } else if constexpr ( t == 1 ){
      __asm volatile(                  
         "   nop     \t\n"  
      );           
              
   } else if constexpr ( t == 2 ){
      __asm volatile(                  
         "   rjmp 1f     \t\n"  
         "1:             \t\n"   
      );           
         
   } else if constexpr ( t == 3 ){
      __asm volatile(                  
         "   rjmp 1f     \t\n"  
         "1: nop         \t\n"   
      );           
         
   } else if constexpr ( t == 4 ){
      __asm volatile(                  
         "   rjmp 1f     \t\n"  
         "1: rjmp 2f     \t\n"   
         "2:             \t\n"   
      );           
         
   } else if constexpr ( t == 5 ){
      __asm volatile(                  
         "   rjmp 1f     \t\n"  
         "1: rjmp 2f     \t\n"   
         "2: nop         \t\n"   
      );           
         
   } else if constexpr ( t == 6 ){
      __asm volatile(                  
         "   rjmp 1f     \t\n"  
         "1: rjmp 2f     \t\n"   
         "2: rjmp 3f     \t\n"   
         "3:             \t\n"   
      );           
         
   } else if constexpr ( t == 7 ){
      __asm volatile(                  
         "   rjmp 1f     \t\n"  
         "1: rjmp 2f     \t\n"   
         "2: rjmp 3f     \t\n"   
         "3: nop         \t\n"   
      );           
         
   }
}

// ========= busy wait

// call overhead is LDI, LDI, CALL, CP, CPC, BRGE/t, RET => 15
static constexpr auto call_overhead = 15;
static constexpr auto chunk = 8192;
static constexpr auto one_loop = 7;

static void busy_wait_ticks_asm( int n ){ 
    // first int parameter is passd in r24/r25
    __asm volatile(                       // clocks
       "1:  cp    r1, r24         \t\n"   // 1
       "    cpc   r1, r25         \t\n"   // 1
       "    brge  2f              \t\n"   // 1
       "    sbiw  r24, 7          \t\n"   // 2 
       "    rjmp  1b              \t\n"   // 2
       "2:                        \t\n"   // 7 total
       : : "r" ( n )                      // uses (reads) n
   ); 
}

// ========= waiting foundation

struct _waiting_foundation :
   _timing_waiting_foundation< std::ratio< clock, 1 > >
{
   using chip = chip_atmega328< clock >;    
	
   static void init(){
      chip::init();
   }	

   static void HWLIB_NO_INLINE wait_ticks_function( ticks_type n ){     

      while( n > chunk ){
         chip::busy_wait_ticks_asm( chunk - call_overhead );
         n -= chunk;  
      }
      if( n > 0 ){
         chip::busy_wait_ticks_asm( n - call_overhead );
      }
   }  
   
   template< ticks_type t >
   static void HWLIB_INLINE wait_ticks_template(){
      if constexpr ( t < call_overhead ){    
          chip::inline_small_delay< t >();
          
      } else if constexpr ( t <= chunk ){  

         constexpr ticks_type remaining = t - call_overhead;
          
         chip::inline_small_delay< remaining % one_loop >();
         chip::busy_wait_ticks_asm( remaining - ( remaining % one_loop) );   
         
      } else {
         wait_ticks_function( t ); 
      }         
   };	  
};

// ========= clocking foundation

struct _clocking_foundation :
   _timing_clocking_foundation< std::ratio< clock, 1 > >
{
   using chip = chip_atmega328< clock >;      
	
   static void init(){
      chip::init();
   }	

   static ticks_type HWLIB_INLINE now_ticks(){
      return chip::now_ticks();
   }

   static void HWLIB_NO_INLINE  wait_ticks_function( ticks_type n ){     
      ticks_type t = now_ticks() + n;
      while( now_ticks() < t ){}
   } 
   
   template< ticks_type t >
   static void HWLIB_INLINE wait_ticks_template(){
      if constexpr ( t < call_overhead ){    
          chip::inline_small_delay< t >();
          
      } else if constexpr ( t <= 2'000 ){  

         constexpr ticks_type remaining = t - call_overhead;
          
         chip::inline_small_delay< remaining % one_loop >();
         chip::busy_wait_ticks_asm( remaining - ( remaining % one_loop) );   
         
      } else {
         wait_ticks_function( t ); 
      }         
   };	  
};

// ========= services

using waiting  = _timing_waiting_builder< _waiting_foundation >;   
using clocking = _timing_clocking_builder< _clocking_foundation >;   
using timing   = clocking;   

}; // struct atmega328

}; // namespace hwcpp
