#include <iostream>
#include "hwcpp.hpp"

template< int N >
struct gpio_out_base { 
   static void set_direct( bool v ){
      std::cout << "pin " << N << " set to "	 << v << "\n";
   }
};

template< int N >
class gpio_out : public hwcpp::pin_out_base< gpio_out_base< N > >{};

int main(){
   std::cout << "hello\n";
   using led = hwcpp::invert< gpio_out< 12 >>;
   // using led = invert< int >;
   led::set( 1 );
   //(void)led::get();
}