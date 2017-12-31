// ==========================================================================
//
// file : hwcpp-port-from-buffers.hpp
//
// create different kinds of ports a buffer and refresh/flush functions
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

template< uint64_t n >
struct _port_out_buffer_root {
    
   static constexpr bool is_port_out_buffer = true;
   
   static constexpr uint64_t _n_pins = n;
   using _vt = typename uint_t< n >::fast;
   static inline _vt write_buffer;
   
   static void HWLIB_INLINE set_buffered( _vt x ){
      write_buffer = x;   
   }   	      
};

template< uint64_t n >
struct _port_in_buffer_root {
    
   static constexpr bool is_port_in_buffer = true;
   
   static constexpr uint64_t _n_pins = n;
   using _vt = typename uint_t< n >::fast;    
   static inline _vt read_buffer;
   
   static _vt HWLIB_INLINE get_buffered() {
      return read_buffer;  
   }   
};

template< uint64_t n >
struct _port_in_out_buffer_root :
   _port_out_buffer_root< n >,
   _port_in_buffer_root< n >
{
   static constexpr uint64_t _n_pins = n;
};

template< uint64_t n >
struct port_oc_buffer_root :
   _port_out_buffer_root< n >,
   _port_in_buffer_root< n >
{
   static constexpr uint64_t _n_pins = n;
   using value_type = typename uint_t< n >::fast;
};

// ========= builders

template< typename T >
struct _port_oc_from_buffers_builder :
   _port_oc_root< T::_n_pins >,
   _box_builder< T >
{
   template< uint8_t pin > 
   struct _pin_foundation :
      _pin_oc_root
   {    
      
      static void init(){
          T::init();
      } 
      
      static void flush(){
          T::flush();
      }
      
      static void refresh(){
          T::refresh();
      }
       
      static void set_buffered( bool v ){
         if( v ){
            T::write_buffer |= ( 0x1U << pin );
         } else {
            T::write_buffer &= ~ ( 0x1U << pin );
         }             
      }  
      
      static bool get_buffered(){
         return ( T::read_buffer & ( 0x1U << pin )) != 0;
      }     
       
   };       
   
   template< uint8_t p >
   using _pin = _box_builder< _pin_foundation< p > >;
    
   using p0 = _pin< 0 >;
   using p1 = _pin< 1 >;
   using p2 = _pin< 2 >;
   using p3 = _pin< 3 >;
   using p4 = _pin< 4 >;
   using p5 = _pin< 5 >;
   using p6 = _pin< 6 >;
   using p7 = _pin< 7 >;
    
   using value_type = typename T::value_type;
};
   

