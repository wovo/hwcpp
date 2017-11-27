// ============================================================================
//
// file : target-stm32f103.hpp
//
// HAL for stm32f103 chip target
//
// ============================================================================

#include "chip-stm32f103.hpp"

namespace hwcpp {
    
template< int clock = 100 >
struct target_stm32f103 :
   chip_stm32f103    
{       

}; // template<...> struct target_stm32f103
	
using target = target_stm32f103; 
   
}; // namespace hwcpp




