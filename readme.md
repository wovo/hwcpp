**** THIS IS UNDER CONSTRUCTION, NOT FIT FOR USE RIGHT NOW ****

HwCpp (Hardware-C++) is a heasder-only C++ close-to-the-hardware library 
for writing micro-controller applications. 
It uses modern C++ features (C++17 and concepts) 
to enable efficient code re-use. It relies heavily on unicorns.

The typical blink-a-LED application using HwCpp is:

```C++
#include "hwcpp.hpp"

using target = hwcpp::target<>;

int main(){ 
   hwcpp::blink< target::led >();
}
```
(This assumes that the target has a default LED, which is the case 
for the usual suspects like the Arduino Uno, Arduino Due and Blue Pill
boards.)

-----------------------------------------------------------------------------

Subdirectories:
   attic : junk from that past that I might need one time
   demo : demonstration projects, organized by target
   library : the target and hardware independent parts of the library
   targets : the HALs for the supported taregts
   
Files:
   license_1_0.txt : boost license
   documentation.docx : HcWpp documentation
   makefile.inc : add the settings for this library (for bmptk)
   Makefile.link : build dependemcies on other libraries and bmptk
   readme.md : this file

-----------------------------------------------------------------------------

Notes & ToDo

- make pin interfaces more regular, use mask in other targets
- enumerate all pins
- target frequencies
- wait & delay, blink in demos.hpp
- .lst is not automatically updated by bmptk
- show code, dseg, dss sizes from bmptk
- reinterpret a pin_in_out to something different (so only one to define)
- add author info, history, copyright to each file
- string! but be polite and print to cout too
- get the bmptk intgeration stuff out of the main path
- check xkcd license
- buffer/direct decorators
- add data type for easier decorators (needed for ports anyway)
- remove AVR8 hacks from basics.hpp

-----------------------------------------------------------------------------
      
(c) Wouter van Ooijen (wouter.vanooijen@hu.nl, wouter@voti.nl) 2017

Except for the notes below, HwCpp is distributed 
under the Boost Software License, Version 1.0.
(See accompanying file LICENSE_1_0.txt or copy at 
http://www.boost.org/LICENSE_1_0.txt)     

Notes: 
- targets/chip-sam3xa.inc is (c) atmel, under asf license.      
- documentation license different due to xkcd  
      