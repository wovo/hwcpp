**** THIS IS UNDER CONSTRUCTION, NOT FIT FOR USE RIGHT NOW ****

HwCpp (Hardware-C++) is a heasder-only C++ close-to-the-hardware library 
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
   - attic : junk from that past that I might need one time
   - demo : demonstration projects, organized by target
   - library : the target and hardware independent parts of the library
   - targets : the HALs for the supported taregts
   
Files:
   - license_1_0.txt : boost license
   - documentation.docx : HwCpp documentation
   - makefile.inc : add the settings for this library (for bmptk)
   - Makefile.link : build dependemcies on other libraries and bmptk
   - readme.md : this file

-----------------------------------------------------------------------------

Notes & ToDo

- avr8 limits corrcet & add
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
- enumerate all pins
- target frequencies
- show code, dseg, dss sizes from bmptk
- reinterpret a pin_in_out to something different (so only one to define)
- add author info, history, copyright to each file
- string! but be polite and print to cout too
- buffer/direct decorators
- compare code & size with OO-approach
- document with standardese?
- check the timing
- error message is totally unfriendly
- complete ports, direct/buffered 
- HERADERS zijn geen dependencies in bmptk??
- analog inputs


-----------------------------------------------------------------------------
      
(c) Wouter van Ooijen (wouter.vanooijen@hu.nl, wouter@voti.nl) 2017

Except for the exceptions below, HwCpp is distributed 
under the Boost Software License, Version 1.0.
(See accompanying file LICENSE_1_0.txt or copy at 
http://www.boost.org/LICENSE_1_0.txt)     

Exceptions: 
   - targets/chip-sam3xa.inc is (c) Atmel (now Microchip), asf license.      
   - the hwcpp-documentation document is under CC BY-NC 2.5.
   
      