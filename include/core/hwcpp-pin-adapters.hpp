// ==========================================================================
//
// file : hwcpp-pin-adapters.hpp
//
// adapters that transform a pin to another kind of pin
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
// PUBLIC
//
// concepts that tell whether a thing 
// can be converted to the requested pin
//
// ==========================================================================

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
   
   
// ==========================================================================
//
// LIBRARY-INTERNAL
//
// concepts that tell whether a kist of things
// can be converted to the requested pin
//
// ==========================================================================

template< typename... Ts >
concept bool _can_pin_out_list = ( can_pin_out< Ts > && ... );

template< typename... Ts >
concept bool _can_pin_in_list = ( can_pin_in< Ts > && ... );

template< typename... Ts >
concept bool _can_pin_in_out_list = ( can_pin_in_out< Ts > && ... );

template< typename... Ts >
concept bool _can_pin_oc_list = ( can_pin_oc< Ts > && ... );


// ==========================================================================
//
// PUBLIC
//
// adapt to a pin_out
//
// ==========================================================================

// ========== base case : let box do the work 

template< can_pin_out T > 
struct pin_out :
   _pin_out_root,
   _box_out< T >
{};   

// ========== adapt a pin oc

template< is_pin_oc T >
struct pin_out< T > : 
   _pin_out_root,
   _pass_init< T >,
   _pass_box_set< T >  
{};	


// ==========================================================================
//
// PUBLIC
//
// adapt to a pin_in
//
// ==========================================================================

// ========== base case : let box do the work 

template< can_pin_in T > 
struct pin_in :
   _pin_in_root,
   _box_in< T >
{};   

// ========== adapt a pin oc 

template< is_pin_oc T >
struct pin_in< T > : 
   _pin_in_root,
   _pass_init< T >,
   _pass_box_set< T >  
{
    
   static void HWLIB_INLINE init(){
	  T::init(); 
      T::set_direct( 1 );
   }
};	


// ==========================================================================
//
// PUBLIC
//
// adapt to a pin_in_out
//
// ==========================================================================

// ========== base case : let box do the work 

template< can_pin_in_out T > 
struct pin_in_out :
   _pin_in_out_root,
   _box_in_out< T >
{};  

// ========== adapt a pin oc 

template< is_pin_oc T >
struct pin_in_out< T > : 
   _pin_in_out_root,
   _pass_box_set< T >,  
   _pass_box_get< T >  
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

// ========== base template, not defined, never used 

template< can_pin_oc T > struct pin_oc;

// ========== adapt a pin out 

// not possible

// ========== adapt a pin in 

// not possible

// ========== adapt a pin in out 

template< is_pin_in_out T >
struct pin_oc< T > : 
   _pin_oc_root,
   _pass_box_set< T >,  
   _pass_box_get< T >  
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

// ========== adapt a pin oc 

template< is_pin_oc T >
struct pin_oc< T > : T {};



 

