// ============================================================================
//
// file : target-stm32f103.hpp
//
// HAL for stm32f103 chip target
//
// ============================================================================

#include "hwcpp-chip-stm32f103.hpp"

namespace hwcpp {
    
template< uint64_t clock = 8'000'000 >
struct target_stm32f103 :
   chip_stm32f103    
{       

   using waiting = timing_waiting< chip_stm32f103, long long int, MHz< 8 > >;  

}; // template<...> struct target_stm32f103
	
using target = target_stm32f103; 
   
}; // namespace hwcpp




