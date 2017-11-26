#############################################################################
#
# Project Makefile
#
# (c) Wouter van Ooijen (www.voti.nl) 2013
# 
#############################################################################

# Specify the location of the bmptk library
BMPTK      := ../../../..

# Specify target chip or board or system
TARGET     := db103

RESULTS    := main.lst

CORE_FLAGS += -fdevirtualize
CORE_FLAGS += -flto

# The Makefile.inc does all the work
include $(BMPTK)/Makefile.inc
