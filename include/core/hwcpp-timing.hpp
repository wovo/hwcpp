// ==========================================================================
//
// file : hwcpp-timing.hpp
//
// ==========================================================================


// ==========================================================================
//
// PUBLIC
//
// duration class
//
// ==========================================================================

struct is_duration_marker :
   not_instantiable
{
   static constexpr bool is_duration = true;
};

template< typename T >
concept bool is_duration(){ 
   return T::is_duration;
   
   { T::init() } -> void;
   
   { T::wait() } -> void;   
}


// ==========================================================================
//
// PUBLIC
//
// waiting service
//
// ==========================================================================

template< typename T, typename _ticks_frequency > >
struct _waiting_root :
   not_instantiable
{
   static constexpr bool is_waiting_tag = true;
   using ticks_type       = T;
   using ticks_frequency  =  _ticks_frequency;
};

template< typename T >
concept bool is_clock = requires (
   typename T::ticks_type v
) {  
   T::is_waiting_tag;
   { T::init() } -> void;
   
   { T::wait_ticks( v ) } -> void;
   
   ( T::ticks_from_ns( uint64_fast_t ) } -> typename T::ticks_type;
   
   { T::wait_ns( uint64_fast_t ) } -> void;
   { T::wait_ms( uint64_fast_t ) } -> void;
   { T::wait_us( uint64_fast_t ) } -> void;
   { T::wait_s( uint64_fast_t ) } -> void;
   
   // duration constructors
};

template< typename T >
struct _waiting_constructor : T {
	
   //========== wait a compile-time known amount of time 

   template< uint_fast64_t _n >
   struct ns :
      is_interval_marker
   {
	  static constexpr uint_fast64_t n = _n;
      static constexpr uint_fast64_t ticks = ticks_from_ns( _n );
	   
      static void init(){
         timing_waiting::init(); 
	  }	   
	   
      static void wait(){
         wait_ticks( ticks );		  
	  }		  
   };
   
   template< uint_fast64_t n >
   using us = ns< n * 1'000ULL >;

   template< uint_fast64_t n >
   using ms = ns< n * 1'000'000ULL >;

   template< uint_fast64_t n >
   using s = ns< n * 1'000'000'000ULL >;
   
   // ========== wait a run-time known amount of time 
   
   void wait_ns( uint_fast64_t n ){
      target::wait_ticks( ticks_from_ns( n ) );	    	   
   }

   void wait_us( uint_fast64_t n ){
      target::wait_ticks( ticks_from_ns( n * 1'000ULL ) );	    	   
   }

   void wait_ms( uint_fast64_t n ){
      target::wait_ticks( ticks_from_ns( n * 1'000'000ULL ) );	    	   
   }

   void wait_s( uint_fast64_t n ){
      target::wait_ticks( ticks_from_ns( n * 1'000'000'000ULL ) );	    	   
   }
         	
};




// ==========================================================================
//
// PUBLIC
//
// clock service
//
// ==========================================================================

template< typename T >
struct _clock_root_marker :
   not_instantiable
{
   static constexpr bool is_clock = true;
   using time_type = T;
};

template< typename T >
concept bool is_clock = requires {  
   T::is_clock_tag;
   { T::init() } -> void;
   
   { T::now_ticks( v ) } -> typename T::ticks_type;
   { T::wait_ticks( v ) } -> typename T::ticks_type;

   { T::now( v ) } -> typename T::time_type;   
   { T::wait v ) } -> typename T::time_type;
   
   // much more ...
};


// ==========================================================================
//
// LIBRARY-INTERNAL
//
// the ticks type is what can be provided by a HAL
// as the base for a clock service
//
// ==========================================================================

template< typename T >
struct _ticks_root_marker :
   not_instantiable
{
   static constexpr bool is_ticks_tag = true;
   using ticks_type = T;
};

template< typename T >
concept bool _is_ticks = requires {  
   T::is_ticks_tag;
   { T::init() } -> void;
   { T::now_ticks( v ) } -> typename T::ticks_type;
};



// ==========================================================================
//
// LIBRARY-INTERNAL
//
// adapter for a ticks type to full timing functionality
//
// ==========================================================================

template< _is_ticks T >

// ==========

struct timing_waiting_marker :
   not_instantiable
{
   static constexpr bool has_waiting = true;
};

template< typename T >
concept bool has_waiting(){ 
   return T::has_waiting;
}

struct is_interval_marker :
   not_instantiable
{
   static constexpr bool is_interval = true;
};

template< typename T >
concept bool is_interval(){ 
   return T::is_interval;
}

template< typename target, typename ticks_type, typename clock_frequency  >
struct timing_waiting :
   timing_waiting_marker
{  

   //========== polling
   
   using _void_void = void(*)();
   
   static inline _void_void callback_list[ 10 ];
   static inline int callback_n = 0;
   
   template< typename T >
   struct callback {	
	  
	  static void init(){
         callback_list[ callback_n++ ] = T::main;
	  }

   };   
   
   struct polling {   

      static void run(){
		 for(;;){ 
            for( int n = 0; n < callback_n; ++n ){
               callback_list[ n ]();   			 
		    }
		 }			 
	  }	
   };	  
	  
   //========== wait a compile-time known amount of time 

   template< uint_fast64_t _n >
   struct ns :
      is_interval_marker
   {
	  static constexpr uint_fast64_t n = _n;
      static constexpr uint_fast64_t ticks = ticks_from_ns( _n );
	   
      static void init(){
         timing_waiting::init(); 
	  }	   
	   
      static void wait(){
         wait_ticks( ticks );		  
	  }		  
   };
   
   template< uint_fast64_t n >
   using us = ns< n * 1'000ULL >;

   template< uint_fast64_t n >
   using ms = ns< n * 1'000'000ULL >;

   template< uint_fast64_t n >
   using s = ns< n * 1'000'000'000ULL >;
   
   // ========== wait a run-time known amount of time 
   
   void wait_ns( uint_fast64_t n ){
      target::wait_ticks( ticks_from_ns( n ) );	    	   
   }

   void wait_us( uint_fast64_t n ){
      target::wait_ticks( ticks_from_ns( n * 1'000ULL ) );	    	   
   }

   void wait_ms( uint_fast64_t n ){
      target::wait_ticks( ticks_from_ns( n * 1'000'000ULL ) );	    	   
   }

   void wait_s( uint_fast64_t n ){
      target::wait_ticks( ticks_from_ns( n * 1'000'000'000ULL ) );	    	   
   }

};