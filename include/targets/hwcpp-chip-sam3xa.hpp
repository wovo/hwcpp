// ==========================================================================
//
// file : target-sam3xa-chip.hpp
//
// HAL for atsam3x
//
// ==========================================================================

#include "hwcpp-all.hpp"

// the atmel header files use 'register', which is removed in C++17
#define register 
#include "sam.h"
#undef register

// the implementation of CPU clock speed switching
#include "targets/hwcpp-chip-sam3xa.inc"

namespace hwcpp {
    
template< uint_fast64_t clock >    
struct chip_sam3xa {
	
	
// ==========================================================================
//
// PUBLIC
//
// chip initialization
//
// ==========================================================================	
    
static void init(){
	
   // don't do this over and over	
   _HWCPP_RUN_ONCE;	
   
   // disable the watchdog     
   WDT->WDT_MR = WDT_MR_WDDIS;     
   
   // enable the clocks to all GPIO blocks
   PMC->PMC_PCER0 = ( 0x3F << 11 );
   
   // start the SysTick timer, counting at the CPU clock
   SysTick->CTRL  = 0;         // stop the timer
   SysTick->LOAD  = 0xFFFFFF;  // use its as a 24-bit timer
   SysTick->VAL   = 0;         // clear the timer
   SysTick->CTRL  = 5;         // start the timer, 1:1   
   
   if constexpr ( clock == 8'000'000 ){
	   
      // this is the default	   
	   
   } else if constexpr ( clock == 84'000'000 ){
	   
      // set flash timing	 
      EFC0->EEFC_FMR = EEFC_FMR_FWS( 5 );
      EFC1->EEFC_FMR = EEFC_FMR_FWS( 5 );     
	  
      // switch to 84 Mhz
      sam3xa::SystemInit();
     
   } else {	   
      static_assert( 
         clock == 84'000'000, 
         "Only 12 MHz (external 12 MHz crystal) "
		 "or 84 MHz (external 12 MHz crystal, PLL) "
		 "are supported for sam3xa.");   
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
   a = 0x400E0E00U,
   b = 0x400E1000U,
   c = 0x400E1200U,
   d = 0x400E1400U
};

template< _port P, uint32_t pin >
struct _pin_in_out_foundation : 
   _pin_in_out_root 
{
	
   static void HWLIB_INLINE init(){
      hwcpp::chip_sam3xa< clock >::init();
   }
   
   static void HWLIB_INLINE direction_set_direct( pin_direction d ){
      ( ( d == pin_direction::input )
         ? ((Pio*)P)->PIO_ODR 
         : ((Pio*)P)->PIO_OER 
      )  = ( 0x1U << pin );
   }
   
   static void HWLIB_INLINE set_direct( bool v ){
      ( v 
         ? ((Pio*)P)->PIO_SODR 
         : ((Pio*)P)->PIO_CODR 
      )  = ( 0x1U << pin );	   
   }

   static bool HWLIB_INLINE get_direct(){
      return ( ((Pio*)P)->PIO_PDSR & ( 0x1U << pin ) ) != 0;	   
   }
};

// ========= GPIO constructor used in the actual targets

template< _port P, uint32_t pin >
using _pin_in_out = _box_builder< _pin_in_out_foundation< P, pin > >;


// ==========================================================================
//
// LIBRARY-INTERNAL
//
// ADC
//
// ==========================================================================

// ========= ADC pin initialization
	
static void _adc_init_common(){
    
   hwcpp::chip_sam3xa< clock >::init();
        
   // enable the clock to the ADC (peripheral # 37, in the 2nd PCER)
   PMC->PMC_PCER1 = ( 0x01 << ( 37 - 32 ) );
         
   // timing: use defaults
   ADC->ADC_MR = 0;
      
   // disable all interrupts
   ADC->ADC_IDR = 0x1FFF'FFFF;
      
   // set gains to 1, offsets to 0
   ADC->ADC_CGR = 0;
   ADC->ADC_COR = 0;
}

// ========= ADC read

static uint_fast16_t _adc_get_common( 
   uint_fast8_t channel, 
   uint_fast32_t mask 
){
	
   // enable the channel
   ADC->ADC_CHER = mask;         

   // dummy conversion - can this be avoided?
   ADC->ADC_CR = 0x0000'0002;
   while( ( ADC->ADC_ISR & mask ) == 0 ){}
   (void)ADC->ADC_CDR[ channel ];

   // start the conversion 
   ADC->ADC_CR = 0x0000'0002;
      
   // wait for the conversion to complete
   while( ( ADC->ADC_ISR & mask ) == 0 ){}

   // get conversion results
   auto x = ADC->ADC_CDR[ channel ] & 0x0000'0FFF;
 
   // disable the channel - doesn't work??
   ADC->ADC_CHDR = 0x01 << channel;   
      
   // return the conversion result
   return x;	
}

// ========= flyweight interface to the init and read functions

template< uint_fast64_t channel >
struct _pin_adc_foundation :
   _adc_root< 12 >
{
	
   using _value_type = typename _adc_root< 12 >::value_type;
	
   static void HWLIB_INLINE init(){
	  _adc_init_common(); 
   }

   static _value_type HWLIB_INLINE get_direct(){
      return _adc_get_common( channel, 0x01 << channel );
   }	      
};

// ========= ADC pin constructor used in the actual targets

template< uint_fast64_t pin >
using pin_adc = _adc_builder< _pin_adc_foundation< pin > >;


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
	
   static inline Uart * hw_uart = UART;
	
   static void init(){
       
      hwcpp::chip_sam3xa< clock >::init();       

      // enable the clock to port A
      PMC->PMC_PCER0 = 1 << ID_PIOA;
       
      // disable PIO Control on PA9 and set up for Peripheral A
      PIOA->PIO_PDR   = PIO_PA8; 
      PIOA->PIO_ABSR &= ~PIO_PA8; 
      PIOA->PIO_PDR   = PIO_PA9; 
      PIOA->PIO_ABSR &= ~PIO_PA9; 

      // enable the clock to the UART
      PMC->PMC_PCER0 = ( 0x01 << ID_UART );

      // Reset and disable receiver and transmitter.
      hw_uart->UART_CR = 
	     UART_CR_RSTRX 
		 | UART_CR_RSTTX 
		 | UART_CR_RXDIS 
		 | UART_CR_TXDIS;

      hw_uart->UART_BRGR = 5241600 / BMPTK_BAUDRATE; 

      // No parity, normal channel mode.
      hw_uart->UART_MR = UART_MR_PAR_NO;

      // Disable all interrupts.	  
      hw_uart->UART_IDR = 0xFFFFFFFF;   

      // Enable the receiver and thes trasmitter.
      hw_uart->UART_CR = UART_CR_RXEN | UART_CR_TXEN;      
   }	

   static bool HWLIB_INLINE read_blocks(){	
      return ( hw_uart->UART_SR & 0x01 ) == 0;
   }

   static char HWLIB_INLINE read_direct_unchecked(){
      return hw_uart->UART_RHR; 
   }

   static bool HWLIB_INLINE write_blocks(){
      return ( hw_uart->UART_SR & 0x02 ) == 0;
   }

   static void HWLIB_INLINE write_direct_unchecked( char c ){
      hw_uart->UART_THR = c;
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

// ========= SysTick ==========

static inline uint32_t    last_low = 0;
static inline ticks_type  high = 0;

static ticks_type now_ticks(){
   
   // the timer ticks down, but we want an up counter
   uint32_t low = 0xFFFFFF - ( SysTick->VAL & 0xFFFFFF );
   if( low < last_low ){
   
       // the timer rolled over, so increment the high part
      high += 0x1ULL << 24;
   }
   last_low = low;

   return ( low | high ); 
} 

// ========= waiting ==========

struct _clocking_foundation :
   _timing_clocking_foundation< std::ratio< clock, 1 > >
{
   static void init(){
      chip_sam3xa< clock >::init();
   }	
   
   static ticks_type now_ticks(){
      return chip_sam3xa< clock >::now_ticks();
   }      
   
   static void HWLIB_NO_INLINE  wait_ticks_function( ticks_type n ){     
      ticks_type t = now_ticks() + n;
      while( now_ticks() < t ){}
   }  
   
   static constexpr auto inline_delay_max = 6;
   template< ticks_type t >
   static void HWLIB_INLINE inline_delay(){
              
      if constexpr ( t  == 0 ){
         // nothing
         
      } else if constexpr ( t == 1 ){
         __asm volatile(                  
            "   nop     \t\n"  
         );           
              
      } else if constexpr ( t == 2 ){
         __asm volatile(                  
            "   nop     \t\n"  
            "   nop     \t\n"  
         ); 
		 
      } else if constexpr ( t == 3 ){
         __asm volatile(                  
            "   nop     \t\n"  
            "   nop     \t\n"  
            "   nop     \t\n"  
         ); 
		 
      } else if constexpr ( t == 4 ){
         __asm volatile(                  
            "   nop     \t\n"  
            "   nop     \t\n"  
            "   nop     \t\n"  
            "   nop     \t\n"  
         ); 
		 
      } else if constexpr ( t == 5 ){
         __asm volatile(                  
            "   nop     \t\n"  
            "   nop     \t\n"  
            "   nop     \t\n"  
            "   nop     \t\n"  
            "   nop     \t\n"  
         ); 
		 
      } else if constexpr ( t == 6 ){
         __asm volatile(                  
            "   nop     \t\n"  
            "   nop     \t\n"  
            "   nop     \t\n"  
            "   nop     \t\n"  
            "   nop     \t\n"  
            "   nop     \t\n"  
         ); 
		 
      }
   }
   
   static void HWLIB_NO_INLINE busy_delay( int32_t n ){
      __asm volatile(                  
         "   .align 4           \t\n"  
         "1: subs.w  r0, #3     \t\n"  
         "   bgt 1b             \t\n"  
         : : "r" ( n )          // uses (reads) n         
      ); 
   }
   
   template< ticks_type t >
   static void HWLIB_INLINE wait_ticks_template(){   
       
      if constexpr ( t <= inline_delay_max ){
         inline_delay< t >();    
      
      } else 
          if constexpr ( t < 2'000 ){
          busy_delay( ((int32_t) t ) - 20 );
          
      } else {
          wait_ticks_function( t );
          
      }   
   }      
};

using waiting = _timing_waiting_builder< _clocking_foundation >;
using clocking = _timing_clocking_builder< _clocking_foundation >;

}; // struct chip_sam3xa

}; // namespace hwcpp





