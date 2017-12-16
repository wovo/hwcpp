#include "hwcpp.hpp"
#include <iostream>

/*
struct _pin_in_out : 
   hwcpp::_pin_in_out_root 
{
   static void init(){}
   
   static void direction_set_direct( hwcpp::pin_direction d ){}
   
   static void set_direct( bool v ){}

   static bool get_direct(){ return 0; }
};

using pin_in_out = hwcpp::_box_creator< _pin_in_out >;
using pin_in = hwcpp::pin_in< pin_in_out >;
*/


template< typename T >
concept bool test_case = requires( bool v ) {
   { T::set( v ) } -> void;
};

struct pin_in_out { static void set( bool v ){} };
struct pin_in{ };

/*
with IN = pin_in
with OUT = pin_out
requires bool v
1 == { IN::set( v ) } -> void
0 == { OUT::set( v ) } -> void
*/



int main(){
   std::cout << test_case< pin_in_out > << "\n";
   std::cout << test_case< pin_in > << "\n";
}