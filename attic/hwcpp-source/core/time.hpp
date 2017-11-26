// ==========================================================================
//
// File      : time.hpp
// Part of   : hwcpp library (www.voti.nl/hwcpp)
// Copyright : wouter@voti.nl 2014 .. 2015
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at 
// http://www.boost.org/LICENSE_1_0.txt)
//
// ==========================================================================

#ifndef HWCPP_TIME
#define HWCPP_TIME

#include "core/basics.hpp"

namespace hwcpp {

   // =======================================================================
   //
   // duration
   //
   // stored in ns
   //
   // =======================================================================

   class duration {
      friend constexpr duration ns( long long int n );
      friend class moment;
   
   private:
      long long int n;
         
   protected:   
          
      constexpr duration( long long int n ): n{ n }{}
      
   public:
      
      typedef duration interface_type;
      
      constexpr long long int ns() const { return n; }
      constexpr long long int us() const { return n / 1'000; }
      constexpr long long int ms() const { return n / 1'000'000; }
      constexpr long long int s()  const { return n / 1'000'000'000; }
      
      // calculations

      constexpr duration operator+() const {
         return duration( n );
      }
      
      constexpr duration operator-() const {
         return duration( - n );
      }
      
      constexpr duration operator+( duration rhs ) const {
         return duration( n + rhs.n );
      }
      
      constexpr duration operator-( duration rhs ) const {
         return duration( n - rhs.n );
      }
      
      constexpr duration operator*( int rhs ) const {
         return duration( n * rhs );
      }
      
      constexpr duration operator*( long long int rhs ) const {
         return duration( n * rhs );
      }

      constexpr duration operator/( int rhs ) const {
         return duration( n / rhs );
      }
      
      constexpr duration operator/( long long int rhs ) const {
         return duration( n / rhs );
      }

      constexpr long long int operator/( duration rhs ) const {
         return n / rhs.n;
      }
      
      // comparisons

      constexpr duration operator==( duration rhs ) const {
         return n == rhs.n;
      }
      
      constexpr duration operator!=( duration rhs ) const {
         return n != rhs.n;
      }

      constexpr duration operator>( duration rhs ) const {
         return n > rhs.n;
      }

      constexpr duration operator>=( duration rhs ) const {
         return n >= rhs.n;
      }
      constexpr duration operator<( duration rhs ) const {
         return n < rhs.n;
      }

      constexpr duration operator<=( duration rhs ) const {
         return n <= rhs.n;
      }

   };     
   
   // reverse operators

   constexpr duration operator*( int lhs, duration rhs ){
      return rhs * lhs;
   }

   constexpr duration operator*( long long int lhs, duration rhs ){
      return rhs * lhs;
   }
   
   // factory functions

   constexpr duration ns( long long int n ){ 
      return duration( n ); 
   }

   constexpr duration us( long long int n ){ 
      return ns( n * 1'000 ); 
   }

   constexpr duration ms( long long int n ){ 
      return ns( n * 1'000'000 );
   }

   constexpr duration s( long long int n ){ 
      return ns( n * 1'000'000'000 );
   }
   
   // literal factory functions
   
   template< long long int N >
   struct ns_literal : public duration, public is_a_literal {
      static const long long int ns = N;
      ns_literal(): duration{ ns }{}
   };
   
   template< long long int N >
   struct us_literal : public duration, public is_a_literal {
      static const long long int ns = N * 1'000;
      us_literal(): duration{ ns }{}
   };
   
   template< long long int N >
   struct ms_literal : public duration, public is_a_literal {
      static const long long int ns = N * 1'000'000;
      ms_literal(): duration{ ns }{}
   };
   
   template< long long int N >
   struct s_literal : public duration, public is_a_literal {
      static const long long int ns = N * 1'000'000'000;
      s_literal(): duration{ ns }{}
   };
   
   
   // =======================================================================
   //
   // frequency
   //
   // stored in mHz (milliHerz)
   //
   // =======================================================================

   class frequency {
   private:
      long long int n;
      
   protected:
   
      constexpr frequency( long long int n ): n{ n }{}
   
   public:
      friend constexpr frequency mHz( long long int n );
   
      typedef frequency interface_type;
      
      constexpr long long int mHz() const { return n; }
      constexpr long long int Hz()  const { return n / 1'000; }
      constexpr long long int kHz() const { return n / 1'000'000; }
      constexpr long long int MHz() const { return n / 1'000'000'000; }
      constexpr long long int GHz() const { return n / 1'000'000'000'000; }      

      constexpr duration period() const {
         return s( 1'000 ) / n;
      }
      
      // calculations

      constexpr frequency operator+() const {
         return frequency( n );
      }      
      
      constexpr frequency operator-() const {
         return frequency( - n );
      }      
      
      constexpr frequency operator+( frequency rhs ) const {
         return frequency( n + rhs.n );
      }
      
      constexpr frequency operator-( frequency rhs ) const {
         return frequency( n - rhs.n );
      }
      
      constexpr frequency operator*( int rhs ) const {
         return frequency( n * rhs );
      }
      
      constexpr frequency operator*( long long int rhs ) const {
         return frequency( n * rhs );
      }

      constexpr frequency operator/( int rhs ) const {
         return frequency( n / rhs );
      }
      
      constexpr frequency operator/( long long int rhs ) const {
         return frequency( n / rhs );
      }

      constexpr long long int operator/( frequency rhs ) const {
         return n / rhs.n;
      }
      
      // comparisons

      constexpr frequency operator==( frequency rhs ) const {
         return n == rhs.n;
      }
      
      constexpr frequency operator!=( frequency rhs ) const {
         return n != rhs.n;
      }

      constexpr frequency operator>( frequency rhs ) const {
         return n > rhs.n;
      }

      constexpr frequency operator>=( frequency rhs ) const {
         return n >= rhs.n;
      }
      constexpr frequency operator<( frequency rhs ) const {
         return n < rhs.n;
      }

      constexpr frequency operator<=( frequency rhs ) const {
         return n <= rhs.n;
      }

   };
   
   // reverse operators

   constexpr frequency operator*( int lhs, frequency rhs ){
      return rhs * lhs;
   }

   constexpr frequency operator*( long long int lhs, frequency rhs ){
      return rhs * lhs;
   }
   
   // factory functions

   constexpr frequency mHz( long long int n ){ 
      return frequency( n ); 
   }

   constexpr frequency Hz( long long int n ){ 
      return mHz( n * 1'000 ); 
   }

   constexpr frequency kHz( long long int n ){ 
      return mHz( n * 1'000'000  ); 
   }

   constexpr frequency MHz( long long int n ){ 
      return mHz( n * 1'000'000'000  );
   } 
   
   constexpr frequency GHz( long long int n ){ 
      return mHz( n * 1'000'000'000'000  );
   }
   
   // frequency from a duration
   
   constexpr frequency operator/( long long int lhs, duration rhs ){
      return GHz( lhs ) / rhs.ns();
   }    
   
   // literal factory functions
   
   template< long long int N >
   struct mHz_literal : public frequency, public is_a_literal {
      static const long long int mHz = N ;
      mHz_literal(): frequency( mHz ){}
   };  
   
   template< long long int N >
   struct Hz_literal : public frequency, public is_a_literal {
      static const long long int mHz = 1'000 * N ;
      Hz_literal(): frequency( mHz ){}
   };  
   
   template< long long int N >
   struct kHz_literal : public frequency, public is_a_literal {
      static const long long int mHz = 1'000'000 * N;
      kHz_literal(): frequency( mHz ){}
   };   
   
   template< long long int N >
   struct MHz_literal : public frequency, public is_a_literal {
      static const long long int mHz = 1'000'000'000 * N;
      MHz_literal(): frequency( mHz ){}
   };   
   
   template< long long int N >
   struct GHz_literal : public frequency, public is_a_literal {
      static const long long int mHz = 1'000'000'000'000 * N;
      GHz_literal(): frequency( mHz ){}
   };  


   // =======================================================================
   //
   // moment
   //
   // stored as ns (nanoseconds) since some (arbitrary) epoch
   //
   // =======================================================================

   class moment {
   private:
      long long int n;
      
   public:
      typedef moment interface_type;
      
      constexpr moment( long long int n ): n{ n }{}
      
      // calculations

      constexpr moment operator+( duration rhs ) const {
         return moment( n + rhs.n );
      }
      
      constexpr moment operator-( duration rhs ) const {
         return moment( n - rhs.n );
      }
      
      constexpr duration operator-( moment rhs ) const {
         return duration( n - rhs.n );
      }
      
      // comparisons

      constexpr moment operator==( moment rhs ) const {
         return n == rhs.n;
      }
      
      constexpr moment operator!=( moment rhs ) const {
         return n != rhs.n;
      }

      constexpr moment operator>( moment rhs ) const {
         return n > rhs.n;
      }

      constexpr moment operator>=( moment rhs ) const {
         return n >= rhs.n;
      }
      constexpr moment operator<( moment rhs ) const {
         return n < rhs.n;
      }

      constexpr moment operator<=( moment rhs ) const {
         return n <= rhs.n;
      } 
          
   };  
   
   // reverse operations
   
   constexpr moment operator+( duration lhs, moment rhs ){
      return rhs + lhs;
   }
   
   // no literal factory functions because 
   // moment is purely a run-time notion


   // =======================================================================
   //
   // delay service
   //
   // =======================================================================

   struct delay {
      typedef void has_delay;
      virtual void init() = 0;
      template< typename D > void wait( D d );
   };
    
   
}; // namespace hwcpp

#endif // #ifndef HWCPP_TIME