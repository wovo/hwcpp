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
   #include "targets/target-samx3a.hpp"
#endif

#ifdef HWCPP_TARGET_arduino_uno
   #include "targets/target-arduino-uno.hpp"
#endif

#ifdef HWCPP_TARGET_arduino_due
   #include "targets/target-arduino-due.hpp"
#endif

#ifdef HWCPP_TARGET_blue_pill
   #include "targets/target-blue-pill.hpp"
#endif

#ifdef HWCPP_TARGET_native
   #include "targets/target-native.hpp"
#endif

#ifndef HWCPP_TARGET
   #include "core/hwcpp-all.hpp"
#endif

#endif // #ifndef HWCPP_INCLUDED