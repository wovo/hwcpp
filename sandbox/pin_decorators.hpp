// ============================================================================
//
// file : pins.hpp
//
// base decorators and concepts for out, in, in_out and oc pins
//
// ============================================================================

// ============================================================================
//
// add_pin_ [ in | out | in_out ] _ [ direct | buffered ] _functions
//
// These class decorators are for use inside this file.
//
// The non-buffered ones add the buffered functions using the non-buffered
// functions provided by the decorated class.
//
// The buffered ones add the direct functions using the buffered
// functions (and invalidate() or flush()) provided by the decorated class.
//
// These decorators are used by the 
// pin_ [ in | out ] _ [ direct | buffered ] _base decorators that are used
// by the HALs and other GPIO contributors to decorate their GPIOs to
// full functionality.
//
// ============================================================================

// ========== pin out direct ==========

template< typename T >
struct add_pin_out_direct_functions : public T {
   
   static void HWLIB_INLINE set( bool v ){
       T::set_direct( v );
   }
   
   // set_direct provided by T
   
   static void HWLIB_INLINE set_buffered( bool v ){
       T::set_direct( v );
   }
   
   static void HWLIB_INLINE flush(){}
};

// ========== pin out buffered ==========

template< typename T >
struct add_pin_out_buffered_functions : public T {
   
   static void HWLIB_INLINE set( bool v ){
       T::set_buffered( v );
       T::flush();
   }
   
   static void HWLIB_INLINE set_direct( bool v ){
       T::set_buffered( v );
       T::flush();
   }

   // set_buffered provided by T
   
   // flus() provided by T
};

// ========== pin in direct ==========

template< typename T >
struct add_pin_in_direct_functions : public T {
   
   static bool HWLIB_INLINE get(){
      return T::get_direct();
   }       
   
  // get_direct provided by T
   
   static bool HWLIB_INLINE get_buffered(){
      return T::get_direct();
   }       
   
   static void HWLIB_INLINE invalidate(){}
};

// ========== pin in buffered ==========

template< typename T >
struct add_pin_in_buffered_functions : public T {
   
   static bool HWLIB_INLINE get(){
      T::invalidate();       
      return T::get_buffered();
   }      
   
   static bool HWLIB_INLINE get_direct(){
      T::invalidate();       
      return T::get_buffered();
   }      
   
   // get_buffered() provided by T
   
   // invalidate() provided by T
};

// ========== pin in-out direct ==========

template< typename T >
struct add_pin_in_out_direct_functions : 
   public add_pin_out_direct_functions< add_pin_in_direct_functions< T > > 
{};

// ========== pin in-out buffered ==========

template< typename T >
struct add_pin_in_out_buffered_functions : 
   public add_pin_out_buffered_functions< add_pin_in_buffered_functions< T > > 
{};


// ============================================================================
//
// pin_ [ in | out ] _ [ direct | buffered ] _base
//
// These decorators are used by the by the HALs and other GPIO contributors 
// to decorate their GPIOs to full functionality.
//
// ============================================================================


// ========== pin out ==========

template< typename T >
struct pin_out_base : 
   public add_pin_out_direct_functions< T > 
{
   static constexpr bool is_pin_out = true;
};

template< typename T >
struct pin_out_buffered_base : 
   public add_pin_out_buffered_functions< T > 
{
   static constexpr bool is_pin_out = true;
};

// ========== pin in direct ==========

template< typename T >
struct pin_in_base : 
   public add_pin_in_direct_functions< T >  
{
   static const bool is_pin_in = true;
};

template< typename T >
struct pin_in_buffered_base : 
   public add_pin_in_buffered_functions< T > 
{
   static const bool is_pin_in = true;
};

// ========== pin in-out direct ==========

template< typename T >
struct pin_in_out_base : 
   public add_pin_in_out_direct_functions< T > 
{
   static const bool is_pin_in_out = true;
   
   static void HWLIB_INLINE direction_set( direction d ){
      T::direction_set_direct( d );       
   }    
   
   // direction_set_direct() provided by T

   static void HWLIB_INLINE direction_set_buffered( direction d ){
      T::direction_set_direct( d );       
   }    
   
   static void direction_flush(){}
   
};

// ========== pin in-out buffered ==========

template< typename T >
struct pin_in_out_buffered_base : 
   public add_pin_in_out_buffered_functions< T > 
{
   static const bool is_pin_in_out = true;
     
   static void HWLIB_INLINE direction_set( direction d ){
      T::direction_set_buffered( d ); 
      T::direction_flush();
   }    
   
   static void HWLIB_INLINE direction_set_direct( direction d ){
      T::direction_set_buffered( d );       
      T::direction_flush();
   }    
   
   // direction_set_buffered() provided by T
   
   // direction_flush() provided by T
};

/*
   static void direction_set( pin_direction d ){
      if( d == pin_direction::input ){
         T::direction_set_input();	   
      } else {
         T::direction_set_output();
      }		 
   }
    * 
   static void direction_set_input(){
      T::direction_set( pin_direction::input );
   }	  
   
   static void direction_set_output(){
      T::direction_set( pin_direction::output );
   } 
 */

// ========== pin oc ==========

template< typename T >
struct pin_oc_base : 
   public add_pin_in_out_direct_functions< T > 
{
   static const bool is_pin_oc = true;
};   

template< typename T >
struct pin_oc_buffered_base : 
   public add_pin_in_out_buffered_functions< T > 
{
   static const bool is_pin_oc = true;
};   


// ============================================================================
//
// pin concepts
//
// ============================================================================

template< typename T >
concept bool is_pin_out(){ 
   return T::is_pin_out;
}

template< typename T >
concept bool is_pin_in(){ 
   return T::is_pin_in;
}

template< typename T >
concept bool is_pin_in_out(){ 
   return T::is_pin_in_out;
}

template< typename T >
concept bool is_pin_oc(){ 
   return T::is_pin_oc;
}
