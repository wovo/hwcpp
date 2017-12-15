// ==========================================================================
//
// file : hwcpp-hwcpp.hpp
//
// The hwcpp files are meant to be included via this file only. 
//
// ==========================================================================
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
// ==========================================================================

// ==========================================================================
//
// file : hwcpp-all.hpp
//
// This file includes all hwcpp files, except for the target HAL file(s).
//
// In normal use the user would include the target HAL file (either directly 
// or through hwcpp.hpp and a command-line defined HWCPP_TARGET), which 
// includes this hwcpp-all.hpp file.  
//
// ==========================================================================

#ifndef HWCPP_ALL_INCLUDED
#define HWCPP_ALL_INCLUDED

#include <cstddef>
#include <climits>
#include <cstdint>
#include <algorithm>
#include <ratio>
#include <type_traits>

// #undef putc

namespace hwcpp {

   #include "core/hwcpp-basics.hpp"
   
   #include "core/hwcpp-box.hpp"
   #include "core/hwcpp-box-creator.hpp"
   #include "core/hwcpp-box-adapters.hpp"
   #include "core/hwcpp-box-buffering.hpp"
   #include "core/hwcpp-box-invert.hpp"
   #include "core/hwcpp-box-fanout.hpp"

   #include "core/hwcpp-pins.hpp"
   #include "core/hwcpp-pin-adapters.hpp"
   #include "core/hwcpp-pin-utilities.hpp"
   
   #include "core/hwcpp-ports.hpp"
   #include "core/hwcpp-port-adapters.hpp"
   #include "core/hwcpp-adc.hpp"
   #include "core/hwcpp-dac.hpp"
   
   #include "core/hwcpp-timing.hpp"
   #include "core/hwcpp-string.hpp"
   #include "core/hwcpp-istream.hpp"
   #include "core/hwcpp-ostream.hpp"
   #include "core/hwcpp-console.hpp"

   #include "core/hwcpp-i2c.hpp"
   
   #include "core/hwcpp-demos.hpp"
   
   #include "chips/hwcpp-pcf8574.hpp"
   #include "chips/hwcpp-hd44780.hpp"
   
   namespace shields {   

      #include "shields/hwcpp-lcd-buttons.hpp"
      #include "shields/hwcpp-joystick-buttons.hpp"
   
   }; // namespace shields   

}; // namespace hwcpp

#endif // #ifndef HWCPP_ALL_INCLUDED