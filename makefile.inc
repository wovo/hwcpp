#============================================================================
#
# makefile-include for bmptk: 
# sets 
# - the search path (the hwlib/include directory)
# - the dependencies (all hwlib source files)
# - the sources (only hwlib.cpp)
# 
# (c) Wouter van Ooijen (wouter@voti.nl) 2017
#
# Distributed under the Boost Software License, Version 1.0.
# (See accompanying file LICENSE_1_0.txt or copy at 
# http://www.boost.org/LICENSE_1_0.txt)   
#
#============================================================================

SEARCH            += $(HWCPP)/library
SEARCH            += $(HWCPP)/library/pins
SEARCH            += $(HWCPP)/library/targets

SOURCES           += hwcpp.cpp
HEADERS           += hwcpp.hpp
HEADERS           += hwcpp-all.hpp

# in library/pins
HEADERS           += hwcpp-pin.hpp
HEADERS           += hwcpp-pin-decorators.hpp
HEADERS           += hwcpp-pin-dummies.hpp

# library/targets
HEADERS           += hwcpp-lpc1114.hpp
HEADERS           += hwcpp-lpc1114fn28.hpp

