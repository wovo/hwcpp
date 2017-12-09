// ============================================================================
//
// file : target-sam3xa-chip.hpp
//
// HAL for atsam3x, common for the bare chip and the arduino due
//
// ============================================================================

#include "hwcpp-all.hpp"

// the atmel header files use 'register', which is removed in C++17
#define register 
#include "sam.h"
#undef register

// the implementation of CPU clock speed switching
#include "chip-sam3xa.inc"

namespace hwcpp {
    
struct chip_sam3xa {
    
static void init(){
   static bool done = false;
   if( done ){
      return; 
   }       
   done = true;
    
   // disable the watchdog     
   WDT->WDT_MR = WDT_MR_WDDIS;     
   
   // enable the clocks to all GPIO blocks
   PMC->PMC_PCER0 = ( 0x3F << 11 );
   
   // switch to 84 Mhz
   sam3xa::SystemInit();
     
   // set flash timing (?)	 
   EFC0->EEFC_FMR = EEFC_FMR_FWS(4);
   EFC1->EEFC_FMR = EEFC_FMR_FWS(4);      
  
   // start the SysTick timer aT 84 MHz
   SysTick->CTRL  = 0;         // stop the timer
   SysTick->LOAD  = 0xFFFFFF;  // use its as a 24-bit timer
   SysTick->VAL   = 0;         // clear the timer
   SysTick->CTRL  = 5;         // start the timer, 1:1   
}    
	
enum class pio {
   a = 0x400E0E00U,
   b = 0x400E1000U,
   c = 0x400E1200U,
   d = 0x400E1400U
};

// ========= pin_in_out ==========

template< pio P, uint32_t pin >
struct _pin_in_out {
	
   static void HWLIB_INLINE init(){
      hwcpp::chip_sam3xa::init();
   }
   
   static void HWLIB_INLINE direction_set_direct( direction d ){
      ( ( d == direction::input )
         ?  ((Pio*)P)->PIO_ODR 
         :  ((Pio*)P)->PIO_OER 
      )  = ( 0x1U << pin );
   }
   
   static void HWLIB_INLINE set_direct( bool v ){
      ( v 
         ?  ((Pio*)P)->PIO_SODR 
         :  ((Pio*)P)->PIO_CODR 
      )  = ( 0x1U << pin );	   
   }

   static bool HWLIB_INLINE get_direct(){
      return ( ((Pio*)P)->PIO_PDSR & ( 0x1U << pin ) ) != 0;	   
   }
};

template< pio P, uint32_t pin >
using pin_in_out = _pin_in_out_from_direct< _pin_in_out< P, pin > >;	

// ========= pin_adc ==========
/*
struct ad_seq_type {
   uint32_t seq1;
   uint32_t seq2;
};

const ad_seq_type & ad_seq_info( uint32_t channel ){
    
   static constexpr uint32_t n_seq = 14;
    
   static const ad_seq_type ad_seq_array[ n_seq ] = {
      {  0xFFFF'FFF0, 0xFFFF'FFFF },   // 0
      {  0xFFFF'FF1F, 0xFFFF'FFFF },   // 1
      {  0xFFFF'F2FF, 0xFFFF'FFFF },   // 2
      {  0xFFFF'3FFF, 0xFFFF'FFFF },   // 3
      {  0xFFF4'FFFF, 0xFFFF'FFFF },   // 4
      {  0xFF5F'FFFF, 0xFFFF'FFFF },   // 5
      {  0xF6FF'FFFF, 0xFFFF'FFFF },   // 6
      {  0x7FFF'FFFF, 0xFFFF'FFFF },   // 7
      {  0xFFFF'FFFF, 0xFFFF'FFF8 },   // 8
      {  0xFFFF'FFFF, 0xFFFF'FF9F },   // 9
      {  0xFFFF'FFFF, 0xFFFF'FAFF },   // 10
      {  0xFFFF'FFFF, 0xFFFF'BFFF },   // 11
      {  0xFFFF'FFFF, 0xFFFC'FFFF },   // 12   
      {  0xFFFF'FFFF, 0xFFDF'FFFF }    // 13  
   };
   
   if( channel >= n_seq ){
      HWLIB_PANIC_WITH_LOCATION;
   }   
   return ad_seq_array[ channel ];
} 

enum class adcp {
   a = 0x400E0E00U,
   b = 0x400E1000U
};

*/

static void adc_init_common(){
   hwcpp::chip_sam3xa::init();
        
   // enable the clock to the ADC (peripheral # 37, in then 2nd PCER)
   PMC->PMC_PCER1 = ( 0x01 << ( 37 - 32 ) );
         
   // timing
   ADC->ADC_MR = 0;
		auto xx = 0 << 8    //  clock prescaler
      |   15 << 16   // startup clocks
      |    3 << 20   // settling clocks
      |    3 << 24   // tracking clocks
      |    3 << 28   // transfer
      | 0x00 << 31;  // user sequence enabled  
	  (void)xx;
      
   // disable all interrupts
   ADC->ADC_IDR = 0x1FFF'FFFF;
      
   // set gains to 1, offsets to 0
   ADC->ADC_CGR = 0;
   ADC->ADC_COR = 0;
}

template< uint32_t channel >
struct pin_adc : 
   adc< 12 > 
{
	
   static void init(){
	  adc_init_common(); 
	   
      // enable this specific channel
      ADC->ADC_CHER = 0x01 << channel;      
   }

   static uint_fast16_t get(){

      // start the conversion 
      ADC->ADC_CR = 0x0000'0002;
      
      // wait for the conversion to complete
      // should wait on some flag!!
      //hwlib::wait_us( 100 );   
for( volatile int i = 0; i < 1'000; ++i )  {}
 
      // return the conversion result
      return ADC->ADC_CDR[ channel ] & 0x0000'0FFF;
   }
   
};

// ========= uart ==========

struct uart {
	
   static inline Uart * hw_uart = UART;
	
   static void init(){
      static bool init_done = false;
      if( init_done ){
         return;
      }
      init_done = true;

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
       hw_uart->UART_CR = UART_CR_RSTRX | UART_CR_RSTTX | UART_CR_RXDIS | UART_CR_TXDIS;

       // Set the baudrate to 115200.
       //hw_uart->UART_BRGR = 45; // MASTER_CLK_FREQ / (16 * 45) = 116666 (close enough).
       //uart->UART_BRGR = 546; // For ~9600 baud.
       hw_uart->UART_BRGR = 5241600 / BMPTK_BAUDRATE; 

       // No parity, normal channel mode.
       hw_uart->UART_MR = UART_MR_PAR_NO;

       // Disable all interrupts.	  
       hw_uart->UART_IDR = 0xFFFFFFFF;   

       // Enable the receiver and thes trasmitter.
       hw_uart->UART_CR = UART_CR_RXEN | UART_CR_TXEN;      
   }	

   static bool get_is_blocked(){
      init();	
      return ( hw_uart->UART_SR & 0x01 ) == 0;
   }

   static char get(){
      // init() is not needed because get_is_blocked() does that
      while( get_is_blocked() ){}
      return hw_uart->UART_RHR; 
   }

   static bool put_is_blocked(){
      init();	
      return ( hw_uart->UART_SR & 0x02 ) == 0;
   }

   static void put( char c ){
      // init() is not needed because put_is_blocked() does that
      while( put_is_blocked() ){}
      hw_uart->UART_THR = c;
   }
   	
};

// ========= SysTick ==========

static uint_fast64_t now_ticks(){
	
   init();	
   
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

static void wait_ticks( uint_fast64_t n ){
   auto t = now_ticks() + n;
   while( now_ticks() < t ){}   
}   

}; // struct chip_sam3xa

}; // namespace hwcpp





