// ============================================================================
//
// file : src/hwcpp.hpp
//
// This file makes HwCpp usable as an Arduino library
//
// ============================================================================

#ifndef _HWCPP_INCLUDED
#define _HWCPP_INCLUDED

#define HWCPP_QUOTE( FILE ) #FILE
#define HWCPP_INCLUDE( FILE ) HWCPP_QUOTE( ../include/FILE )

#if defined(ARDUINO_ARCH_AVR)
   #define _HWCPP_TARGET_OK
   #define HWCPP_TARGET_use_avr8_hacks
   #include HWCPP_INCLUDE( targets/hwcpp-target-arduino-uno.hpp )
#endif

#if defined(ARDUINO_ARCH_SAM)
   #define _HWCPP_TARGET_OK
   #include HWCPP_INCLUDE( targets/hwcpp-target-arduino-due.hpp )
#endif

#ifndef _HWCPP_TARGET_OK
   #error no valid ARDUINO_* target for HwCpp
#endif

#endif // #ifndef _HWCPP_INCLUDED