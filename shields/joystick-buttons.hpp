// ============================================================================
//
// file : joystick-buttons.hpp
//
// ============================================================================  

template< typename _x_raw, typename _y_raw >
struct joystick {
   using x_raw = _y_raw;
   using x_raw = _y_raw;   
   
   //using x = scaled< x_raw, 300, 500 >;
   //using y = scaled< y_raw, 300, 500 >;
};	
   
template< typename target >
struct joystick_buttons {
	
   // https://www.allaboutcircuits.com/projects/level-up-arduino-joystick-shield-v2.4/
	  
   using joystick = hwlib::joystick< target::a1, target::a0 >
   
   using n = pin_in< target::d6 >;
   using e = pin_in< target::d4 >;
   using s = pin_in< target::d3 >;
   using w = pin_in< target::d5 >;
	
}; // class joystick_buttons
