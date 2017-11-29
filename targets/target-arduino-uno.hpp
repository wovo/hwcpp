// ============================================================================
//
// file : target-arduino-uno.hpp
//
// HAL for the arduino uno board target
//
// ============================================================================

#include "chip-atmega328.hpp"

namespace hwcpp {
    
template< int clock = 100 >
struct target_arduino_uno :
   chip_atmega328    
{       
    
   using led = chip_atmega328::pin_in_out< chip_atmega328::port::b, 5 >;
   
   using waiting = timing_waiting< chip_atmega328, long long int, MHz< 1 > >;   
   
}; // template<...> struct target_arduino_uno

template< int clock = 100 >
using target = target_arduino_uno< clock >; 
	
}; // namespace hwcpp





