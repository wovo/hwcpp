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
// A dirty hack is needed because the AVR8 compiler lacks certain headers
// https://github.com/maniacbug/StandardCplusplus
//
// ==========================================================================

#ifdef HWCPP_TARGET_use_avr8_hacks
   #include HWCPP_INCLUDE( targets/avr8-hacks/cstddef )
   #include HWCPP_INCLUDE( targets/avr8-hacks/climits )
   #include HWCPP_INCLUDE( targets/avr8-hacks/cstdint )
   #include HWCPP_INCLUDE( targets/avr8-hacks/algorithm )
   #include HWCPP_INCLUDE( targets/avr8-hacks/ratio )
   #include HWCPP_INCLUDE( targets/avr8-hacks/type_traits )
   #include HWCPP_INCLUDE( targets/avr8-hacks/array )
#else
   #include <cstddef>
   #include <climits>
   #include <algorithm>
   #include <cstdint>
   #include <ratio>
   #include <type_traits>
   #include <array>
#endif


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
#pragma GCC diagnostic ignored "-Wsuggest-attribute=const"
#pragma GCC diagnostic ignored "-Wattributes"

// -Wno-long-long.


// ==========================================================================
//
// include all non-HAL library files, within the hwcpp namespace
//
// ==========================================================================

namespace hwcpp {

   #include HWCPP_INCLUDE( core/hwcpp-basics.hpp )
   #include HWCPP_INCLUDE( core/hwcpp-buffer.hpp )
   
   // ========= box/stream common
   
   #include HWCPP_INCLUDE( core/hwcpp-bs-box.hpp )
   #include HWCPP_INCLUDE( core/hwcpp-bs-stream.hpp )
   #include HWCPP_INCLUDE( core/hwcpp-bs-buffering.hpp )
   #include HWCPP_INCLUDE( core/hwcpp-bs-no-inline.hpp )
   
   #include HWCPP_INCLUDE( core/hwcpp-box-adapters.hpp )
   #include HWCPP_INCLUDE( core/hwcpp-box-invert.hpp )
   #include HWCPP_INCLUDE( core/hwcpp-box-mirror.hpp )
   #include HWCPP_INCLUDE( core/hwcpp-box-builder.hpp )
   
   // ========= pins

   #include HWCPP_INCLUDE( core/hwcpp-pins.hpp )
   #include HWCPP_INCLUDE( core/hwcpp-pin-adapters.hpp )
   #include HWCPP_INCLUDE( core/hwcpp-pin-dummies.hpp )
   #include HWCPP_INCLUDE( core/hwcpp-pin-fixed.hpp )
   #include HWCPP_INCLUDE( core/hwcpp-pin-variables.hpp )
   
   // ======== ports
   
   #include HWCPP_INCLUDE( core/hwcpp-ports.hpp )
   #include HWCPP_INCLUDE( core/hwcpp-port-adapters.hpp )
   #include HWCPP_INCLUDE( core/hwcpp-port-dummies.hpp )
   #include HWCPP_INCLUDE( core/hwcpp-port-from-pins.hpp )
   #include HWCPP_INCLUDE( core/hwcpp-port-from-buffers.hpp )

   // ======== requires pin and port concepts

   #include HWCPP_INCLUDE( core/hwcpp-bs-fanout.hpp )

   
   // ======== other boxes
   
   #include HWCPP_INCLUDE( core/hwcpp-adc.hpp )
   #include HWCPP_INCLUDE( core/hwcpp-dac.hpp )
   
   // ======== graphics
   
   #include HWCPP_INCLUDE( core/hwcpp-graphics.hpp )

   // ======== streams
   
   #include HWCPP_INCLUDE( core/hwcpp-stream-builder.hpp )
   #include HWCPP_INCLUDE( core/hwcpp-stream-out-formatting.hpp )
   #include HWCPP_INCLUDE( core/hwcpp-stream-object.hpp )
   
   // ======== timing
   
   #include HWCPP_INCLUDE( core/hwcpp-timing.hpp )
   #include HWCPP_INCLUDE( core/hwcpp-timing-waiting.hpp )
   #include HWCPP_INCLUDE( core/hwcpp-timing-clocking.hpp )
//   #include HWCPP_INCLUDE( core/hwcpp-timing-duration.hpp )
//   #include HWCPP_INCLUDE( core/hwcpp-timing-waiting.hpp )
//   #include HWCPP_INCLUDE( core/hwcpp-timing-clock.hpp )
   
   // ======== ??
   
   #include HWCPP_INCLUDE( core/hwcpp-i2c.hpp )
   #include HWCPP_INCLUDE( core/hwcpp-spi.hpp )
   #include HWCPP_INCLUDE( core/hwcpp-console.hpp )
//   #include HWCPP_INCLUDE( core/hwcpp-string.hpp )
   
   
   #include HWCPP_INCLUDE( chips/hwcpp-pcf8574.hpp )
   #include HWCPP_INCLUDE( chips/hwcpp-pcf8591.hpp )
   #include HWCPP_INCLUDE( chips/hwcpp-hd44780.hpp )
//   #include HWCPP_INCLUDE( chips/hwcpp-ssd1306.hpp )
   #include HWCPP_INCLUDE( chips/hwcpp-nrf24.hpp )
   #include HWCPP_INCLUDE( chips/hwcpp-mfrc522.hpp )
   
   namespace shields {   

      #include HWCPP_INCLUDE( shields/hwcpp-lcd-buttons.hpp )
      #include HWCPP_INCLUDE( shields/hwcpp-joystick-buttons.hpp )
      #include HWCPP_INCLUDE( shields/hwcpp-funduino-joystick.hpp )
      #include HWCPP_INCLUDE( shields/hwcpp-i2c-lcd.hpp )
   
   } // namespace shields   

   #include HWCPP_INCLUDE( core/hwcpp-demos.hpp )
   #include HWCPP_INCLUDE( core/hwcpp-tests.hpp )
   
} // namespace hwcpp

#pragma GCC diagnostic pop

#endif // #ifndef HWCPP_ALL_INCLUDED