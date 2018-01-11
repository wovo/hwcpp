**** THIS IS UNDER CONSTRUCTION, NOT FIT FOR COMMON USE RIGHT NOW ****

The parts that are working can be inferred from the demos.

-----------------------------------------------------------------------------

HwCpp (Hardware-C++) is a header-only C++ close-to-the-hardware library 
for writing micro-controller applications. 
It uses modern C++ features (C++17 and concepts) 
to enable efficient code re-use. It relies heavily on unicorns.

The typical blink-a-LED application using HwCpp is:

```C++
#include "hwcpp.hpp"

using target = hwcpp::target<>;
using timing = target::waiting;

int main(){ 
   hwcpp::blink< target::led, timing::ms< 200 > >();
}
```
(This assumes that the target has a default LED, which is the case 
for the usual suspects like the Arduino Uno, Arduino Due and Blue Pill
boards.)

-----------------------------------------------------------------------------

Subdirectories:
   - attic   : junk from that past that I might need one time
   - demo    : demonstration projects, organized by target
   - include : the peripheral chips supported by the library
   - tests   : tests, organized by target
   
Files:
   - license_1_0.txt : boost license
   - hwcpp-documentation.docx : HwCpp documentation
   - makefile.inc : add the settings for this library (for bmptk)
   - Makefile.link : build dependencies on other libraries and bmptk
   - readme.md : this file

-----------------------------------------------------------------------------

The compilers I currently use are (gcc 7.2.0):
   - for windows native : https://mingw-w64.org/doku.php/download/mingw-builds 
   - for avr8 : http://blog.zakkemble.co.uk/avr-gcc-builds/ 
   - for arm/cortex : http://gnutoolchains.com/arm-eabi/ 

-----------------------------------------------------------------------------

Notes & ToDo
- add 'number of loops' to blink, kitt, walk
- python extractor for the .md files
- combine mirror and invert mechanics?
- fanout for ports - how to use the same name?
- ws2812 doesn't work??
- due in-line delays only up to 6, stm32 up to 10
- suppress stm32 asm warning
- better rationale & test for the borders and fuzz factors of the delays
- construction a cto gives 'use of a deleted function'
- stm32 short waiting & timing verification
- stm32 divisr for ADC
- stm32 UART
- stm32 field_set re-use??
- due last_low == global??
- stm32f030
- check & scavenge https://www.chromium.org/chromium-os/ec-development
- scavenge https://github.com/arobenko/embxx
- scavenge https://github.com/ETLCPP/etl
- 84 MHz rolls over in 5 sec??
- add timing (NAME!!) for cortexes
- set_direct should be internal (start with _)
- backpack is not a shield, "modules"??
- fanout moet gebufferd -> done, check
- port_from_buffers now only oc, needs pins
- stm32 uart, adc, full-speed
- avr return -> 2 sources kan niet meer
- re-create duplicate concept problem
- arduino uno longer waits take 8-byte arithmetic, even when constant
- concepts for duration are not complete
- concepts for box builder parameter
- format STM32 HAL
- sam8 restore timing
- usae auto instead of _vt for reading
- stream-object strlen should be from c lib
- stream builder should use _box_builder
- dummies and variable versions for adc and dac
- port-from-pins: terminology for 'recurse'?
- use dummies as recursion endpoints
- immplement pin-variables (or => box?)
- port-fixed, or should that be part of box?
- concept for a box-foundation?
- fanout< pin... > now has a write function :(
- box creator => bs creator??
- relation between blocking and buffering?
- macro for the no-inline specializations? also for buffering, invert, creators
- targets should have multiple-inclusion guards?
- strakkere naamgeving voor is_*, roots, larva's, creators
- automagic run at end of main
- allocate list of callbacks
- what does refresh() mean for a stream?
- lcd 16x2 separate test
- ostream negative int formatting is weird (neg / %)
- pull-up / pull-down < resistance? >
- rescale an interval box to a new scale
- box creator 149 unneedeed
- adapt oc pin to in-out
- flatten == inline *inside* a function
- the box adapters (in_out => out) set the dircetion, but NOT DIRECT
- tests for non-existing-ness
- re-rechk INLINE, should inits be ALWAYS_INLINE at all (maybe never)?
- box buffered/direct : can't be done on top of each other....
- box : fixed value, variable / reference ?, select, combine, moving_average
- box : average, limit, add, multiply, scale, linear_transform
- invert heeft nix met box te maken, kan ook voor stream ;)
- tabs => spaces
- thing that you decorate => minion
- use MHz etc for target frequencies?
- verder met box-adapters (welke precies mogen blijft aan de concrete boxes)
- file pin-utilities for things that trivally inherit from box
- dummies now need the pin adapters (or make that box adapters??)
- likewise for var-store
- target at328p should use usbaspd
- need a reverse-invert for non-idem-reversible ones?
- pcf8591 => test with resistors
- adc, joystick, joystick-button, => xy buttons
- adc ==> subrange input box => can invert!
- concepts should also test for the static const members
- HWLIB_TRACE : hwlib::cout :(
- tests demos should be moved to test?
- what is the due start-up frequency? => test reasonable toggle?
- fixed-out pins/ports to hwcpp
- // #undef putc in hwcpp-all.hpp
- remove redundancy from port concepts => ask Chiel
- a way to bundle pins without making the object? (for optional parts like on the JS shield)
- switch to other joystick shield, needs more distinctive name
- put or putc ? => write
- get from stream can use 'none' value, or maybe std::optional?
- due pin should disable adc of that pin
- bmptk has a problem with G++ := as was used in arduino uno
- joystick abstraction, scaling, run-time ratio
- use loop instead of recursion for port creators
- port variables
- likewise for I2C and SPI pins: appropriate type
- dac & adc buffering
- never use int, long, etc.
- chips (& other targets) must have a freq constant
- check uno a/d conversion frequency -> document
- print other things (various ints), test (ostream)
- http://www.shieldlist.org/dfrobot/lcd
- put all stream functionality in a class, using print(..), stream object is a shallow wrapper
- ostream only for a char-pipe (uart is a full pipe<char>)
- i2c timing profiles, should support narrowing
- idem for SPI!
- ostream ipv make_ostream, console?? any order? or ostream_object<>? or object<>?
- port now has only set_direct (used in hd44780)
- 8574 / hd44780 interface
- extend ostream (& tests)
- extend string (& tests)
- check everything for constexpr
- check everything for inline
- string<> possible?
- all BUT THE TOP functions in composed ports hould be HWLIB_INLINE 
- use a marker for string and reverse compare
- rewrite ostream tests to use string, and compare with std::ostream
- stm full speed
- pcf857a: needs create_a_port like for pins (check & extend)
- to kitt this: needs port_out from port_oc (check & extend)
- correct pin list for STM chip and for blue pill
- avr8 limits correct & add
- avr8 timer-based wait
- bmptk-build for demo (or even for all)
- macro for one-time initialization? init(){ call_once< init_proper >(); }
- port, I2C, PCF8574A
- graphics, name problem!, OLED, 84x48
- max toggle frequency, very short waits, busy waits
- check blue pill default & fast clocks
- SysTick use can be generalized
- make HAL port/pin interfaces more regular, use mask in other targets
- enumerate more pins (uno & due OK)
- target frequencies => due startup??
- show code, dseg, dss sizes from bmptk
- reinterpret a pin_in_out to something different (so only one to define)
- add author info, history, copyright to each file
- add header to demo's
- string! but be polite and print to std::cout too
- buffer/direct decorators
- compare code & size with OO-approach
- document with standardese?
- check the timing, STM32 base is OK
- error message are totally unfriendly
- complete ports, direct/buffered 
- analog inputs
- macro MAKE_MARKER ?
- invert_value separate bool version needed?
- check https://os.mbed.com/users/hudakz/code/STM32F103C8T6_Hello/wiki/Homepage
- can a use<> force the use of the arguments?
- i2c timing, should be part of the bus definition, check in the chip
- handling of pull-up/pull-down (always direct...) disable always possible?
- mention the paranoia-2 profiel
- rename files to hwcpp- ??
- bmptk native does compile the fixed stack??
- https://github.com/QQuick/Cantino
- mine Quora for C++ small embedded proponents


-----------------------------------------------------------------------------
      
(c) Wouter van Ooijen (wouter.vanooijen@hu.nl, wouter@voti.nl) 2017

Except for the exceptions below, HwCpp is distributed 
under the Boost Software License, Version 1.0.
(See accompanying file LICENSE_1_0.txt or copy at 
http://www.boost.org/LICENSE_1_0.txt)     

Exceptions: 
   - targets/chip-sam3xa.inc is (c) Atmel (now Microchip), asf license.      
   - the hwcpp-documentation document is under CC BY-NC 2.5.
   
      