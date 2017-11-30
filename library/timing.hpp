// ============================================================================
//
// file : timing.hpp
//
// ============================================================================

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

   //========== the number of ticks in an amount of time =========

   static constexpr ticks_type ticks( long long int n ){ 
	  return ( 
	     n * clock_frequency::num ) 
		 / ( 1'000'000'000 * clock_frequency::den 
      );
   }	

   static void wait_ticks( uint_fast64_t n ){
      target::wait_ticks( n ); 
   }   
		 
   //========== wait a compile-time known amount of time =========

   template< long long n >
   struct ns :
      is_interval_marker
   {
	   
      static void init(){
         target::init(); 
	  }	   
	   
      static void wait(){
         wait_ticks( ticks( n ) );		  
	  }		  
   };
   
   template< long long n >
   using us = ns< n * 1'000 >;

   template< long long n >
   using ms = ns< n * 1'000'000 >;

   template< long long n >
   using s = ns< n * 1'000'000'000 >;
   
   // ========== wait a run-time known amount of time =========
   
   void wait_ns( long long n ){
      target::wait_ticks( ticks( n ) );	    	   
   }

   void wait_us( long long n ){
      target::wait_ticks( ticks( n * 1'000 ) );	    	   
   }

   void wait_ms( long long n ){
      target::wait_ticks( ticks( n * 1'000'000 ) );	    	   
   }

   void wait_s( long long n ){
      target::wait_ticks( ticks( n * 1'000'000'000 ) );	    	   
   }

};