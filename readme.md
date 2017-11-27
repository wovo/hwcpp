**** THIS IS UNDER CONSTRUCTION, NOT FIT FOR USE RIGHT NOW ****

HwCpp is a C++ library for close-to-the-hardware programming,
using templates, SFINAE, and other modern C++ trickery.

The typical blink-al-led application code using hwcpp is:

```C++
#include "hwcpp.hpp"

using led = hwlib::target<>::pin_out< 1, 5 >;

int main( void ){   
   hwlib::blink< led >();
}
```

-----------------------------------------------------------------------------

Notes & ToDo

- show code, dseg, dss sizes from bmptk
- reinterpret a pin_in_out to something different (so only one to define)
- add author info, history, copyright to each file
- string! but be polite and print to cout too
- get the bmptk intgeration stuff out of the main path
- check xkcd license

-----------------------------------------------------------------------------
      
(c) Wouter van Ooijen (wouter.vanooijen@hu.nl, wouter@voti.nl) 2017

Distributed under the Boost Software License, Version 1.0.
(See accompanying file LICENSE_1_0.txt or copy at 
http://www.boost.org/LICENSE_1_0.txt)     

note: 
- lib/targets/hwlib-arduino-due-system-sam3xa.inc is (c) atmel, 
  under asf license.      
- documentation license different due to xkcd  
      