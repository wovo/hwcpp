// ==========================================================================
//
// file : hwcpp-bs-box.hpp
//
// declarations for box classes
//
// A box is a static class that represents something that can accept and/or 
// provide a value. The declarations in this file are used by the library
// to create concrete boxes.
//
// Exaples of concrete boxes are a GPIO pin, a port, an ADC, a DAC, a PWM.
//
// An in box has set functions, an out box has get functions.
// For these functions, there are default, buffered and direct versions,
// and flush (for set) and/or refresh (for get) functions that work with
// the buffered versions. 
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
// LIBRARY-INTERNAL
//
// box root classes
//
// ==========================================================================

// ========= common

template< typename T >
struct _box_root :
   not_instantiable
{
   using value_type = T;  
   static constexpr bool _is_box_tag = true;
};

// ========= box out

template< typename T >
struct _box_out_root :
   _box_root< T >
{
   static constexpr bool _is_box_out_tag = true;
};

// ========= box in

template< typename T >
struct _box_in_root :
   _box_root< T >
{
   static constexpr bool _is_box_in_tag = true;
};

// ========= box in out

template< typename T >
struct _box_in_out_root :
   _box_root< T >
{
   static constexpr bool _is_box_in_out_tag = true;
};


// ==========================================================================
//
// LIBRARY-INTERNAL
//
// box functionality concepts
//
// these concepts are used in box filters 
// that decorate specific functions when present
//
// ==========================================================================

template< typename T >
concept bool _has_box_out_functions = requires( 
   typename T::value_type v
){  
   { T::set( v ) } -> void;
   { T::set_direct( v ) } -> void;
   { T::set_buffered( v ) } -> void;
   { T::flush() } -> void;
};

template< typename T >
concept bool _has_box_in_functions = requires {  
   { T::get() } -> typename T::value_type;
   { T::get_direct() } -> typename T::value_type;
   { T::get_buffered() } -> typename T::value_type;
   { T::refresh() } -> void;   
};

template< typename T >
concept bool _has_box_direction_functions = requires( 
   typename T::value_type v,
   pin_direction d 
){   
   { T::direction_set( d ) } -> void;
   { T::direction_set_direct( d ) } -> void;
   { T::direction_set_buffered( d ) } -> void;
   { T::direction_flush() } -> void;
}; 


// ==========================================================================
//
// LIBRARY-INTERNAL
//
// box concepts
//
// ==========================================================================

// ========= box out

template< typename T >
concept bool _is_box_out = requires {
   T::_is_box_out_tag;
   _has_init_function< T >;
   _has_box_out_functions< T >;
};

// ========= box in 

template< typename T >
concept bool _is_box_in = requires {
   T::_is_box_in_tag;
   _has_init_function< T >;
   _has_box_in_functions< T >;  
};

// ========= box in out 

template< typename T >
concept bool _is_box_in_out = requires {   
   T::_is_box_in_out_tag;
   _has_init_function< T >;
   _has_box_direction_functions< T >;    
   _has_box_out_functions< T >;    
   _has_box_in_functions< T >;    
};


// ==========================================================================
//
// LIBRARY-INTERNAL
//
// interval box root classes
//
// An interval box is a subtype of box, where the value
// is numeric and limited to a subrange of the values 
// allowed by the data type.
//
// ==========================================================================

template< typename T, T _lowest, T _highest >
struct _box_interval_root {
   static constexpr bool _is_box_interval_tag = true;
   static constexpr T lowest  = _lowest;
   static constexpr T highest = _highest;
};

template< typename T, T _lowest, T _highest >
struct _box_in_interval_root :
   _box_in_root< T >, 
   _box_interval_root< T, _lowest, _highest >
{};

template< typename T, T _lowest, T _highest >
struct _box_out_interval_root :
   _box_out_root< T >, 
   _box_interval_root< T, _lowest, _highest >
{};

template< typename T, T _lowest, T _highest >
struct _box_in_out_interval_root :
   _box_in_out_root< T >, 
   _box_interval_root< T, _lowest, _highest >
{};


// ==========================================================================
//
// LIBRARY-INTERNAL
//
// box interval concepts
//
// ==========================================================================

// ========= box out interval

template< typename T >
concept bool _is_box_interval_out = requires {
   T::_is_box_out_interval_tag;
   _has_init_function< T >;
   _has_box_out_functions< T >;
};

// ========= box in interval 

template< typename T >
concept bool _is_box_in_interval = requires {
   T::_is_box_in_interval_tag;
   _has_init_function< T >;
   _has_box_in_functions< T >;  
};

// ========= box in out interval 

template< typename T >
concept bool _is_box_in_out = requires {   
   T::_is_box_in_out_interval_tag;
   _has_init_function< T >;
   _has_box_direction_functions< T >;    
   _has_box_out_functions< T >;    
   _has_box_in_functions< T >;    
};


// ==========================================================================
//
// LIBRARY-INTERNAL
//
// filters that pass (only) certain box functions
// 
// This takes the repetition out of adapters.
//
// ==========================================================================


// ========== pass the init function

template< typename T >
struct _init_filter { 
    
   static void HWLIB_INLINE init(){ 
      T::init(); 
   }     
}; 

// ========== pass the set functions

template< typename T >
struct _box_set_filter { 

   using _value_type = typename T::value_type;
    
   static void HWLIB_INLINE set( _value_type v ){ 
      T::set( v ); 
   }
   static void HWLIB_INLINE set_direct( _value_type v ){ 
      T::set_direct( v ); 
   }
   
   static void HWLIB_INLINE set_buffered( _value_type v ){ 
      T::set_buffered( v ); 
   }
   
   static void HWLIB_INLINE flush(){ 
      T::flush(); 
   }
};    

// ========== pass the get functions 

template< typename T >
struct _box_get_filter { 

   using _value_type = typename T::value_type;
    
   static _value_type HWLIB_INLINE get(){ 
      return T::get(); 
   }
   static _value_type HWLIB_INLINE get_direct(){ 
      return T::get_direct(); 
   }
   
   static _value_type HWLIB_INLINE get_buffered(){ 
      return T::get_buffered(); 
   }
   
   static void HWLIB_INLINE refresh(){ 
      T::refresh(); 
   }
}; 

// ========== pass the direction functions 

template< typename T >
struct _box_direction_filter { 
   
   static void HWLIB_INLINE direction_set( pin_direction d ){ 
      T::direction_set( d ); 
   }
   
   static void HWLIB_INLINE direction_set_direct( pin_direction d ){ 
      T::direction_set_direct( d ); 
   }
   
   static void HWLIB_INLINE direction_set_buffered( pin_direction d ){ 
      T::direction_set_buffered( d ); 
   }
   
   static void HWLIB_INLINE direction_flush(){ 
      T::direction_flush(); 
   }
}; 
