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
    
template< uint64_t clock >
struct chip_stm32f103 {
	
enum class port {
   a,
   b, 
   c, 
   d
};	

static constexpr GPIO_TypeDef * port_block[] = { 
   (GPIO_TypeDef *) GPIOA_BASE,
   (GPIO_TypeDef *) GPIOB_BASE,
   (GPIO_TypeDef *) GPIOC_BASE,
   (GPIO_TypeDef *) GPIOD_BASE
};
   
static void init(){
   static bool done = false;
   if( done ){
      return; 
   }       
   done = true;	
   
   static_assert( 
      clock == 8'000'000, 
      "Only 8 MHz clock is supported for stm32f103." );   
	
   // enable the clock to all GPIO ports	
   RCC->APB2ENR |= 
      RCC_APB2ENR_IOPAEN | RCC_APB2ENR_IOPBEN | 
      RCC_APB2ENR_IOPCEN | RCC_APB2ENR_IOPDEN;	
	  
   // start the systick timer      
   SysTick->CTRL  = 0;         // stop the timer
   SysTick->LOAD  = 0xFFFFFF;  // use its as a 24-bit timer
   SysTick->VAL   = 0;         // clear the timer
   SysTick->CTRL  = 5;         // start the timer, 1:1	  
}
   

// ========= pin_in_out ==========

template< port p, uint32_t pin >
struct _pin_in_out : 
   _pin_in_out_root 
{
	
   static constexpr auto mask           = 0x01 << pin;
   static constexpr auto config_offset  = 4 * ( pin % 8 );
	
   static void config( uint32_t v ){
      auto volatile & config_word = 
	     ( pin < 8 ) 
		    ? port_block[ (int) p ]->CRL 
			: port_block[ (int) p ]->CRH;	   
      config_word = 
	     ( v << config_offset ) 
		 | ( config_word & ~( 0xF << config_offset ));
   }	   
	
   static void HWLIB_INLINE init(){
      hwcpp::chip_stm32f103< clock >::init();   
   }
  
   static void HWLIB_INLINE direction_set_direct( pin_direction d ){
      config( ( d == pin_direction::input ) ? 0x08 : 0x03 );
   }
   
   static void HWLIB_INLINE set_direct( bool v ){
      port_block[ (int) p ]->BSRR = ( v ? mask : ( mask << 16 ));	   
   }

   static bool HWLIB_INLINE get_direct(){
      return (( port_block[ (int) p ]->IDR & mask ) != 0 );   
   }
};

template< port p, uint32_t pin >
using pin_in_out = _box_creator< _pin_in_out< p, pin > >;	


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

   // return the aggregated ticks value
   // the counter runs at 84 MHz 
   return ( low | high ); 
} 

static void wait_ticks( uint_fast64_t n ){
   auto t = now_ticks() + n;
   while( now_ticks() < t ){}   
}   

}; // struct stm32f103

}; // namespace hwcpp





