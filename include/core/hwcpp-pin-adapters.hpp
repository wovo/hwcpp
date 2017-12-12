// ============================================================================
//
// file : hwcpp-pin-adapters.hpp
//
// adapters that transform a pin to another kind of pin
//
// ============================================================================
//
// This file is part of HwCpp, 
// a C++ library for close-to-the-hardware programming.
//
// Copyright Wouter van Ooijen 2017
// 
// Distributed under the Boost Software License, Version 1.0.
// (See the accompanying LICENSE_1_0.txt in the root directory of this
// library, or a copy at http://www.boost.org/LICENSE_1_0.txt)
//
// ============================================================================


// ============================================================================
//
// PUBLIC
//
// concepts that decide whether a pin can be converted to the requested pin
//
// ============================================================================

template< typename T >
concept bool can_pin_out =  
      is_pin_out< T >
   || is_pin_in_out< T >
   || is_pin_oc< T >;

template< typename T >
concept bool can_pin_in =  
      is_pin_in< T >
   || is_pin_in_out< T >
   || is_pin_oc< T >;

template< typename T >
concept bool can_pin_in_out =  
     is_pin_in_out< T >
   || is_pin_oc< T >;

template< typename T >
concept bool can_pin_oc =  
      is_pin_in_out< T >
   || is_pin_oc< T >;


// ============================================================================
//
// FILE-INTERNAL
//
// pass (only) certain pin functions
// 
// This takes the repetition out of the adapters.
//
// ============================================================================


// ========== pass the set functions ==========

template< typename T >
struct _pass_pin_set { 
    
   static void HWLIB_INLINE set( bool v ){ 
      T::set( v ); 
   }
   static void HWLIB_INLINE set_direct( bool v ){ 
      T::set_direct( v ); 
   }
   
   static void HWLIB_INLINE set_buffered( bool v ){ 
      T::set_buffered( v ); 
   }
   
   static void HWLIB_INLINE flush(){ 
      T::flush(); 
   }
};    

// ========== pass the get functions ==========

template< typename T >
struct _pass_pin_get { 
    
   static bool HWLIB_INLINE get(){ 
      return T::get(); 
   }
   static bool HWLIB_INLINE get_direct(){ 
      return T::get_direct(); 
   }
   
   static bool HWLIB_INLINE get_buffered( bool v ){ 
      return T::get_buffered( v ); 
   }
   
   static void HWLIB_INLINE invalidate(){ 
      T::invalidate(); 
   }
}; 

// ========== pass the init function ==========

template< typename T >
struct _pass_init { 
    
   static void HWLIB_INLINE init(){ 
      return T::init(); 
   }     
}; 


// ============================================================================
//
// PUBLIC
//
// adapt to a pin_out
//
// ============================================================================


// ========== base template ==========

template< can_pin_out T > struct pin_out;

// ========== adapt a pin out ==========

template< is_pin_out T >
struct pin_out< T > : T {};	

// ========== adapt a pin in ==========

// not possible

// ========== adapt a pin in out ==========

template< is_pin_in_out T >
struct pin_out< T > : 
   pin_out_root,
   _pass_pin_set< T > 
{
    
   static void HWLIB_INLINE init(){
	  T::init(); 
      T::direction_set( pin_direction::output );
   }	
};

// ========== adapt a pin oc ==========

template< is_pin_oc T >
struct pin_out< T > : 
   pin_out_root,
   _pass_init< T >,
   _pass_pin_set< T >  
{};	


// ============================================================================
//
// PUBLIC
//
// adapt to a pin_in
//
// ============================================================================


// ========== base template ==========

template< can_pin_in T > struct pin_in;

// ========== adapt a pin out ==========

// not possible

// ========== adapt a pin in ==========

template< is_pin_in T >
struct pin_in< T > : T {};	

// ========== adapt a pin in out ==========

template< is_pin_in_out T >
struct pin_in< T > : 
   pin_in_root,
   _pass_pin_get< T > 
{
    
   static void HWLIB_INLINE init(){
	  T::init(); 
      T::direction_set( pin_direction::input );
   }	
};

// ========== adapt a pin oc ==========

template< is_pin_oc T >
struct pin_in< T > : 
   pin_in_root,
   _pass_pin_set< T >  
{
        
   static void HWLIB_INLINE init(){
	  T::init(); 
      T::set_direct( 0 );
   }
};	


// ============================================================================
//
// PUBLIC
//
// adapt to a pin_in_out
//
// ============================================================================

// ========== base template ==========

template< can_pin_in_out T > struct pin_in_out;

// ========== adapt a pin out ==========

// not possible

// ========== adapt a pin in ==========

// not possible

// ========== adapt a pin in out ==========

template< is_pin_in_out T >
struct pin_in_out< T > : T {};

// ========== adapt a pin oc ==========

template< is_pin_oc T >
struct pin_in_out< T > : 
   pin_in_out_root,
   _pass_pin_set< T >,  
   _pass_pin_get< T >  
{
    
   static void HWLIB_INLINE direction_set( pin_direction d ){
      if( d == pin_direction::input ){
         T::set( 1 );
      }   
   }    
   
   static void HWLIB_INLINE direction_direct( pin_direction d ){
      if( d == pin_direction::input ){
         T::set_direct( 1 );
      }       
   }    

   static void HWLIB_INLINE direction_set_buffered( pin_direction d ){
      if( d == pin_direction::input ){
         T::set_buffered( 1 );
      }         
   }    
   
   static void HWLIB_INLINE direction_flush(){
      T::flush();       
   } 
        
   static void HWLIB_INLINE init(){
	  T::init(); 
      T::set_direct( 0 );
   }
};	


// ============================================================================
//
// PUBLIC
//
// adapt to a pin_oc
//
// ============================================================================


// ========== base template ==========

template< can_pin_oc T > struct pin_oc;

// ========== adapt a pin out ==========

// not possible

// ========== adapt a pin in ==========

// not possible

// ========== adapt a pin in out ==========

template< is_pin_in_out T >
struct pin_oc< T > : 
   pin_oc_root,
   _pass_pin_set< T >,  
   _pass_pin_get< T >  
{
    
   static void HWLIB_INLINE set( bool v ){
       if( v ){
          T::direction_set( pin_direction::input );   
       } else {
          T::direction_set( pin_direction::output );   
          T::set( 0 );
       }
   }
   
   static void HWLIB_INLINE set_direct( bool v ){
       if( v ){
          T::direction_set_direct( pin_direction::input );   
       } else {
          T::direction_set_direct( pin_direction::output );   
          T::set_direct( 0 );
       }
   }
   
   static void HWLIB_INLINE set_buffered( bool v ){
       if( v ){
          T::direction_set_buffered( pin_direction::input );   
       } else {
          T::direction_set_buffered( pin_direction::output );   
          T::set_buffered( 0 );
       }
   }
   
   static void HWLIB_INLINE flush(){
      T::direction_flush();
      T:flush();
   }       
            
   static void HWLIB_INLINE init(){
	  T::init(); 
      T::direction_set_direct( pin_direction::input );
   }
};	

// ========== adapt a pin oc ==========

template< is_pin_oc T >
struct pin_oc< T > : T {};


// ============================================================================
//
// fixed-value output pins
//
// ============================================================================

template< can_pin_out pin, bool v >
struct pin_fixed : pin_out< pin > {
   static void init(){
      pin_out< pin >::init();
      pin_out< pin >::set( v );
   }
};
   
template< can_pin_out pin >
using pin_low = pin_fixed< pin, 0 >;
   
template< can_pin_out pin >
using pin_high = pin_fixed< pin, 1 >;



// ============================================================================
//
// fanout
//
// ============================================================================

// base, never used
template< can_pin_out... pins >
struct fanout;

// recursion endpoint
template<> 
struct fanout<> : 
   pin_out_root 
{
   static void init(){}
   static void set( bool v ){}
   static void set_direct( bool v ){}
   static void set_buffered( bool v ){}
   static void flush(){}
};

// add first pin and recurse
template< can_pin_out _pin, can_pin_out... tail >
struct fanout< _pin, tail... > :
   fanout< tail... >
{
	
   using pin = hwcpp::pin_out< _pin >;	
	
   static void init() { 
      pin::init();
      fanout< tail... >::init(); 
   }
      
   static void set( bool v ) {
      pin::set_buffered( v );
      fanout< tail... >::set_buffered( v );
	  flush();
   }
      
   static void set_direct( bool v ) {
      pin::set_direct( v );
      fanout< tail... >::set_direct( v  );
   }
      
   static void set_buffered( bool v ) {
      pin::set_buffered( v );
      fanout< tail... >::set_buffered( v );
   }
      
   static void flush() {
      pin::flush();
      fanout< tail... >::flush();
   }
   
};