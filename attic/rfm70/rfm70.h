











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

#ifndef _RFM70_H_
#define _RFM70_H_

//***************************************************************************//
//
//! \defgroup lowlevel low level interface
//!
//! The low-level interface provides read and write access to the 
//! commands and registers of the RFM70.
//!
//! When a register ( < 0x20 ) is specified for a read or write command
//! the appropriate read or write command bits are added automatically.
//!
//! To use any of these methods, (except init() itself)
//! the interface and the module must have been initialized by
//! an init() call.
//!
//! Besides the registers shown here (bank 0) the rfm70 also has a
//! set of registers in bank 1. These bank 1 registers are initialized by
//! the init() call. If you want to do this yourself: the datasheet
//! shows the required values, but in a very confusing way. The HopeRF 
//! example code is a better reference. No (or very scarce) explanation 
//! is given for these values.
//!
//! For most users, especially novices, it is recommended to use the
//! high level interaface instead of this low level interface.
//
//***************************************************************************//

//***************************************************************************//
//
//! \defgroup highlevel high level interface
//!
//! The high-level interface provides methods for using the rfm70 module.
//! These methods are implemneted by calling the appropriate low level
//! methods. 
//! When possible, it is recommended to use only these high level methods.
//! But when a functionality is needed that is missing it can be implemented
//! using the low level interface.
//!
//! To use any of these methods, (except init() itself)
//! the interface and the module must have been initialized by
//! an init() call.
//
//***************************************************************************//


//! version of this rfm70 library
//
//! \ingroup highlevel
#define RFM70_LIB_VERSION "V1.02 (2011-12-31)"

//! maximum number of data bytes in a (received or transmitted) rfm70 packet
//
//! \ingroup highlevel
#define RFM70_MAX_PACKET_LEN  32

//! type of rfm70 (transmit or receive) buffer
//
//! \ingroup highlevel
typedef unsigned char rfm70_buffer [ RFM70_MAX_PACKET_LEN ];


//***************************************************************************//
//
// RFM70 SPI commands
//
//***************************************************************************//

//! \addtogroup lowlevel
//! @{

//! SPI comamnd to read a received payload
#define RFM70_CMD_R_RX_PAYLOAD         0x61

//! SPI command to write a payload to be sent
#define RFM70_CMD_W_TX_PAYLOAD         0xA0

//! SPI command to empty the transmit queue
#define RFM70_CMD_FLUSH_TX             0xE1

//! SPI command to empty the receive queue
#define RFM70_CMD_FLUSH_RX             0xE2

//! SPI command to start continuous retransmission
#define RFM70_CMD_REUSE_TX_PL          0xE3

//! SPI command to write a payload to be sent without auto-acknowledgement
#define RFM70_CMD_W_TX_PAYLOAD_NOACK   0xB0

//! SPI command to write the payload to be transmitted with an ack
#define RFM70_CMD_W_ACK_PAYLOAD        0xA8

//! SPI command to toggle register bank or toggle extended functions
#define RFM70_CMD_ACTIVATE             0x50

//! SPI command to read the payload length for the top payload in the FIFO
#define RFM70_CMD_R_RX_PL_WID          0x60

//! SPI 'no peration', can be used to read the status register
#define RFM70_CMD_NOP                  0xFF

//***************************************************************************//
//
// RFM70 register addresses
//
//***************************************************************************//

//! CONFIG : rfm70 configuration register
//
//! Bits (0 = LSB):
//! - 7 : reserved, must be 0
//! - 6 : 1 masks RX_DR (see...) from IRQ pin, 0 allows
//! - 5 : 1 masks RX_DS (see...) from IRQ pin, 0 allows
//! - 4 : 1 masks MAX_RT (see...) from IRQ pin, 0 allows
//! - 3 : 1 enables CRC (forced high when EN_AA != 0)
//! - 2 : 0 = 1 byte CRC, 1 = 2 byte CRC
//! - 1 : 0 = power down, 1 = power up
//! - 0 : 0 = transmit mode, 1 = receive mode
#define RFM70_REG_CONFIG               0x00

//! EN_AA : enable auto ack on pipes
//
//! Bits (0 = LSB):
//! - 7, 6 : reserved, must be 00
//! - 5 : 0 disables auto ack on pipe 5, 1 enables
//! - 4 : 0 disables auto ack on pipe 4, 1 enables
//! - 3 : 0 disables auto ack on pipe 3, 1 enables
//! - 2 : 0 disables auto ack on pipe 2, 1 enables
//! - 1 : 0 disables auto ack on pipe 1, 1 enables
//! - 0 : 0 disables auto ack on pipe 0, 1 enables
#define RFM70_REG_EN_AA                0x01

//! EN_RXADDR : enable receive pipes
//
//! Bits (0 = LSB):
//! - 7, 6 : reserved, must be 00
//! - 5 : 0 disables receive pipe 5, 1 enables
//! - 4 : 0 disables receive pipe 4, 1 enables
//! - 3 : 0 disables receive pipe 3, 1 enables
//! - 2 : 0 disables receive pipe 2, 1 enables
//! - 1 : 0 disables receive pipe 1, 1 enables
//! - 0 : 0 disables receive pipe 0, 1 enables
#define RFM70_REG_EN_RXADDR            0x02

//! SETUP_AW : set address length
//
//! Bits (0 = LSB):
//! - 7 .. 2 : reserved, must be 000000
//! - 1 .. 0 : 00 = illegal, 01 = 3 bytes, 10 = 4 bytes, 11 = 5 bytes
#define RFM70_REG_SETUP_AW             0x03

//! SETUP_RETR : retransmission settings
//
//! Bits (0 = LSB):
//! - 7 .. 4 : delay between (re) transmissions, ( n + 1 ) * 250 us
//! - 3 .. 0 : max number of retransmissions, 0 disableles retransmissions
#define RFM70_REG_SETUP_RETR           0x04

//! RF_CH : RF channel (frequency)
//
//! The RF channel frequency is 2.4 MHz + n * 1 MHz.
#define RFM70_REG_RF_CH                0x05

//! RF_SETUP : RF setup: data rate, transmit power, LNA
//
//! Bits (0 = LSB):
//! - 7 .. 4 : reserved, must be 0011
//! - 3 : air data rate, 0 = 1 Mbps, 1 = 2 Mbps
//! - 2 .. 1 : transmit power, 00 = -10 dBm, 01 = -5 dBm, 10 = 0 dBm, 11 = 5 dBm
//! - 0 : LNA gain, 0 = - 20 dB (low gain), 1 = standard
#define RFM70_REG_RF_SETUP             0x06

//! STATUS : status register
//
//! The value of this register is also clocked out
//! while a SPI command is clocked in.
//!
//! Bits (0 = LSB):
//! - 7 : active register bank, 0 = bank 0, 1 = bank 1
//! - 6 : data available, 0 = RX FIFO not empty, 1 = RX FIFO empty
//! - 5 : data sent, 0 = no packet sent, 1 = packet has been sent
//! - 4 : 1 = maximum number of retransmissions reached
//! - 3 .. 1 : data pipe of the message at the RX queue head
//! - 0 : TX FIFO full: 0 = TX FIFO not full, 1 = TX FIFO full
//!
//! Bits 6,5,4 are cleared by writing a 1 (!) in that position.
//! When bit 4 is set this will block any communication.
//! When auto retransmission is enabled bit 5 will be set only
//! after the acknowledge has been received.
#define RFM70_REG_STATUS               0x07

//! OBSERVE_TX : lost and retransmitted packets
//
//! Bits (0 = LSB):
//! - 7 .. 4 : counts number of lost packets
//! - 3 .. 0 : counts retranmits 
//! The lost packets counter will not increment beyond 15. 
//! It is reset by writing to the channel frequency register.
//!
//! The retransmits counter can not increment beyond 15 because
//! the maximum number of transmissions is 15. This counter
//! is reset when the transmission of a new packet starts.
#define RFM70_REG_OBSERVE_TX           0x08

//! CD : carrier detect
//
//! Bits (0 = LSB):
//! - 7 .. 1 : reserved
//! - 1 : carrier detect
#define RFM70_REG_CD                   0x09

//! RX_ADDR_PO : receive address for data pipe 0, 5 bytes
//
//! This is the (up to) 5 byte receive address for data pipe 0.
//! For auto acknowledgement to work this address must be 
//! the same as the transmit address.
#define RFM70_REG_RX_ADDR_P0           0x0A

//! RX_ADDR_P1 : receive address for data pipe 1, 5 bytes
//
//! This is the (up to) 5 byte receive address for data pipe 1.
//! The higher bytes (all but the LSB) are also used in
//! the receive addresses of data pipes 2 .. 5.
#define RFM70_REG_RX_ADDR_P1           0x0B

//! RX_ADDR_P2 : receive address for data pipe 2, 1 byte
//
//! This is the LSB of the receive address for data pipe 2.
//! The higher bytes are copied from the receive address of
//! data pipe 1.
#define RFM70_REG_RX_ADDR_P2           0x0C

//! RX_ADDR_P3 : receive address for data pipe 3, 1 byte
//
//! This is the LSB of the receive address for data pipe 3.
//! The higher bytes are copied from the receive address of
//! data pipe 1.
#define RFM70_REG_RX_ADDR_P3           0x0D

//! RX_ADDR_P4 : receive address for data pipe 4, 1 byte
//
//! This is the LSB of the receive address for data pipe 4.
//! The higher bytes are copied from the receive address of
//! data pipe 1.
#define RFM70_REG_RX_ADDR_P4           0x0E

//! RX_ADDR_P5 : receive address for data pipe 5, 1 byte
//
//! This is the LSB of the receive address for data pipe 2.
//! The higher bytes are copied from the receive address of
//! data pipe 5.
#define RFM70_REG_RX_ADDR_P5           0x0F

//! TX_ADDR : tranmsit adress, 5 bytes
//
//! This is the (up to) 5 byte adress used in transmitted packets.
//! For auto acknowledgement to work this address must be 
//! the same as the pipe 0 receive address.
#define RFM70_REG_TX_ADDR              0x10

//! RX_PW_P0 : number of bytes in package received into pipe 0
//
//! This is the number of data bytes in the message at
//! the head of receive pipe 0.
#define RFM70_REG_RX_PW_P0             0x11

//! RX_PW_P1 : number of bytes in package received into pipe 1
//
//! This is the number of data bytes in the message at
//! the head of receive pipe 1.
#define RFM70_REG_RX_PW_P1             0x12

//! RX_PW_P2 : number of bytes in package received into pipe 2
//
//! This is the number of data bytes in the message at
//! the head of receive pipe 2.
#define RFM70_REG_RX_PW_P2             0x13

//! RX_PW_P3 : number of bytes in package received into pipe 3
//
//! This is the number of data bytes in the message at
//! the head of receive pipe 3.
#define RFM70_REG_RX_PW_P3             0x14

//! RX_PW_P4 : number of bytes in package received into pipe 4
//
//! This is the number of data bytes in the message at
//! the head of receive pipe 4.
#define RFM70_REG_RX_PW_P4             0x15

//! RX_PW_P5 : number of bytes in package received into pipe 5
//
//! This is the number of data bytes in the message at
//! the head of receive pipe 5.
#define RFM70_REG_RX_PW_P5             0x16

//! FIFO_STATUS : receive and transmit FIFO status (readonly)
//
//! Bits (0 = LSB):
//! - 7   : reserved, only 0 allowed
//! - 6   : high = re-use last transmitted packet
//! - 5   : high = transmit FIFO is full
//! - 4   : high = transmit FIFO is empty
//! - 3:2 : reserved, only 0 allowed
//! - 1   : high = receive FIFO is full
//! - 0   : high = receive FIFO is empty
#define RFM70_REG_FIFO_STATUS          0x17

//! DYNPD: dynamic payload flags
//
//! Bits (0 = LSB):
//! - 7:6 : reserved, only 00 allowed
//! - 5   : high = dynamic payload enabled on data pipe 5
//! - 4   : high = dynamic payload enabled on data pipe 4
//! - 3   : high = dynamic payload enabled on data pipe 3
//! - 2   : high = dynamic payload enabled on data pipe 2
//! - 1   : high = dynamic payload enabled on data pipe 1
//! - 0   : high = dynamic payload enabled on data pipe 0
//! Setting dynamic payload on pipe x requires EN_DPL 
//! (in the special features flags register) and ENAA_Px.
#define RFM70_REG_DYNPD                0x1C

//! FEATURE: special fature flags
//
//! Bits (0 = LSB):
//! - 7:3 : reserved, only 00000 allowed
//! - 2   : (EN_DPL) high = enable dynamic payload length
//! - 1   : (EN_ACK_PAY) high = enable payload with ack
//! - 0   : (EN_DYN_ACK) high = enables W_TX_PAYLOAD_NOACK command 
#define RFM70_REG_FEATURE              0x1D

//! @}



#include "pins.h"	


   
//! interface to an RFM70 module
class rfm70 {

private:
   pins::output_pin &sclk;      
   pins::output_pin &mosi;      
   pins::input_pin  &miso;      
   pins::output_pin &csn;      
   pins::output_pin &ce;     
    
    void(*wait_ms)(unsigned int);
    void(*wait_us)(unsigned int);
   
   unsigned char SPI_RW( unsigned char value );    

public:
   //! constructor: create and RFM70 object
   //
   //! \ingroup highlevel
   //! This constructor creates an RFM70 object from the 
   //! pins that connect to the RFM70 and a delay function.
   //! This constructor calls init().
   rfm70( 
      pins::output_pin &sclk,
      pins::output_pin &mosi,
      pins::input_pin  &miso,
      pins::output_pin &csn,
      pins::output_pin &ce
      
       ,void(*wait_ms)(unsigned int)
       ,void(*wait_us)(unsigned int)
      
   ):      
      sclk( sclk ),
      mosi( mosi ),
      miso( miso ),
      csn(  csn ),
      ce(   ce )
       ,wait_ms( wait_ms )
       ,wait_us( wait_us )
   {}     
   
private:   
   void bank( unsigned char b );
   void init_bank1();
   
public:   
   

//! initialize the library and the rfm70 module
//
//! \ingroup lowlevel
//! This method must be called before any other rfm70 
//! method is called. It can also be called later (maybe even
//! periodically) to re-initialize the interafce and the module.
//!
//! The rfm70 is initialized to
//! - 2 byte CRC
//! - power up
//! - receive mode
//! - auto-acknowledge on all pipes enabled
//! - pipes 0 and 1 are enabled, others disabled
//! - use 5 byte addresses
//! - auto retransmission delay 4000 ms, retry 15 times
//! - use channel 10
//! - air data rate 1Mbit power 5dbm, LNA gain high
//! - use some fixed address
void init( void );

//! read a single-byte command or register
//
//! \ingroup lowlevel
//! This method reads and returns the a single-byte (8 bit) 
//! RFM70 command or register reg. 
unsigned char register_read( unsigned char reg );

//! read a multi-byte command or register
//
//! \ingroup lowlevel
//! This method reads length bytes (8 bit each) from the RFM70 
//! command or register reg into the buffer buf. 
void buffer_read(
   unsigned char reg,
   unsigned char *buf,
   unsigned char length
);

//! write a single-byte command or register
//
//! \ingroup lowlevel
//! This method writes the single-byte (8 bit) val to
//! the  RFM70 command or register reg. 
void register_write( unsigned char reg, unsigned char val );

//! write a multi-byte command or register
//
//! \ingroup lowlevel
//! This method writes length bytes (8 bit each) from 
//! the buffer buf into the RFM70 
//! command or register reg. 
void buffer_write(
   char reg,
   const unsigned char *buf,
   unsigned char length
);

//***************************************************************************//
//
// high-level interface
//
//***************************************************************************//

//! report whether the rfm70 module is present
//
//! \ingroup highlevel
//! This method tests whether the rfm70 module is present.
//! It does so by reading the status register, and verifying that
//! an activate 0x53 command toggles the RBANK bit
//! in the status register.
bool is_present( void );

//! switch the rfm70 to transmit mode
//
//! \ingroup highlevel
//! This method flushes the transmit queue,
//! and switches the rfm70 to transmit mode.
void mode_transmit( void );

//! switch the rfm70 to receive mode
//
//! \ingroup highlevel
//! This method flushes the receive queue,
//! and switches the rfm70 to transmit mode.
void mode_receive( void );

//! switch the rfm70 to standby mode
//
//! \ingroup highlevel
//! This method puts the rfm70 in standby I mode,
//! which reduces the power consumption 
//! (50 uA max).
//! mode_powerdown() reduces the power consumption
//! even further, but requires a longer (but unspecified?)
//! time to return to active mode.
void mode_standby( void );

//! switch the rfm70 to power down mode
//
//! \ingroup highlevel
//! This method puts the rfm70 in power down mode,
//! which reduces the power consumption to a minimum
//! ( 3 uA max). 
void mode_powerdown( void );

//! set the rfm70 lna gain to low
//
//! \ingroup highlevel
//! This sets the LNA gain of the receiver to the low
//! level (-20 dB compared to the 'high' level).
void lna_low( void );

//! set the rfm70 lna gain to high
//
//! \ingroup highlevel
//! This sets the LNA gain of the receiver to the so-called
//! 'high' level. (I would have called it the 'normal' level.)
void lna_high( void );

//! set the rfm70 channel frequency
//
//! \ingroup highlevel
//! This method sets the frequency (channel) used by the rfm70 for 
//! receiving and transmitting to ( 2400 + ch ) MHz.
//! The highest bit of val is ignored, so the frequency range is
//! 2.4 .. 2.517 GHz. 
//! Not all of these frequencies might be free to use in your jurisdiction.
void channel( unsigned char ch );

//! set the rfm70 air data rate (baudrate)
//
//! \ingroup highlevel
//! This method sets the air data rate used by the rfm70 for 
//! receiving and transmitting. 
//! Allowed values are 1 and 2 (Mbits).
//! A value of 0 will have the same effect as a avlaue of 1.
//! A value > 2 will have the same effect as a value of 2.
//! Note that this is the bitrate the rfm70 uses in the 
//! packages that it sends. Due to various overhead factors
//! the data rate that a user of the module can achieve is much lower,
//! probably by a factor of 4.
void air_data_rate( unsigned char rate );

//! set the rfm70 CRC length
//
//! \ingroup highlevel
//! This method sets the length of the CRC used by the rfm70 in bytes.
//! Valid values are 0 (no CRC), 1 and 2.
//! A value > 2 has the same effect as the value 2.
//! Disabling the CRC disables the auto-acknowledge function.
//! Enabling the CRC does not automatically enable the
//! auto-acknowledge function.
void crc_length( unsigned char len );

//! set the rfm70 address length
//
//! \ingroup highlevel
//! This method sets the length (in bytes) of the addresses used by 
//! the rfm70. Valid values are 3, 4 and 5.
//! A value < 3 has the same effect as the value 3.
//! A value > 5 has the same effect as the value 5.
//! This setting is common for all data pipes.
void address_length( unsigned char len );

//! set the rfm70 transmit power
//
//! \ingroup highlevel
//! This method sets the rfm70 transmitter output power level.
//! - level == 0 => -10 dBm
//! - level == 1 =>  -5 dBm
//! - level == 2 =>   0 dBm
//! - level == 3 =>  +5 dBm
//! 
//! A level > 3 has the same effect as level == 3.
void power( unsigned char level ); 

//! set the retransmission delay and number of attempts
//
//! \ingroup highlevel
//! This method sets the delay d between retransmission attempts,
//! and the maximum number of attempts n.
//! The range of both arguments is 0..15. 
//! A value > 15 has the same effect as the value 15.
//!
//! The retransmission delay d is specified in steps of 250 us
//! with a minimum of 250 us:
//! - d == 0 => 250 us
//! - d == 1 => 500 us
//! - ...
//! - d == 15 => 4 ms
//!
//! The number of retransmissions n can range from
//! 0 (effectively disabling auto-retransmission) to 15.
void retransmit_delay_attempts( unsigned char d, unsigned char n );

//! read rfm70 retransmit count
//
//! \ingroup highlevel
//! This method reads and reports the number of retransmissions 
//! for the last packet that was sent. The number of retransmissions
//! is reset to zero when a new packet is sent.
unsigned char retransmit_count( void );

//! read rfm70 lost packets count
//
//! \ingroup highlevel
//! This method reads and reports the number of lost packets.
//! The range of this count is 0..15, at 15 it will not
//! increment when a next packet is lost.
//! The lost packets count is reset implicitly when the channel
//! is written (by calling channel() ) or 
//! explicitly by calling lost_packets_reset().
unsigned char lost_packets_count( void );

//! reset rfm70 lost packets count
//
//! \ingroup highlevel
//! This method resets the number of lost packets by reading and
//! re-writing the RF channel (RFM70_REG_RF_CH register).
void lost_packets_reset( void );

//! enables or disables the autoack on a pipe
//
//! \ingroup highlevel
//! This method enables or disables the auto acknowledgement
//! function on the specified pipe.
//!
//! pipe must be in the range 0..5. 
//! A pipe > 5 has the same effect as using pipe 5. 
void pipe_autoack( unsigned char pipe, bool enabled );

//! enables or disables a pipe
//
//! \ingroup highlevel
//! This method enables or disables the specified pipe.
//!
//! pipe must be in the range 0..5. 
//! A pipe > 5 has the same effect as using pipe 5. 
void pipe_enable( unsigned char d, bool enabled );

//! set the rfm70 pipe 0 address
//
//! \ingroup highlevel
//! This method sets the (up to 5 byte) receive address of pipe 0.
//! When the address length is set to less than 5 the excess
//! bytes are ignored, but address must still be a 5 byte array.
//!
//! Pipes 0 and 1 have a full (up to 5) byte address.
//! The other pipes (2..5) copy all but the least significant
//! (= first) byte from the pipe 1 address.
void receive_address_p0( const unsigned char address[ 5 ] );

//! set the rfm70 pipe 1 address
//
//! \ingroup highlevel
//! This method sets the (up to 5 byte) receive address of pipe 1.
//! When the address length is set to less than 5 the excess
//! bytes are ignored, but address must still be a 5 byte array.
//!
//! Pipes 0 and 1 have a full (up to 5) byte address.
//! The other pipes (2..5) copy all but the least significant
//! (= first) byte from the pipe 1 address.
void receive_address_p1( const unsigned char address[ 5 ] );

//! set the rfm70 pipe n (2..5) address
//
//! \ingroup highlevel
//! This method sets the least significant byte of 
//! the receive address of the pipe n.
//! The other bytes of the address are copied from pipe 1.
void receive_address_pn( unsigned char channel, unsigned char address );

//! set the payload size for pipe n
//
//! \ingroup highlevel
//! This method sets the size (= number of bytes, can be 1..32) 
//! for packets to be received  on pipe n. 
//! This setting must be the same as on the tranmitter.
//! A size of 0 will enable dynamic length packets.
//! A size > 32 will have the same effect as a size of 32.
void channel_payload_size( unsigned char n, unsigned char size );

//! set the rfm70 transmit address
//
//! \ingroup highlevel
//! This method sets the (up to 5 byte) address used
//! for all transmissions.
void transmit_address( const unsigned char *address );   

//! report whether the transmit fifo is full
//
//! \ingroup highlevel
//! This method reads and reports whether the transmit fifo is full.
bool transmit_fifo_full( void );

//! report whether the receive fifo is empty
//
//! \ingroup highlevel
//! This method reads and reports whether the receive fifo is full.
bool receive_fifo_empty( void );

//! transmit a message
//
//! \ingroup highlevel
//! This method transmits the specified message.
//!
//! The specified length must be less than or equal to 
//! RFM70_MAX_PACKET_LEN (32).
//! Specifying a larger length has the same effect as
//! specifying a length of RFM70_MAX_PACKET_LEN.
//!
//! The retransmission setting (set by
//! the method rfm70_retransmit_delay_attempts) determines
//! whether the message is transmitted on the air just once
//! or repeatedly until an acknowledge is received. 
//! 
//! The RFM70 must be in transmit mode.
void transmit_message(
   const unsigned char *buf,
   unsigned char length
);

//! transmit a message once
//
//! \ingroup highlevel
//! This method transmits the specified message once.
//!
//! The specified length must be less than or equal to 
//! RFM70_MAX_PACKET_LEN (32).
//! Specifying a larger length has the same effect as
//! specifying a length of RFM70_MAX_PACKET_LEN.
//!
//! The message is transmitted on the air once, irrespective
//! of the retransmission setting. 
//! 
//! The RFM70 must be in transmit mode.
void transmit_message_once(
   const unsigned char *buf,
   unsigned char length
);

//! get pipe number of the next message in receive FIFO
//
//! \ingroup highlevel
//! This method returns the number of the
//! pipe (0..5) on which the head message in the receive FIFO
//! was received.
//!
//! When the receive fifo is empty 0x07 is returned.
unsigned char receive_next_pipe( void );

//! get payload length of the next message in receive FIFO
//
//! \ingroup highlevel
//! This method returns length of the head message 
//! in the receive FIFO in bytes (1..32).
//! 
//! The RFM70 datasheet does not specify the value that is 
//! returned when the receive FIFO is empty
unsigned char receive_next_length( void );

//! (try to) receive a message
//
//! \ingroup highlevel
//! This method tries to receive a message.
//!
//! This method tries to retrieve a received message
//! from the receive FIFO. When no message is available
//! this method returns false. When a message is avaible
//! it is retrieved. The data is put in the buffer buf,
//! the length is written to length, and the method 
//! returns true.
//!
//! The size of the buffer buf must be at least
//! RFM70_MAX_PACKET_LEN (32).
//! 
//! The RFM70 must be in transmit mode.
bool receive(
   unsigned char & pipe,
   unsigned char *buf,
   unsigned char & length
);


}; // class frm70


#endif
