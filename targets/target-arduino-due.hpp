// ============================================================================
//
// file : target-arduino-due.hpp
//
// HAL for the arduino due board target
//
// ============================================================================

#include "chip-sam3xa.hpp"

namespace hwcpp {
    
template< int clock = 100 >
struct target_arduino_due :
   chip_sam3xa    
{       
    
   using led = chip_sam3xa::pin_out< chip_sam3xa::pio::b, 27 >;
   
}; // template<...> struct target_arduino_due

template< int clock = 100 >
using target = target_arduino_due< clock >; 
	
}; // namespace hwcpp





