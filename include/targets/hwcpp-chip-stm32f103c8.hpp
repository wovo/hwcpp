// ==========================================================================
//
// file : hwcpp-chip-stm32f103.hpp
//
// HAL for the stm32f103 chip
//
// ==========================================================================

#include "hwcpp-all.hpp"

// the STM header files use 'register', which is removed in C++17
#define register 
#include "stm32f103x6.h"
#undef register

namespace hwcpp {
    
// Running from RAM seems to take twice the expected time,
// but that seems to be consistent.  
// Alignment doesn't seem to affect this.
// Note: can't be static inside the struct, because 
// that causes the RAM attribute to be (silently) ignored.
void HWLIB_RAM_FUNCTION stm32_ram_busy_delay( int32_t n ){
   __asm volatile(                  
      "1: subs.w  r0, #6     \t\n"  
      "   bgt 1b             \t\n"  
      : : "r" ( n )          // uses (reads) n         
   ); 
}   

template< uint64_t clock >
struct chip_stm32f103c8 {
	
static constexpr uint64_t HWLIB_INLINE mask( int size ){
   return ( 0x01 << ( size + 1 )) - 1;
}

static void HWLIB_INLINE field_set( auto & v, int start, int size, int value ){
   v = ( v & ( mask( start) << size )) | ( value << start );
}


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
   
   //field_set( FLASH->ACR, 0, 6, 0x10 );   
   //field_set( RCC->CFGR, 0, 16, 0x0400 );
   
   if constexpr ( clock == 8'000'000 ){
	   
      // default HSI clock	   
   
   } else if constexpr ( clock == 72'000'000 ){
	   
      // two flash wait states
      field_set( FLASH->ACR, 0, 6, 0x12 );

      // turn on hse and wait for it
      field_set( RCC->CR, 16, 1, 0x1 );
      while( ( RCC->CR & ( 0x1 << 17 ) ) == 0 ){};
   
      // HSI, sysclk is CPU clock, AHB=0, APB=1
      field_set( RCC->CFGR, 0, 16, 0x0400 );
   
      // set PLL source = HSE, MUL=9
      field_set( RCC->CFGR, 16, 7, 0x1D );
   
      // enable PLL and  wait for it
      field_set( RCC->CR, 24, 1, 0x1 );
      while( ( RCC->CR & ( 0x1 << 25 ) ) == 0 ){};
   
      // use PLL as clock
      field_set( RCC->CFGR, 0, 2, 0x2 );
	   
   } else {	   
      static_assert( 
         clock == 8'000'000, 
         "Only 8 and 64 MHz are supported for stm32f103." );   
   }		 
	  	
   // enable the clock to all GPIO ports	
   RCC->APB2ENR |= 
      RCC_APB2ENR_IOPAEN | RCC_APB2ENR_IOPBEN | 
      RCC_APB2ENR_IOPCEN | RCC_APB2ENR_IOPDEN |
      RCC_APB2ENR_AFIOEN |
      RCC_APB2ENR_USART1EN;	
	  
   // start the systick timer      
   SysTick->CTRL  = 0;         // stop the timer
   SysTick->LOAD  = 0xFFFFFF;  // use its as a 24-bit timer
   SysTick->VAL   = 0;         // clear the timer
   SysTick->CTRL  = 5;         // start the timer, 1:1	  
}
   

// ==========================================================================
//
// LIBRARY-INTERNAL
//
// GPIO
//
// ==========================================================================

enum class _port {
   a,
   b, 
   c, 
   d
};	

static constexpr GPIO_TypeDef * _port_block[] = { 
   (GPIO_TypeDef *) GPIOA_BASE,
   (GPIO_TypeDef *) GPIOB_BASE,
   (GPIO_TypeDef *) GPIOC_BASE,
   (GPIO_TypeDef *) GPIOD_BASE
};

template< _port p, uint32_t pin >
struct _pin_in_out_foundation : 
   _pin_in_out_root 
{
	
   static constexpr auto mask           = 0x01 << pin;
   static constexpr auto config_offset  = 4 * ( pin % 8 );
	
   static void config( uint32_t v ){
      auto volatile & config_word = 
	     ( pin < 8 ) 
		    ? _port_block[ (int) p ]->CRL 
			: _port_block[ (int) p ]->CRH;	   
      config_word = 
	     ( v << config_offset ) 
		 | ( config_word & ~( 0x0F << config_offset ));
   }	   
	
   static void HWLIB_INLINE init(){
      hwcpp::chip_stm32f103c8< clock >::init();   
   }
  
   static void HWLIB_INLINE set_direct( bool v ){
      _port_block[ (int) p ]->BSRR = ( v ? mask : ( mask << 16 ));	   
   }

   static bool HWLIB_INLINE get_direct(){
      return (( _port_block[ (int) p ]->IDR & mask ) != 0 );   
   }

   static void HWLIB_INLINE direction_set_direct( pin_direction d ){
      if( d == pin_direction::input ){
         config( 0x08 );
         set_direct( 1 ); // pull-up
      } else {
         config( 0x03 );
      }
   }
   
};

// ========= GPIO constructor used in the actual targets

template< _port p, uint32_t pin >
using _pin_in_out = _box_builder< _pin_in_out_foundation< p, pin > >;	


// ==========================================================================
//
// LIBRARY-INTERNAL
//
// UART
//
// ==========================================================================

template< uint32_t uart_address >
struct _uart_foundation :
   _stream_out_root< char >,
   _stream_in_root< char >
{
    
   using value_type = char; // would otherwise be ambiguous
   static constexpr auto uart = (USART_TypeDef *) uart_address;

   static void init(){   
       
      // don't do this over and over	
      _HWCPP_RUN_ONCE;       
   
      //gpio_set_outmode(GPIO_PORT_A, GPIO_PIN9, GPIO_ALT_PUSHPULL, GPIO_OUT_50M);

      if constexpr ( uart_address == USART1_BASE ){
      
         // Config Alternate Function
         AFIO->MAPR     &= ~(1<<2);

         // Config GPIO A
         GPIOA->CRH     &= ~(0xFFUL << 4);
         GPIOA->CRH     |=  (0x0BUL << 4);
         GPIOA->CRH     |=  (0x04UL << 8);      

      } else {

         // Config Alternate Function
         AFIO->MAPR     &= ~(1<<3);

         // Config GPIO A
         GPIOA->CRL     &= ~(0xFFUL << 4);
         GPIOA->CRL     |=  (0x0BUL << 4);
         GPIOA->CRL     |=  (0x04UL << 8);      
      }

      uint32_t divider = clock / ( HWCPP_UART_BAUDRATE * 16 );
      uart->BRR = divider << 4;
      
      uart->CR3 = 0;
      uart->CR2 = 0;
      uart->CR1 = ( 0x1 << 13 ) | ( 0x1 << 3 ) | ( 0x1 << 2 );
   }

   static bool HWLIB_INLINE read_blocks(){
      return !( uart->SR & ( 0x1 << 5 ));
   }

   static char HWLIB_INLINE read_direct_unchecked(){
      return uart->DR;
   }

   static bool HWLIB_INLINE write_blocks(){
      return !( uart->SR & ( 0x1 << 7 ));
   }

   static void HWLIB_INLINE write_direct_unchecked( char c ){
       uart->DR = c;
   }   
};

using uu1 = _uart_foundation< (uint32_t) USART1_BASE >;
using uart1 = formatter< _stream_builder< uu1 >>;

using uu2 = _uart_foundation< (uint32_t) USART1_BASE >;
using uart2 = formatter< _stream_builder< uu2 >>;

//using uart1 = formatter< _stream_builder< _uart_foundation< (uint32_t) USART1_BASE >>;
// using uart2 = formatter< _stream_builder< _uart_foundation< (uint32_t) USART2_BASE >>;
using uart  = uart1;


// ==========================================================================
//
// LIBRARY-INTERNAL
//
// timing
//
// ==========================================================================

// ========= SysTick ==========

static uint_fast64_t HWLIB_NO_INLINE now_ticks(){	
   
   static unsigned int last_low = 0;
   static unsigned long long int high = 0;

   // the timer ticks down, but we want an up counter
   unsigned int low = 0xFFFFFF - ( SysTick->VAL & 0xFFFFFF );
   if( low < last_low ){
   
      // the timer rolled over, so increment the high part
      high += 0x1ULL << 24;
   }
   last_low = low;

   // return the aggregated ticks value
   return ( low | high ); 
} 

// ========= waiting ==========

static void wait_ticks( uint_fast64_t n ){
   auto t = now_ticks() + n;
   while( now_ticks() < t ){}   
}   

struct _clocking_foundation :
   _timing_clocking_foundation< std::ratio< clock, 1 > >
{
   static void init(){
      chip_stm32f103c8< clock >::init();
   }
   
   static void wait_ticks_function( ticks_type n ){     
      ticks_type t = now_ticks() + n;
      while( now_ticks() < t ){}
   }  

   static constexpr auto inline_delay_max = 10;
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
		 
      } else if constexpr ( t == 7 ){
         __asm volatile(                  
            "   nop     \t\n"  
            "   nop     \t\n"  
            "   nop     \t\n"  
            "   nop     \t\n"  
            "   nop     \t\n"  
            "   nop     \t\n"  
            "   nop     \t\n"  
         ); 
		 
      } else if constexpr ( t == 8 ){
         __asm volatile(                  
            "   nop     \t\n"  
            "   nop     \t\n"  
            "   nop     \t\n"  
            "   nop     \t\n"  
            "   nop     \t\n"  
            "   nop     \t\n"  
            "   nop     \t\n"  
            "   nop     \t\n"  
         ); 
		 
      } else if constexpr ( t == 9 ){
         __asm volatile(                  
            "   nop     \t\n"  
            "   nop     \t\n"  
            "   nop     \t\n"  
            "   nop     \t\n"  
            "   nop     \t\n"  
            "   nop     \t\n"  
            "   nop     \t\n"  
            "   nop     \t\n"  
            "   nop     \t\n"  
         ); 
		 
      } else if constexpr ( t == 10 ){
         __asm volatile(                  
            "   nop     \t\n"  
            "   nop     \t\n"  
            "   nop     \t\n"  
            "   nop     \t\n"  
            "   nop     \t\n"  
            "   nop     \t\n"  
            "   nop     \t\n"  
            "   nop     \t\n"  
            "   nop     \t\n"  
            "   nop     \t\n"  
         ); 
		 
      }
   }   
   
   // NOT USED
   // This gives the expected timing at 8 MHz / FLASH 0 WS,
   // but at 72 MHz / 2 WS it seems to run at half speed.
   // 8 MHz / 2 WS gives an intermediate result.
   // Alignment doesn't seem to change the timing.
   // Hence to get consistent timing the same code is used, 
   // but run from RAM (stm32_ram_busy_delay).
   static void HWLIB_NO_INLINE stm32_flash_busy_delay( int32_t n ){
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
      
      } else if constexpr ( t < 2'000 ){
          stm32_ram_busy_delay( ((int32_t) t ) - 14 );
          
      } else {
          wait_ticks_function( t );
          
      }   
   }    
};

using waiting = _timing_waiting_builder< _clocking_foundation >;
using clocking = _timing_clocking_builder< _clocking_foundation >;

}; // struct stm32f103c8

}; // namespace hwcpp





