#============================================================================
#
# makefile-include for bmptk: 
# sets 
# - CPP_LANGUAGE to C++ 17, and enables concepts
# - the search path (the hwcpp/include, targets, and avr8-hacks)
# - the dependencies (all hwlib source files)
# 
# (c) Wouter van Ooijen (wouter@voti.nl) 2017
#
# Distributed under the Boost Software License, Version 1.0.
# (See accompanying file LICENSE_1_0.txt or copy at 
# http://www.boost.org/LICENSE_1_0.txt)   
#
#============================================================================

# required C++ command-line settings

CPP_LANGUAGE      += -std=c++17 -fconcepts

# the HwCPP file locations

SEARCH            += $(HWCPP)/include
SEARCH            += $(HWCPP)/include/core
SEARCH            += $(HWCPP)/include/targets
SEARCH            += $(HWCPP)/include/chips
SEARCH            += $(HWCPP)/include/shields

# dirty hack because the AVR8 compiler lacks certain files

# https://github.com/maniacbug/StandardCplusplus

ifeq ($(TARGET),arduino_uno)
   CPP_LANGUAGE      += -I $(HWCPP)/include/targets/avr8-hacks
   #CPP_LANGUAGE      += -isystem C:/avr-gcc-7.2.0-x86-mingw/avr/include
   #CPP_LANGUAGE      += -isystem C:/SysGCC/arm-eabi/arm-eabi/include/c++/7.2.0/arm-eabi
   #CPP_LANGUAGE      += -isystem C:/SysGCC/arm-eabi/arm-eabi/include/c++/7.2.0
endif
ifeq ($(TARGET),atmega328)
   CPP_LANGUAGE      += -I $(HWCPP)/include/targets/avr8-hacks
   #CPP_LANGUAGE      += -isystem C:/avr-gcc-7.2.0-x86-mingw/avr/include
   #CPP_LANGUAGE      += -isystem C:/SysGCC/arm-eabi/arm-eabi/include/c++/7.2.0/arm-eabi
   #CPP_LANGUAGE      += -isystem C:/SysGCC/arm-eabi/arm-eabi/include/c++/7.2.0
endif

# HwCpp core files

HEADERS           += hwcpp.hpp
HEADERS           += hwcpp-all.hpp
HEADERS           += hwcpp-basics.hpp 

HEADERS           += hwcpp-bs-box.hpp 
HEADERS           += hwcpp-bs-stream.hpp 
HEADERS           += hwcpp-bs-buffering.hpp 
HEADERS           += hwcpp-bs-fanout.hpp 
HEADERS           += hwcpp-bs-no-inline.hpp 

HEADERS           += hwcpp-box-adapters.hpp 
HEADERS           += hwcpp-box-invert.hpp 
HEADERS           += hwcpp-box-mirror.hpp 
HEADERS           += hwcpp-box-builder.hpp 

HEADERS           += hwcpp-pins.hpp 
HEADERS           += hwcpp-pin-adapters.hpp 
HEADERS           += hwcpp-pin-dummies.hpp 
HEADERS           += hwcpp-pin-fixed.hpp 
HEADERS           += hwcpp-pin-variables.hpp 

HEADERS           += hwcpp-ports.hpp 
HEADERS           += hwcpp-port-adapters.hpp 
HEADERS           += hwcpp-port-dummies.hpp 
HEADERS           += hwcpp-port-from-pins.hpp 
HEADERS           += hwcpp-port-from-buffers.hpp 

HEADERS           += hwcpp-adc.hpp 
HEADERS           += hwcpp-dac.hpp 
HEADERS           += hwcpp-graphics.hpp 

HEADERS           += hwcpp-stream-builder.hpp 
HEADERS           += hwcpp-stream-out-formatting.hpp 
HEADERS           += hwcpp-stream-object.hpp 

HEADERS           += hwcpp-timing.hpp 
HEADERS           += hwcpp-timing-waiting.hpp 
HEADERS           += hwcpp-timing-clocking.hpp 
//HEADERS           += hwcpp-timing-ticker.hpp 

HEADERS           += hwcpp-i2c.hpp 
HEADERS           += hwcpp-spi.hpp 
HEADERS           += hwcpp-console.hpp 
HEADERS           += hwcpp-string.hpp 


# HwCpp supported external chips

HEADERS           += hwcpp-pcf8574.hpp
HEADERS           += hwcpp-pcf8591.hpp
HEADERS           += hwcpp-hd44780.hpp 
HEADERS           += hwcpp-ssd1306.hpp 
HEADERS           += hwcpp-nrf24.hpp 
HEADERS           += hwcpp-mfrc522.hpp 

# HwCpp supported displays

HEADERS           += hwcpp-oleds.hpp 


# HwCpp supported arduino shields

HEADERS           += hwcpp-lcd-buttons.hpp 
HEADERS           += hwcpp-joystick-buttons.hpp 
HEADERS           += hwcpp-funduino-joystick.hpp 
HEADERS           += hwcpp-i2c-lcd.hpp 

# etc

HEADERS           += hwcpp-demos.hpp 
HEADERS           += hwcpp-tests.hpp 

# HwCpp HAL files

HEADERS           += hwcpp-chip-sam3x8e.hpp 
HEADERS           += hwcpp-chip-sam3xa.inc
HEADERS           += hwcpp-target-sam3x8e.hpp 
HEADERS           += hwcpp-target-arduino-due.hpp 

HEADERS           += hwcpp-chip-atmega328.hpp 
HEADERS           += hwcpp-target-atmega328.hpp 

HEADERS           += hwcpp-target-sam3x8e.hpp 
HEADERS           += hwcpp-target-arduino-uno.hpp 

HEADERS           += hwcpp-chip-stm32f103c8.hpp 
HEADERS           += hwcpp-target-stm32f103c8.hpp 
HEADERS           += hwcpp-target-blue-pill.hpp 
HEADERS           += hwcpp-target-stm32-minisystem.hpp 

# add Catch
# (used by some of the tests)
SEARCH            += $(CATCH)/include


