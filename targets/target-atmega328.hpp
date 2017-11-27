// ============================================================================
//
// file : target-atmega328.hpp
//
// HAL for the arduino uno board target
//
// ============================================================================

#include "chip-atmega328.hpp"

namespace hwcpp {
    
template< int clock = 100 >
struct target_atmega328 :
   chip_atmega328    
{       
    
}; // template<...> struct target_atmega328
	
using target = target_atmega328;    
   
}; // namespace hwcpp





