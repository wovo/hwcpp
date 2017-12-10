// ============================================================================
//
// file : hwcpp-joystick-buttons.hpp
//
// ============================================================================  

template< typename _x_raw, typename _y_raw >
struct joystick {
   using x_raw = _x_raw;
   using y_raw = _y_raw;   
   
   //using x = scaled< x_raw, 300, 500 >;
   //using y = scaled< y_raw, 300, 500 >;
   
   static void init(){
      x_raw::init();
      y_raw::init();	   
   }   
};	
   
template< typename target >
struct joystick_buttons {
	
   // www.allaboutcircuits.com/projects/level-up-arduino-joystick-shield-v2.4
	  
   using n = pin_in< typename target::d6 >;
   using e = pin_in< typename target::d4 >;
   using s = pin_in< typename target::d3 >;
   using w = pin_in< typename target::d5 >;
   using f = pin_in< typename target::d2 >;
   
   using js = joystick< 
      typename target::a1, 
	  typename target::a0 >;
   
   static void init(){
      n::init();
      e::init();
      s::init();
      w::init();   	   
      f::init();   	   
      js::init();
   }	
	
}; // class joystick_buttons
