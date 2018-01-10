HwCpp is a library for writing micro-controller applications. 
A typical HwCpp application is a single main.cpp file that includes 
and combines the parts of the application. 

```C++
#include "hwcpp.hpp"

using target = hwcpp::target<>;
using timing = target::waiting;

int main(){ 
   hwcpp::blink< 
      target::led, 
	  timing::ms< 200 > 
   >();
}
```


A HwCpp application will in most cases be a single complilation unit:
...