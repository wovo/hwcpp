// ============================================================================
//
// file : pins.hpp
//
// base decorators and concepts for out, in, in_out and oc pins
//
// ============================================================================


// ============================================================================
//
// and traits that test the presence of these markers
//
// ============================================================================

// ========= common =========

struct pin_common_marker :
   not_instantiable
{
   using value_type = bool;  
};

// ========= out =========

struct pin_out_marker :
   pin_common_marker
{
   static constexpr bool is_pin_out = true;
};

template< typename T >
concept bool is_pin_out(){ 
   return T::is_pin_out;
}

// ========= in =========

struct pin_in_marker :
   pin_common_marker
{
   static constexpr bool is_pin_in = true;
};

template< typename T >
concept bool is_pin_in(){ 
   return T::is_pin_in;
}

// ========= in_out =========

struct pin_in_out_marker :
   pin_common_marker
{
   static constexpr bool is_pin_in_out = true;
};

template< typename T >
concept bool is_pin_in_out(){ 
   return T::is_pin_in_out;
}

// ========= oc =========

struct pin_oc_marker :
   not_instantiable
{
   static constexpr bool is_pin_oc = true;
};

template< typename T >
concept bool is_pin_oc(){ 
   return T::is_pin_oc;
}


// ============================================================================
//
// add_pin_ [ in | out | in_out ] _ [ direct | buffered ] _functions
//
// These class decorators are for use inside this file.
//
// The non-buffered ones add the buffered functions, 
// that call the non-buffered functions provided by the decorated class.
//
// The buffered ones add the direct functions,
// that call buffered functions (and invalidate() or flush()) 
// provided by the decorated class.
//
// These decorators are used by the 
// pin_ [ in | out ] _ [ direct | buffered ] _base decorators that are used
// by the HALs and other GPIO contributors to decorate their GPIOs to
// full functionality.
//
// ============================================================================

// ========== pin out direct ==========

template< typename T >
struct add_pin_out_direct_functions : T {
   
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
struct add_pin_out_buffered_functions : T {
   
   static void HWLIB_INLINE set( bool v ){
       T::set_buffered( v );
       T::flush();
   }
   
   static void HWLIB_INLINE set_direct( bool v ){
       T::set_buffered( v );
       T::flush();
   }

   // set_buffered provided by T
   
   // flush() provided by T
};

// ========== pin in direct ==========

template< typename T >
struct add_pin_in_direct_functions : T {
   
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
struct add_pin_in_buffered_functions : T {
   
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
   add_pin_out_direct_functions< add_pin_in_direct_functions< T > > 
{};

// ========== pin in-out buffered ==========

template< typename T >
struct add_pin_in_out_buffered_functions : 
   add_pin_out_buffered_functions< add_pin_in_buffered_functions< T > > 
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
struct pin_out_direct_base : 
   pin_out_marker,
   add_pin_out_direct_functions< T > 
{};

template< typename T >
struct pin_out_buffered_base : 
   pin_out_marker,
   add_pin_out_buffered_functions< T > 
{};

// ========== pin in direct ==========

template< typename T >
struct pin_in_direct_base : 
   pin_in_marker,
   add_pin_in_direct_functions< T >  
{};

template< typename T >
struct pin_in_buffered_base : 
   pin_in_marker,
   add_pin_in_buffered_functions< T > 
{};

// ========== pin in-out direct ==========

template< typename T >
struct pin_in_out_direct_base : 
   pin_in_out_marker,
   add_pin_in_out_direct_functions< T > 
{
   
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
   pin_in_out_marker,
   add_pin_in_out_buffered_functions< T > 
{
     
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
struct pin_oc_direct_base : 
   pin_oc_marker,
   add_pin_in_out_direct_functions< T > 
{};   

template< typename T >
struct pin_oc_buffered_base : 
   pin_oc_marker,
   add_pin_in_out_buffered_functions< T > 
{};   


// ============================================================================
//
// dummy (do-nothing) pins
//
// ============================================================================

struct _pin_out_dummy {
   static void HWLIB_INLINE set_direct( bool v ){}    
};

using pin_out_dummy = pin_out_direct_base< _pin_out_dummy >;

struct _pin_in_dummy {
   static bool HWLIB_INLINE get_direct(){ return 0; }    
};

using pin_in_dummy = pin_in_direct_base< _pin_in_dummy >;

struct _pin_in_out_dummy : 
   _pin_out_dummy,
   _pin_in_dummy
{    
   static void HWLIB_INLINE direction_set_direct( direction d ){}
};

using pin_in_out_dummy = pin_in_out_direct_base< _pin_in_out_dummy >;

struct _pin_oc_dummy : 
   _pin_out_dummy,
   _pin_in_dummy
{};

using pin_oc_dummy = pin_oc_direct_base< _pin_oc_dummy >;


// ============================================================================
//
// value (store or retrieve from value) pins
//
// ============================================================================

template< bool & value >
struct _pin_out_value {
   
   static void HWLIB_INLINE set_direct( bool v ){ 
      value = v; 
   }    
};

template< bool & value >
struct pin_out_value :
   pin_out_direct_base< _pin_out_value< value > >
{};   

template< bool & value >
struct _pin_in_value { 
   
   static bool HWLIB_INLINE get_direct(){ 
      return value; 
   }    
};

template< bool & value >
struct pin_in_value :
   pin_in_direct_base< _pin_in_value< value > >
{};  

template< bool & value, direction direction_value >
struct _pin_in_out_value : 
   _pin_out_value< value >,
   _pin_in_value< value >
{    
   static void HWLIB_INLINE direction_set_direct( direction d ){
      direction_value = d;
   }
};

template< bool & value, direction & direction_value >
struct pin_in_out_value :
   pin_in_out_direct_base< _pin_in_out_value< value, direction_value > >
{};   

template< bool & value >
struct _pin_oc_value : 
   _pin_out_value< value >,
   _pin_in_value< value >
{};

template< bool & value >
struct pin_oc_value :
   pin_oc_direct_base< _pin_oc_value< value > >
{};   


// ============================================================================
//
// pass (only) certain pin functions
//
// ============================================================================

template< typename T >
struct pass_pin_set { 
    
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

template< typename T >
struct pass_pin_get { 
    
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

template< typename T >
struct pass_init { 
    
   static void HWLIB_INLINE init(){ 
      return T::init(); 
   }     
}; 


// ============================================================================
//
// decorate to a pin_out
//
// ============================================================================

template< typename T >
struct pin_out { 
   static_assert( always_false<T>::value, 
      "that class can't be decorated to be a pin_out" );
};	

template< is_pin_out T >
struct pin_out< T > : T {};	

// a pin_in can't be decorated to a pin_out

template< is_pin_in_out T >
struct pin_out< T > : 
   pin_out_marker,
   pass_pin_set< T > 
{
    
   static void HWLIB_INLINE init(){
	  T::init(); 
      T::direction_set( direction::output );
   }	
};

template< is_pin_oc T >
struct pin_out< T > : 
   pin_out_marker,
   pass_init< T >,
   pass_pin_set< T >  
{};	


// ============================================================================
//
// decorate to a pin_in
//
// ============================================================================

template< typename T >
struct pin_in { 
   static_assert( always_false<T>::value, 
      "that class can't be decorated to be a pin_in" );
};	

// a pin_out can't be decorated to a pin_in

template< is_pin_in T >
struct pin_in< T > : T {};	

template< is_pin_in_out T >
struct pin_in< T > : 
   pin_in_marker,
   pass_pin_get< T > 
{
    
   static void HWLIB_INLINE init(){
	  T::init(); 
      T::direction_set( direction::input );
   }	
};

template< is_pin_oc T >
struct pin_in< T > : 
   pin_in_marker,
   pass_pin_set< T >  
{
        
   static void HWLIB_INLINE init(){
	  T::init(); 
      T::set_direct( 0 );
   }
};	


// ============================================================================
//
// decorate to a pin_in_out
//
// ============================================================================

template< typename T >
struct pin_in_out { 
   static_assert( always_false<T>::value, 
      "that class can't be decorated to be a pin_in_out" );
};	

// a pin_out can't be decorated to a pin_in

// a pin_in can't be decorated to a pin_in_out

template< is_pin_in_out T >
struct pin_in_out< T > : T {};

template< is_pin_oc T >
struct pin_in_out< T > : 
   pin_in_out_marker,
   pass_pin_set< T >,  
   pass_pin_get< T >  
{
    
   static void HWLIB_INLINE direction_set( direction d ){
      if( d == direction::input ){
         T::set( 1 );
      }   
   }    
   
   static void HWLIB_INLINE direction_direct( direction d ){
      if( d == direction::input ){
         T::set_direct( 1 );
      }       
   }    

   static void HWLIB_INLINE direction_set_buffered( direction d ){
      if( d == direction::input ){
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
// decorate to a pin_oc
//
// ============================================================================

template< typename T >
struct pin_oc { 
   static_assert( always_false<T>::value, 
      "that class can't be decorated to be a pin_oc" );
};	

// a pin_out can't be decorated to a pin_oc

// a pin_in can't be decorated to a pin_in_out

template< is_pin_in_out T >
struct pin_oc< T > : 
   pin_oc_marker,
   pass_pin_set< T >,  
   pass_pin_get< T >  
{
    
   static void HWLIB_INLINE set( bool v ){
       if( v ){
          T::direction_set( direction::input );   
       } else {
          T::direction_set( direction::output );   
          T::set( 0 );
       }
   }
   
   static void HWLIB_INLINE set_direct( bool v ){
       if( v ){
          T::direction_set_direct( direction::input );   
       } else {
          T::direction_set_direct( direction::output );   
          T::set_direct( 0 );
       }
   }
   
   static void HWLIB_INLINE set_buffered( bool v ){
       if( v ){
          T::direction_set_buffered( direction::input );   
       } else {
          T::direction_set_buffered( direction::output );   
          T::set_buffered( 0 );
       }
   }
   
   static void HWLIB_INLINE flush(){
      T::direction_flush();
      T:flush();
   }       
            
   static void HWLIB_INLINE init(){
	  T::init(); 
      T::direction_set_direct( direction::input );
   }
};	

template< is_pin_oc T >
struct pin_oc< T > : T {};


