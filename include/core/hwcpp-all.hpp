// ==========================================================================
//
// file : hwcpp-hwcpp.hpp
//
// The hwcpp files are meant to be included via this file only. 
// This file includes all hwcpp files, except for the target HAL file(s).
//
// In normal use the user would include the target HAL file (either directly 
// or through hwcpp.hpp and a command-line defined HWCPP_TARGET), which 
// includes this hwcpp-all.hpp file.  
//
// ==========================================================================
//
// This file is part of HwCpp, 
// a C++ library for close-to-the-hardware programming.
//
// Copyright Wouter van Ooijen 2017
// 
// Distributed under the Boost Software License, Version 1.0.
// (See the accompanying LICENSE_1_0.txt in the root directory of this
// library, or a copy at http://www.boost.org/LICENSE_1_0.txt)
//
// ==========================================================================

#ifndef HWCPP_ALL_INCLUDED
#define HWCPP_ALL_INCLUDED


// ==========================================================================
//
// The library headers we need are included here rather than in the files
// that need them. 
//
// ==========================================================================

#include <cstddef>
#include <climits>
#include <cstdint>
#include <algorithm>
#include <ratio>
#include <type_traits>


// ==========================================================================
//
// This is a (greedy) selection from
// https://gcc.gnu.org/onlinedocs/gcc-7.2.0/gcc/Warning-Options.html
//
// For the library code a few false alarms are worth even a single error
// that is detected by these (rather high) warning level settings.
//
// ==========================================================================

#pragma GCC diagnostic push

#pragma GCC diagnostic error "-Wall"
#pragma GCC diagnostic error "-Wextra"
#pragma GCC diagnostic error "-Wpedantic"
#pragma GCC diagnostic error "-Wdouble-promotion"
#pragma GCC diagnostic error "-Wchkp"
// -fdelete-null-pointer-checks
#pragma GCC diagnostic error "-Wnull-dereference"
#pragma GCC diagnostic error "-Wswitch-default"
#pragma GCC diagnostic error "-Wunused"
#pragma GCC diagnostic error "-Wuninitialized"
#pragma GCC diagnostic error "-Wstrict-overflow=5"

#pragma GCC diagnostic error "-Wsuggest-attribute=pure"
#pragma GCC diagnostic error "-Wsuggest-attribute=const"
#pragma GCC diagnostic error "-Wsuggest-attribute=noreturn"
#pragma GCC diagnostic error "-Wsuggest-attribute=format"
#pragma GCC diagnostic error "-Wmissing-format-attribute"
#pragma GCC diagnostic error "-Wsuggest-final-types"
#pragma GCC diagnostic error "-Wsuggest-final-methods"
#pragma GCC diagnostic error "-Wsuggest-override"

#pragma GCC diagnostic error "-Warray-bounds=2"
#pragma GCC diagnostic error "-Wduplicated-branches"
#pragma GCC diagnostic error "-Wduplicated-cond"
#pragma GCC diagnostic error "-Wfloat-equal"
#pragma GCC diagnostic error "-Wundef"
#pragma GCC diagnostic error "-Wcast-qual"
#pragma GCC diagnostic error "-Wcast-align"
#pragma GCC diagnostic error "-Wzero-as-null-pointer-constant"
#pragma GCC diagnostic error "-Wparentheses"
#pragma GCC diagnostic error "-Wdate-time"
#pragma GCC diagnostic error "-Wconversion"
#pragma GCC diagnostic error "-Wlogical-op"
#pragma GCC diagnostic error "-Winline"

#pragma GCC diagnostic ignored "-Wstrict-overflow"
#pragma GCC diagnostic ignored "-Wconversion"

// -Wno-long-long.


// ==========================================================================
//
// include all non-HAL library files, within the hwcpp namespace
//
// ==========================================================================

namespace hwcpp {

   #include "core/hwcpp-basics.hpp"
   
   #include "core/hwcpp-box.hpp"
   #include "core/hwcpp-stream.hpp"
   #include "core/hwcpp-no-inline.hpp"
   #include "core/hwcpp-buffering.hpp"
   
   #include "core/hwcpp-box-adapters.hpp"
   #include "core/hwcpp-box-invert.hpp"
   #include "core/hwcpp-box-fanout.hpp"
   
   #include "core/hwcpp-box-creator.hpp"

   #include "core/hwcpp-pins.hpp"
   #include "core/hwcpp-pin-adapters.hpp"
   #include "core/hwcpp-pin-dummies.hpp"
   #include "core/hwcpp-pin-fixed.hpp"
   #include "core/hwcpp-pin-fanout.hpp"
   #include "core/hwcpp-pin-utilities.hpp"
   
   #include "core/hwcpp-ports.hpp"
   #include "core/hwcpp-port-dummies.hpp"
   #include "core/hwcpp-port-from-pins.hpp"
   #include "core/hwcpp-port-adapters.hpp"
   #include "core/hwcpp-port-utilities.hpp"
   
   #include "core/hwcpp-adc.hpp"
   #include "core/hwcpp-dac.hpp"
   
   //#include "core/hwcpp-timing.hpp"
   #include "core/hwcpp-timing-waiting.hpp"
   #include "core/hwcpp-timing-clock.hpp"
   
   
   #include "core/hwcpp-stream-creator.hpp"
   #include "core/hwcpp-stream-out-formatting.hpp"
   
   #include "core/hwcpp-i2c.hpp"
   #include "core/hwcpp-console.hpp"
   #include "core/hwcpp-string.hpp"
   
   #include "core/hwcpp-demos.hpp"
   
//   #include "chips/hwcpp-pcf8574.hpp"
   #include "chips/hwcpp-hd44780.hpp"
   
   namespace shields {   

      #include "shields/hwcpp-lcd-buttons.hpp"
      //#include "shields/hwcpp-joystick-buttons.hpp"
   
   } // namespace shields   

} // namespace hwcpp

#pragma GCC diagnostic pop

#endif // #ifndef HWCPP_ALL_INCLUDED