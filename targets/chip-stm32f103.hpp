// ============================================================================
//
// file : stm32f103.hpp
//
// HAL for the stm32f103 AVR chip
//
// ============================================================================

#include "hwcpp-all.hpp"

// the STM header files use 'register', which is removed in C++17
#define register 
#include "stm32f103x6.h"
#undef register

namespace hwcpp {
    
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
   
static void HWLIB_INLINE init(){
	
   // enable the clock to all GPIO ports	
   RCC->APB2ENR |= 
      RCC_APB2ENR_IOPAEN | RCC_APB2ENR_IOPBEN | 
      RCC_APB2ENR_IOPCEN | RCC_APB2ENR_IOPDEN;	
}
   

// ========= pin_in_out ==========

template< port p, uint32_t pin >
struct _pin_in_out {
	
   static constexpr auto mask           = 0x01 << pin;
   static constexpr auto config_offset  = 4 * ( pin % 8 );
	
   static void config( uint32_t v ){
      auto volatile & config_word = 
	     ( pin < 8 ) 
		    ? port_block[ (int) p ]->CRL 
			: port_block[ (int) p ]->CRH;	   
      config_word &= ~( 0xF << config_offset );
      config_word |= ( v << config_offset );  	   
   }	   
	
   static void HWLIB_INLINE init(){
      hwcpp::chip_stm32f103::init();   
   }
  
   static void HWLIB_INLINE direction_set_direct( direction d ){
      config( ( d == direction::input ) ? 0x08 : 0x03 );
   }
   
   static void HWLIB_INLINE set_direct( bool v ){
      port_block[ (int) p ]->BSRR = ( v ? mask : ( mask << 16 ));	   
   }

   static int HWLIB_INLINE get_direct( bool v ){
      return (( port_block[ (int) p ]->IDR & mask ) != 0 );   
   }
};

template< port p, uint32_t pin >
using pin_in_out = pin_in_out_direct_base< _pin_in_out< p, pin > >;	

}; // struct stm32f103

}; // namespace hwcpp





