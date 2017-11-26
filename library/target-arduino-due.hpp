// ============================================================================
//
// file : target-arduino-due.hpp
//
// HAL for the arduino due board target
//
// ============================================================================

#include "sam3xa.hpp"

namespace hwcpp {
    
template< int clock = 100 >
struct target :
   sam3xa    
{       
    
   using led = sam3xa::pin_out< sam3xa::pio::b, 27 >;
   
}; // template<...> struct target :
	
}; // namespace hwcpp





