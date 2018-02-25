// ============================================================================
//
// file : src/hwcpp.hpp
//
// This file makes HwCpp usable as an Arduino library
//
// ============================================================================

#ifndef _HWCPP_INCLUDED
#define _HWCPP_INCLUDED

#if defined(ARDUINO_ARCH_AVR)
   #define _HWCPP_TARGET_OK
   #include "../include/targets/hwcpp-target-arduino-uno.hpp"
#endif

#elif defined(ARDUINO_ARCH_SAM)
   #define _HWCPP_TARGET_OK
   #include "../lincude/targets/hwcpp-target-arduino-due.hpp"
#endif

#ifndef _HWCPP_TARGET_OK
   #error no valid ARDUINO_* target for HwCpp
#endif

#endif // #ifndef _HWCPP_INCLUDED