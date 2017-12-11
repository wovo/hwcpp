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
- arduino uno timing overflow??
- uart now has init-on-use, should not be needed: when cout is created -> init
- max toggle tests, document freq
- invert port(blue pill) doesn't work
- fixed-out pins/ports to hwcpp
- // #undef putc in hwcpp-all.hpp
- .md should reflect new structure
- remove redundancy from port concepts => ask Chiel
- due adc read should be one function shared by all adcs (flyweight)
- a way to bundle pins without making the object? (for optional parts like on the JS shield)
- switch to other joystick shield, needs more distinctive name
- put or putc ?
- get from stream can use 'none' value, or maybe std::optional?
- uno UART
- due pin should disable adc of that pin
- bmptk has a problem with G++ := as was used in arduino uno
- joystick abstraction, scaling, run-time ratio
- new joystick-buttons shield
- demos -> examples?
- more port adapters
- use loop instead of recursion for port creators
- port dummies, port variables
- LED etc. in targets should be pin_out and active high => check uno, due, blue
- likewise for I2C and SPI pins: appropriate type
- push/pop strictest compiler settings possible
- dac & adc buffering
- never use int, long, etc.
- chips (& other targets) must have a freq constant
- check uno a/d conversion frequency
- print other things (various ints), test
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
- hwcpp::string
- rewrite ostream tests to use string, and compare with std::ostream
- stm full speed
- pcf857a: needs create_a_port like for pins (check & extend)
- to kitt this: needs port_out from port_oc (check & extend)
- correct pin list for STM chip and for blue pill
- avr8 limits correct & add
- avr8 timing is now patched
- avr8 timer-based wait
- bmptk-build for demo (or even for all)
- macro for one-time initialization? init(){ call_once< init_proper >(); }
- port, I2C, PCF8574A
- graphics, name problem!, OLED, 84x48
- max toggle frequency, very short waits, busy waits
- check blue pill default & fast clocks
- SysTick use can be generalized
- make HAL port/pin interfaces more regular, use mask in other targets
- enumerate more pins
- target frequencies
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
- HEADERS zijn geen dependencies in bmptk??
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
   
      