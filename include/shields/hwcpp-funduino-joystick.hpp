// ==========================================================================
//
// file : hwcpp-funduino-joystick.hpp
//
// ==========================================================================   
   
template< typename target, typename waiting >
struct funduino_joystick {
	
   using a = pin_in< typename target::d2 >;
   using b = pin_in< typename target::d3 >;
   using c = pin_in< typename target::d4 >;
   using d = pin_in< typename target::d5 >;
   using e = pin_in< typename target::d6 >;
   using f = pin_in< typename target::d7 >;
   
   using up     = a;
   using right  = a;
   using down   = a;
   using left   = a;
   
   static void init(){
      a::init(); 
      b::init(); 
      c::init(); 
      d::init(); 
      e::init(); 
      f::init(); 

   }
	
}; // struct funduino_joystick