#include "hwcpp.hpp"

using target = hwcpp::target<>;
using timing = target::timing;
using uart   = target::uart2;

int main(){ 
   timing::init();       
   hwcpp::ostream< uart > cout;
   using p = hwcpp::pin_in< target::a0 >;
   p::init();
   
   for(;;){
      cout << "Hello world!\n";
      cout 
         << "x=" 
         << hwcpp::hex
         << ( (uint32_t) ( 0x1 << 0 ) & (((GPIO_TypeDef *) GPIOA_BASE ) -> IDR ) )
         << "\n";
	  timing::ms< 1'000 >::wait();
   }	  
}

