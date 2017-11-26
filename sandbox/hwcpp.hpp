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
// ports
// invert -> needs bitwise_invert
// pull-up & pull-down? => must be present for some purposes!
//    .pull( up/down/none ), pull_up<>, pull_down<> with resistance?
// how to do logging without a lambda-like thing?
//
// ============================================================================

#ifndef HWCPP_INCLUDED
#define HWCPP_INCLUDED

namespace hwcpp {

   #include "basics.hpp"
   #include "pins.hpp"
   #include "invert.hpp"
   #include "buffering.hpp"

};

#endif