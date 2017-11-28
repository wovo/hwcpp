// ============================================================================
//
// file : timing.hpp
//
// ============================================================================

template< long long int f >
using MHz = std::ratio< f * 1'000'000, 1 >;

template< long long int f >
using kHz = std::ratio< f * 1'000, 1 >;

template< long long int f >
using Hz = std::ratio< f * 1, 1 >;

template< typename target, typename ticks_type, typename clock_frequency  >
struct timing_waiting {

   //========== the number of ticks in an amount of time =========

   static constexpr ticks_type ticks( long long int n ){ 
	  return ( n * clock_frequency::num ) / ( 1'000'000'000 * clock_frequency::den );
   }	

   static void wait_ticks( uint_fast64_t n ){
      auto t = target::now_ticks() + n;
      while( target::now_ticks() < t ){}   
   }   
		 
   //========== wait a compile-time known amount of time =========

   template< long long n >
   struct ns {
	   
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