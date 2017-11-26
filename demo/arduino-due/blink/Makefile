#############################################################################
#
# Project Makefile
#
# (c) Wouter van Ooijen (www.voti.nl) 2016
#
# This file is in the public domain.
# 
#############################################################################

# source files in this project (main.cpp is automatically assumed)
SOURCES :=

# header files in this project
HEADERS += sam3xa.hpp hwcpp.hpp basics.hpp pins.hpp invert.hpp buffering.hpp

# other places to look for files for this project
SEARCH  := 

CPP_LANGUAGE ?= -std=c++17 -fconcepts

RESULTS += main.lst main.lss

# set RELATIVE to the next higher directory 
# and defer to the appropriate Makefile.* there
RELATIVE := ..
include $(RELATIVE)/Makefile.due
