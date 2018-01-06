// ==========================================================================
//
// file : target-stm32f103.hpp
//
// HAL for stm32f103 chip target
//
// ==========================================================================

#include "hwcpp-chip-stm32f103.hpp"

namespace hwcpp {
    
template< uint64_t clock = 72'000'000 >
struct target_stm32f103 :
   chip_stm32f103    
{       
   using chip = chip_stm32f103< clock >;

   using waiting = typename chip::waiting;	  
   using timing = waiting;	  

}; // template<...> struct target_stm32f103
	
using target = target_stm32f103; 
   
}; // namespace hwcpp




