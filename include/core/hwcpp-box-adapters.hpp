// ==========================================================================
//
// file : hwcpp-box-adapers.hpp
//
// adapters that transform a box to another kind of box
//
// ==========================================================================
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
// ==========================================================================


// ==========================================================================
//
// FILE-INTERNAL
//
// filters that pass (only) certain functions
// 
// This takes the repetition out of the adapters.
//
// ==========================================================================


// ========== pass the set functions ==========

template< typename T >
struct _pass_box_set { 

   using value_type = typename port::value_type;
    
   static void HWLIB_INLINE set( value_type v ){ 
      T::set( v ); 
   }
   static void HWLIB_INLINE set_direct( value_type v ){ 
      T::set_direct( v ); 
   }
   
   static void HWLIB_INLINE set_buffered( value_type v ){ 
      T::set_buffered( v ); 
   }
   
   static void HWLIB_INLINE flush(){ 
      T::flush(); 
   }
};    

// ========== pass the get functions ==========

template< typename T >
struct _pass_pin_get { 

   using value_type = typename port::value_type;
    
   static value_type HWLIB_INLINE get(){ 
      return T::get(); 
   }
   static value_type HWLIB_INLINE get_direct(){ 
      return T::get_direct(); 
   }
   
   static value_type HWLIB_INLINE get_buffered( value_type v ){ 
      return T::get_buffered( v ); 
   }
   
   static void HWLIB_INLINE refresh(){ 
      T::refresh(); 
   }
}; 

// ========== pass the init function ==========

template< typename T >
struct _pass_init { 
    
   static void HWLIB_INLINE init(){ 
      return T::init(); 
   }     
}; 


// ==========================================================================
//
// LIBRARY-INTERNAL
//
// adapt to an out box
//
// ==========================================================================


// ========== base template ==========

template< template T > struct box_out;

// ========== adapt a box out ==========

template< _has_box_sink_functions T >
struct box_out< T > : T {};	

// ========== adapt a box in out ==========

template< _has_box_source_sink_functions T >
struct box_out< T > {
    
   static void HWLIB_INLINE init(){
	  T::init(); 
      T::direction_set( pin_direction::output );
   }	
};


// ==========================================================================
//
// PUBLIC
//
// adapt to a pin_in
//
// ==========================================================================


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


// ==========================================================================
//
// PUBLIC
//
// adapt to a pin_in_out
//
// ==========================================================================

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


// ==========================================================================
//
// PUBLIC
//
// adapt to a pin_oc
//
// ==========================================================================


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
    
   static void HWLIB_INLINE set( value_type v ){
       if( v ){
          T::direction_set( pin_direction::input );   
       } else {
          T::direction_set( pin_direction::output );   
          T::set( 0 );
       }
   }
   
   static void HWLIB_INLINE set_direct( value_type v ){
       if( v ){
          T::direction_set_direct( pin_direction::input );   
       } else {
          T::direction_set_direct( pin_direction::output );   
          T::set_direct( 0 );
       }
   }
   
   static void HWLIB_INLINE set_buffered( value_type v ){
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


// ==========================================================================
//
// fixed-value output pins
//
// ==========================================================================

template< can_pin_out pin, value_type v >
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


// ==========================================================================
//
// fanout
//
// ==========================================================================

template< can_pin_out... pins >
struct fanout :
   pin_out_root,
   box_fanout< value_type, pin_out, pins... >
{};   

