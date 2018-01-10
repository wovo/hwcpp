# Introduction

HwCpp is a library for writing micro-controller applications. 
This document provides a gentle introduction to using
HwCpp.
Basic C++ and hardware knowledge is assumed, but nothing too advanced.

# Blink a led

Blinking a LED is the "Hello world!" equivalent for micro-controllers,
so let's start with that.

[](from....)
```C++
#include "hwcpp.hpp"

using target = hwcpp::target<>;
using timing = target::timing;
using led    = target::led;

int main(){ 
   led::init();
   timing::init();
   
   for(;;){
      led::set( 1 );
      timing::ms< 200 >::wait();
      led::set( 0 );
      timing::ms< 200 >::wait();
   }
}
```
A typical HwCpp application is a single main.cpp file that includes 
and combines the parts of the application. 

```C++
#include "hwcpp.hpp"
```

The default way to specify which target is to put that information in
the makefile, which passes it to the compiler as a command-line macro.
The application includes "hwcpp.hpp", which turn includes 
the appropriate target-specific parts of HwCpp.

```C++
using target = hwcpp::target<>;
```

All hwcpp stuff is inside the namespace hwcpp. 
This includes the target<> template, which is, 
through makefile/macro/hwcpp.hpp magic, the target micro-controller 
or board you are building your application for.
By default, the target will use the highest clock speed possible, 
but in some cases you can specify a slower clock speed as template parameter.
In this case we don't, so the target will run full-speed.

```C++
using timing = target::timing;
```

Most things in HwCpp are classes, not objects, 
so :: is used to select a thing within another thing. 
The line above selects the default timing service offered by
our target as the timing we will use.

```C++
using led    = target::led;
```

This blinky application is written for a target board that has an
on board default LED. This is the case for the currently supported
targets boards (Arduino Uno, Arduino Due, Blue Pill).

```C++
   led::init();
   timing::init();
```

Most 'things' in HwCpp are classes, not objects, but the play roughly the 
same role objects do in standard OO style applications.
Objects are initialized by their constructors, HwCpp classes,
which are called Compile Time Objects (cto's), are initialized
by calling their ::init() function. 
*All* cto's must be initialialized in this way before they are used.
Here we initialize the tow cto's we will use: the timing and the LED.

```C++
   for(;;){
      . . .
   }
```

A micro-controller application has no Operating System to return to, 
hence it typically contains a never-ending loop.
We can probably bike-shed forever about the best way to write
such a loop, but I prefer for(;;) so that is what you will see.
   
```C++
      led::set( 1 );
      . . .
      led::set( 0 );  
```

The LED cto has a ::set() function that accepts a single bool value
and makes its pin high or low according to the parameter.

```C++
      timing::ms< 200 >::wait();
```

The timing cto has a set of macro's (ns<>, us<>, ms<>, s<>) 
that are used to specify a duration of the specified amount of time.
Such a duration cto has a ::wait() function that will wait for
the appropriate amount of time.

The point of a library is to make writing applications easier,
so HwCpp has a blink<> template that can be used to write a 
blinky. It requires the pin that must be blinked, and the
duration of the on and off periods.  

The HwCpp convention is that calling ::init() on cto's is
the duty of the code that uses the cto's.
Hence in this case it is the duty of the hwcpp::blink<> template 
to ::init() the led and duration, so we don't have to write
those lines. 
And because the timing is now mentioned only once 
the using... line for that can be omitted.

[](from....)
```C++
#include "hwcpp.hpp"

using target = hwcpp::target<>;

int main(){ 
   hwcpp::blink< 
      target::led, 
      target::timing::ms< 200 > 
   >();
}
```

The using... line for the target could be omitted too, but 
the target is mentione dtwice, so in my taste omitting that
line produces a blinky that is shorted, 
but slightly less pleasing to the eye.

[](from....)
```C++
#include "hwcpp.hpp"

int main(){ 
   hwcpp::blink< 
      hwcpp::target<>::led, 
      hwcpp::target<>::timing::ms< 200 > 
   >();
}
```

# Kitt
