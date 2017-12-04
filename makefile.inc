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

CPP_LANGUAGE      += -std=c++17 -fconcepts

SEARCH            += $(HWCPP)/library
SEARCH            += $(HWCPP)/targets
SEARCH            += $(HWCPP)/chips
# SEARCH            += $(HWCPP)/targets/avr8-hacks

# HwCpp core files

HEADERS           += hwcpp.hpp
HEADERS           += hwcpp-all.hpp
HEADERS           += basics.hpp 
HEADERS           += pins.hpp 
HEADERS           += ports.hpp 
HEADERS           += invert.hpp 
HEADERS           += timing.hpp 
HEADERS           += i2c.hpp 
HEADERS           += console.hpp 
HEADERS           += ostream.hpp 
HEADERS           += string.hpp 
HEADERS           += demos.hpp 


# HwCpp supported external chips

HEADERS           += pcf8574.hpp
HEADERS           += hd44780.hpp 


# HwCpp HAL files

HEADERS           += chip-sam3xa.hpp 
HEADERS           += chip-sam3xa.inc
HEADERS           += target-sam3xa.hpp 
HEADERS           += target-arduino-due.hpp 

HEADERS           += chip-atmega328.hpp 
HEADERS           += target-atmega328.hpp 
HEADERS           += target-arduino-uno.hpp 

HEADERS           += chip-stm32f103.hpp 
HEADERS           += target-stm32f103.hpp 
HEADERS           += target-blue-pill.hpp 

# add Catch
# (used by some of the tests)
SEARCH            += $(CATCH)/include


