#include "catch_with_main.hpp"
#include "hwcpp.hpp"

//static bool v;

struct wrap { static inline bool v; };

TEST_CASE( "pin out" ) {
   //struct wrap { static inline bool v; };
   using p = hwcpp::pin_out_value< wrap::v >;
   p::set( 0 );
   REQUIRE( wrap::v == false );
   p::set( 1 );
   REQUIRE( wrap::v == true );
}
