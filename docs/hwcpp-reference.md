HwCpp Reference
===

<!-- update table_of_contents( input ) -->
    * [1 Introduction](#toc-anchor-0)

    * [2 Library mechanisms](#toc-anchor-1)

       * [2.1 Source, sink](#toc-anchor-2)

       * [2.2 Box : get, set, invalidate, flush](#toc-anchor-3)

       * [2.3 Stream : read, write, refresh, flush](#toc-anchor-4)

       * [2.4 Class filters](#toc-anchor-5)

       * [2.5 Public, Library-internal, File-internal](#toc-anchor-6)

       * [2.6 pin_in_out_creator](#toc-anchor-7)

       * [2.7 root class, class filter, class creator, mixin class](#toc-anchor-8)

       * [2.8 Files](#toc-anchor-9)

       * [2.9 Dependencies](#toc-anchor-10)

       * [2.10 Static classes](#toc-anchor-11)

    * [3 include "hwcpp.hpp"](#toc-anchor-12)

       * [3.1 Interfaces and concepts](#toc-anchor-13)

    * [4 Glossary](#toc-anchor-14)

<!-- update end -->


<a name="toc-anchor-0"></a>
# 1 Introduction

HwCpp (HardWare library for C++) is a library for efficient and 
re-usable programming of (small) micro-controllers. 
It uses modern C++ features (C++17, concepts TS) to enable 
efficient code re-use. It relies heavily on unicorns.

It contains abstractions and implementations of for instance GPIO pins, 
timing (including a cooperative multitasking scheduler), 
and interfaces to external hardware like SPI and I2C busses, 
IO extenders, A/D converters, and LCDs. 

The library  is provided under the Boost license, which basically 
means that you can do everything you want with this software, 
except that when you re-distribute the source, 
it must be under that same license. 

The library aims to enable target-agnostic programming, 
and at the same time to be as efficient as C code written 
for a specific situation. 
To this end HwCpp makes extensive use of C++ 17 features, 
concepts, and some gcc-specific extensions.
Hence a recent gcc compiler is required (7.2 or later). 
Clang will probably work too when it implements concepts.

HwCpp is not a complete development environment, 
but it can be used with bmptk, which provides a simple 
make-based build and download environment.
Check the 'Getting Started' document for details.

For the situations HwCpp is intended for, some C++ features 
are often inappropriate. 
Hence the HwCpp obeys some restrictions:
 - No dynamic (heap) memory is used.
 - No exceptions are used.
 - No RTTI is used.
 - No floating-point operations are used directly 
   (but a hwcpp template can be instantiated with a floating point type) 

Additionally, to suit my personal taste:
 - No global objects that require run-time initialization are used.
 - With very few exceptions, the library code compiles without warnings 
 at the highest warning level.

Note that these limitations are met by hwcpp; this does not imply that 
an application that uses hwcpp must also meet these limitations.

HwCpp is 'work in progress'. 
The latest version can be found at github.com/wovo/hwcpp. 
If you somehow found and used hwcpp I am very interested 
to hear your experiences and comments.

The comics in this document are from www.xkcd.com, 
a definite must-see for everyone involved in computer programming, 
or otherwise thinks (too) logically.

Wouter van Ooijen (wouter.vanooijen@hu.nl, or wouter@voti.nl)

<a name="toc-anchor-1"></a>
# 2 Library mechanisms
 
This section explains some terms and mechanisms used in the library.

![xkcd "Manuals"](https://imgs.xkcd.com/comics/manuals.png)

<a name="toc-anchor-2"></a>
## 2.1 Source, sink

<a name="toc-anchor-3"></a>
## 2.2 Box : get, set, invalidate, flush
<a name="toc-anchor-4"></a>
## 2.3 Stream : read, write, refresh, flush
<a name="toc-anchor-5"></a>
## 2.4 Class filters
<a name="toc-anchor-6"></a>
## 2.5 Public, Library-internal, File-internal
<a name="toc-anchor-7"></a>
## 2.6 pin_in_out_creator
<a name="toc-anchor-8"></a>
## 2.7 root class, class filter, class creator, mixin class
how to call the fanout style?

<a name="toc-anchor-9"></a>
## 2.8 Files
HwCpp is a is header-only and meant for single-source projects. Normal use is  for the user to include hwcpp.hpp and specify the target using a command-line define. The hwcpp.hpp file includes the target-specific header (one of the target-*.hpp files in the /targets directory), as specified by the define. Alternately, the user could include one of the target-specific header files directly.
A target-specific header includes hwlib-all.hpp, which in turn includes all target-independent files of the library.
The individual HwCpp files are NOT meant to be included directly: they don’t have the multiple-inclusion guards and namespace brackets required for an independent file.

<a name="toc-anchor-10"></a>
## 2.9 Dependencies
HwCpp uses C++17 features and the Concepts TS. It has been tested (only) with GCC 7.2.0. 
The hwcpp.hpp file requires a command-line defined target. Check this file for the currently supported targets.
Some module tests use Catch2 and assume that the include path is set to find the Catch2 files.
The AVR8 GCC doesn’t provide a (full) standard library. The directory targets/avr8-hacks contains some hacks to make the library work with this toolchain. This directory should be in the include path only when building for AVR8.
The target-specific files assume that the manufacturer’s chip definition files are in the search path. These files are not part of the library, and are not distributed with the standard GCC distributions.
The author uses bmptk, a make-based build-and-download framework for embedded targets, to handle the aspects of embedded application building that are outside the scope of HwCpp. The examples and tests have a chain of Makefile and Makefile.link files that work with bmptk, assuming that it is located ‘next’ to HwCpp.

<a name="toc-anchor-11"></a>
## 2.10 Static classes
The main abstraction mechanism used in HwCpp is the static class (and the static class template). A static class is a class (or struct) that has only static elements: static functions, static data, and sub-classes. A static class has no per-instance data and no non-static functions.  A static class has no lifetime, hence it can’t cause dangling references. A static class doesn’t have a constructor. Instead all static classes have an init() function that must be called before any data or other functions of the static class is used.
An example of a static class is a GPIO pin. A target board often has a LED that can be controlled by the application. By convention, the pin to which this LED is connected is available as the active-high  output pin led. The target itself is available as the class template target, within the namespace hwcpp. The following application first initializes the LED and then enables it.
<a name="toc-anchor-12"></a>
# 3 include "hwcpp.hpp"

using target = hwcpp::target<>;

int main(){ 
   target::led::init();
   target::led::set( 1 );
}

<a name="toc-anchor-13"></a>
## 3.1 Interfaces and concepts
A static class implements on or more interfaces. It advertises this by inheriting from the root class, xyz_rooot for an interface xyz, for each interface it implements. This inserts a tag element  into the class, and probably some more items that are mandatory for that interface. For each interface xyz, a concept is_xyz tests for the marker and the other elements required by the interface. This concept is used to constrain templates that accept only classes that implement a specific interface. 
The pin_out interface is identified by inheriting from the pin_out_root. The is_pin_out concept tests for the presence of this marker and the other required interface elements: init() and set( bool ).
struct pin_out_root {
   static constexpr bool is_pin_out = true;
};

template< typename T >
concept bool is_pin_out = requires( bool v ){
   T::is_pin_out;
   { T::init() } -> void;	  
   { T::set( v ) } -> void;
};
An output pin implements the is_pin_out interface, hence it inherits from pin_out_root. This obliges it to provide (among other things) a set( bool ) function (and of course the obligatory init() function).
struct led : pin_out_marker {
   static void init(){ . . . }
   static void set( bool v ){ . . . }
}
A template that can handle only a pin_out uses the is_pin_out concept to restrict the template parameters it accepts. This is the (simplified) specialization of the invert<> template that handles pin_out.
template< is_pin_out T >
struct invert< T > : T {
   static void set( bool v ){ 
       T::set( !v ); 
   }
};
2.5.	 Adapters
The bulk of the library is coded as wrappers. A wrapper is a function template that takes one or more objects (that each implement an interface), and returns an object that implements an interface. This interface can be the same as one of the argument interfaces or a different one.  
The class of the object returned by a wrapper inherits from (and hence implements) one of the libraries interfaces. A wrapper never inherits from one of its arguments: it uses delegation rather than inheritance.
Wrappers that are called X_from take some arguments, and return an object that implements interface X. Such wrappers are often used to either convert an argument objects into a suitable form, or give a decent compile-time error message if this is not possible. 
Run-time duck typing  is used by many interpreted ‘scripting’ languages. It implies that a piece of code doesn’t care what type of object it gets passed to work on, as long as that object supports all the operations it wants to do on it during execution. Note during execution: if an execution path that is never activated would attempt an operation that is not supported by the object, no one will ever know.
Most hwcpp wrappers use compile-time duck typing: they are templatized on the type of each parameter, hence any type is  acceptable, provided that it provides all the operations that the body of the wrapper does on the object. To avoid deep error messages, a wrapper will start with a check that it gets a parameter that is suitable. This is often realized as a conversion of the argument to a more suitable type, using a *_from() wrapper.
The blink function shows below is not a wrapper in the normal sense (because it does something instead of returning something), but is shows the way a wrapper accepts an argument. The type of the p argument is a template parameter, hence any (non-const) object is acceptable. The first thing done inside the function is to pass the p to the pin_out_from wrapper, which either converts it to a pin_out (so blink() does not have to bother with for instance setting the direction when it gets passed a pin_in_out), or fails with a suitable compile time error message.
template< typename Pin > 
void function blink( Pin & p ){ 
   auto pin = pin_out_from( p );
   . . . 
}
2.6.	 Optimization
Hwcpp objects can be passed as classic OO objects that are used via their virtual functions, but in most cases it preferable to use each object as a distinct type, which causes the compiler to instantiate and optimize the callee for the use of the specific object. This mechanism is essential to get compact and fast code. 
The example below shows how a blink function accepts an object as a distinct type. Because all pin objects are unique types, each call to this blink function (with a different pin object) instantiates the template for that object type, which enables the compiler to optimize it for that type, which (with the appropriate compiler settings) eliminates the virtual calls. 
template< typename Pin > 
void function blink( Pin & p ){ 
   auto pin = pin_out_from( p );
   . . . 
}

// both calls are instantiated and optimized for their pin
blink( target.gpio_0_5 );
blink( target.gpio_0_6 );
When a function is large and it is called with objects of many different type, a separate instantiation for each type can lead to code bloat. This can be avoided by erasing the type of the passed object down to its interface type, which results in one instantiation of the function being created per interface type. The template function interface() does this, by casting its argument to its interface_type. This mechanism puts the choice between per-argument instantiation and optimization, or one-function-to-serve-them-all, on the user.
// instantiated once for the interface type of gpio_0_5/gpio_0_6 (pin_oc)
// and hence shared by all other pins that are passed as pin_oc
blink( interface( target.gpio_0_5 ));
blink( interface( target.gpio_0_6 ));
Functions that are not expected to benefit from being instantiated separately for each argument can be written in the classical way, accepting an object of the interface type by reference. A disadvantage is that such a function accepts only the exact type. 
void function foo( pin_in_out & pin ){ . . . }

// OK with or without wrapper: gpio_0_0 is a pin_in_out
foo( target.gpio_0_0 ); 
foo( pin_in_out_from( target.gpio_0_0 ));

// wrapper needed: gpio_0_5 is a pin_oc
foo( pin_in_out_from( target.gpio_0_5 ));
A disadvantage is that such a function accepts only the exact type. 

<a name="toc-anchor-14"></a>
# 4 Glossary

This section describes the terms that have a specific meaning 
in the context of the library. 
The order in which the terms are introduced minimizes 
the need for forward references.

1.1.	Box, get, set
A box is a thing that has get() and/or set() functions. A box behaves somewhat like a variable: calling get() on a box twice without any intervening changes in the ’world’ should return the same value. Likewise, calling set() twice on a box with the same value should have the same effect as calling it once. A box can be an in-box (has get functions), an out-box (has set functions) or both.
When a box is both an in box and an out box, it has direction functions for switching between in mode and out mode.
Examples of boxes are GPIO pins, ADC and DAC pins, sensors and (absolute) actuators. 
1.2.	 Stream, read, write
A stream is a thing that has read() and/or write() functions. Such functions alter the state of the stream that is read from or written to. Like a box, a stream can be an in-stream (read functions), an out-stream (write functions), or both.
Examples of streams are files and communication channels.
1.3.	 Blocking
An operation on a stream can be blocking: a read() call can have to wait until something is available to be read, a write() call can have to wait until it is possible to write. To facilitate a user who needs to avoid blocking a stream provides the functions read_would_block() and write_would_block(). These functions return true when a read or write call would have to wait.
1.4.	 Buffering
An action on a thing (a box or stream) can be postponed to a later moment, when all operations on that thing can be done more efficiently in one go. To facilitate this, streams and boxes have _direct() and _buffered versions of their get, set, read and write functions. The direct ones have immediate effect. The effect of a set_buffered() or write_buffered() call can be delayed until the next flush() call on the thing. Likewise, the external reality might not affect what is returned by a get_buffered() or read_buffered() call until a refresh() call is done on the thing.
When a box can be switched between in and out mode, it has default, direct and buffered versions of the direction_set function.
<example>
By default, the unadorned calls are direct. The buffered<> template can be used to create a version for which the default to buffered. This is meant to be done only for use within a limited scope.
<example>
For efficiency reasons, the default behavior for operations on higher-level things like graphic or text windows is in most cases buffered. The direct<> template can be used to create a version for which the default is direct.
<example>
1.5.	 CTO’s
The main building blocks of the library are (templated or complete) static classes. A static class contains  only things that are associated with the class (not with an instance): static const data, static functions, and sub-classes and templates (both of which are inherently static). These static classes act like objects that are created at compile time, hence they are called Compile Time Objects or cto’s. 
1.6.	 Groups
A group is a collection of cto’s that all have the same (minimal) properties. A cto can belong to more than one group.
An example of a of a group is pin_out. An example of a cto from this group is the target::led present on most target boards.
1.7.	 ::init()
Each cto has an ::init() function that must be called before any of the services of the cto is used. This call is for a cto what the constructor call is for a run-time object. The responsibility for calling init() on a cto is for the entity that uses the cto. If that using unit is itself a cto, the init call will be part of using unit’s init(). A unit should never assume that a cto that is passed to it (as a template parameter) has already been initialized. An init() function can be called multiple times.
1.8.	 ::value_types
Box and stream cto’s contain a type value_type that is the type of data written to or read from the box or stream. 
The value_type of the various pins is bool, the value_type of ports is the smallest unsigned integer that can hold one bit for each pin in the port. 
1.9.	 Tags
Each group X has a tag, which is a constexpr bool X_tag = true; This tag signifies that a cto that has this tag implements the semantics of the group.
1.10.	 Concepts
For each group X, a C++ concept is_X<> is defined. This concept checks for the presence of the tag, and preferably for the other properties that should be present. Group concepts are used to constrain template parameters, much like types are used to constrain function parameters.
The is_pin_out<> concept test whether cto belongs to the pin_out group.
1.11.	 Roots
For convenience, all cto’s in a group derive from a common root class. For a group X the root class (which can be a template) is called X_root. All roots inherit from uninistantiable to prevent instantiations of cto’s (which would be pointless, and hence probably a mistake).
The pin_out_root class is the root of all pin_out cto’s. pin_out_root inherits from box_out_root<bool>. This is a specialization of box_out_root<T>, which is the shared ancestor of all things you can ::set() to a T value.
1.12.	Foundations
A cto that implements the semantics of a group is often created from a simpler one. Such a simpler cto that is used to create a cto of group X is called an X_foundation.
A pin_in_out_foundation requires only init(), set_direct(), get_direct(), and direction_set_direct() functions.
1.13.	 Builders
An X_builder is a template that constructs an X cto from an X_foundation. 
An example is _box_creator<>, which creates a full box (with both default, buffered and direct versions of the relevant functions), from a foundation that has either the direct or the buffered functions (but not both, and no default version). 
// This creator is used for instance to create a full pin_in_out from a pin_in_out_foundation provided by a HAL.
1.14.	 HALs
A Hardware Abstraction Layer (HAL) is the code that interfaces directly to the hardware of a target. A minimal HAL provides GPIO (an _pin_in_out_founcation )and a busy delay function. A more complete HAL provides a monotonic timer, a context switch, and support for its peripherals like UART, ADC, DAC, PWM. Builders are used to create a full-function cto from the foundations provided by the target-specific HAL code.
The sam3xa HAL defines an _pin_in_out_foundation, and uses the _pin_in_out_builder to provide a full pin_in_out cto. 
<>

1.15.	 Filters
A filter is a template that passes only specific features of its argument. Filters are used in the library to adapt a cto to another kind of cto, which requires passing (only) certain functions.
The _box_set_filter passes only the box set functions of its argument.
template< typename T >
struct _box_set_filter { 
   using _vt = typename T::value_type;
   static void HWLIB_INLINE set( _vt v ){ T::set( v ); }
   static void HWLIB_INLINE set_direct( _vt v ){ T::set_direct( v );}
   static void HWLIB_INLINE set_buffered( _vt v ){ T::set_buffered( v ); }
   static void HWLIB_INLINE flush(){ T::flush(); }
};
The template that adapts a box_in_out to a box_out passes only the set functions, and amends the init function. 
template< _is_box_in_out T >
struct _box_out< T > :
   _box_out_root< T >,
   _box_set_filter< T >
{
   static void init(){
      T::init(); 
      T::direction_set( pin_direction::output );
   }	
};
1.16.	 Wrappers
A wrapper is a template that amends (changes, blocks, etc) only certain features of its argument (if present), and passes its other features unchanged. A wrapper is implemented as a basic template that does nothing, and a specialization for the case that its target features are present. This specialization does the actual wrapping.
An example of a wrapper is the _no_inline_init_wrapper<>, which passes the init() call, but without forcing it to be inline. All other features are passed transparently.
template< typename T >
struct _no_inline_init_wrapper : T {};

template< _has_box_out_functions T >
struct _no_inline_init_wrapper< T > : T {
   static void init(){ 
      T::init(); 
   }	
};
This  wrapper is used as in step in the _no_inline_wrapper<>. This wrapper is used by the templates that (recursively) create a port from a list of pins. In the recursion, the deeper functions are forced to be inline. The overall function however should not be forced to be inline, which is achieved by applying the _no_inline_warapper<> on the end result.
template< typename T >
using _no_inline_wrapper = 
   _no_inline_init_wrapper<
   _no_inline_out_wrapper<
   _no_inline_in_wrapper<
   _no_inline_direction_wrapper< T > > > >;
In terms of patterns, a wrapper can be either a decorator (when it changes the semantics of some functions, but doesn’t change the set of functions), or an adapter (when it adds or removes functions).
1.17.	Adapters
It is often too restrictive to limit a template parameter to a single group. It is common for a template to accept a cto from a set of groups, which is converted to a cto of the (for the template code) appropriate group before it is used. In such a case a concept can_X is used, which accepts any cto that can be converted to X by the adapter X<>.
An example of this pattern is the blink template, which accepts a can_pin_out, which is converted to a pin_out by the pin_out<> adapter.
template< can_pin_out pin, . . . >
void blink(){
   using led = pin_out< pin >;    
   led::init();
   . . .
   for(;;){    
      led::set( 1 );
	. . .
   }
}
1.18.	Dummies
A dummy has no purpose except that it implements the interface of the cto for which it is a dummy. Dummies are used as parameter defaults and as recursion endpoints.

The pin in-out dummy is created from a trivial (do-nothing) pin in-out foundation. The other pin dummies are created from the in-out one by adapters.

struct _pin_in_out_dummy_foundation : 
   _pin_in_out_root 
{   
   static void set_direct( bool v ){}      
   static bool get_direct(){ return 0; }
   static void direction_set_direct( pin_direction d ){}
};

using pin_in_out_dummy  = _box_builder< _pin_in_out_dummy_foundation >;
using pin_in_dummy      = pin_in<      pin_in_out_dummy >;
using pin_out_dummy     = pin_in_out<  pin_in_out_dummy >;
using pin_oc_dummy      = pin_oc<      pin_in_out_dummy >; 
1.19.	Naming convention
All declarations in the library (except for a few macro’s) are inside the namespace hwcpp. The naming convention for the library is to use lowercase, and separate the words by underscores (snake_case). 
The library file names use lisp-case. All files in the library start with ‘hwcpp‘. Except for include/hwcpp.hpp, which is the file to include in an application, all library files are in subdirectories of the include directory.
When a name consist of multiple words, the preferred order is largest-first. This is the same order the words would appear when the thing were a nested chain of objects (or cto’s). Variations (like _direct) are suffixes.
Names that are for internal use by the library start with a single underscore. The (very few) macros are prefixed by HWCPP_ (or _HWCPP for internal-use-only macros).


