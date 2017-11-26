// ============================================================================
//
// file : hwcpp.hpp
//
// The hwcpp files are meant to be included via this file only. 
//
// ============================================================================
//
// Notes & ToDo
//
// derive pin::direction_set_output() ?
// pull-ups & pull-downs
// maybe make a 'believe me this is a pin-out' decorator, 
//    which does *not* set direction (reinterpret?)
// ports
// invert -> needs bitwise_invert
// pull-up & pull-down? => must be present for some purposes!
//    .pull( up/down/none ), pull_up<>, pull_down<> with resistance?
// how to do logging without a lambda-like thing?
// hwcpp.hpp should include the correct HAL, which includes the hwcpp-all.hpp
// show code & data & bss sizes in bmptk
//
// ============================================================================

// ============================================================================
//
// file : hwcpp-all.hpp
//
// This file includes all hwcpp files, except for the target HAL file(s).
//
// In normal use the user would include the target HAL file (either directly 
// or through hwcpp.hpp and a command-line defined HWCPP_TARGET), which 
// includes this hwcpp-all.hpp file.  
//
// ============================================================================

#include <climits>

#ifndef HWCPP_ALL_INCLUDED
#define HWCPP_ALL_INCLUDED

namespace hwcpp {

   #include "basics.hpp"
   #include "pins.hpp"
   #include "invert.hpp"
   #include "buffering.hpp"

}; // namespace hwcpp

#endif // #ifndef HWCPP_ALL_INCLUDED