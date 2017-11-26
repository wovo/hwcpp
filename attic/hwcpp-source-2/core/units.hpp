// ==========================================================================
//
// File      : units.hpp
// Part of   : hwcpp library (www.voti.nl/hwcpp)
// Copyright : wouter@voti.nl 2014
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at 
// http://www.boost.org/LICENSE_1_0.txt)
//
// ==========================================================================

namespace hwcpp {

   namespace xunits {
   
      template< int u1 >
      class unit {
      public:
         int value;
      public:
         typedef void is_unit;
         constexpr unit( int v ): value( v ){}      
      };
      
      constexpr auto degrees_celcius = unit< 1 >( 1 );
      
      /*
      template< class unit_left >
      constexpr unit_left operator * ( 
         const unit_left left,  
         const int right 
      ){
         return unit_left( left.v * right );
      }
      */
      
      template< class lhs_type, class rhs_type, class rhs_type::is_unit >
      constexpr rhs_type operator * ( 
         const lhs_type left,
         const rhs_type right
      ){
         return rhs_type( left * right.v );
      }
      
      /*
      template< class unit_left >
      constexpr unit_left operator / ( 
         const unit_left left,  
         const int right 
      ){
         return unit_left( left.v / right );
      }
      
      template< class unit_right >
      constexpr unit_right operator / ( 
         const int left,
         const unit_right right
      ){
         return unit_right( left / right.v );
      }
      */
      
      /*
      template< class unit_left, class unit_right >
      constexpr operator * ( const unit_left rhs, const unit_right rhs ) const {
         return 
      }
      */
   
   };
      
}; // namespace hwcpp