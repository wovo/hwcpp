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
// buffering
// invert -> needs bitwise_invert
//
// ============================================================================

#ifndef HWCPP_INCLUDED
#define HWCPP_INCLUDED

namespace hwcpp {

   #include "basics.hpp"
   #include "pins.hpp"
   #include "pin_decorators.hpp"
   #include "invert.hpp"
   #include "buffering.hpp"

};

#endif