











//**************************************************************************
//
//! \mainpage rfm70
//!
//! C++ interface library for the HopeRF RFM70 4.3 GHz transceiver module
//!
//! \image html RFM70-D.jpg
//! \image rtf RFM70-D.jpg
//!
//! \author 
//!    Wouter van Ooijen (wouter@voti.nl)
//!
//! \version
//!    V1.02 (2011-12-31)
//!
//! \par Introduction
//!
//! The RFM70 module from HopeRF (www.hoperf.com) is a small and cheap
//! transceiver (transmitter + receiver) module for the license-free
//! 4.3 MHz frequency band. This module is intended for short range
//! communication, for instance within a room. 
//! Typical applications are wires mouses and keybords, 
//! and garage door openers.
//! In open air a distance of 
//! 50 .. 100 m is possible, but this is strictly line-of-sight: even 
//! the leaves of a single tree can obstruct the signal.
//!
//! The two main files in this libary, rfm70.h and rfm70.cpp,
//! are target independent. 
//! The pins.h file provides an abstract IO pin class.
//! To construct an RFM70 object the user must supply
//! IO pin objects for the pins that connect to the RFM70 module,
//! that must be derived from pins::input_output_pin,
//! and two delay functions.
//!
//! \par Files
//! - rfm70.h
//! - rfm70.cpp
//! - pins.h
//!
//!
//! \par License
//!
//! The files in this library are licensed under the zlib license, 
//! which rougly says: when you redistribute the *source* you must 
//! keep the copyright notice intact. Otherwise you can use these files
//! any way you like, including getting rich from selling applications.
//! But don't complain to me when it does not work (OTOH, contructive
//! comments are appreciated!).
//!
//! \par ToDo: bugs, notes, pitfalls, todo, known problems, etc
//!
//! - pictures for power
//! - document (other) files
//! - PIC18F examples, Cortex C examples, Arduino
//! - write 5 bytes when address <5 bytes?
//! - check and improve rtf documentation
//! - check CE cycling requirements
//! - descriptions for the other files
//! - add write ack payload for pipe N
//! - add 'report package has been sent'
//! - application: thermometer
//! - application: test signal strength
//! - application: asynch serial through the air
//!
//
//***************************************************************************//

//***************************************************************************//
//
// COPYRIGHT NOTICE (zlib license)
//
// Loosely based on the example application provided by HopeRF
//
// (c) Wouter van Ooijen - wouter@voti.nl
//
//  This software is provided 'as-is', without any express or implied
//  warranty.  In no event will the authors be held liable for any damages
//  arising from the use of this software.
//
//  Permission is granted to anyone to use this software for any purpose,
//  including commercial applications, and to alter it and redistribute it
//  freely, subject to the following restrictions:
//
//  1. The origin of this software must not be misrepresented; you must not
//     claim that you wrote the original software. If you use this software
//     in a product, an acknowledgment in the product documentation would be
//     appreciated but is not required.
//  2. Altered source versions must be plainly marked as such, and must not be
//     misrepresented as being the original software.
//  3. This notice may not be removed or altered from any source distribution.
//
//***************************************************************************//

//***************************************************************************//
//
//! \page revision information
//!
//! \par ToDo: bugs, notes, pitfalls, todo, known problems, etc
//!
//! - pictures for power
//! - document (other) files
//! - PIC18F examples, Cortex C examples, Arduino
//! - write 5 bytes when address <5 bytes?
//! - check and improve rtf documentation
//! - check CE cycling requirements
//! - descriptions for the other files
//! - add write ack payload for pipe N
//! - add 'report package has been sent'
//! - application: thermometer
//! - application: test signal strength
//! - application: asynch serial through the air
//! 
//! \par release notes
//!
//! V1.02 (2011-12-31)
//! Arduino added
//!
//! V1.01 (2011-12-26)
//! some minor documentation and webpage changes, no code changes
//!
//! V1.00 (2011-12-24)
//! first release
//! 
//
//***************************************************************************//

//***************************************************************************//
//
//! \page overview RFM70 overview
//!
//! \image html smd-pins.jpg
//! \image rtf smd-pins.jpg
//!
//! The RFM70 is a small module (PCB with some components, ~ 18 x 26 mm) 
//! that implements a transciever for the license-free 4.3 GHz band. 
//! The module contains a small antenna on the PCB, 
//! there is no provision for an external antenna.
//! Two versions of the module exist, one with 
//! pins and one without. The pins are on a 1.28 mm grid, which is twice the
//! density of a standard DIL package. The module requires 1.9 .. 3.6 Volt
//! for its power, 3.3 Volt seems to be the preferred operating voltage. 
//! It is NOT designed to run at 5.0 Volt. 
//! According to the datasheet that maximum 'typical' operating current 
//! is 23 mA.
//!
//! Note that 'licence free' means that certain well-described use of this 
//! frequency band is allowd without a license. 
//! The RFM70 is designed to be compatible with the requirements for such 
//! use, but it is the responsibility of anyone who sells a product that
//! to make sure that it complies with such rules.
//!
//! The main component of an RFM70 module is the RF70 chip (hidden beneath
//! the black blob). The manufacturer provides separate datasheets for both 
//! the RF70 chip and the RFM70 module. 
//! The two datasheets seem to be the same, except for the physical 
//! and pinout information which is of course different for the chip
//! and the module, so you can probably ignore the RF70 chip datasheet.
//! The RFM70 module datasheet can currently be found at 
//! http://www.hoperf.com/upload/rf/RFM70.pdf
//!
//! The RFM70 module is intended for short-range communication,
//! like wireless computer peripherals (mouse, keyboard, tablet, ect.)
//! keyfobs (car opener, garage door opener, motorized fence opener - 
//! some cryptografy will probably be required for such applications)
//! and toys. In a line of sight situation a maximum range of 50 .. 100 m
//! is possible. Indoors communication within a single room will generally
//! be OK (unless you have a very large room..) but passing even a single
//! wall can be a problem.
//!
//! An RFM70 module must be used with a microcontroller that initializes
//! and operates the module. By itself the module can not be used as a
//! 'wireless wire', although such a mode could be implemented in the
//! microcontroller. The interface between the RFM70 and the microcontroller
//! is a standard 4-PIN SPI interface (MISO, MOSI, CLCK, CSN) plus a CE
//! (Chip Enable) pin. The module also provides an IRQ pin that could be used
//! to speed up the detection of certain events within the module. 
//! The library does not used this pin. 
//! The SPI input pins are 5V-tolerant, so provided that
//! the high level as output by the module is accpetable to the 
//! microcontroller no glue circuitry is needed to interface to a 
//! microcontroller that runs from 5 Volt. (Except for course for a 
//! regulator that provides the 3.3 Volt to power the RFM70.)
//!
//! An RFM70 module operates in the 4.3 GHz band. 
//! Within that band a frequency can be selected in 1 MHz steps. 
//! RFM70 modules can communicate only when they use the same frequency.
//!
//! The RFM70 module operates on a packet basis. 
//! Each packet has a destination address.
//! By default the address is a 5 byte value, but a 4 or 3 byte
//! address can also be configured. 
//! For succesfull communication the RFM70 modules that are involved must
//! be configures for the same address length, and the receiving
//! module(s) must have one of their so-called pipes configured
//! for the address used by the transmitter.
//!
//! An RFM70 contains 6 so-called data pipes that can receive packages.
//! Each pipe has an address, and will receive only messages
//! for that address.
//! Pipes 0 and 1 have a full (up to 5 bytes) address. 
//! For pipes 2 .. 6 only the least significant byte can be
//! configured, the other bytes are copied from the address of pipe 1.
//! The length of the address (3, 4 or 5 bytes) is the same for 
//! transmission and for all 6 receive data pipes.
//!
//! A packet contains 1 .. 32 user data bytes. 
//! The packet length can either be fixed or flexible.
//! When the packet length is fixed each receiving pipe is configured
//! with its packet length. The length of a package that is sent is 
//! determined by the number of bytes written into the transmit buffer,
//! and it it must match the length configured for the receiving pipe.
//! When the packet length is flexible the length of a package is again
//! determined by the number of bytes written into the transmit, but in
//! this case this number is transmitted in the message, and on the
//! receiving side it can be retrieved by the R_RX_PL_WID command
//! (rfm70_channel_payload_size method).
//!
//! The simple way to send a package is without acknowledgement.
//! The RFM70 just transmits the package and considers it done.
//! It can be received by zero, one, or multiple RFM70 modules, but
//! the sending modules does not care and has no way of knowing.
//! For this simple mode of communication the involved RFM70's
//! - must be configured for the same channel frequency
//! - must use the same address length
//! - the receiving RFM70 must have a receive pipe configured
//!   for the same address as used by the transmitting RFM70
//!
//! Alternatively a package can be sent with acknowledgement and
//! (if necessary) retransmission. 
//! In this case the RFM70 will send the message, and consider it
//! done only when it receives an acknowledge for it.
//! If it does not receive an acknowledge within a fixed amount of
//! time it will re-transmit the package, up to a set maximum.
//! A receiving RFM70 can automatically send an acknowledgement
//! for a successfully received package. 
//! For this to work the same requirements as for simple unacknowledged
//! communicatiobn apply, and additionally on both RFM70's
//! - CRC must be enabled (length 1 or 2) on both modules
//! - receive data pipe 0 must be configured for the same address 
//!   as the module uses for transmitting
//!
//! The automatic retransmission provided by the RFM70 uses a fixed
//! retransmission timout, which is probly fine for correcting an 
//! occasional packet loss due to interference from other 4.3 GHz sources,
//! but it is potentially inefective when the interference is caused by
//! another RFM70 that uses the same timout! In such cases the 
//! microcontroller should implemnet its own retransmission scheme,
//! with for instance a random timeout, and maybe an exponential 
//! backoff.
//! 
//
//***************************************************************************//

//***************************************************************************//
//
//! \page hardware RFM70 hardware interface
//!
//! \image html smd-pins.jpg
//! \image rtf smd-pins.jpg
//!
//! The RFM70 uses a standard 4-wire SPI interface.
//! It also provides an active low interrupt pin, which could be used to
//! avoid polling. This library does not use the interrupt pin.
//! The RFM70 also has a CE (chip enable) input, which must be de-asserted
//! to put the chip in standby or power-down mode, and must be cycled
//! to switch between receive and transmit mode. Hence the interface
//! uses 5 data pins, plus ground and power (3.3V):
//! - GND : common ground
//! - VDD : 3.3V power
//! - CE : Chip Enable, active high, microcontoller output
//! - CSN : Chip Select Negative, active low, microcontoller output
//! - SCK : Serial ClocK, microcontoller output
//! - MOSI : Master Out Slave In, microcontoller output
//! - MISO : Master In Slave Out, microcontoller input
//! - IRQ : Interrupt ReQuest, not used
//!
//! When the microcontroller operates at 3.3 Volt (or lower, 
//! the RFM70 datasheet claims operation down to 1.9 Volt) all lines, 
//! including power,  
//! can be connected directly to the microcontroller. 
//! If you are experimenting and want to protect yourself against
//! problems when you accidentally configure the pin connected to MISO
//! as output, you could insert a suitable series resistor in this line.
//! 2k2 seems to be a good choice.
//!
//! When the microcontroller operates at 5 Volt there are three possible issues:
//! - power : the RFM70 operates at 1.9 .. 3.3 Volt, so the 5 Volt must somehow
//!   be reduced to a voltage within this range
//! - data from the microcontroller to the RFM70 : no problem here, the
//!   RFM70 inputs are 5 Volt tolerant. 
//!   As explained, a series resistor in the MISO line might be a good idea.
//! - data from RFM70 to the microcontroller : in most cases this will not 
//!   be a problem, but you might want to check the minimum voltage required
//!   by your microcontroller to reliably detect a logic 1. For instance a 
//!   PIC requires ~ 2.0 Volt on a TTL level input, but 0.8 * VDD on a
//!   Schmitt Trigger input! And you must consider this at the maximum VDD 
//!   for the microcontroller, which can be 5.5 Volt when delivered by 
//!   an 7805 or an USB port.
//!
//! There are various ways to create a 3.3 Volt supply for the RFM70 from a
//! 5 Volt supply. I prefer to use a low-drop low-quiecent
//! current 3.3 Volt linear regulator. Read the datasheet of the regulator
//! carefully: some put very stringent requirements on the value and impedance
//! of the decoupling capacitors. My favourite is the Microchip MCP1702, 
//! which has a low quiecent current (5 uA maximum), and is stable with 
//! only 1 uF input an output capacitors of any type 
//! (ceramic, tantalum, aluminium electrolytic).
//!
//! TBW: picture
//!
//! A crude way to create the power for the RFM70 is to use a 
//! resistor divider. I would do this only in an experimental
//! setup on my desk, never in a final product.
//! The source impedance of the divider causes a drop in the 
//! voltage when the RFM70 uses more current.
//! This drop can be reduced by lowering the resistor values, but at
//! the cost of a higher current through the resistors. The RFM70
//! can operate down to 1.9 Volt, but at that level the microcontroller 
//! might not reliably recognise a logic 1 from the RFM70. Another issue
//! is the dissipation in the resistors. The circuit below is a compromise.
//! It uses three equal-valued resistors because I don't stock many
//! different resistor values.
//! The idle current through the resistors is 83 mA at 5.5 Volt, in
//! this situation the RFM70 gets 3.7 Volt. That is slightly high, but
//! probably not a big problem.
//! When the RFM70 draws its maximum current of 23 mA when the 
//! microcontroller's power is at 4.5 Volt the RFM70 still gets 2.6 Volt. 
//! You might want to double-check that the microcontroller accepts ~ 2 Volt
//! as a logic 1. 
//!
//! TBW: picture
//! 
//
//***************************************************************************//


#include "rfm70.h"


// RFM70 SPI read and write commands
#define RFM70_CMD_READ_REG            0x00
#define RFM70_CMD_WRITE_REG           0x20

//interrupt status
#define STATUS_RX_DR    0x40
#define STATUS_TX_DS    0x20
#define STATUS_MAX_RT   0x10

#define STATUS_TX_FULL  0x01

//FIFO_STATUS
#define FIFO_STATUS_TX_REUSE  0x40
#define FIFO_STATUS_TX_FULL   0x20
#define FIFO_STATUS_TX_EMPTY  0x10

#define FIFO_STATUS_RX_FULL   0x02
#define FIFO_STATUS_RX_EMPTY  0x01


using namespace pins;

#define RFM70_CE( x )    ce.set( (x) )
#define RFM70_CSN( x )   csn.set( (x) )
#define RFM70_SCK( x )   sclk.set( (x) ) 
#define RFM70_MOSI( x )  mosi.set( (x) )
#define RFM70_MISO       ( miso.get() )



// Bank0 register initialization values
#define BANK0_ENTRIES 10
const unsigned char Bank0_Reg[ BANK0_ENTRIES ][ 2 ]={
   {  0, 0x0F }, // receive, enabled, CRC 2, enable interupts
   {  1, 0x3F }, // auto-ack on all pipes enabled
   {  2, 0x03 }, // Enable pipes 0 and 1
   {  3, 0x03 }, // 5 bytes addresses
   {  4, 0xff }, // auto retransmission delay 4000 ms, 15 times
   {  5, 0x0A }, // channel 10
   {  6 ,0x37 }, // data rate 1Mbit, power 5dbm, LNA gain high
   {  7, 0x07 }, // why write this at all?? but seems required to work...
   {  8, 0x00 }, // clear Tx packet counters
   { 23, 0x00 }, // fifo status
};

   // default receive address data pipe 0:
   // just a bunch of bytes, nothing magical
const unsigned char RX0_Address[]={ 0x34, 0x43, 0x10, 0x10, 0x01 };

unsigned char rfm70::SPI_RW( unsigned char value ){
   unsigned char i;
   for( i =0 ; i < 8; i++ ){
      (*wait_us)( 1 );
      RFM70_MOSI( value & 0x80  );      
      value = (value << 1);    // shift next bit into MSB..
      
      (*wait_us)( 1 );
      RFM70_SCK( 1 );          
      value |= RFM70_MISO;     // capture current MISO bit
      
      (*wait_us)( 1 );
      RFM70_SCK( 0 );
      (*wait_us)( 1 );
  }
  return value;
}

void rfm70::register_write( unsigned char reg, unsigned char value ){
   if( reg < RFM70_CMD_WRITE_REG ){
      reg |= RFM70_CMD_WRITE_REG;      
   }  
   RFM70_CSN( 0 );                // CSN low, init SPI transaction
   (void)rfm70::SPI_RW( reg );    // select register
   (void)rfm70::SPI_RW( value );  // ..and write value to it..
   RFM70_CSN( 1 );                // CSN high again
}

unsigned char rfm70::register_read( unsigned char reg ){
   unsigned char value;
   if( reg < RFM70_CMD_WRITE_REG ){
      reg |= RFM70_CMD_READ_REG;       
   }  
   RFM70_CSN( 0 );               // CSN low, initialize SPI communication...
   (void)rfm70::SPI_RW( reg );   // Select register to read from..
   value = rfm70::SPI_RW( 0 );   // ..then read register value
   RFM70_CSN( 1 );               // CSN high, terminate SPI communication
   return value;                 // return register value
}

void rfm70::buffer_read( 
   unsigned char reg, 
   unsigned char *pBuf, 
   unsigned char length 
){
   unsigned char i;
   if( reg < RFM70_CMD_WRITE_REG ){
      reg |= RFM70_CMD_READ_REG;       
   }  
   RFM70_CSN( 0 );                   // Set CSN 0
   (void)rfm70::SPI_RW( reg );       // Select register to write
   for( i = 0; i < length; i++ ){    // read all bytes
      *pBuf++ = rfm70::SPI_RW( 0 );  // read one byte from RFM70
   }
   RFM70_CSN( 1 );                   // Set CSN high again
}

void rfm70::buffer_write( 
   char reg, 
   const unsigned char *pBuf, 
   unsigned char length 
){
   unsigned char i;
   if( reg < RFM70_CMD_WRITE_REG ){
      reg |= RFM70_CMD_WRITE_REG;      
   }  
   RFM70_CSN( 0 );                     // Set CSN low, init SPI tranaction
   (void)rfm70::SPI_RW( reg );         // Select register to write tio write
   for( i = 0; i < length; i++ ){      // write all bytes in buffer(*pBuf)
      (void)rfm70::SPI_RW( *pBuf++ );  // write one byte
   }   
   RFM70_CSN( 1 );                     // Set CSN high again
}

void rfm70::bank( unsigned char b ){
   unsigned char st = 0x80 & rfm70::register_read( RFM70_REG_STATUS );
   if(( st &&( b == 0 )) || (( st == 0 ) && b )){
      rfm70::register_write( RFM70_CMD_ACTIVATE, 0x53 );
   }
}

   // magic bank1 register initialization values
const unsigned long Bank1_Reg0_13[] = {
   0xE2014B40,
   0x00004BC0,
   0x028CFCD0,
   0x41390099,
   0x0B869Ef9, 
   0xA67F0624,
   0x00000000,
   0x00000000,
   0x00000000,
   0x00000000,
   0x00000000,
   0x00000000,
   0x00127300,
   0x36B48000 };   
   
   // more magic bank1 register initialization values
const unsigned char Bank1_Reg14[] = {
   0x41, 0x20, 0x08, 0x04, 0x81, 0x20, 0xCF, 0xF7, 0xFE, 0xFF, 0xFF };   
   
   // initialize bank1 like in the example code.
   // don't ask why, just do it
void rfm70::init_bank1( void ){
   unsigned char i, j;
   unsigned char WriteArr[ 12 ];
        
   bank( 1 );
   
   for( i = 0; i <= 8; i++ ){ //reverse!
      for( j = 0; j < 4; j++ ){
         WriteArr[ j ]=( Bank1_Reg0_13[ i ]>>(8*(j) ) )&0xff;
      }  
      buffer_write( i,WriteArr, 4 );
   }

   for( i = 9; i <= 13; i++ ){
      for( j = 0; j < 4; j++ ){
         WriteArr[ j ]=( Bank1_Reg0_13[ i ]>>(8*(3-j) ) )&0xff;
      }
      buffer_write( i, WriteArr, 4 );
   }

   rfm70::buffer_write( 14, Bank1_Reg14, 11 );

   //toggle REG4<25,26>
   for(j=0;j<4;j++){
      WriteArr[ j ]=( Bank1_Reg0_13[ 4 ]>>(8*(j) ) )&0xff;
   } 

   WriteArr[ 0 ] = WriteArr[ 0 ] | 0x06;
   rfm70::buffer_write( 4, WriteArr, 4);

   WriteArr[ 0 ] = WriteArr[ 0 ] & 0xf9;
   rfm70::buffer_write( 4, WriteArr,4);

   rfm70::bank( 0 );
}

bool rfm70::is_present( void ){
   unsigned char st1, st2; 
   st1 = rfm70::register_read( RFM70_REG_STATUS );
   rfm70::register_write( RFM70_CMD_ACTIVATE, 0x53 );
   st2 = rfm70::register_read( RFM70_REG_STATUS );
   rfm70::register_write( RFM70_CMD_ACTIVATE, 0x53 );
   return ( st1 ^ st2 ) == 0x80;
}

void rfm70::mode_receive( void ){
   unsigned char value;
   
   // flush receive queue 
   rfm70::register_write( RFM70_CMD_FLUSH_RX, 0 );
   
   // clear interrupt status
   value = rfm70::register_read( RFM70_REG_STATUS );
   rfm70::register_write( RFM70_REG_STATUS ,value );
   
   // switch to receive mode
   RFM70_CE( 0 );
   value = rfm70::register_read( RFM70_REG_CONFIG );
   value |= 0x01; // set RX bit
   value |= 0x02; // set PWR_UP bit
   rfm70::register_write( RFM70_REG_CONFIG, value );
   RFM70_CE( 1 );
}

void rfm70::mode_transmit( void ){
   unsigned char value;
   
   // flush transmit queue
   rfm70::register_write( RFM70_CMD_FLUSH_TX, 0);
   
   // clear interrupt status
   value = rfm70::register_read( RFM70_REG_STATUS );
   rfm70::register_write( RFM70_REG_STATUS ,value );
   
   // switch to transmit mode
   RFM70_CE( 0 );
   value = rfm70::register_read( RFM70_REG_CONFIG );
   value &= 0xFE; // clear RX bit
   value |= 0x02; // set PWR_UP bit
   rfm70::register_write( RFM70_REG_CONFIG, value );
   RFM70_CE( 1 );
}

void rfm70::mode_standby( void ){
   unsigned char value;
   RFM70_CE( 0 );
   value = rfm70::register_read( RFM70_REG_CONFIG );
   value |= 0x02; // set PWR_UP bit
   rfm70::register_write( RFM70_REG_CONFIG, value );
}

void rfm70::mode_powerdown( void ){
   unsigned char value;
   RFM70_CE( 0 );
   value = rfm70::register_read( RFM70_REG_CONFIG );
   value &= 0xFD; // clear PWR_UP bit
   rfm70::register_write( RFM70_REG_CONFIG, value );
}

void rfm70::channel( unsigned char ch ){
  // MSB must be 0
  rfm70::register_write( RFM70_REG_RF_CH, ch & 0x7E );
}

void rfm70::air_data_rate( unsigned char rate ){
   unsigned char value; 
   RFM70_CE( 0 );
   value = rfm70::register_read( RFM70_REG_RF_SETUP );
   value &= 0xF7;
   if( rate > 1 ){
      value |= 0x08;  
   }
   rfm70::register_write( RFM70_REG_RF_SETUP, value );
   RFM70_CE( 1 );
}

void rfm70::crc_length( unsigned char len ){
   unsigned char val;
   if( len > 2 ){
      len = 2;
   }   
   val = rfm70::register_read( RFM70_REG_CONFIG );
   if( len == 0 ){
      val &= 0xF3;
      rfm70::register_write( RFM70_REG_EN_AA, 0 );
      rfm70::register_write( RFM70_REG_CONFIG, val );
   } else {
      rfm70::register_write( RFM70_REG_EN_AA, 0x3F );
      val &= 0xFB;
      if( val == 2 ){
         val |= 0x04; 
      }   
      rfm70::register_write( RFM70_REG_CONFIG, val );
   }  
}

void rfm70::address_length( unsigned char len ){
   if( len > 5 ){
      len = 5;
   }
   if( len < 3 ){
      len = 3;    
   }
   rfm70::register_write( RFM70_REG_SETUP_AW, len - 2  );   
}

bool rfm70::transmit_fifo_full( void ){
  unsigned char s;
  s = rfm70::register_read( RFM70_REG_FIFO_STATUS );
  return ( s & FIFO_STATUS_TX_FULL ) != 0;
}
    
bool rfm70::receive_fifo_empty( void ){
  unsigned char s;
  s = rfm70::register_read( RFM70_REG_FIFO_STATUS );
  return ( s & FIFO_STATUS_RX_EMPTY ) != 0;
}

void rfm70::receive_address_p0( const unsigned char address[ 5 ] ){
   rfm70::buffer_write( RFM70_REG_RX_ADDR_P0, address, 5 );  
}

void rfm70::receive_address_p1( const unsigned char address[ 5 ] ){
   rfm70::buffer_write( RFM70_REG_RX_ADDR_P1, address, 5 );  
}

void rfm70::receive_address_pn( unsigned char channel, unsigned char address ){
   rfm70::register_write( RFM70_REG_RX_ADDR_P0 + channel, address ); 
}

void rfm70::transmit_address( const unsigned char *address ){
   rfm70::buffer_write( RFM70_REG_TX_ADDR, address, 5 );   
} 

unsigned char rfm70::retransmit_count( void ){
   return rfm70::register_read( RFM70_REG_OBSERVE_TX ) & 0x0F;   
}

unsigned char rfm70::lost_packets_count( void ){
   return ( rfm70::register_read( RFM70_REG_OBSERVE_TX ) >> 4 ) & 0x0F;   
}

void rfm70::pipe_autoack( unsigned char pipe, bool enabled ){
   unsigned char val = rfm70::register_read( RFM70_REG_EN_AA ); 
   if( pipe > 5 ){ 
      pipe = 5; 
   }   
   if( enabled ){
      val |= 1 << pipe;
   } else {
      val &= ~ ( 1 << pipe );
   }
   rfm70::register_write( RFM70_REG_EN_AA, val ); 
}

void rfm70::pipe_enable( unsigned char pipe, bool enabled ){
   unsigned char val = rfm70::register_read( RFM70_REG_EN_RXADDR ); 
   if( pipe > 5 ){ 
      pipe = 5; 
   }   
   if( enabled ){
      val |= 1 << pipe;
   } else {
      val &= ~ ( 1 << pipe );
   }
   rfm70::register_write( RFM70_REG_EN_RXADDR, val ); 
}

void rfm70::lost_packets_reset( void ){
   unsigned char val = rfm70::register_read( RFM70_REG_RF_CH );  
   rfm70::register_write( RFM70_REG_RF_CH, val );    
}

void rfm70::retransmit_delay_attempts( unsigned char d, unsigned char n ){
   rfm70::register_write( 
      RFM70_REG_SETUP_RETR, ( n & 0x0F ) | (( d & 0x0F ) << 4 ));
}

void rfm70::lna_high( void ){
   unsigned char val = rfm70::register_read( RFM70_REG_RF_SETUP ); 
   val |= 0x01;
   rfm70::register_write( RFM70_REG_RF_SETUP, val ); 
}

void rfm70::lna_low( void ){
   unsigned char val = rfm70::register_read( RFM70_REG_RF_SETUP ); 
   val &= 0xFE;
   rfm70::register_write( RFM70_REG_RF_SETUP, val ); 
}

void rfm70::power( unsigned char level ){
   if( level > 3 ){ 
       level = 3; 
   }
   RFM70_CE( 0 );
   unsigned char val = rfm70::register_read( RFM70_REG_RF_SETUP ); 
   val &= 0x09; 
   val |= 0x30;
   val |= ( level << 1 );
   rfm70::register_write( RFM70_REG_RF_SETUP, val ); 
   RFM70_CE( 1 );
}

void rfm70::channel_payload_size( unsigned char channel, unsigned char size ){
   unsigned char val;
   if( size > 32 ){
      size = 32;
   }
   val = rfm70::register_read( RFM70_REG_DYNPD );  
   if( size == 0 ){
      val |= 1 << channel;
   } else {
      val &= ~ ( 1 << channel );
   }    
   rfm70::register_write( RFM70_REG_DYNPD, val );
   rfm70::register_write( RFM70_REG_RX_PW_P0 + channel, size );  
}

void rfm70::transmit_message(
   const unsigned char *buf,
   unsigned char length
){
   if( length > 32 ){
      length = 32;
   }
   rfm70::buffer_write( RFM70_CMD_W_TX_PAYLOAD, buf, length );
}
    
void rfm70::transmit_message_once(
   const unsigned char *buf,
   unsigned char length
){
   if( length > 32 ){
      length = 32;
   }
   rfm70::buffer_write( RFM70_CMD_W_TX_PAYLOAD_NOACK, buf, length );
}

unsigned char rfm70::receive_next_pipe( void ){
   unsigned char status = rfm70::register_read( RFM70_REG_STATUS ); 
   return ( status >> 1 ) & 0x07;
}

unsigned char rfm70::receive_next_length( void ){
   return rfm70::register_read( RFM70_CMD_R_RX_PL_WID );
}

bool rfm70::receive(
   unsigned char & pipe,
   unsigned char *buf,
   unsigned char & length
){
   unsigned char p = rfm70::receive_next_pipe();
   if( p == 0x07 ){
      return 0;
   }   
    pipe = p;
    length = rfm70::receive_next_length();
   rfm70::buffer_read( RFM70_CMD_R_RX_PAYLOAD, buf,  length );
   return 1;
}
    
void rfm70::init( void ){
   unsigned char i;
   
   sclk.direction_set_output();
   mosi.direction_set_output();      
   miso.direction_set_input();
   csn.direction_set_output();
   ce.direction_set_output();

   RFM70_CE( 0 );
   RFM70_CSN( 1 );
   RFM70_SCK( 0 );
   RFM70_MOSI( 0 );

   // delay at least 50ms.
   // the example code says so, but why??
   (*wait_ms)( 50 );

   // write array of default init settings
   rfm70::bank( 0 );
   for( i = 0; i < BANK0_ENTRIES; i++ ){
     rfm70::register_write( Bank0_Reg[ i ][0], Bank0_Reg[ i ][1] );
   }

   rfm70::receive_address_p0( RX0_Address );
   rfm70::receive_address_p1( RX0_Address );
   rfm70::transmit_address( RX0_Address );

   // enable the extra features
   i = rfm70::register_read(29);
   if( i == 0 ){ // only when the extra features are not yet activated!
      rfm70::register_write( RFM70_CMD_ACTIVATE, 0x73 );
   }
   
   // select dynamic payload length data pipe5\4\3\2\1\0
   rfm70::register_write( 28, 0x3F ); 
   
   // select Dynamic Payload Length, Payload with ACK, W_TX_PAYLOAD_NOACK
   rfm70::register_write( 29, 0x07 );  
   
   // dynamic payload sizing on channels 0 and 1
   rfm70::channel_payload_size( 0, 0 );
   rfm70::channel_payload_size( 1, 0 );

   rfm70::init_bank1();
   (*wait_ms)( 50 ); 
   rfm70::mode_receive();
}




