#include "hwcpp.hpp"

using target = hwcpp::target<>;
using timing = target::waiting;
using uart   = target::uart;

int main(){ 
   timing::init();       
   hwcpp::ostream< uart > cout;
   
   for(;;){
      cout << "Hello world!\n";
      cout << "t=" << hwcpp::hex << (int32_t) target::now_ticks() << "\n";
      auto t1 = (int32_t) target::now_ticks() ;
      auto t2 = (int32_t) target::now_ticks() ;
      auto t3 = (int32_t) target::now_ticks() ;
      cout << t1 << " " << t2 << " " << t3 << "\n";
	  timing::ms< 1'000 >::wait();
   }	  
}

