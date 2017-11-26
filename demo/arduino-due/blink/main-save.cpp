#include <iostream>
#include "hwcpp.hpp"
#include "catch_with_main.hpp"

static bool v;

TEST_CASE( "pin out" ) {
    //static bool v;
    using p = hwcpp::pin_out_value< v >;
    p::set( 0 );
    REQUIRE( v == false );
    p::set( 0 );
    REQUIRE( v == true );
}

template< int N >
struct gpio_out_base { 
   static void set_direct( bool v ){
      std::cout << "pin " << N << " set to "	 << v << "\n";
   }
};

template< int N >
class gpio_out : public hwcpp::pin_out_direct_base< gpio_out_base< N > >{};

int xmain(){
   std::cout << "hello\n";
   using led = hwcpp::invert< gpio_out< 12 >>;
   // using led = invert< int >;
   led::set( 1 );
   //(void)led::get();
   return 0;
}