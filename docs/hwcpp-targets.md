HwCpp Targets
===

<!-- update table_of_contents( input ) -->
<!-- update end -->

<a name="toc-anchor-0"></a>
# Introduction

This document describes the targets supported by HwCpp.
A target is either a chip, or a board with a chip and
probably some other things.

The preferred way to use HwCpp is to include hwcpp.hpp in
the (single) source file, and specify the target on the
compiler command line as -DHWCPP_TARGET_<target_name>

When bmptk is used, the target is specified in the Makefile as
```
TARGET ?= <target_name>
```
and bmptk will put the appropriate define on the command line.

Alternatively, the application source file can include the 
targets/hwcpp-chip-<target-name>.hpp file directly.

# Native

HwCpp can build for the native target.
This might be useful for module tests.

# Chips

## atMega328

RAM  2k
ROM  32k
EEPROM 1k
GPIO 23
CPU 8 bit AVR
CLOCK 8 MHz internal, 20 MHz Xtal

This is an 8-bit AVR chip, popularized by the Arduino Uno.
The AVR has separate code and data address spaces.
At C++ level, this means that const data ends up in RAM because
pointers can't point to ROM.
You can store constant data in ROM, but you must copy it to RAM
or address it using special code.

The clock can be either internal (1 MHz or 8 Mhz) or external
(Xtal up to 20 MHz). This is done in the configuration fuses,
which are NOT under program control.
Hence the clock frequency must specified explicitly, and
HwCpp simply assumes that you do this correctly.

A/D pins a0 .. a5
GPIO input_output pins  b0 .. b7, c0 .. c7, d0 .. d7.
SPI pins
sck, miso, mosi, ss (synonyms for b5, b4, b3, b2).

I2C pins: scl, sda (synonyms for c5, c4)
tx rx (d0, d1)


## atSam3xa

This is a 32-bit Cortex-M3 chip, popularized by the Arduino Due.

## STM32F103C8

This is a 32-bit Cortex-M3 chip, popularized by the Arduino Maple,
and used in cheap Chinese boards like the Blue Pill.

##

# Boards

## Arduino Uno

micro-controller
connectors
IO voltage
downloading
serial interface
on board

This is the modern version of the original, 
still tremendously popular Arduino board.
There are various clones of this borad, which are equivalent but use
different USB-to-serial chips.

The connector pin names are the Arduino pin names, which
have no relation with the chip pin names.

The chip can be programmed directly through the 2x3 ICSP pin header,
or through the USB-to-serial converter, using the 
pre-programmed Arduino bootloader. 
This is a hands-off processes: 
the target chip is forced to reset and into bootload mode 
by the RTS and DTR lines of the serial interface.

## Arduino Due

This Arduino board has the same form factor as the Arduino Mega, 
but uses the much more powerful atSam3xa Cortex-M3 micro-controller.
Note that unlike the Mega the IO voltage of the Due is 3.3V.

The connector pin names are the Arduino pin names, which
have no relation with the chip pin names.

The Due has two USB connectors. Both can be used to power the board.
The 'native' USB connector connects directly to the chip's USB interface. 
The 'programming' connector connects to an AVR chip that takes care
of programming the 

## Blue Pill

This is a popular and very cheap board with the 
STM32F103C8 micro-controller. 

The board has a micro-usb connector which is connected to the
chip's USB slave pins and can power the board,  but
this connector can't be used for hands-off bootloading.

There is a reset button and  pins that determine the bootmode are 
available on two jumpers, hence chip can be programmed by
in any way supported by the chip, but this would require fiddling with
the jumpers and pressing the reset button.

My preferred way to program this board is using a 
(clone) ST-LINK V2 programmer.
This requires a four-wire connection, which is (unfortunately)
not straight, check the pictures.

## Blue Brick

reset button, power LED
button, LED, 24C02 eeprom, coin battery
TF-card, 8-pin FLASH chip, 
ESP8266, NRF24L01, SW1053/W5500, OLED/TFT, bluetooth serial

This is a non-name board that is available on various sites. 
It uses the same STM32F103C8 chip as the Blue Pill, hence
I call it the Blue Brick. 
The main attraction of this board it that it some on-board 
peripherals (which can either be present or be unpopulated),
and connectors for a range of peripheral boards.

The board has a micro-usb connector which is connected to the
chip's USB slave pins and can power the board,  but
this connector can't be used for hands-off bootloading.

There is a reset button and  pins that determine the bootmode are 
available on two jumpers, hence chip can be programmed by
in any way supported by the chip, but this would require fiddling with
the jumpers and pressing the reset button.

My preferred way to program this board is using a 
(clone) ST-LINK V2 programmer.
This requires a four-wire connection, which is (unfortunately)
not straight, check the pictures.