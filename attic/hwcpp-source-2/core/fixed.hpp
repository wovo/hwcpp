// ==========================================================================
//
// File      : fixed.hpp
// Part of   : hwcpp library (www.voti.nl/hwcpp)
// Copyright : wouter@voti.nl 2014
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at 
// http://www.boost.org/LICENSE_1_0.txt)
//
// ==========================================================================


namespace hwcpp {
/*
   template< unsigned int n_before, unsigned int n_after = 0 >
   class fixed {
   
      int before, after;
      
   public :
   
      fixed( int before ): 
         before( before ), after( 0 ){}
         
      fixed( int before, int after, int divisor ): 
         before( before ), after( ( after << n_after ) / divisor ){}
         
      friend std::ostream & operator<<( std::ostream &out, const fixed &f ){
         int decimals = 3;
         out << f.before;
         out << ".";
         int nn = 5 * f.after;
         for( int i = 1; i < f.after; i++ ){
            nn = 10 * nn;
         }
         out << std::setfill( '0' ) << std::setw( decimals ) << nn;
         return out;
      }          
   };
*/      
}; // namespace hwcpp
