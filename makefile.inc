#============================================================================
#
# makefile-include for bmptk: 
# sets 
# - the search path (the hwcpp/include directory)
# - the dependencies (all hwlib source files)
# - CPP_LANGUAGE to C++ 17, and enables concepts
# 
# (c) Wouter van Ooijen (wouter@voti.nl) 2017
#
# Distributed under the Boost Software License, Version 1.0.
# (See accompanying file LICENSE_1_0.txt or copy at 
# http://www.boost.org/LICENSE_1_0.txt)   
#
#============================================================================

CPP_LANGUAGE      ?= -std=c++17 -fconcepts

SEARCH            += $(HWCPP)/targets
SEARCH            += $(HWCPP)/library

HEADERS           += hwcpp.hpp
HEADERS           += hwcpp-all.hpp
HEADERS           += basics.hpp 
HEADERS           += pins.hpp 
HEADERS           += invert.hpp 
\
HEADERS           += chip-sam3xa.hpp 
HEADERS           += target-sam3xa.hpp 
HEADERS           += target-arduino-due.hpp 

HEADERS           += chip-atmega328.hpp 
HEADERS           += target-atmega328.hpp 
HEADERS           += target-arduino-uno.hpp 

HEADERS           += chip-stm32f103.hpp 
HEADERS           += target-stm32f103.hpp 
HEADERS           += target-blue-pill.hpp 

