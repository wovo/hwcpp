// ==========================================================================
//
// file : hwcpp-timing.hpp
//
// ==========================================================================

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
	
   static void init(){
      target::init(); 
   }	  

   //========== the number of ticks in an amount of time

   static constexpr ticks_type ticks_from_ns( uint64_t n ){ 
	  return 1 + (
	     ( n * clock_frequency::num ) 
		 / ( 1'000'000'000 * clock_frequency::den ));
   }	

   static constexpr uint_fast64_t ns_from_ticks( uint64_t n ){ 
	  return 1 + ( 
	     ( n* 1'000'000'000 * clock_frequency::den )
	     / ( clock_frequency::num ));
   }	

   static void wait_ticks( uint_fast64_t n ){
      target::wait_ticks( n ); 
   }   
		 
   static auto now_ticks(){
      return target::now_ticks(); 
   }   
		 
   //========== current time
   
   static int_fast64_t now_ns(){
      return ns_from_ticks( target::now_ticks() );
   }	   

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