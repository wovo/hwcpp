// ============================================================================
//
// file : target-blue-pill.hpp
//
// HAL for the blue pill board target
//
// ============================================================================

#include "chip-stm32f103.hpp"

namespace hwcpp {
    
template< int clock = 100 >
struct target_blue_pill :
   chip_stm32f103    
{       
    
   using led = invert< chip_stm32f103::pin_in_out< chip_stm32f103::port::c, 13 > >;
   
   using waiting = timing_waiting< chip_stm32f103, long long int, MHz< 16 > >;   
   
}; // template<...> struct target_arduino_due

template< int clock = 100 >
using target = target_blue_pill< clock >; 
	
}; // namespace hwcpp





