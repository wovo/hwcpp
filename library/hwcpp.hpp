// ============================================================================
//
// file : hwcpp.hpp
//
// The hwcpp files are meant to be included via this file. 
//
// In normal use the user would include this file, which (through a 
// command-line defined HWCPP_TARGET) includes the correct target HAL file,
// which includes the hwcpp-all.hpp, which includes the bulk of hwcpp.
//
// Or a user can include a target HAL file directly.
//
// ============================================================================

#ifndef HWCPP_INCLUDED
#define HWCPP_INCLUDED

#ifdef HWCPP_TARGET_samx3a
   #include "target-samx3a.hpp"
#endif

#ifdef HWCPP_TARGET_arduino_due
   #include "target-arduino-due.hpp"
#endif

#ifdef HWCPP_TARGET_native
   #include "target-native.hpp"
#endif

#ifndef HWCPP_TARGET
   #include "hwcpp-all.hpp"
#endif

#endif // #ifndef HWCPP_INCLUDED