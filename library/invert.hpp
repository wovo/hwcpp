// ============================================================================
//
// file : invert.hpp
//
// ============================================================================


bool HWLIB_INLINE invert_value( bool v ){ return ! v; }
auto HWLIB_INLINE invert_value( auto v ){ return ~ v; }


// ============================================================================
//
// pass everything, but invert specific functions
//
// ============================================================================

template< typename T >
struct invert_set : T {
	
	using value_type = typename T::value_type;
    
   	static void HWLIB_INLINE set( value_type v ){ 
       T::set( invert_value( v ) ); }
       
   	static void HWLIB_INLINE set_direct( value_type v ){ 
       T::set_direct( invert_value( v ) ); }
       
   	static void HWLIB_INLINE set_buffered( value_type v ){ 
       T::set_buffered( invert_value( v ) ); }
};	

template< typename T >
struct invert_get : T {
    
   	static auto HWLIB_INLINE get(){ 
       return invert_value( T::get() ); }
       
   	static auto HWLIB_INLINE get_direct(){ 
       return invert_value( T::get_direct() ); }
	   
   	static auto HWLIB_INLINE get_buffered(){ 
       return invert_value( T::get_buffered() ); }
};	


// ============================================================================
//
// invert decorator
//
// ============================================================================

template< typename T >
struct invert { 
   static_assert( always_false<T>::value, 
      "that class can't be inverted" );
};	

// ========== pins =========

template< is_pin_out T >
struct invert< T > : invert_set< T > {};	

template< is_pin_in T >
struct invert< T > : invert_get< T > {};

template< is_pin_in_out T >
struct invert< T > : invert_get< invert_set< T > > {};

template< is_pin_oc T >
struct invert< T > : invert_get< invert_set< T > > {};	

// ========== ports =========

template< is_port_out T >
struct invert< T > : invert_set< T > {};	

template< is_port_in T >
struct invert< T > : invert_get< T > {};

template< is_port_in_out T >
struct invert< T > : invert_get< invert_set< T > > {};

template< is_port_oc T >
struct invert< T > : invert_get< invert_set< T > > {};	

// add for pwm, a/d, d/a, quadrature -> means something different!


