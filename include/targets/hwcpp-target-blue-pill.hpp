// ============================================================================
//
// file : hwcpp-target-blue-pill.hpp
//
// HAL for the blue pill board target
//
// ============================================================================

#include "hwcpp-chip-stm32f103.hpp"

namespace hwcpp {
    
template< uint64_t clock >
struct target_blue_pill :
   chip_stm32f103    
{       
    
   using led = invert< chip_stm32f103::pin_in_out< chip_stm32f103::port::c, 13 > >;
   
   using waiting = timing_waiting< chip_stm32f103, long long int, MHz< 8 > >;   
   
}; // template<...> struct target_blue_pill

template< uint64_t clock = 8'000'000 >
using target = target_blue_pill< clock >; 
	
}; // namespace hwcpp





