// ============================================================================
//
// file : pin-decorators.hpp
//
// base decorators and concepts for out, in, in_out and oc pins
//
// ============================================================================

template< typename T >
struct pin_out { 
   static_assert( always_false<T>::value, 
      "that class can't be decorated to be a pin_out" );
};	

template< is_pin_out T >
struct pin_out< T > : T {};	

// a pin_in can't be converted to a pin_out

template< is_pin_in_out T >
struct pin_out< T > : T {
   static void init(){
	  T::init(); 
      T::direction_set( direction::input );
   }	
   
private:
   static void direction_set( direction d );
   static void direction_set_direct( direction d );
   static void direction_set_buffered( direction d );
   static void direction_flush( direction d );
   
   static bool get();
   static bool get_direct();
   static bool get_buffered();
   static void invalidate();
};

template< is_pin_oc T >
struct pin_out< T > : T {};	
