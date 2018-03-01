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

#ifndef _HWCPP_INCLUDED
#define _HWCPP_INCLUDED

#define HWCPP_QUOTE( FILE ) #FILE
#define HWCPP_INCLUDE( FILE ) HWCPP_QUOTE( FILE )

#ifdef HWCPP_TARGET_atmega328
   #define _HWCPP_TARGET_OK
   #include HWCPP_INCLUDE( targets/hwcpp-target-atmega328.hpp )
#endif

#ifdef HWCPP_TARGET_sam3x8e
   #define _HWCPP_TARGET_OK
   #include HWCPP_INCLUDE( targets/hwcpp-target-sam3x8e.hpp )
#endif

#ifdef HWCPP_TARGET_stm32f103c8
   #define _HWCPP_TARGET_OK
   #include HWCPP_INCLUDE( targets/hwcpp-target-stm32f103c8.hpp )
#endif

#ifdef HWCPP_TARGET_arduino_uno
   #define _HWCPP_TARGET_OK
   #include HWCPP_INCLUDE( targets/hwcpp-target-arduino-uno.hpp )
#endif

#ifdef HWCPP_TARGET_arduino_due
   #define _HWCPP_TARGET_OK
   #include HWCPP_INCLUDE( targets/hwcpp-target-arduino-due.hpp )
#endif

#ifdef HWCPP_TARGET_blue_pill
   #define _HWCPP_TARGET_OK
   #include HWCPP_INCLUDE( targets/hwcpp-target-blue-pill.hpp )
#endif

#ifdef HWCPP_TARGET_stm32_minisystem
   #define _HWCPP_TARGET_OK
   #include HWCPP_INCLUDE( targets/hwcpp-target-stm32-minisystem.hpp )
#endif

#ifdef HWCPP_TARGET_native
   #define _HWCPP_TARGET_OK
   #include HWCPP_INCLUDE( targets/hwcpp-target-native.hpp )
#endif

#ifndef _HWCPP_TARGET_OK
   #error no valid HWCPP_TARGET_*
#endif

#endif // #ifndef _HWCPP_INCLUDED