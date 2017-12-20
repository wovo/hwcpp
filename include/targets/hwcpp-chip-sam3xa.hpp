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
   HWCPP_RUN_ONCE;	
   
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
	   
      // switch to 84 Mhz
      sam3xa::SystemInit();
     
      // set flash timing (?)	 
      EFC0->EEFC_FMR = EEFC_FMR_FWS(4);
      EFC1->EEFC_FMR = EEFC_FMR_FWS(4);     
	  
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
struct _pin_in_out_base : 
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
using _pin_in_out = _box_creator< _pin_in_out_base< P, pin > >;


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
struct _pin_adc_base :
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
using pin_adc = _adc_creator< _pin_adc_base< pin > >;


// ==========================================================================
//
// LIBRARY-INTERNAL
//
// UART
//
// ==========================================================================

struct _uart :
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

using uart = _stream_creator< _uart >;


// ==========================================================================
//
// LIBRARY-INTERNAL
//
// SysTick 
//
// ==========================================================================

struct _ticker :
   _ticker_root< uint_fast64_t, std::ratio< clock, 1 > >
{   

   static void init(){
      chip_sam3xa< clock >::init(); 	    
   }
   
   static uint_fast64_t now_ticks(){
   
      static unsigned int last_low = 0;
      static unsigned long long int high = 0;

      // the timer ticks down, but we want an up counter
      unsigned int low = 0xFFFFFF - ( SysTick->VAL & 0xFFFFFF );
      if( low < last_low ){
   
         // the timer rolled over, so increment the high part
         high += 0x1ULL << 24;
      }
      last_low = low;

      return ( low | high ); 
   }  
};

using ticker = _ticker_creator< _ticker >;   

}; // struct chip_sam3xa

}; // namespace hwcpp





