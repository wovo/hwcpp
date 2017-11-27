// ============================================================================
//
// file : target-arduino-uno.hpp
//
// HAL for the arduino uno board target
//
// ============================================================================

#include "atmega328.hpp"

namespace hwcpp {
    
template< int clock = 100 >
struct target :
   atmega328    
{       
    
   using led = atmega328::pin_in_out< atmega328::port::b, 5 >;
   
}; // template<...> struct target :
	
}; // namespace hwcpp





