introduction

HwCpp is a library for writing micro-controller applications. 
A typical HwCpp application is a single main.cpp file that includes 
and combines the parts of the application. 

blink a led

Blinking a LED is the "Hello world!" equivalent for micro-controllers,
so let's start with that.

[](from....)
```C++
#include "hwcpp.hpp"

using target = hwcpp::target<>;
using timing = target::waiting;
using led    = target::led;

int main(){ 
   led::init();
   timing::init();
   for(;;){
      led:;set( 1 );
	  timing::ms< 200 >::wait();
      led:;set( 0 );
	  timing::ms< 200 >::wait();
   }
}
```

The default way to specify which target is to put that information in
the makefile, which passes it to the compiler as a command-line macro.
The application includes "hwcpp.hpp", which turn includes the appropriate
target-specific parts of HwCpp.



[](from....)
```C++
#include "hwcpp.hpp"

using target = hwcpp::target<>;
using timing = target::waiting;

int main(){ 
   hwcpp::blink< 
      target::led, 
	  target::timing::ms< 200 > 
   >();
}
```


A HwCpp application will in most cases be a single complilation unit:
...