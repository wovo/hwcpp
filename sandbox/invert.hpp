// ============================================================================
//
// file : invert.hpp
//
// ============================================================================


bool invert_value( bool v ){ return ! v; }
// unit8_t invert_value( uint8_t v ){ return ! v; }

template< typename T >
struct invert_set : public T {
    
   	static void HWLIB_INLINE set( auto v ){ 
       T::set( invert_value( v ) ); }
       
   	static void HWLIB_INLINE set_buffered( auto v ){ 
       T::set_buffered( invert_value( v ) ); }
};	

template< typename T >
struct invert_get : public T {
    
   	static auto HWLIB_INLINE get(){ 
       return invert_value( T::get() ); }
       
   	static auto HWLIB_INLINE get_buffered(){ 
       return invert_value( T::get_buffered() ); }
};	

template< typename T >
struct invert { 
   static_assert( always_false<T>::value, "that class can't be inverted" );
};	

template< is_pin_out T >
struct invert< T > : nvert_set< T > {};	

template< is_pin_in T >
struct invert< T > : invert_get< T > {};

template< is_pin_in_out T >
struct invert< T > : invert_get< invert_set< T > > {};

template< is_pin_oc T >
struct invert< T > : invert_get< invert_set< T > > {};	

// add for ports, pwm, a/d, d/a, quadrature -> means something different!


