#============================================================================
#
# This file defines the directories and files that are part of hwcpp.
#
# THis file can be included in a Makefile.
# 
#============================================================================

HWCPP_DIRECTORIES   = hwcpp hwcpp/core hwcpp/targets hwcpp/chips

HWCPP_DEPENDENCIES      = 
#HWCPP_DEPENDENCIES      += hwcpp.hpp
HWCPP_DEPENDENCIES      += basics.hpp 
#HWCPP_DEPENDENCIES      += timing.hpp
#HWCPP_DEPENDENCIES      += string.hpp
#HWCPP_DEPENDENCIES      += numeric.hpp
HWCPP_DEPENDENCIES      += pins.hpp 
#HWCPP_DEPENDENCIES      += channels.hpp
#HWCPP_DEPENDENCIES      += i2c.hpp spi.hpp one_wire.hpp
#HWCPP_DEPENDENCIES      += hc595.hpp pcf8574.hpp mcp23xxx.hpp pcf8591.hpp
#HWCPP_DEPENDENCIES      += hd44780.hpp
# HWCPP_DEPENDENCIES      += graphics.hpp
#HWCPP_DEPENDENCIES      += pcd8544.hpp lcd_19.hpp
#HWCPP_DEPENDENCIES      += ds18x20.hpp
#HWCPP_DEPENDENCIES      += ads7843.hpp

HWCPP_DEPENDENCIES      += lpc1114.hpp lpc1114fn28.hpp
