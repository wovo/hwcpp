// ==========================================================================
//
// File      : ic2.hpp
// Part of   : hwcpp library (www.voti.nl/hwcpp)
// Copyright : wouter@voti.nl 2014 .. 2015
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at 
// http://www.boost.org/LICENSE_1_0.txt)
//
// ==========================================================================

#ifndef HWCPP_I2C
#define HWCPP_I2C

#include "core/basics.hpp"
#include "core/time.hpp"

namespace hwcpp {

   // =======================================================================
   //
   // i2c profiles
   //
   // accodring to the "I2C-bus specification and user manual, 
   // 4 April 2014", UM10204.pdf, Table 10, p 48
   //
   // =======================================================================
   
   struct i2c_profile {
      typedef void has_i2c_profile;
      
      frequency f;
      duration t_hd_sta;
      duration t_low;
      duration t_high;
      duration t_su_sta;
      duration t_hd_dat;
      duration t_su_dat;
      duration t_su_sto;
      duration t_buf;
      
      constexpr i2c_profile(       
         frequency f,
         duration t_hd_sta,
         duration t_low,
         duration t_high,
         duration t_su_sta,
         duration t_hd_dat,
         duration t_su_dat,
         duration t_su_sto,
         duration t_buf
      ):
         f        { f },
         t_hd_sta { t_hd_sta },
         t_low    { t_low },
         t_high   { t_high },
         t_su_sta { t_su_sta },
         t_hd_dat { t_hd_dat },
         t_su_dat { t_su_dat },
         t_su_sto { t_su_sto },
         t_buf    { t_buf }
      {}
   };
   
   struct i2c_profile_100kHz final : public i2c_profile {       
      constexpr i2c_profile_100kHz(): i2c_profile(
         kHz( 100 ),  // f
         ns( 4000 ),  // t_hd_sta
         ns( 4700 ),  // t_low
         ns( 4000 ),  // t_high
         ns( 4700 ),  // t_su_sta
         ns(    0 ),  // t_hd_sta
         ns(  250 ),  // t_su_dat
         ns( 4000 ),  // t_su_sto
         ns( 4700 )   // t_buf
      ) {}     
   };
   
   struct i2c_profile_400kHz final : public i2c_profile {   
      constexpr i2c_profile_400kHz(): i2c_profile(
         kHz( 400 ),  // f
         ns(  600 ),  // t_hd_sta
         ns( 1300 ),  // t_low
         ns(  600 ),  // t_high
         ns(  600 ),  // t_su_sta
         ns(    0 ),  // t_hd_sta
         ns(  100 ),  // t_su_dat
         ns(  600 ),  // t_su_sto
         ns( 1300 )   // t_buf
      ) {} 
   };
   
   
   // =======================================================================
   //
   // i2c lines
   //
   // =======================================================================
   
   struct i2c_lines {
      typedef void has_i2c_lines;       
   };
   
   template< typename T1, typename T2 >
   class i2c_lines_scl_sda : public i2c_lines {
   
      i2c_lines_scl_sda( T1 scl, T2 sda): scl{ scl }, sda{ sda }{}
      
      template< typename Tx1, typename Tx2 >
      friend auto i2c_lines_from_scl_sda( Tx1 && scl, Tx2 && sda );
      
   public:    
   
      T1 scl;
      T2 sda;      
   };   
   
   template< typename T1, typename T2 >
   auto i2c_lines_from_scl_sda( T1 && scl, T2 && sda ){
      return i2c_lines_scl_sda< T1, T2 >( scl, sda );
   }
   
   


   // =======================================================================
   //
   // I2C bus master 
   //
   // =======================================================================
   
   struct i2c_bus_master {
   
      typedef void has_i2c_bus_master;
      
      typedef unsigned char byte;
      
      virtual void init() = 0; 
      
      // write n bytes from data[] to the slave at address a
      virtual void write( 
         byte a, 
         const byte data[], 
         int n 
      ) = 0;          
      
      // read n bytes from the slave at addess a to data[]
      virtual void read( 
         byte a, 
         byte data[], 
         int n 
      ) = 0;
   }; 

   
   // =======================================================================
   //
   // I2C bit-banged bus master implementation
   //
   // =======================================================================
   
	template< class B, class T, class P >
   class i2c_bus_master_bb_implementation : public i2c_bus_master { 
       
      B bus;
      T timing; 
      P profile;
      
      template< class Bx, class Tx, class Px > 
      friend auto i2c_bus_master_bb( 
         Bx && bus, 
         Tx && timing, 
         Px && profile = i2c_profile_100kHz() 
      );
      
      i2c_bus_master_bb_implementation( B bus, T timing, P profile ):
         bus{ bus }, timing{ timing }, profile{ profile }{}
   
      void write_bit( bool x ){
         bus.scl.set( 0 );
         timing.wait( profile.t_low - profile.t_su_dat );
         bus.sda.set( x );
         timing.wait( profile.t_su_dat );
         bus.scl.set( 1 ); 
         timing.wait( profile.t_high );
      }
   
      bool read_bit(){         
         bus.scl.set( 0 );
         timing.wait( profile.t_low - profile.t_su_dat );         
         bus.sda.set( 1 );
         timing.wait( profile.t_su_dat );         
         bus.scl.set( 1 );
         bool result = bus.sda.get();    
         timing.wait( profile.t_high );
         return result;
      }       
     
      void write_start(){
         bus.sda.set( 1 );
         bus.scl.set( 1 );
         timing.wait( profile.t_su_sta );
         bus.sda.set( 0 );
         timing.wait( profile.t_hd_sta );
         bus.scl.set( 0 );
      }

      void write_stop(){
         bus.scl.set( 0 );
         timing.wait( profile.t_low - profile.t_su_dat );         
         bus.sda.set( 0 );
         timing.wait( profile.t_su_dat ); 
         bus.scl.set( 1 );
         timing.wait( profile.t_su_sto );   
         bus.sda.set( 1 );
         timing.wait( profile.t_buf );
      }
       
      bool read_ack(){
         return ! read_bit(); 
      } 
   
      void write_ack(){
         write_bit( 0 );
      }

      void write_nack(){
         write_bit( 1 );
      }
   
      void write_byte( byte x ){
         for( int i = 0; i < 8; i++ ){
            write_bit( ( x & 0x80 ) != 0 );
            x = x << 1;
         }         
      }

      unsigned char read_byte(){
         byte result = 0;
         for( int i = 0; i < 8; i++ ){
            result = result << 1;
            if( read_bit() ){
               result |= 0x01;
            } 
         }   
         return result;     
      }        
   
   public:     
     
      void init(){
         timing.init();
         bus.scl.init();
         bus.scl.set( 1 );   		
         bus.sda.init();
         bus.sda.set( 1 );
      }
   
      void write( byte address, const byte data[], int n ){
         write_start();
         write_byte( address << 1 );
         for( int i = 0; i < n; i++ ){
            read_ack();
            write_byte( data[ i ] );
         }               
         read_ack();
         write_stop();
      }           
   
      void read( byte address, byte data[], int n ){
         write_start();
         write_byte( ( address << 1 ) | 0x01 );    
         read_ack();
         for( int i = 0; i < n; ){
            data[ i ] = read_byte();
            if( ++i < n ){
               write_ack();
            }            
         }               
         write_stop();
      }      

   }; // class i2c_bus_master_bb_implementation
   
   template< 
      class B, 
      class T,
      class P
   > 
   auto i2c_bus_master_bb( 
      B && bus, 
      T && timing, 
      P && profile = i2c_profile_100kHz() 
   ){
      return i2c_bus_master_bb_implementation< B, T, P >
         ( bus, timing, profile );
   }

}; // namespace hwcpp

#endif // #ifndef HWCPP_I2C
