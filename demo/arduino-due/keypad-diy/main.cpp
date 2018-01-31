#include "hwcpp.hpp"

using target = hwcpp::target<>;
using timing = target::timing;
   
// inclusion marker ##function   
template< 
   hwcpp::can_port_oc _rows, 
   hwcpp::can_port_in _columns >
int keypad_read(){
   using rows = hwcpp::port_oc< _rows >;
   using columns = hwcpp::port_in< _columns >;    
   rows::init();
   columns::init();
   timing::init();
   for( int i = 0; i < rows::n_pins; ++i ){
      rows::set( ~ ( 0x01 << i ) );
      //delay::wait();
      auto c = ~ columns::get();
      for( int j = 0; j < columns::n_pins; ++j ){
         if( ( c & ( 0x01 << j ) ) != 0 ){ 
            return 10 * ( i + 1 ) + j + 1;
         }            
      }         
   }   
   return 0;
}
// inclusion marker ##function

// inclusion marker ##main
using rows = hwcpp::port_oc<
   target::d58,
   target::d59,
   target::d60,
   target::d61 >;   

using columns = hwcpp::port_in<
   target::d54,
   target::d55,
   target::d56,
   target::d57 >;

int main(){ 
   hwcpp::ostream< target::uart > cout; 
   timing::ms< 1'000 >::wait();  
   cout << "keypad demo\n";
   int previous = 0;    
   for(;;){
      auto k = keypad_read< rows, columns >();
      if( k != previous ){
         cout << "k=" << (int32_t) k << "\n";
         previous = k;
      }         
   }   
}
// inclusion marker ##main
