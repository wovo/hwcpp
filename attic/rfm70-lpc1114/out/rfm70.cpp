ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 1


   1              		.cpu cortex-m0
   2              		.eabi_attribute 20, 1	@ Tag_ABI_FP_denormal
   3              		.eabi_attribute 21, 1	@ Tag_ABI_FP_exceptions
   4              		.eabi_attribute 23, 3	@ Tag_ABI_FP_number_model
   5              		.eabi_attribute 24, 1	@ Tag_ABI_align8_needed
   6              		.eabi_attribute 25, 1	@ Tag_ABI_align8_preserved
   7              		.eabi_attribute 26, 1	@ Tag_ABI_enum_size
   8              		.eabi_attribute 30, 4	@ Tag_ABI_optimization_goals
   9              		.eabi_attribute 34, 0	@ Tag_CPU_unaligned_access
  10              		.eabi_attribute 18, 4	@ Tag_ABI_PCS_wchar_t
  11              		.file	"rfm70.cpp"
  12              	@ GNU C++98 (GCC) version 7.2.0 (arm-eabi)
  13              	@	compiled by GNU C version 5.4.0, GMP version 4.3.2, MPFR version 3.1.6, MPC version 1.0.3, isl ve
  14              	@ GGC heuristics: --param ggc-min-expand=100 --param ggc-min-heapsize=131072
  15              	@ options passed:  -I . -imultilib thumb/cortex_m0
  16              	@ -iprefix c:\sysgcc\arm-eabi\bin\../lib/gcc/arm-eabi/7.2.0/
  17              	@ -MD out/rfm70.d -MF out/rfm70.d -MP -MQ out/rfm70.o -D__USES_INITFINI__
  18              	@ rfm70.cpp -mcpu=cortex-m0 -mthumb -mfloat-abi=soft
  19              	@ -auxbase-strip out/rfm70.o -g -ggdb3 -Os -Wall -Wextra -std=gnu++98
  20              	@ -ffunction-sections -fdata-sections -fno-rtti -fno-exceptions
  21              	@ -fverbose-asm
  22              	@ options enabled:  -faggressive-loop-optimizations -falign-jumps
  23              	@ -falign-labels -falign-loops -fauto-inc-dec -fbranch-count-reg
  24              	@ -fcaller-saves -fchkp-check-incomplete-type -fchkp-check-read
  25              	@ -fchkp-check-write -fchkp-instrument-calls -fchkp-narrow-bounds
  26              	@ -fchkp-optimize -fchkp-store-bounds -fchkp-use-static-bounds
  27              	@ -fchkp-use-static-const-bounds -fchkp-use-wrappers -fcode-hoisting
  28              	@ -fcombine-stack-adjustments -fcommon -fcompare-elim -fcprop-registers
  29              	@ -fcrossjumping -fcse-follow-jumps -fdata-sections -fdefer-pop
  30              	@ -fdelete-null-pointer-checks -fdevirtualize -fdevirtualize-speculatively
  31              	@ -fdwarf2-cfi-asm -fearly-inlining -feliminate-unused-debug-types
  32              	@ -fexpensive-optimizations -fforward-propagate -ffp-int-builtin-inexact
  33              	@ -ffunction-cse -ffunction-sections -fgcse -fgcse-lm -fgnu-runtime
  34              	@ -fgnu-unique -fguess-branch-probability -fhoist-adjacent-loads -fident
  35              	@ -fif-conversion -fif-conversion2 -findirect-inlining -finline
  36              	@ -finline-atomics -finline-functions -finline-functions-called-once
  37              	@ -finline-small-functions -fipa-bit-cp -fipa-cp -fipa-icf
  38              	@ -fipa-icf-functions -fipa-icf-variables -fipa-profile -fipa-pure-const
  39              	@ -fipa-reference -fipa-sra -fipa-vrp -fira-hoist-pressure
  40              	@ -fira-share-save-slots -fira-share-spill-slots
  41              	@ -fisolate-erroneous-paths-dereference -fivopts -fkeep-static-consts
  42              	@ -fleading-underscore -flifetime-dse -flra-remat -flto-odr-type-merging
  43              	@ -fmath-errno -fmerge-constants -fmerge-debug-strings
  44              	@ -fmove-loop-invariants -fomit-frame-pointer -foptimize-sibling-calls
  45              	@ -fpartial-inlining -fpeephole -fpeephole2 -fplt -fprefetch-loop-arrays
  46              	@ -freg-struct-return -freorder-blocks -freorder-functions
  47              	@ -frerun-cse-after-loop -fsched-critical-path-heuristic
  48              	@ -fsched-dep-count-heuristic -fsched-group-heuristic -fsched-interblock
  49              	@ -fsched-last-insn-heuristic -fsched-pressure -fsched-rank-heuristic
  50              	@ -fsched-spec -fsched-spec-insn-heuristic -fsched-stalled-insns-dep
  51              	@ -fschedule-insns2 -fsection-anchors -fsemantic-interposition
  52              	@ -fshow-column -fshrink-wrap -fshrink-wrap-separate -fsigned-zeros
  53              	@ -fsplit-ivs-in-unroller -fsplit-wide-types -fssa-backprop -fssa-phiopt
  54              	@ -fstdarg-opt -fstore-merging -fstrict-aliasing -fstrict-overflow
  55              	@ -fstrict-volatile-bitfields -fsync-libcalls -fthread-jumps
  56              	@ -ftoplevel-reorder -ftrapping-math -ftree-bit-ccp -ftree-builtin-call-dce
  57              	@ -ftree-ccp -ftree-ch -ftree-coalesce-vars -ftree-copy-prop -ftree-cselim
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 2


  58              	@ -ftree-dce -ftree-dominator-opts -ftree-dse -ftree-forwprop -ftree-fre
  59              	@ -ftree-loop-if-convert -ftree-loop-im -ftree-loop-ivcanon
  60              	@ -ftree-loop-optimize -ftree-parallelize-loops= -ftree-phiprop -ftree-pre
  61              	@ -ftree-pta -ftree-reassoc -ftree-scev-cprop -ftree-sink -ftree-slsr
  62              	@ -ftree-sra -ftree-switch-conversion -ftree-tail-merge -ftree-ter
  63              	@ -ftree-vrp -funit-at-a-time -fvar-tracking -fvar-tracking-assignments
  64              	@ -fverbose-asm -fzero-initialized-in-bss -mlittle-endian
  65              	@ -mpic-data-is-text-relative -msched-prolog -mthumb
  66              	@ -mvectorize-with-neon-quad
  67              	
  68              		.text
  69              	.Ltext0:
  70              		.cfi_sections	.debug_frame
  71              		.section	.text._ZN5rfm706SPI_RWEh,"ax",%progbits
  72              		.align	1
  73              		.global	_ZN5rfm706SPI_RWEh
  74              		.syntax unified
  75              		.code	16
  76              		.thumb_func
  77              		.fpu softvfp
  78              		.type	_ZN5rfm706SPI_RWEh, %function
  79              	_ZN5rfm706SPI_RWEh:
  80              	.LFB8:
  81              		.file 1 "rfm70.cpp"
   1:rfm70.cpp     **** 
   2:rfm70.cpp     **** 
   3:rfm70.cpp     **** 
   4:rfm70.cpp     **** 
   5:rfm70.cpp     **** 
   6:rfm70.cpp     **** 
   7:rfm70.cpp     **** 
   8:rfm70.cpp     **** 
   9:rfm70.cpp     **** 
  10:rfm70.cpp     **** 
  11:rfm70.cpp     **** 
  12:rfm70.cpp     **** 
  13:rfm70.cpp     **** //**************************************************************************
  14:rfm70.cpp     **** //
  15:rfm70.cpp     **** //! \mainpage rfm70
  16:rfm70.cpp     **** //!
  17:rfm70.cpp     **** //! C++ interface library for the HopeRF RFM70 4.3 GHz transceiver module
  18:rfm70.cpp     **** //!
  19:rfm70.cpp     **** //! \image html RFM70-D.jpg
  20:rfm70.cpp     **** //! \image rtf RFM70-D.jpg
  21:rfm70.cpp     **** //!
  22:rfm70.cpp     **** //! \author 
  23:rfm70.cpp     **** //!    Wouter van Ooijen (wouter@voti.nl)
  24:rfm70.cpp     **** //!
  25:rfm70.cpp     **** //! \version
  26:rfm70.cpp     **** //!    V1.02 (2011-12-31)
  27:rfm70.cpp     **** //!
  28:rfm70.cpp     **** //! \par Introduction
  29:rfm70.cpp     **** //!
  30:rfm70.cpp     **** //! The RFM70 module from HopeRF (www.hoperf.com) is a small and cheap
  31:rfm70.cpp     **** //! transceiver (transmitter + receiver) module for the license-free
  32:rfm70.cpp     **** //! 4.3 MHz frequency band. This module is intended for short range
  33:rfm70.cpp     **** //! communication, for instance within a room. 
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 3


  34:rfm70.cpp     **** //! Typical applications are wires mouses and keybords, 
  35:rfm70.cpp     **** //! and garage door openers.
  36:rfm70.cpp     **** //! In open air a distance of 
  37:rfm70.cpp     **** //! 50 .. 100 m is possible, but this is strictly line-of-sight: even 
  38:rfm70.cpp     **** //! the leaves of a single tree can obstruct the signal.
  39:rfm70.cpp     **** //!
  40:rfm70.cpp     **** //! The two main files in this libary, rfm70.h and rfm70.cpp,
  41:rfm70.cpp     **** //! are target independent. 
  42:rfm70.cpp     **** //! The pins.h file provides an abstract IO pin class.
  43:rfm70.cpp     **** //! To construct an RFM70 object the user must supply
  44:rfm70.cpp     **** //! IO pin objects for the pins that connect to the RFM70 module,
  45:rfm70.cpp     **** //! that must be derived from pins::input_output_pin,
  46:rfm70.cpp     **** //! and two delay functions.
  47:rfm70.cpp     **** //!
  48:rfm70.cpp     **** //! \par Files
  49:rfm70.cpp     **** //! - rfm70.h
  50:rfm70.cpp     **** //! - rfm70.cpp
  51:rfm70.cpp     **** //! - pins.h
  52:rfm70.cpp     **** //!
  53:rfm70.cpp     **** //!
  54:rfm70.cpp     **** //! \par License
  55:rfm70.cpp     **** //!
  56:rfm70.cpp     **** //! The files in this library are licensed under the zlib license, 
  57:rfm70.cpp     **** //! which rougly says: when you redistribute the *source* you must 
  58:rfm70.cpp     **** //! keep the copyright notice intact. Otherwise you can use these files
  59:rfm70.cpp     **** //! any way you like, including getting rich from selling applications.
  60:rfm70.cpp     **** //! But don't complain to me when it does not work (OTOH, contructive
  61:rfm70.cpp     **** //! comments are appreciated!).
  62:rfm70.cpp     **** //!
  63:rfm70.cpp     **** //! \par ToDo: bugs, notes, pitfalls, todo, known problems, etc
  64:rfm70.cpp     **** //!
  65:rfm70.cpp     **** //! - pictures for power
  66:rfm70.cpp     **** //! - document (other) files
  67:rfm70.cpp     **** //! - PIC18F examples, Cortex C examples, Arduino
  68:rfm70.cpp     **** //! - write 5 bytes when address <5 bytes?
  69:rfm70.cpp     **** //! - check and improve rtf documentation
  70:rfm70.cpp     **** //! - check CE cycling requirements
  71:rfm70.cpp     **** //! - descriptions for the other files
  72:rfm70.cpp     **** //! - add write ack payload for pipe N
  73:rfm70.cpp     **** //! - add 'report package has been sent'
  74:rfm70.cpp     **** //! - application: thermometer
  75:rfm70.cpp     **** //! - application: test signal strength
  76:rfm70.cpp     **** //! - application: asynch serial through the air
  77:rfm70.cpp     **** //!
  78:rfm70.cpp     **** //
  79:rfm70.cpp     **** //***************************************************************************//
  80:rfm70.cpp     **** 
  81:rfm70.cpp     **** //***************************************************************************//
  82:rfm70.cpp     **** //
  83:rfm70.cpp     **** // COPYRIGHT NOTICE (zlib license)
  84:rfm70.cpp     **** //
  85:rfm70.cpp     **** // Loosely based on the example application provided by HopeRF
  86:rfm70.cpp     **** //
  87:rfm70.cpp     **** // (c) Wouter van Ooijen - wouter@voti.nl
  88:rfm70.cpp     **** //
  89:rfm70.cpp     **** //  This software is provided 'as-is', without any express or implied
  90:rfm70.cpp     **** //  warranty.  In no event will the authors be held liable for any damages
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 4


  91:rfm70.cpp     **** //  arising from the use of this software.
  92:rfm70.cpp     **** //
  93:rfm70.cpp     **** //  Permission is granted to anyone to use this software for any purpose,
  94:rfm70.cpp     **** //  including commercial applications, and to alter it and redistribute it
  95:rfm70.cpp     **** //  freely, subject to the following restrictions:
  96:rfm70.cpp     **** //
  97:rfm70.cpp     **** //  1. The origin of this software must not be misrepresented; you must not
  98:rfm70.cpp     **** //     claim that you wrote the original software. If you use this software
  99:rfm70.cpp     **** //     in a product, an acknowledgment in the product documentation would be
 100:rfm70.cpp     **** //     appreciated but is not required.
 101:rfm70.cpp     **** //  2. Altered source versions must be plainly marked as such, and must not be
 102:rfm70.cpp     **** //     misrepresented as being the original software.
 103:rfm70.cpp     **** //  3. This notice may not be removed or altered from any source distribution.
 104:rfm70.cpp     **** //
 105:rfm70.cpp     **** //***************************************************************************//
 106:rfm70.cpp     **** 
 107:rfm70.cpp     **** //***************************************************************************//
 108:rfm70.cpp     **** //
 109:rfm70.cpp     **** //! \page revision information
 110:rfm70.cpp     **** //!
 111:rfm70.cpp     **** //! \par ToDo: bugs, notes, pitfalls, todo, known problems, etc
 112:rfm70.cpp     **** //!
 113:rfm70.cpp     **** //! - pictures for power
 114:rfm70.cpp     **** //! - document (other) files
 115:rfm70.cpp     **** //! - PIC18F examples, Cortex C examples, Arduino
 116:rfm70.cpp     **** //! - write 5 bytes when address <5 bytes?
 117:rfm70.cpp     **** //! - check and improve rtf documentation
 118:rfm70.cpp     **** //! - check CE cycling requirements
 119:rfm70.cpp     **** //! - descriptions for the other files
 120:rfm70.cpp     **** //! - add write ack payload for pipe N
 121:rfm70.cpp     **** //! - add 'report package has been sent'
 122:rfm70.cpp     **** //! - application: thermometer
 123:rfm70.cpp     **** //! - application: test signal strength
 124:rfm70.cpp     **** //! - application: asynch serial through the air
 125:rfm70.cpp     **** //! 
 126:rfm70.cpp     **** //! \par release notes
 127:rfm70.cpp     **** //!
 128:rfm70.cpp     **** //! V1.02 (2011-12-31)
 129:rfm70.cpp     **** //! Arduino added
 130:rfm70.cpp     **** //!
 131:rfm70.cpp     **** //! V1.01 (2011-12-26)
 132:rfm70.cpp     **** //! some minor documentation and webpage changes, no code changes
 133:rfm70.cpp     **** //!
 134:rfm70.cpp     **** //! V1.00 (2011-12-24)
 135:rfm70.cpp     **** //! first release
 136:rfm70.cpp     **** //! 
 137:rfm70.cpp     **** //
 138:rfm70.cpp     **** //***************************************************************************//
 139:rfm70.cpp     **** 
 140:rfm70.cpp     **** //***************************************************************************//
 141:rfm70.cpp     **** //
 142:rfm70.cpp     **** //! \page overview RFM70 overview
 143:rfm70.cpp     **** //!
 144:rfm70.cpp     **** //! \image html smd-pins.jpg
 145:rfm70.cpp     **** //! \image rtf smd-pins.jpg
 146:rfm70.cpp     **** //!
 147:rfm70.cpp     **** //! The RFM70 is a small module (PCB with some components, ~ 18 x 26 mm) 
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 5


 148:rfm70.cpp     **** //! that implements a transciever for the license-free 4.3 GHz band. 
 149:rfm70.cpp     **** //! The module contains a small antenna on the PCB, 
 150:rfm70.cpp     **** //! there is no provision for an external antenna.
 151:rfm70.cpp     **** //! Two versions of the module exist, one with 
 152:rfm70.cpp     **** //! pins and one without. The pins are on a 1.28 mm grid, which is twice the
 153:rfm70.cpp     **** //! density of a standard DIL package. The module requires 1.9 .. 3.6 Volt
 154:rfm70.cpp     **** //! for its power, 3.3 Volt seems to be the preferred operating voltage. 
 155:rfm70.cpp     **** //! It is NOT designed to run at 5.0 Volt. 
 156:rfm70.cpp     **** //! According to the datasheet that maximum 'typical' operating current 
 157:rfm70.cpp     **** //! is 23 mA.
 158:rfm70.cpp     **** //!
 159:rfm70.cpp     **** //! Note that 'licence free' means that certain well-described use of this 
 160:rfm70.cpp     **** //! frequency band is allowd without a license. 
 161:rfm70.cpp     **** //! The RFM70 is designed to be compatible with the requirements for such 
 162:rfm70.cpp     **** //! use, but it is the responsibility of anyone who sells a product that
 163:rfm70.cpp     **** //! to make sure that it complies with such rules.
 164:rfm70.cpp     **** //!
 165:rfm70.cpp     **** //! The main component of an RFM70 module is the RF70 chip (hidden beneath
 166:rfm70.cpp     **** //! the black blob). The manufacturer provides separate datasheets for both 
 167:rfm70.cpp     **** //! the RF70 chip and the RFM70 module. 
 168:rfm70.cpp     **** //! The two datasheets seem to be the same, except for the physical 
 169:rfm70.cpp     **** //! and pinout information which is of course different for the chip
 170:rfm70.cpp     **** //! and the module, so you can probably ignore the RF70 chip datasheet.
 171:rfm70.cpp     **** //! The RFM70 module datasheet can currently be found at 
 172:rfm70.cpp     **** //! http://www.hoperf.com/upload/rf/RFM70.pdf
 173:rfm70.cpp     **** //!
 174:rfm70.cpp     **** //! The RFM70 module is intended for short-range communication,
 175:rfm70.cpp     **** //! like wireless computer peripherals (mouse, keyboard, tablet, ect.)
 176:rfm70.cpp     **** //! keyfobs (car opener, garage door opener, motorized fence opener - 
 177:rfm70.cpp     **** //! some cryptografy will probably be required for such applications)
 178:rfm70.cpp     **** //! and toys. In a line of sight situation a maximum range of 50 .. 100 m
 179:rfm70.cpp     **** //! is possible. Indoors communication within a single room will generally
 180:rfm70.cpp     **** //! be OK (unless you have a very large room..) but passing even a single
 181:rfm70.cpp     **** //! wall can be a problem.
 182:rfm70.cpp     **** //!
 183:rfm70.cpp     **** //! An RFM70 module must be used with a microcontroller that initializes
 184:rfm70.cpp     **** //! and operates the module. By itself the module can not be used as a
 185:rfm70.cpp     **** //! 'wireless wire', although such a mode could be implemented in the
 186:rfm70.cpp     **** //! microcontroller. The interface between the RFM70 and the microcontroller
 187:rfm70.cpp     **** //! is a standard 4-PIN SPI interface (MISO, MOSI, CLCK, CSN) plus a CE
 188:rfm70.cpp     **** //! (Chip Enable) pin. The module also provides an IRQ pin that could be used
 189:rfm70.cpp     **** //! to speed up the detection of certain events within the module. 
 190:rfm70.cpp     **** //! The library does not used this pin. 
 191:rfm70.cpp     **** //! The SPI input pins are 5V-tolerant, so provided that
 192:rfm70.cpp     **** //! the high level as output by the module is accpetable to the 
 193:rfm70.cpp     **** //! microcontroller no glue circuitry is needed to interface to a 
 194:rfm70.cpp     **** //! microcontroller that runs from 5 Volt. (Except for course for a 
 195:rfm70.cpp     **** //! regulator that provides the 3.3 Volt to power the RFM70.)
 196:rfm70.cpp     **** //!
 197:rfm70.cpp     **** //! An RFM70 module operates in the 4.3 GHz band. 
 198:rfm70.cpp     **** //! Within that band a frequency can be selected in 1 MHz steps. 
 199:rfm70.cpp     **** //! RFM70 modules can communicate only when they use the same frequency.
 200:rfm70.cpp     **** //!
 201:rfm70.cpp     **** //! The RFM70 module operates on a packet basis. 
 202:rfm70.cpp     **** //! Each packet has a destination address.
 203:rfm70.cpp     **** //! By default the address is a 5 byte value, but a 4 or 3 byte
 204:rfm70.cpp     **** //! address can also be configured. 
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 6


 205:rfm70.cpp     **** //! For succesfull communication the RFM70 modules that are involved must
 206:rfm70.cpp     **** //! be configures for the same address length, and the receiving
 207:rfm70.cpp     **** //! module(s) must have one of their so-called pipes configured
 208:rfm70.cpp     **** //! for the address used by the transmitter.
 209:rfm70.cpp     **** //!
 210:rfm70.cpp     **** //! An RFM70 contains 6 so-called data pipes that can receive packages.
 211:rfm70.cpp     **** //! Each pipe has an address, and will receive only messages
 212:rfm70.cpp     **** //! for that address.
 213:rfm70.cpp     **** //! Pipes 0 and 1 have a full (up to 5 bytes) address. 
 214:rfm70.cpp     **** //! For pipes 2 .. 6 only the least significant byte can be
 215:rfm70.cpp     **** //! configured, the other bytes are copied from the address of pipe 1.
 216:rfm70.cpp     **** //! The length of the address (3, 4 or 5 bytes) is the same for 
 217:rfm70.cpp     **** //! transmission and for all 6 receive data pipes.
 218:rfm70.cpp     **** //!
 219:rfm70.cpp     **** //! A packet contains 1 .. 32 user data bytes. 
 220:rfm70.cpp     **** //! The packet length can either be fixed or flexible.
 221:rfm70.cpp     **** //! When the packet length is fixed each receiving pipe is configured
 222:rfm70.cpp     **** //! with its packet length. The length of a package that is sent is 
 223:rfm70.cpp     **** //! determined by the number of bytes written into the transmit buffer,
 224:rfm70.cpp     **** //! and it it must match the length configured for the receiving pipe.
 225:rfm70.cpp     **** //! When the packet length is flexible the length of a package is again
 226:rfm70.cpp     **** //! determined by the number of bytes written into the transmit, but in
 227:rfm70.cpp     **** //! this case this number is transmitted in the message, and on the
 228:rfm70.cpp     **** //! receiving side it can be retrieved by the R_RX_PL_WID command
 229:rfm70.cpp     **** //! (rfm70_channel_payload_size method).
 230:rfm70.cpp     **** //!
 231:rfm70.cpp     **** //! The simple way to send a package is without acknowledgement.
 232:rfm70.cpp     **** //! The RFM70 just transmits the package and considers it done.
 233:rfm70.cpp     **** //! It can be received by zero, one, or multiple RFM70 modules, but
 234:rfm70.cpp     **** //! the sending modules does not care and has no way of knowing.
 235:rfm70.cpp     **** //! For this simple mode of communication the involved RFM70's
 236:rfm70.cpp     **** //! - must be configured for the same channel frequency
 237:rfm70.cpp     **** //! - must use the same address length
 238:rfm70.cpp     **** //! - the receiving RFM70 must have a receive pipe configured
 239:rfm70.cpp     **** //!   for the same address as used by the transmitting RFM70
 240:rfm70.cpp     **** //!
 241:rfm70.cpp     **** //! Alternatively a package can be sent with acknowledgement and
 242:rfm70.cpp     **** //! (if necessary) retransmission. 
 243:rfm70.cpp     **** //! In this case the RFM70 will send the message, and consider it
 244:rfm70.cpp     **** //! done only when it receives an acknowledge for it.
 245:rfm70.cpp     **** //! If it does not receive an acknowledge within a fixed amount of
 246:rfm70.cpp     **** //! time it will re-transmit the package, up to a set maximum.
 247:rfm70.cpp     **** //! A receiving RFM70 can automatically send an acknowledgement
 248:rfm70.cpp     **** //! for a successfully received package. 
 249:rfm70.cpp     **** //! For this to work the same requirements as for simple unacknowledged
 250:rfm70.cpp     **** //! communicatiobn apply, and additionally on both RFM70's
 251:rfm70.cpp     **** //! - CRC must be enabled (length 1 or 2) on both modules
 252:rfm70.cpp     **** //! - receive data pipe 0 must be configured for the same address 
 253:rfm70.cpp     **** //!   as the module uses for transmitting
 254:rfm70.cpp     **** //!
 255:rfm70.cpp     **** //! The automatic retransmission provided by the RFM70 uses a fixed
 256:rfm70.cpp     **** //! retransmission timout, which is probly fine for correcting an 
 257:rfm70.cpp     **** //! occasional packet loss due to interference from other 4.3 GHz sources,
 258:rfm70.cpp     **** //! but it is potentially inefective when the interference is caused by
 259:rfm70.cpp     **** //! another RFM70 that uses the same timout! In such cases the 
 260:rfm70.cpp     **** //! microcontroller should implemnet its own retransmission scheme,
 261:rfm70.cpp     **** //! with for instance a random timeout, and maybe an exponential 
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 7


 262:rfm70.cpp     **** //! backoff.
 263:rfm70.cpp     **** //! 
 264:rfm70.cpp     **** //
 265:rfm70.cpp     **** //***************************************************************************//
 266:rfm70.cpp     **** 
 267:rfm70.cpp     **** //***************************************************************************//
 268:rfm70.cpp     **** //
 269:rfm70.cpp     **** //! \page hardware RFM70 hardware interface
 270:rfm70.cpp     **** //!
 271:rfm70.cpp     **** //! \image html smd-pins.jpg
 272:rfm70.cpp     **** //! \image rtf smd-pins.jpg
 273:rfm70.cpp     **** //!
 274:rfm70.cpp     **** //! The RFM70 uses a standard 4-wire SPI interface.
 275:rfm70.cpp     **** //! It also provides an active low interrupt pin, which could be used to
 276:rfm70.cpp     **** //! avoid polling. This library does not use the interrupt pin.
 277:rfm70.cpp     **** //! The RFM70 also has a CE (chip enable) input, which must be de-asserted
 278:rfm70.cpp     **** //! to put the chip in standby or power-down mode, and must be cycled
 279:rfm70.cpp     **** //! to switch between receive and transmit mode. Hence the interface
 280:rfm70.cpp     **** //! uses 5 data pins, plus ground and power (3.3V):
 281:rfm70.cpp     **** //! - GND : common ground
 282:rfm70.cpp     **** //! - VDD : 3.3V power
 283:rfm70.cpp     **** //! - CE : Chip Enable, active high, microcontoller output
 284:rfm70.cpp     **** //! - CSN : Chip Select Negative, active low, microcontoller output
 285:rfm70.cpp     **** //! - SCK : Serial ClocK, microcontoller output
 286:rfm70.cpp     **** //! - MOSI : Master Out Slave In, microcontoller output
 287:rfm70.cpp     **** //! - MISO : Master In Slave Out, microcontoller input
 288:rfm70.cpp     **** //! - IRQ : Interrupt ReQuest, not used
 289:rfm70.cpp     **** //!
 290:rfm70.cpp     **** //! When the microcontroller operates at 3.3 Volt (or lower, 
 291:rfm70.cpp     **** //! the RFM70 datasheet claims operation down to 1.9 Volt) all lines, 
 292:rfm70.cpp     **** //! including power,  
 293:rfm70.cpp     **** //! can be connected directly to the microcontroller. 
 294:rfm70.cpp     **** //! If you are experimenting and want to protect yourself against
 295:rfm70.cpp     **** //! problems when you accidentally configure the pin connected to MISO
 296:rfm70.cpp     **** //! as output, you could insert a suitable series resistor in this line.
 297:rfm70.cpp     **** //! 2k2 seems to be a good choice.
 298:rfm70.cpp     **** //!
 299:rfm70.cpp     **** //! When the microcontroller operates at 5 Volt there are three possible issues:
 300:rfm70.cpp     **** //! - power : the RFM70 operates at 1.9 .. 3.3 Volt, so the 5 Volt must somehow
 301:rfm70.cpp     **** //!   be reduced to a voltage within this range
 302:rfm70.cpp     **** //! - data from the microcontroller to the RFM70 : no problem here, the
 303:rfm70.cpp     **** //!   RFM70 inputs are 5 Volt tolerant. 
 304:rfm70.cpp     **** //!   As explained, a series resistor in the MISO line might be a good idea.
 305:rfm70.cpp     **** //! - data from RFM70 to the microcontroller : in most cases this will not 
 306:rfm70.cpp     **** //!   be a problem, but you might want to check the minimum voltage required
 307:rfm70.cpp     **** //!   by your microcontroller to reliably detect a logic 1. For instance a 
 308:rfm70.cpp     **** //!   PIC requires ~ 2.0 Volt on a TTL level input, but 0.8 * VDD on a
 309:rfm70.cpp     **** //!   Schmitt Trigger input! And you must consider this at the maximum VDD 
 310:rfm70.cpp     **** //!   for the microcontroller, which can be 5.5 Volt when delivered by 
 311:rfm70.cpp     **** //!   an 7805 or an USB port.
 312:rfm70.cpp     **** //!
 313:rfm70.cpp     **** //! There are various ways to create a 3.3 Volt supply for the RFM70 from a
 314:rfm70.cpp     **** //! 5 Volt supply. I prefer to use a low-drop low-quiecent
 315:rfm70.cpp     **** //! current 3.3 Volt linear regulator. Read the datasheet of the regulator
 316:rfm70.cpp     **** //! carefully: some put very stringent requirements on the value and impedance
 317:rfm70.cpp     **** //! of the decoupling capacitors. My favourite is the Microchip MCP1702, 
 318:rfm70.cpp     **** //! which has a low quiecent current (5 uA maximum), and is stable with 
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 8


 319:rfm70.cpp     **** //! only 1 uF input an output capacitors of any type 
 320:rfm70.cpp     **** //! (ceramic, tantalum, aluminium electrolytic).
 321:rfm70.cpp     **** //!
 322:rfm70.cpp     **** //! TBW: picture
 323:rfm70.cpp     **** //!
 324:rfm70.cpp     **** //! A crude way to create the power for the RFM70 is to use a 
 325:rfm70.cpp     **** //! resistor divider. I would do this only in an experimental
 326:rfm70.cpp     **** //! setup on my desk, never in a final product.
 327:rfm70.cpp     **** //! The source impedance of the divider causes a drop in the 
 328:rfm70.cpp     **** //! voltage when the RFM70 uses more current.
 329:rfm70.cpp     **** //! This drop can be reduced by lowering the resistor values, but at
 330:rfm70.cpp     **** //! the cost of a higher current through the resistors. The RFM70
 331:rfm70.cpp     **** //! can operate down to 1.9 Volt, but at that level the microcontroller 
 332:rfm70.cpp     **** //! might not reliably recognise a logic 1 from the RFM70. Another issue
 333:rfm70.cpp     **** //! is the dissipation in the resistors. The circuit below is a compromise.
 334:rfm70.cpp     **** //! It uses three equal-valued resistors because I don't stock many
 335:rfm70.cpp     **** //! different resistor values.
 336:rfm70.cpp     **** //! The idle current through the resistors is 83 mA at 5.5 Volt, in
 337:rfm70.cpp     **** //! this situation the RFM70 gets 3.7 Volt. That is slightly high, but
 338:rfm70.cpp     **** //! probably not a big problem.
 339:rfm70.cpp     **** //! When the RFM70 draws its maximum current of 23 mA when the 
 340:rfm70.cpp     **** //! microcontroller's power is at 4.5 Volt the RFM70 still gets 2.6 Volt. 
 341:rfm70.cpp     **** //! You might want to double-check that the microcontroller accepts ~ 2 Volt
 342:rfm70.cpp     **** //! as a logic 1. 
 343:rfm70.cpp     **** //!
 344:rfm70.cpp     **** //! TBW: picture
 345:rfm70.cpp     **** //! 
 346:rfm70.cpp     **** //
 347:rfm70.cpp     **** //***************************************************************************//
 348:rfm70.cpp     **** 
 349:rfm70.cpp     **** 
 350:rfm70.cpp     **** #include "rfm70.h"
 351:rfm70.cpp     **** 
 352:rfm70.cpp     **** 
 353:rfm70.cpp     **** // RFM70 SPI read and write commands
 354:rfm70.cpp     **** #define RFM70_CMD_READ_REG            0x00
 355:rfm70.cpp     **** #define RFM70_CMD_WRITE_REG           0x20
 356:rfm70.cpp     **** 
 357:rfm70.cpp     **** //interrupt status
 358:rfm70.cpp     **** #define STATUS_RX_DR    0x40
 359:rfm70.cpp     **** #define STATUS_TX_DS    0x20
 360:rfm70.cpp     **** #define STATUS_MAX_RT   0x10
 361:rfm70.cpp     **** 
 362:rfm70.cpp     **** #define STATUS_TX_FULL  0x01
 363:rfm70.cpp     **** 
 364:rfm70.cpp     **** //FIFO_STATUS
 365:rfm70.cpp     **** #define FIFO_STATUS_TX_REUSE  0x40
 366:rfm70.cpp     **** #define FIFO_STATUS_TX_FULL   0x20
 367:rfm70.cpp     **** #define FIFO_STATUS_TX_EMPTY  0x10
 368:rfm70.cpp     **** 
 369:rfm70.cpp     **** #define FIFO_STATUS_RX_FULL   0x02
 370:rfm70.cpp     **** #define FIFO_STATUS_RX_EMPTY  0x01
 371:rfm70.cpp     **** 
 372:rfm70.cpp     **** 
 373:rfm70.cpp     **** using namespace pins;
 374:rfm70.cpp     **** 
 375:rfm70.cpp     **** #define RFM70_CE( x )    ce.set( (x) )
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 9


 376:rfm70.cpp     **** #define RFM70_CSN( x )   csn.set( (x) )
 377:rfm70.cpp     **** #define RFM70_SCK( x )   sclk.set( (x) ) 
 378:rfm70.cpp     **** #define RFM70_MOSI( x )  mosi.set( (x) )
 379:rfm70.cpp     **** #define RFM70_MISO       ( miso.get() )
 380:rfm70.cpp     **** 
 381:rfm70.cpp     **** 
 382:rfm70.cpp     **** 
 383:rfm70.cpp     **** // Bank0 register initialization values
 384:rfm70.cpp     **** #define BANK0_ENTRIES 10
 385:rfm70.cpp     **** const unsigned char Bank0_Reg[ BANK0_ENTRIES ][ 2 ]={
 386:rfm70.cpp     ****    {  0, 0x0F }, // receive, enabled, CRC 2, enable interupts
 387:rfm70.cpp     ****    {  1, 0x3F }, // auto-ack on all pipes enabled
 388:rfm70.cpp     ****    {  2, 0x03 }, // Enable pipes 0 and 1
 389:rfm70.cpp     ****    {  3, 0x03 }, // 5 bytes addresses
 390:rfm70.cpp     ****    {  4, 0xff }, // auto retransmission delay 4000 ms, 15 times
 391:rfm70.cpp     ****    {  5, 0x0A }, // channel 10
 392:rfm70.cpp     ****    {  6 ,0x37 }, // data rate 1Mbit, power 5dbm, LNA gain high
 393:rfm70.cpp     ****    {  7, 0x07 }, // why write this at all?? but seems required to work...
 394:rfm70.cpp     ****    {  8, 0x00 }, // clear Tx packet counters
 395:rfm70.cpp     ****    { 23, 0x00 }, // fifo status
 396:rfm70.cpp     **** };
 397:rfm70.cpp     **** 
 398:rfm70.cpp     ****    // default receive address data pipe 0:
 399:rfm70.cpp     ****    // just a bunch of bytes, nothing magical
 400:rfm70.cpp     **** const unsigned char RX0_Address[]={ 0x34, 0x43, 0x10, 0x10, 0x01 };
 401:rfm70.cpp     **** 
 402:rfm70.cpp     **** unsigned char rfm70::SPI_RW( unsigned char value ){
  82              		.loc 1 402 0
  83              		.cfi_startproc
  84              		@ args = 0, pretend = 0, frame = 0
  85              		@ frame_needed = 0, uses_anonymous_args = 0
  86              	.LVL0:
  87 0000 F8B5     		push	{r3, r4, r5, r6, r7, lr}	@
  88              		.cfi_def_cfa_offset 24
  89              		.cfi_offset 3, -24
  90              		.cfi_offset 4, -20
  91              		.cfi_offset 5, -16
  92              		.cfi_offset 6, -12
  93              		.cfi_offset 7, -8
  94              		.cfi_offset 14, -4
  95              	@ rfm70.cpp:402: unsigned char rfm70::SPI_RW( unsigned char value ){
  96              		.loc 1 402 0
  97 0002 0500     		movs	r5, r0	@ this, this
  98 0004 0C00     		movs	r4, r1	@ <retval>, value
  99 0006 0826     		movs	r6, #8	@ ivtmp_3,
 100              	@ rfm70.cpp:405:       (*wait_us)( 1 );
 403:rfm70.cpp     ****    unsigned char i;
 404:rfm70.cpp     ****    for( i =0 ; i < 8; i++ ){
 405:rfm70.cpp     ****       (*wait_us)( 1 );
 101              		.loc 1 405 0
 102 0008 0127     		movs	r7, #1	@ tmp162,
 103              	.LVL1:
 104              	.L2:
 105              	@ rfm70.cpp:405:       (*wait_us)( 1 );
 106              		.loc 1 405 0 is_stmt 0 discriminator 2
 107 000a 3800     		movs	r0, r7	@, tmp162
 108 000c AB69     		ldr	r3, [r5, #24]	@ tmp163, this_26(D)->wait_us
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 10


 109 000e 9847     		blx	r3	@ tmp163
 110              	.LVL2:
 111              	@ rfm70.cpp:406:       RFM70_MOSI( value & 0x80  );      
 406:rfm70.cpp     ****       RFM70_MOSI( value & 0x80  );      
 112              		.loc 1 406 0 is_stmt 1 discriminator 2
 113 0010 6868     		ldr	r0, [r5, #4]	@ _2, this_26(D)->mosi
 114 0012 E109     		lsrs	r1, r4, #7	@ tmp143, <retval>,
 115 0014 0368     		ldr	r3, [r0]	@ _2->_vptr.output_pin, _2->_vptr.output_pin
 116              	@ rfm70.cpp:407:       value = (value << 1);    // shift next bit into MSB..
 407:rfm70.cpp     ****       value = (value << 1);    // shift next bit into MSB..
 117              		.loc 1 407 0 discriminator 2
 118 0016 6400     		lsls	r4, r4, #1	@ tmp147, <retval>,
 119              	.LVL3:
 120              	@ rfm70.cpp:406:       RFM70_MOSI( value & 0x80  );      
 406:rfm70.cpp     ****       RFM70_MOSI( value & 0x80  );      
 121              		.loc 1 406 0 discriminator 2
 122 0018 1B68     		ldr	r3, [r3]	@ *_4, *_4
 123 001a 9847     		blx	r3	@ *_4
 124              	.LVL4:
 125              	@ rfm70.cpp:409:       (*wait_us)( 1 );
 408:rfm70.cpp     ****       
 409:rfm70.cpp     ****       (*wait_us)( 1 );
 126              		.loc 1 409 0 discriminator 2
 127 001c 3800     		movs	r0, r7	@, tmp162
 128 001e AB69     		ldr	r3, [r5, #24]	@ tmp165, this_26(D)->wait_us
 129 0020 9847     		blx	r3	@ tmp165
 130              	.LVL5:
 131              	@ rfm70.cpp:410:       RFM70_SCK( 1 );          
 410:rfm70.cpp     ****       RFM70_SCK( 1 );          
 132              		.loc 1 410 0 discriminator 2
 133 0022 2868     		ldr	r0, [r5]	@ _9, this_26(D)->sclk
 134 0024 3900     		movs	r1, r7	@, tmp162
 135 0026 0368     		ldr	r3, [r0]	@ _9->_vptr.output_pin, _9->_vptr.output_pin
 136              	@ rfm70.cpp:407:       value = (value << 1);    // shift next bit into MSB..
 407:rfm70.cpp     ****       value = (value << 1);    // shift next bit into MSB..
 137              		.loc 1 407 0 discriminator 2
 138 0028 E4B2     		uxtb	r4, r4	@ value, tmp147
 139              	.LVL6:
 140              	@ rfm70.cpp:410:       RFM70_SCK( 1 );          
 141              		.loc 1 410 0 discriminator 2
 142 002a 1B68     		ldr	r3, [r3]	@ *_10, *_10
 143 002c 9847     		blx	r3	@ *_10
 144              	.LVL7:
 145              	@ rfm70.cpp:411:       value |= RFM70_MISO;     // capture current MISO bit
 411:rfm70.cpp     ****       value |= RFM70_MISO;     // capture current MISO bit
 146              		.loc 1 411 0 discriminator 2
 147 002e A868     		ldr	r0, [r5, #8]	@ _12, this_26(D)->miso
 148 0030 013E     		subs	r6, r6, #1	@ tmp160,
 149              	.LVL8:
 150 0032 0368     		ldr	r3, [r0]	@ _12->_vptr.input_pin, _12->_vptr.input_pin
 151 0034 F6B2     		uxtb	r6, r6	@ ivtmp_3, tmp160
 152 0036 1B68     		ldr	r3, [r3]	@ *_13, *_13
 153 0038 9847     		blx	r3	@ *_13
 154              	.LVL9:
 155              	@ rfm70.cpp:413:       (*wait_us)( 1 );
 412:rfm70.cpp     ****       
 413:rfm70.cpp     ****       (*wait_us)( 1 );
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 11


 156              		.loc 1 413 0 discriminator 2
 157 003a AB69     		ldr	r3, [r5, #24]	@ tmp167, this_26(D)->wait_us
 158              	@ rfm70.cpp:411:       value |= RFM70_MISO;     // capture current MISO bit
 411:rfm70.cpp     ****       value |= RFM70_MISO;     // capture current MISO bit
 159              		.loc 1 411 0 discriminator 2
 160 003c 0443     		orrs	r4, r0	@ tmp155, tmp153
 161              	.LVL10:
 162              	@ rfm70.cpp:413:       (*wait_us)( 1 );
 163              		.loc 1 413 0 discriminator 2
 164 003e 3800     		movs	r0, r7	@, tmp162
 165 0040 9847     		blx	r3	@ tmp167
 166              	.LVL11:
 167              	@ rfm70.cpp:414:       RFM70_SCK( 0 );
 414:rfm70.cpp     ****       RFM70_SCK( 0 );
 168              		.loc 1 414 0 discriminator 2
 169 0042 2868     		ldr	r0, [r5]	@ _17, this_26(D)->sclk
 170 0044 0021     		movs	r1, #0	@,
 171 0046 0368     		ldr	r3, [r0]	@ _17->_vptr.output_pin, _17->_vptr.output_pin
 172              	@ rfm70.cpp:411:       value |= RFM70_MISO;     // capture current MISO bit
 411:rfm70.cpp     ****       value |= RFM70_MISO;     // capture current MISO bit
 173              		.loc 1 411 0 discriminator 2
 174 0048 E4B2     		uxtb	r4, r4	@ <retval>, tmp155
 175              	.LVL12:
 176              	@ rfm70.cpp:414:       RFM70_SCK( 0 );
 177              		.loc 1 414 0 discriminator 2
 178 004a 1B68     		ldr	r3, [r3]	@ *_18, *_18
 179 004c 9847     		blx	r3	@ *_18
 180              	.LVL13:
 181              	@ rfm70.cpp:415:       (*wait_us)( 1 );
 415:rfm70.cpp     ****       (*wait_us)( 1 );
 182              		.loc 1 415 0 discriminator 2
 183 004e 3800     		movs	r0, r7	@, tmp162
 184 0050 AB69     		ldr	r3, [r5, #24]	@ tmp169, this_26(D)->wait_us
 185 0052 9847     		blx	r3	@ tmp169
 186              	.LVL14:
 187              	@ rfm70.cpp:404:    for( i =0 ; i < 8; i++ ){
 404:rfm70.cpp     ****       (*wait_us)( 1 );
 188              		.loc 1 404 0 discriminator 2
 189 0054 002E     		cmp	r6, #0	@ ivtmp_3,
 190 0056 D8D1     		bne	.L2	@,
 191              	@ rfm70.cpp:418: }
 416:rfm70.cpp     ****   }
 417:rfm70.cpp     ****   return value;
 418:rfm70.cpp     **** }
 192              		.loc 1 418 0
 193 0058 2000     		movs	r0, r4	@, <retval>
 194              		@ sp needed	@
 195              	.LVL15:
 196              	.LVL16:
 197 005a F8BD     		pop	{r3, r4, r5, r6, r7, pc}
 198              		.cfi_endproc
 199              	.LFE8:
 200              		.size	_ZN5rfm706SPI_RWEh, .-_ZN5rfm706SPI_RWEh
 201              		.section	.text._ZN5rfm7014register_writeEhh,"ax",%progbits
 202              		.align	1
 203              		.global	_ZN5rfm7014register_writeEhh
 204              		.syntax unified
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 12


 205              		.code	16
 206              		.thumb_func
 207              		.fpu softvfp
 208              		.type	_ZN5rfm7014register_writeEhh, %function
 209              	_ZN5rfm7014register_writeEhh:
 210              	.LFB9:
 419:rfm70.cpp     **** 
 420:rfm70.cpp     **** void rfm70::register_write( unsigned char reg, unsigned char value ){
 211              		.loc 1 420 0
 212              		.cfi_startproc
 213              		@ args = 0, pretend = 0, frame = 0
 214              		@ frame_needed = 0, uses_anonymous_args = 0
 215              	.LVL17:
 216 0000 70B5     		push	{r4, r5, r6, lr}	@
 217              		.cfi_def_cfa_offset 16
 218              		.cfi_offset 4, -16
 219              		.cfi_offset 5, -12
 220              		.cfi_offset 6, -8
 221              		.cfi_offset 14, -4
 222              	@ rfm70.cpp:420: void rfm70::register_write( unsigned char reg, unsigned char value ){
 223              		.loc 1 420 0
 224 0002 0400     		movs	r4, r0	@ this, this
 225 0004 0D00     		movs	r5, r1	@ reg, reg
 226 0006 1600     		movs	r6, r2	@ value, value
 227              	@ rfm70.cpp:421:    if( reg < RFM70_CMD_WRITE_REG ){
 421:rfm70.cpp     ****    if( reg < RFM70_CMD_WRITE_REG ){
 228              		.loc 1 421 0
 229 0008 1F29     		cmp	r1, #31	@ reg,
 230 000a 01D8     		bhi	.L5	@,
 231              	@ rfm70.cpp:422:       reg |= RFM70_CMD_WRITE_REG;      
 422:rfm70.cpp     ****       reg |= RFM70_CMD_WRITE_REG;      
 232              		.loc 1 422 0
 233 000c 2023     		movs	r3, #32	@ tmp120,
 234 000e 1D43     		orrs	r5, r3	@ reg, tmp120
 235              	.LVL18:
 236              	.L5:
 237              	@ rfm70.cpp:424:    RFM70_CSN( 0 );                // CSN low, init SPI transaction
 423:rfm70.cpp     ****    }  
 424:rfm70.cpp     ****    RFM70_CSN( 0 );                // CSN low, init SPI transaction
 238              		.loc 1 424 0
 239 0010 E068     		ldr	r0, [r4, #12]	@ _1, this_11(D)->csn
 240              	.LVL19:
 241 0012 0021     		movs	r1, #0	@,
 242 0014 0368     		ldr	r3, [r0]	@ _1->_vptr.output_pin, _1->_vptr.output_pin
 243              	@ rfm70.cpp:428: }
 425:rfm70.cpp     ****    (void)rfm70::SPI_RW( reg );    // select register
 426:rfm70.cpp     ****    (void)rfm70::SPI_RW( value );  // ..and write value to it..
 427:rfm70.cpp     ****    RFM70_CSN( 1 );                // CSN high again
 428:rfm70.cpp     **** }
 244              		.loc 1 428 0
 245              		@ sp needed	@
 246              	@ rfm70.cpp:424:    RFM70_CSN( 0 );                // CSN low, init SPI transaction
 424:rfm70.cpp     ****    (void)rfm70::SPI_RW( reg );    // select register
 247              		.loc 1 424 0
 248 0016 1B68     		ldr	r3, [r3]	@ *_2, *_2
 249 0018 9847     		blx	r3	@ *_2
 250              	.LVL20:
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 13


 251              	@ rfm70.cpp:425:    (void)rfm70::SPI_RW( reg );    // select register
 425:rfm70.cpp     ****    (void)rfm70::SPI_RW( reg );    // select register
 252              		.loc 1 425 0
 253 001a 2900     		movs	r1, r5	@, reg
 254 001c 2000     		movs	r0, r4	@, this
 255 001e FFF7FEFF 		bl	_ZN5rfm706SPI_RWEh	@
 256              	.LVL21:
 257              	@ rfm70.cpp:426:    (void)rfm70::SPI_RW( value );  // ..and write value to it..
 426:rfm70.cpp     ****    RFM70_CSN( 1 );                // CSN high again
 258              		.loc 1 426 0
 259 0022 3100     		movs	r1, r6	@, value
 260 0024 2000     		movs	r0, r4	@, this
 261 0026 FFF7FEFF 		bl	_ZN5rfm706SPI_RWEh	@
 262              	.LVL22:
 263              	@ rfm70.cpp:427:    RFM70_CSN( 1 );                // CSN high again
 427:rfm70.cpp     **** }
 264              		.loc 1 427 0
 265 002a E068     		ldr	r0, [r4, #12]	@ _4, this_11(D)->csn
 266 002c 0121     		movs	r1, #1	@,
 267 002e 0368     		ldr	r3, [r0]	@ _4->_vptr.output_pin, _4->_vptr.output_pin
 268 0030 1B68     		ldr	r3, [r3]	@ *_5, *_5
 269 0032 9847     		blx	r3	@ *_5
 270              	.LVL23:
 271              	.LVL24:
 272              	.LVL25:
 273              	@ rfm70.cpp:428: }
 274              		.loc 1 428 0
 275 0034 70BD     		pop	{r4, r5, r6, pc}
 276              		.cfi_endproc
 277              	.LFE9:
 278              		.size	_ZN5rfm7014register_writeEhh, .-_ZN5rfm7014register_writeEhh
 279              		.section	.text._ZN5rfm7013register_readEh,"ax",%progbits
 280              		.align	1
 281              		.global	_ZN5rfm7013register_readEh
 282              		.syntax unified
 283              		.code	16
 284              		.thumb_func
 285              		.fpu softvfp
 286              		.type	_ZN5rfm7013register_readEh, %function
 287              	_ZN5rfm7013register_readEh:
 288              	.LFB10:
 429:rfm70.cpp     **** 
 430:rfm70.cpp     **** unsigned char rfm70::register_read( unsigned char reg ){
 289              		.loc 1 430 0
 290              		.cfi_startproc
 291              		@ args = 0, pretend = 0, frame = 0
 292              		@ frame_needed = 0, uses_anonymous_args = 0
 293              	.LVL26:
 294 0000 70B5     		push	{r4, r5, r6, lr}	@
 295              		.cfi_def_cfa_offset 16
 296              		.cfi_offset 4, -16
 297              		.cfi_offset 5, -12
 298              		.cfi_offset 6, -8
 299              		.cfi_offset 14, -4
 300              	@ rfm70.cpp:430: unsigned char rfm70::register_read( unsigned char reg ){
 301              		.loc 1 430 0
 302 0002 0400     		movs	r4, r0	@ this, this
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 14


 303 0004 0D00     		movs	r5, r1	@ reg, reg
 304              	.LVL27:
 305              	@ rfm70.cpp:435:    RFM70_CSN( 0 );               // CSN low, initialize SPI communication...
 431:rfm70.cpp     ****    unsigned char value;
 432:rfm70.cpp     ****    if( reg < RFM70_CMD_WRITE_REG ){
 433:rfm70.cpp     ****       reg |= RFM70_CMD_READ_REG;       
 434:rfm70.cpp     ****    }  
 435:rfm70.cpp     ****    RFM70_CSN( 0 );               // CSN low, initialize SPI communication...
 306              		.loc 1 435 0
 307 0006 C068     		ldr	r0, [r0, #12]	@ _1, this_9(D)->csn
 308              	.LVL28:
 309 0008 0021     		movs	r1, #0	@,
 310 000a 0368     		ldr	r3, [r0]	@ _1->_vptr.output_pin, _1->_vptr.output_pin
 311              	@ rfm70.cpp:440: }
 436:rfm70.cpp     ****    (void)rfm70::SPI_RW( reg );   // Select register to read from..
 437:rfm70.cpp     ****    value = rfm70::SPI_RW( 0 );   // ..then read register value
 438:rfm70.cpp     ****    RFM70_CSN( 1 );               // CSN high, terminate SPI communication
 439:rfm70.cpp     ****    return value;                 // return register value
 440:rfm70.cpp     **** }
 312              		.loc 1 440 0
 313              		@ sp needed	@
 314              	@ rfm70.cpp:435:    RFM70_CSN( 0 );               // CSN low, initialize SPI communication...
 435:rfm70.cpp     ****    (void)rfm70::SPI_RW( reg );   // Select register to read from..
 315              		.loc 1 435 0
 316 000c 1B68     		ldr	r3, [r3]	@ *_2, *_2
 317 000e 9847     		blx	r3	@ *_2
 318              	.LVL29:
 319              	@ rfm70.cpp:436:    (void)rfm70::SPI_RW( reg );   // Select register to read from..
 436:rfm70.cpp     ****    (void)rfm70::SPI_RW( reg );   // Select register to read from..
 320              		.loc 1 436 0
 321 0010 2900     		movs	r1, r5	@, reg
 322 0012 2000     		movs	r0, r4	@, this
 323 0014 FFF7FEFF 		bl	_ZN5rfm706SPI_RWEh	@
 324              	.LVL30:
 325              	@ rfm70.cpp:437:    value = rfm70::SPI_RW( 0 );   // ..then read register value
 437:rfm70.cpp     ****    RFM70_CSN( 1 );               // CSN high, terminate SPI communication
 326              		.loc 1 437 0
 327 0018 0021     		movs	r1, #0	@,
 328 001a 2000     		movs	r0, r4	@, this
 329 001c FFF7FEFF 		bl	_ZN5rfm706SPI_RWEh	@
 330              	.LVL31:
 331 0020 0500     		movs	r5, r0	@ tmp121,
 332              	.LVL32:
 333              	@ rfm70.cpp:438:    RFM70_CSN( 1 );               // CSN high, terminate SPI communication
 438:rfm70.cpp     ****    return value;                 // return register value
 334              		.loc 1 438 0
 335 0022 E068     		ldr	r0, [r4, #12]	@ _4, this_9(D)->csn
 336 0024 0121     		movs	r1, #1	@,
 337 0026 0368     		ldr	r3, [r0]	@ _4->_vptr.output_pin, _4->_vptr.output_pin
 338 0028 1B68     		ldr	r3, [r3]	@ *_5, *_5
 339 002a 9847     		blx	r3	@ *_5
 340              	.LVL33:
 341              	@ rfm70.cpp:440: }
 342              		.loc 1 440 0
 343 002c 2800     		movs	r0, r5	@, tmp121
 344              	.LVL34:
 345              	.LVL35:
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 15


 346 002e 70BD     		pop	{r4, r5, r6, pc}
 347              		.cfi_endproc
 348              	.LFE10:
 349              		.size	_ZN5rfm7013register_readEh, .-_ZN5rfm7013register_readEh
 350              		.section	.text._ZN5rfm7011buffer_readEhPhh,"ax",%progbits
 351              		.align	1
 352              		.global	_ZN5rfm7011buffer_readEhPhh
 353              		.syntax unified
 354              		.code	16
 355              		.thumb_func
 356              		.fpu softvfp
 357              		.type	_ZN5rfm7011buffer_readEhPhh, %function
 358              	_ZN5rfm7011buffer_readEhPhh:
 359              	.LFB11:
 441:rfm70.cpp     **** 
 442:rfm70.cpp     **** void rfm70::buffer_read( 
 443:rfm70.cpp     ****    unsigned char reg, 
 444:rfm70.cpp     ****    unsigned char *pBuf, 
 445:rfm70.cpp     ****    unsigned char length 
 446:rfm70.cpp     **** ){
 360              		.loc 1 446 0
 361              		.cfi_startproc
 362              		@ args = 0, pretend = 0, frame = 0
 363              		@ frame_needed = 0, uses_anonymous_args = 0
 364              	.LVL36:
 365 0000 F8B5     		push	{r3, r4, r5, r6, r7, lr}	@
 366              		.cfi_def_cfa_offset 24
 367              		.cfi_offset 3, -24
 368              		.cfi_offset 4, -20
 369              		.cfi_offset 5, -16
 370              		.cfi_offset 6, -12
 371              		.cfi_offset 7, -8
 372              		.cfi_offset 14, -4
 373              	@ rfm70.cpp:446: ){
 374              		.loc 1 446 0
 375 0002 0500     		movs	r5, r0	@ this, this
 376 0004 0F00     		movs	r7, r1	@ reg, reg
 377              	.LVL37:
 378              	@ rfm70.cpp:451:    RFM70_CSN( 0 );                   // Set CSN 0
 447:rfm70.cpp     ****    unsigned char i;
 448:rfm70.cpp     ****    if( reg < RFM70_CMD_WRITE_REG ){
 449:rfm70.cpp     ****       reg |= RFM70_CMD_READ_REG;       
 450:rfm70.cpp     ****    }  
 451:rfm70.cpp     ****    RFM70_CSN( 0 );                   // Set CSN 0
 379              		.loc 1 451 0
 380 0006 C068     		ldr	r0, [r0, #12]	@ _1, this_13(D)->csn
 381              	.LVL38:
 382              	@ rfm70.cpp:446: ){
 446:rfm70.cpp     ****    unsigned char i;
 383              		.loc 1 446 0
 384 0008 1E00     		movs	r6, r3	@ length, length
 385              	@ rfm70.cpp:451:    RFM70_CSN( 0 );                   // Set CSN 0
 386              		.loc 1 451 0
 387 000a 0368     		ldr	r3, [r0]	@ _1->_vptr.output_pin, _1->_vptr.output_pin
 388              	.LVL39:
 389 000c 0021     		movs	r1, #0	@,
 390 000e 1B68     		ldr	r3, [r3]	@ *_2, *_2
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 16


 391              	@ rfm70.cpp:446: ){
 446:rfm70.cpp     ****    unsigned char i;
 392              		.loc 1 446 0
 393 0010 1400     		movs	r4, r2	@ pBuf, pBuf
 394              	@ rfm70.cpp:451:    RFM70_CSN( 0 );                   // Set CSN 0
 395              		.loc 1 451 0
 396 0012 9847     		blx	r3	@ *_2
 397              	.LVL40:
 398              	@ rfm70.cpp:452:    (void)rfm70::SPI_RW( reg );       // Select register to write
 452:rfm70.cpp     ****    (void)rfm70::SPI_RW( reg );       // Select register to write
 399              		.loc 1 452 0
 400 0014 3900     		movs	r1, r7	@, reg
 401 0016 2800     		movs	r0, r5	@, this
 402 0018 FFF7FEFF 		bl	_ZN5rfm706SPI_RWEh	@
 403              	.LVL41:
 404 001c A619     		adds	r6, r4, r6	@ _28, ivtmp.81, length
 405              	.LVL42:
 406              	.L9:
 407              	@ rfm70.cpp:453:    for( i = 0; i < length; i++ ){    // read all bytes
 453:rfm70.cpp     ****    for( i = 0; i < length; i++ ){    // read all bytes
 408              		.loc 1 453 0 discriminator 3
 409 001e B442     		cmp	r4, r6	@ ivtmp.81, _28
 410 0020 06D0     		beq	.L8	@,
 411              	.LVL43:
 412              	@ rfm70.cpp:454:       *pBuf++ = rfm70::SPI_RW( 0 );  // read one byte from RFM70
 454:rfm70.cpp     ****       *pBuf++ = rfm70::SPI_RW( 0 );  // read one byte from RFM70
 413              		.loc 1 454 0 discriminator 2
 414 0022 0021     		movs	r1, #0	@,
 415 0024 2800     		movs	r0, r5	@, this
 416 0026 FFF7FEFF 		bl	_ZN5rfm706SPI_RWEh	@
 417              	.LVL44:
 418 002a 2070     		strb	r0, [r4]	@ tmp174, MEM[base: _29, offset: 0B]
 419              	.LVL45:
 420 002c 0134     		adds	r4, r4, #1	@ ivtmp.81,
 421              	.LVL46:
 422              	@ rfm70.cpp:453:    for( i = 0; i < length; i++ ){    // read all bytes
 453:rfm70.cpp     ****    for( i = 0; i < length; i++ ){    // read all bytes
 423              		.loc 1 453 0 discriminator 2
 424 002e F6E7     		b	.L9	@
 425              	.LVL47:
 426              	.L8:
 427              	@ rfm70.cpp:456:    RFM70_CSN( 1 );                   // Set CSN high again
 455:rfm70.cpp     ****    }
 456:rfm70.cpp     ****    RFM70_CSN( 1 );                   // Set CSN high again
 428              		.loc 1 456 0
 429 0030 E868     		ldr	r0, [r5, #12]	@ _5, this_13(D)->csn
 430 0032 0121     		movs	r1, #1	@,
 431 0034 0368     		ldr	r3, [r0]	@ _5->_vptr.output_pin, _5->_vptr.output_pin
 432              	@ rfm70.cpp:457: }
 457:rfm70.cpp     **** }
 433              		.loc 1 457 0
 434              		@ sp needed	@
 435              	@ rfm70.cpp:456:    RFM70_CSN( 1 );                   // Set CSN high again
 456:rfm70.cpp     **** }
 436              		.loc 1 456 0
 437 0036 1B68     		ldr	r3, [r3]	@ *_6, *_6
 438 0038 9847     		blx	r3	@ *_6
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 17


 439              	.LVL48:
 440              	.LVL49:
 441              	.LVL50:
 442              	.LVL51:
 443              	@ rfm70.cpp:457: }
 444              		.loc 1 457 0
 445 003a F8BD     		pop	{r3, r4, r5, r6, r7, pc}
 446              		.cfi_endproc
 447              	.LFE11:
 448              		.size	_ZN5rfm7011buffer_readEhPhh, .-_ZN5rfm7011buffer_readEhPhh
 449              		.section	.text._ZN5rfm7012buffer_writeEcPKhh,"ax",%progbits
 450              		.align	1
 451              		.global	_ZN5rfm7012buffer_writeEcPKhh
 452              		.syntax unified
 453              		.code	16
 454              		.thumb_func
 455              		.fpu softvfp
 456              		.type	_ZN5rfm7012buffer_writeEcPKhh, %function
 457              	_ZN5rfm7012buffer_writeEcPKhh:
 458              	.LFB12:
 458:rfm70.cpp     **** 
 459:rfm70.cpp     **** void rfm70::buffer_write( 
 460:rfm70.cpp     ****    char reg, 
 461:rfm70.cpp     ****    const unsigned char *pBuf, 
 462:rfm70.cpp     ****    unsigned char length 
 463:rfm70.cpp     **** ){
 459              		.loc 1 463 0
 460              		.cfi_startproc
 461              		@ args = 0, pretend = 0, frame = 0
 462              		@ frame_needed = 0, uses_anonymous_args = 0
 463              	.LVL52:
 464 0000 F8B5     		push	{r3, r4, r5, r6, r7, lr}	@
 465              		.cfi_def_cfa_offset 24
 466              		.cfi_offset 3, -24
 467              		.cfi_offset 4, -20
 468              		.cfi_offset 5, -16
 469              		.cfi_offset 6, -12
 470              		.cfi_offset 7, -8
 471              		.cfi_offset 14, -4
 472              	@ rfm70.cpp:463: ){
 473              		.loc 1 463 0
 474 0002 0500     		movs	r5, r0	@ this, this
 475 0004 0F00     		movs	r7, r1	@ reg, reg
 476 0006 1400     		movs	r4, r2	@ pBuf, pBuf
 477 0008 1E00     		movs	r6, r3	@ length, length
 478              	@ rfm70.cpp:465:    if( reg < RFM70_CMD_WRITE_REG ){
 464:rfm70.cpp     ****    unsigned char i;
 465:rfm70.cpp     ****    if( reg < RFM70_CMD_WRITE_REG ){
 479              		.loc 1 465 0
 480 000a 1F29     		cmp	r1, #31	@ reg,
 481 000c 01D8     		bhi	.L11	@,
 482              	@ rfm70.cpp:466:       reg |= RFM70_CMD_WRITE_REG;      
 466:rfm70.cpp     ****       reg |= RFM70_CMD_WRITE_REG;      
 483              		.loc 1 466 0
 484 000e 2023     		movs	r3, #32	@ tmp149,
 485              	.LVL53:
 486 0010 1F43     		orrs	r7, r3	@ reg, tmp149
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 18


 487              	.LVL54:
 488              	.L11:
 489              	@ rfm70.cpp:468:    RFM70_CSN( 0 );                     // Set CSN low, init SPI tranaction
 467:rfm70.cpp     ****    }  
 468:rfm70.cpp     ****    RFM70_CSN( 0 );                     // Set CSN low, init SPI tranaction
 490              		.loc 1 468 0
 491 0012 E868     		ldr	r0, [r5, #12]	@ _1, this_15(D)->csn
 492              	.LVL55:
 493 0014 0021     		movs	r1, #0	@,
 494 0016 0368     		ldr	r3, [r0]	@ _1->_vptr.output_pin, _1->_vptr.output_pin
 495 0018 A619     		adds	r6, r4, r6	@ _28, ivtmp.93, length
 496 001a 1B68     		ldr	r3, [r3]	@ *_2, *_2
 497 001c 9847     		blx	r3	@ *_2
 498              	.LVL56:
 499              	@ rfm70.cpp:469:    (void)rfm70::SPI_RW( reg );         // Select register to write tio write
 469:rfm70.cpp     ****    (void)rfm70::SPI_RW( reg );         // Select register to write tio write
 500              		.loc 1 469 0
 501 001e 3900     		movs	r1, r7	@, reg
 502 0020 2800     		movs	r0, r5	@, this
 503 0022 FFF7FEFF 		bl	_ZN5rfm706SPI_RWEh	@
 504              	.LVL57:
 505              	.L13:
 506              	@ rfm70.cpp:470:    for( i = 0; i < length; i++ ){      // write all bytes in buffer(*pBuf)
 470:rfm70.cpp     ****    for( i = 0; i < length; i++ ){      // write all bytes in buffer(*pBuf)
 507              		.loc 1 470 0 discriminator 3
 508 0026 A642     		cmp	r6, r4	@ _28, ivtmp.93
 509 0028 05D0     		beq	.L12	@,
 510              	.LVL58:
 511              	@ rfm70.cpp:471:       (void)rfm70::SPI_RW( *pBuf++ );  // write one byte
 471:rfm70.cpp     ****       (void)rfm70::SPI_RW( *pBuf++ );  // write one byte
 512              		.loc 1 471 0 discriminator 2
 513 002a 2178     		ldrb	r1, [r4]	@ MEM[base: _30, offset: 0B], MEM[base: _30, offset: 0B]
 514 002c 2800     		movs	r0, r5	@, this
 515 002e FFF7FEFF 		bl	_ZN5rfm706SPI_RWEh	@
 516              	.LVL59:
 517 0032 0134     		adds	r4, r4, #1	@ ivtmp.93,
 518              	.LVL60:
 519              	@ rfm70.cpp:470:    for( i = 0; i < length; i++ ){      // write all bytes in buffer(*pBuf)
 470:rfm70.cpp     ****    for( i = 0; i < length; i++ ){      // write all bytes in buffer(*pBuf)
 520              		.loc 1 470 0 discriminator 2
 521 0034 F7E7     		b	.L13	@
 522              	.LVL61:
 523              	.L12:
 524              	@ rfm70.cpp:473:    RFM70_CSN( 1 );                     // Set CSN high again
 472:rfm70.cpp     ****    }   
 473:rfm70.cpp     ****    RFM70_CSN( 1 );                     // Set CSN high again
 525              		.loc 1 473 0
 526 0036 E868     		ldr	r0, [r5, #12]	@ _5, this_15(D)->csn
 527 0038 0121     		movs	r1, #1	@,
 528 003a 0368     		ldr	r3, [r0]	@ _5->_vptr.output_pin, _5->_vptr.output_pin
 529              	@ rfm70.cpp:474: }
 474:rfm70.cpp     **** }
 530              		.loc 1 474 0
 531              		@ sp needed	@
 532              	@ rfm70.cpp:473:    RFM70_CSN( 1 );                     // Set CSN high again
 473:rfm70.cpp     **** }
 533              		.loc 1 473 0
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 19


 534 003c 1B68     		ldr	r3, [r3]	@ *_6, *_6
 535 003e 9847     		blx	r3	@ *_6
 536              	.LVL62:
 537              	.LVL63:
 538              	.LVL64:
 539              	.LVL65:
 540              	@ rfm70.cpp:474: }
 541              		.loc 1 474 0
 542 0040 F8BD     		pop	{r3, r4, r5, r6, r7, pc}
 543              		.cfi_endproc
 544              	.LFE12:
 545              		.size	_ZN5rfm7012buffer_writeEcPKhh, .-_ZN5rfm7012buffer_writeEcPKhh
 546              		.section	.text._ZN5rfm704bankEh,"ax",%progbits
 547              		.align	1
 548              		.global	_ZN5rfm704bankEh
 549              		.syntax unified
 550              		.code	16
 551              		.thumb_func
 552              		.fpu softvfp
 553              		.type	_ZN5rfm704bankEh, %function
 554              	_ZN5rfm704bankEh:
 555              	.LFB13:
 475:rfm70.cpp     **** 
 476:rfm70.cpp     **** void rfm70::bank( unsigned char b ){
 556              		.loc 1 476 0
 557              		.cfi_startproc
 558              		@ args = 0, pretend = 0, frame = 0
 559              		@ frame_needed = 0, uses_anonymous_args = 0
 560              	.LVL66:
 561 0000 70B5     		push	{r4, r5, r6, lr}	@
 562              		.cfi_def_cfa_offset 16
 563              		.cfi_offset 4, -16
 564              		.cfi_offset 5, -12
 565              		.cfi_offset 6, -8
 566              		.cfi_offset 14, -4
 567              	@ rfm70.cpp:476: void rfm70::bank( unsigned char b ){
 568              		.loc 1 476 0
 569 0002 0D00     		movs	r5, r1	@ b, b
 570              	@ rfm70.cpp:477:    unsigned char st = 0x80 & rfm70::register_read( RFM70_REG_STATUS );
 477:rfm70.cpp     ****    unsigned char st = 0x80 & rfm70::register_read( RFM70_REG_STATUS );
 571              		.loc 1 477 0
 572 0004 0721     		movs	r1, #7	@,
 573              	.LVL67:
 574              	@ rfm70.cpp:476: void rfm70::bank( unsigned char b ){
 476:rfm70.cpp     ****    unsigned char st = 0x80 & rfm70::register_read( RFM70_REG_STATUS );
 575              		.loc 1 476 0
 576 0006 0400     		movs	r4, r0	@ this, this
 577              	@ rfm70.cpp:477:    unsigned char st = 0x80 & rfm70::register_read( RFM70_REG_STATUS );
 578              		.loc 1 477 0
 579 0008 FFF7FEFF 		bl	_ZN5rfm7013register_readEh	@
 580              	.LVL68:
 581              	@ rfm70.cpp:478:    if(( st &&( b == 0 )) || (( st == 0 ) && b )){
 478:rfm70.cpp     ****    if(( st &&( b == 0 )) || (( st == 0 ) && b )){
 582              		.loc 1 478 0
 583 000c 0306     		lsls	r3, r0, #24	@ tmp118, tmp114,
 584 000e 02D5     		bpl	.L15	@,
 585              	@ rfm70.cpp:478:    if(( st &&( b == 0 )) || (( st == 0 ) && b )){
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 20


 586              		.loc 1 478 0 is_stmt 0 discriminator 1
 587 0010 002D     		cmp	r5, #0	@ b,
 588 0012 02D0     		beq	.L16	@,
 589              	.LVL69:
 590              	.L14:
 591              	@ rfm70.cpp:481: }
 479:rfm70.cpp     ****       rfm70::register_write( RFM70_CMD_ACTIVATE, 0x53 );
 480:rfm70.cpp     ****    }
 481:rfm70.cpp     **** }
 592              		.loc 1 481 0 is_stmt 1
 593              		@ sp needed	@
 594              	.LVL70:
 595 0014 70BD     		pop	{r4, r5, r6, pc}
 596              	.LVL71:
 597              	.L15:
 598              	@ rfm70.cpp:478:    if(( st &&( b == 0 )) || (( st == 0 ) && b )){
 478:rfm70.cpp     ****    if(( st &&( b == 0 )) || (( st == 0 ) && b )){
 599              		.loc 1 478 0 discriminator 4
 600 0016 002D     		cmp	r5, #0	@ b,
 601 0018 FCD0     		beq	.L14	@,
 602              	.L16:
 603              	.LVL72:
 604              	.LBB4:
 605              	.LBB5:
 606              	@ rfm70.cpp:479:       rfm70::register_write( RFM70_CMD_ACTIVATE, 0x53 );
 479:rfm70.cpp     ****       rfm70::register_write( RFM70_CMD_ACTIVATE, 0x53 );
 607              		.loc 1 479 0
 608 001a 5322     		movs	r2, #83	@,
 609 001c 5021     		movs	r1, #80	@,
 610 001e 2000     		movs	r0, r4	@, this
 611              	.LVL73:
 612 0020 FFF7FEFF 		bl	_ZN5rfm7014register_writeEhh	@
 613              	.LVL74:
 614              	.LBE5:
 615              	.LBE4:
 616              	@ rfm70.cpp:481: }
 617              		.loc 1 481 0
 618 0024 F6E7     		b	.L14	@
 619              		.cfi_endproc
 620              	.LFE13:
 621              		.size	_ZN5rfm704bankEh, .-_ZN5rfm704bankEh
 622              		.section	.text._ZN5rfm7010init_bank1Ev,"ax",%progbits
 623              		.align	1
 624              		.global	_ZN5rfm7010init_bank1Ev
 625              		.syntax unified
 626              		.code	16
 627              		.thumb_func
 628              		.fpu softvfp
 629              		.type	_ZN5rfm7010init_bank1Ev, %function
 630              	_ZN5rfm7010init_bank1Ev:
 631              	.LFB14:
 482:rfm70.cpp     **** 
 483:rfm70.cpp     ****    // magic bank1 register initialization values
 484:rfm70.cpp     **** const unsigned long Bank1_Reg0_13[] = {
 485:rfm70.cpp     ****    0xE2014B40,
 486:rfm70.cpp     ****    0x00004BC0,
 487:rfm70.cpp     ****    0x028CFCD0,
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 21


 488:rfm70.cpp     ****    0x41390099,
 489:rfm70.cpp     ****    0x0B869Ef9, 
 490:rfm70.cpp     ****    0xA67F0624,
 491:rfm70.cpp     ****    0x00000000,
 492:rfm70.cpp     ****    0x00000000,
 493:rfm70.cpp     ****    0x00000000,
 494:rfm70.cpp     ****    0x00000000,
 495:rfm70.cpp     ****    0x00000000,
 496:rfm70.cpp     ****    0x00000000,
 497:rfm70.cpp     ****    0x00127300,
 498:rfm70.cpp     ****    0x36B48000 };   
 499:rfm70.cpp     ****    
 500:rfm70.cpp     ****    // more magic bank1 register initialization values
 501:rfm70.cpp     **** const unsigned char Bank1_Reg14[] = {
 502:rfm70.cpp     ****    0x41, 0x20, 0x08, 0x04, 0x81, 0x20, 0xCF, 0xF7, 0xFE, 0xFF, 0xFF };   
 503:rfm70.cpp     ****    
 504:rfm70.cpp     ****    // initialize bank1 like in the example code.
 505:rfm70.cpp     ****    // don't ask why, just do it
 506:rfm70.cpp     **** void rfm70::init_bank1( void ){
 632              		.loc 1 506 0
 633              		.cfi_startproc
 634              		@ args = 0, pretend = 0, frame = 16
 635              		@ frame_needed = 0, uses_anonymous_args = 0
 636              	.LVL75:
 637 0000 F0B5     		push	{r4, r5, r6, r7, lr}	@
 638              		.cfi_def_cfa_offset 20
 639              		.cfi_offset 4, -20
 640              		.cfi_offset 5, -16
 641              		.cfi_offset 6, -12
 642              		.cfi_offset 7, -8
 643              		.cfi_offset 14, -4
 644              	@ rfm70.cpp:510:    bank( 1 );
 507:rfm70.cpp     ****    unsigned char i, j;
 508:rfm70.cpp     ****    unsigned char WriteArr[ 12 ];
 509:rfm70.cpp     ****         
 510:rfm70.cpp     ****    bank( 1 );
 645              		.loc 1 510 0
 646 0002 0121     		movs	r1, #1	@,
 647              	@ rfm70.cpp:506: void rfm70::init_bank1( void ){
 506:rfm70.cpp     ****    unsigned char i, j;
 648              		.loc 1 506 0
 649 0004 85B0     		sub	sp, sp, #20	@,,
 650              		.cfi_def_cfa_offset 40
 651              	@ rfm70.cpp:506: void rfm70::init_bank1( void ){
 506:rfm70.cpp     ****    unsigned char i, j;
 652              		.loc 1 506 0
 653 0006 0600     		movs	r6, r0	@ this, this
 654              	@ rfm70.cpp:510:    bank( 1 );
 655              		.loc 1 510 0
 656 0008 0025     		movs	r5, #0	@ ivtmp.115,
 657 000a FFF7FEFF 		bl	_ZN5rfm704bankEh	@
 658              	.LVL76:
 659              	.L25:
 660              	@ rfm70.cpp:514:          WriteArr[ j ]=( Bank1_Reg0_13[ i ]>>(8*(j) ) )&0xff;
 511:rfm70.cpp     ****    
 512:rfm70.cpp     ****    for( i = 0; i <= 8; i++ ){ //reverse!
 513:rfm70.cpp     ****       for( j = 0; j < 4; j++ ){
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 22


 514:rfm70.cpp     ****          WriteArr[ j ]=( Bank1_Reg0_13[ i ]>>(8*(j) ) )&0xff;
 661              		.loc 1 514 0
 662 000e 224F     		ldr	r7, .L29	@ tmp185,
 663 0010 AB00     		lsls	r3, r5, #2	@ tmp186, ivtmp.115,
 664 0012 DB59     		ldr	r3, [r3, r7]	@ _2, MEM[symbol: Bank1_Reg0_13, index: _36, offset: 0B]
 665 0014 01AC     		add	r4, sp, #4	@ tmp187,,
 666 0016 1A0A     		lsrs	r2, r3, #8	@ tmp190, _2,
 667 0018 2370     		strb	r3, [r4]	@ _2, WriteArr
 668              	.LVL77:
 669 001a 6270     		strb	r2, [r4, #1]	@ tmp190, WriteArr
 670              	.LVL78:
 671 001c 1A0C     		lsrs	r2, r3, #16	@ tmp193, _2,
 672 001e 1B0E     		lsrs	r3, r3, #24	@ tmp196, _2,
 673 0020 A270     		strb	r2, [r4, #2]	@ tmp193, WriteArr
 674              	.LVL79:
 675 0022 E370     		strb	r3, [r4, #3]	@ tmp196, WriteArr
 676              	.LVL80:
 677              	@ rfm70.cpp:516:       buffer_write( i,WriteArr, 4 );
 515:rfm70.cpp     ****       }  
 516:rfm70.cpp     ****       buffer_write( i,WriteArr, 4 );
 678              		.loc 1 516 0
 679 0024 E9B2     		uxtb	r1, r5	@ ivtmp.115, ivtmp.115
 680 0026 0423     		movs	r3, #4	@,
 681 0028 2200     		movs	r2, r4	@, tmp187
 682 002a 3000     		movs	r0, r6	@, this
 683 002c 0135     		adds	r5, r5, #1	@ ivtmp.115,
 684              	.LVL81:
 685 002e FFF7FEFF 		bl	_ZN5rfm7012buffer_writeEcPKhh	@
 686              	.LVL82:
 687              	@ rfm70.cpp:512:    for( i = 0; i <= 8; i++ ){ //reverse!
 512:rfm70.cpp     ****       for( j = 0; j < 4; j++ ){
 688              		.loc 1 512 0
 689 0032 092D     		cmp	r5, #9	@ ivtmp.115,
 690 0034 EBD1     		bne	.L25	@,
 691              	.L26:
 692              	.LVL83:
 693              	@ rfm70.cpp:521:          WriteArr[ j ]=( Bank1_Reg0_13[ i ]>>(8*(3-j) ) )&0xff;
 517:rfm70.cpp     ****    }
 518:rfm70.cpp     **** 
 519:rfm70.cpp     ****    for( i = 9; i <= 13; i++ ){
 520:rfm70.cpp     ****       for( j = 0; j < 4; j++ ){
 521:rfm70.cpp     ****          WriteArr[ j ]=( Bank1_Reg0_13[ i ]>>(8*(3-j) ) )&0xff;
 694              		.loc 1 521 0
 695 0036 AB00     		lsls	r3, r5, #2	@ tmp201, ivtmp.107,
 696 0038 FB58     		ldr	r3, [r7, r3]	@ _87, MEM[symbol: Bank1_Reg0_13, index: _65, offset: 0B]
 697              	@ rfm70.cpp:523:       buffer_write( i, WriteArr, 4 );
 522:rfm70.cpp     ****       }
 523:rfm70.cpp     ****       buffer_write( i, WriteArr, 4 );
 698              		.loc 1 523 0
 699 003a E9B2     		uxtb	r1, r5	@ ivtmp.107, ivtmp.107
 700              	@ rfm70.cpp:521:          WriteArr[ j ]=( Bank1_Reg0_13[ i ]>>(8*(3-j) ) )&0xff;
 521:rfm70.cpp     ****       }
 701              		.loc 1 521 0
 702 003c 1A0E     		lsrs	r2, r3, #24	@ tmp203, _87,
 703 003e 2270     		strb	r2, [r4]	@ tmp203, WriteArr
 704              	.LVL84:
 705 0040 1A0C     		lsrs	r2, r3, #16	@ tmp206, _87,
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 23


 706 0042 6270     		strb	r2, [r4, #1]	@ tmp206, WriteArr
 707              	.LVL85:
 708 0044 1A0A     		lsrs	r2, r3, #8	@ tmp209, _87,
 709 0046 A270     		strb	r2, [r4, #2]	@ tmp209, WriteArr
 710              	.LVL86:
 711 0048 E370     		strb	r3, [r4, #3]	@ _87, WriteArr
 712              	.LVL87:
 713              	@ rfm70.cpp:523:       buffer_write( i, WriteArr, 4 );
 714              		.loc 1 523 0
 715 004a 2200     		movs	r2, r4	@, tmp187
 716 004c 0423     		movs	r3, #4	@,
 717 004e 3000     		movs	r0, r6	@, this
 718 0050 0135     		adds	r5, r5, #1	@ ivtmp.107,
 719              	.LVL88:
 720 0052 FFF7FEFF 		bl	_ZN5rfm7012buffer_writeEcPKhh	@
 721              	.LVL89:
 722              	@ rfm70.cpp:519:    for( i = 9; i <= 13; i++ ){
 519:rfm70.cpp     ****       for( j = 0; j < 4; j++ ){
 723              		.loc 1 519 0
 724 0056 0E2D     		cmp	r5, #14	@ ivtmp.107,
 725 0058 EDD1     		bne	.L26	@,
 726              	@ rfm70.cpp:526:    rfm70::buffer_write( 14, Bank1_Reg14, 11 );
 524:rfm70.cpp     ****    }
 525:rfm70.cpp     **** 
 526:rfm70.cpp     ****    rfm70::buffer_write( 14, Bank1_Reg14, 11 );
 727              		.loc 1 526 0
 728 005a 2900     		movs	r1, r5	@, ivtmp.107
 729 005c 3000     		movs	r0, r6	@, this
 730 005e 0B23     		movs	r3, #11	@,
 731 0060 0E4A     		ldr	r2, .L29+4	@,
 732 0062 FFF7FEFF 		bl	_ZN5rfm7012buffer_writeEcPKhh	@
 733              	.LVL90:
 734              	@ rfm70.cpp:533:    WriteArr[ 0 ] = WriteArr[ 0 ] | 0x06;
 527:rfm70.cpp     **** 
 528:rfm70.cpp     ****    //toggle REG4<25,26>
 529:rfm70.cpp     ****    for(j=0;j<4;j++){
 530:rfm70.cpp     ****       WriteArr[ j ]=( Bank1_Reg0_13[ 4 ]>>(8*(j) ) )&0xff;
 531:rfm70.cpp     ****    } 
 532:rfm70.cpp     **** 
 533:rfm70.cpp     ****    WriteArr[ 0 ] = WriteArr[ 0 ] | 0x06;
 735              		.loc 1 533 0
 736 0066 0E4B     		ldr	r3, .L29+8	@ tmp216,
 737              	@ rfm70.cpp:534:    rfm70::buffer_write( 4, WriteArr, 4);
 534:rfm70.cpp     ****    rfm70::buffer_write( 4, WriteArr, 4);
 738              		.loc 1 534 0
 739 0068 2200     		movs	r2, r4	@, tmp187
 740              	@ rfm70.cpp:533:    WriteArr[ 0 ] = WriteArr[ 0 ] | 0x06;
 533:rfm70.cpp     ****    rfm70::buffer_write( 4, WriteArr, 4);
 741              		.loc 1 533 0
 742 006a 0193     		str	r3, [sp, #4]	@ tmp216, MEM[(unsigned char[12] *)&WriteArr]
 743              	@ rfm70.cpp:534:    rfm70::buffer_write( 4, WriteArr, 4);
 744              		.loc 1 534 0
 745 006c 0423     		movs	r3, #4	@,
 746 006e 3000     		movs	r0, r6	@, this
 747 0070 1900     		movs	r1, r3	@,
 748 0072 FFF7FEFF 		bl	_ZN5rfm7012buffer_writeEcPKhh	@
 749              	.LVL91:
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 24


 750              	@ rfm70.cpp:536:    WriteArr[ 0 ] = WriteArr[ 0 ] & 0xf9;
 535:rfm70.cpp     **** 
 536:rfm70.cpp     ****    WriteArr[ 0 ] = WriteArr[ 0 ] & 0xf9;
 751              		.loc 1 536 0
 752 0076 0622     		movs	r2, #6	@ tmp223,
 753 0078 2378     		ldrb	r3, [r4]	@ WriteArr, WriteArr
 754              	@ rfm70.cpp:537:    rfm70::buffer_write( 4, WriteArr,4);
 537:rfm70.cpp     ****    rfm70::buffer_write( 4, WriteArr,4);
 755              		.loc 1 537 0
 756 007a 3000     		movs	r0, r6	@, this
 757              	@ rfm70.cpp:536:    WriteArr[ 0 ] = WriteArr[ 0 ] & 0xf9;
 536:rfm70.cpp     ****    rfm70::buffer_write( 4, WriteArr,4);
 758              		.loc 1 536 0
 759 007c 9343     		bics	r3, r2	@ tmp222, tmp223
 760 007e 2370     		strb	r3, [r4]	@ tmp222, WriteArr
 761              	@ rfm70.cpp:537:    rfm70::buffer_write( 4, WriteArr,4);
 762              		.loc 1 537 0
 763 0080 0423     		movs	r3, #4	@,
 764 0082 2200     		movs	r2, r4	@, tmp187
 765 0084 1900     		movs	r1, r3	@,
 766 0086 FFF7FEFF 		bl	_ZN5rfm7012buffer_writeEcPKhh	@
 767              	.LVL92:
 768              	@ rfm70.cpp:539:    rfm70::bank( 0 );
 538:rfm70.cpp     **** 
 539:rfm70.cpp     ****    rfm70::bank( 0 );
 769              		.loc 1 539 0
 770 008a 0021     		movs	r1, #0	@,
 771 008c 3000     		movs	r0, r6	@, this
 772 008e FFF7FEFF 		bl	_ZN5rfm704bankEh	@
 773              	.LVL93:
 774              	@ rfm70.cpp:540: }
 540:rfm70.cpp     **** }
 775              		.loc 1 540 0
 776 0092 05B0     		add	sp, sp, #20	@,,
 777              		@ sp needed	@
 778              	.LVL94:
 779 0094 F0BD     		pop	{r4, r5, r6, r7, pc}
 780              	.L30:
 781 0096 C046     		.align	2
 782              	.L29:
 783 0098 00000000 		.word	.LANCHOR0
 784 009c 00000000 		.word	.LANCHOR1
 785 00a0 FF9E860B 		.word	193371903
 786              		.cfi_endproc
 787              	.LFE14:
 788              		.size	_ZN5rfm7010init_bank1Ev, .-_ZN5rfm7010init_bank1Ev
 789              		.section	.text._ZN5rfm7010is_presentEv,"ax",%progbits
 790              		.align	1
 791              		.global	_ZN5rfm7010is_presentEv
 792              		.syntax unified
 793              		.code	16
 794              		.thumb_func
 795              		.fpu softvfp
 796              		.type	_ZN5rfm7010is_presentEv, %function
 797              	_ZN5rfm7010is_presentEv:
 798              	.LFB15:
 541:rfm70.cpp     **** 
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 25


 542:rfm70.cpp     **** bool rfm70::is_present( void ){
 799              		.loc 1 542 0
 800              		.cfi_startproc
 801              		@ args = 0, pretend = 0, frame = 0
 802              		@ frame_needed = 0, uses_anonymous_args = 0
 803              	.LVL95:
 804 0000 70B5     		push	{r4, r5, r6, lr}	@
 805              		.cfi_def_cfa_offset 16
 806              		.cfi_offset 4, -16
 807              		.cfi_offset 5, -12
 808              		.cfi_offset 6, -8
 809              		.cfi_offset 14, -4
 810              	@ rfm70.cpp:544:    st1 = rfm70::register_read( RFM70_REG_STATUS );
 543:rfm70.cpp     ****    unsigned char st1, st2; 
 544:rfm70.cpp     ****    st1 = rfm70::register_read( RFM70_REG_STATUS );
 811              		.loc 1 544 0
 812 0002 0721     		movs	r1, #7	@,
 813              	@ rfm70.cpp:542: bool rfm70::is_present( void ){
 542:rfm70.cpp     ****    unsigned char st1, st2; 
 814              		.loc 1 542 0
 815 0004 0500     		movs	r5, r0	@ this, this
 816              	@ rfm70.cpp:544:    st1 = rfm70::register_read( RFM70_REG_STATUS );
 817              		.loc 1 544 0
 818 0006 FFF7FEFF 		bl	_ZN5rfm7013register_readEh	@
 819              	.LVL96:
 820              	@ rfm70.cpp:545:    rfm70::register_write( RFM70_CMD_ACTIVATE, 0x53 );
 545:rfm70.cpp     ****    rfm70::register_write( RFM70_CMD_ACTIVATE, 0x53 );
 821              		.loc 1 545 0
 822 000a 5322     		movs	r2, #83	@,
 823              	@ rfm70.cpp:544:    st1 = rfm70::register_read( RFM70_REG_STATUS );
 544:rfm70.cpp     ****    rfm70::register_write( RFM70_CMD_ACTIVATE, 0x53 );
 824              		.loc 1 544 0
 825 000c 0400     		movs	r4, r0	@ tmp115,
 826              	.LVL97:
 827              	@ rfm70.cpp:545:    rfm70::register_write( RFM70_CMD_ACTIVATE, 0x53 );
 828              		.loc 1 545 0
 829 000e 5021     		movs	r1, #80	@,
 830 0010 2800     		movs	r0, r5	@, this
 831 0012 FFF7FEFF 		bl	_ZN5rfm7014register_writeEhh	@
 832              	.LVL98:
 833              	@ rfm70.cpp:546:    st2 = rfm70::register_read( RFM70_REG_STATUS );
 546:rfm70.cpp     ****    st2 = rfm70::register_read( RFM70_REG_STATUS );
 834              		.loc 1 546 0
 835 0016 2800     		movs	r0, r5	@, this
 836 0018 0721     		movs	r1, #7	@,
 837 001a FFF7FEFF 		bl	_ZN5rfm7013register_readEh	@
 838              	.LVL99:
 839 001e 0600     		movs	r6, r0	@ tmp117,
 840              	.LVL100:
 841              	@ rfm70.cpp:547:    rfm70::register_write( RFM70_CMD_ACTIVATE, 0x53 );
 547:rfm70.cpp     ****    rfm70::register_write( RFM70_CMD_ACTIVATE, 0x53 );
 842              		.loc 1 547 0
 843 0020 5322     		movs	r2, #83	@,
 844 0022 2800     		movs	r0, r5	@, this
 845              	@ rfm70.cpp:548:    return ( st1 ^ st2 ) == 0x80;
 548:rfm70.cpp     ****    return ( st1 ^ st2 ) == 0x80;
 846              		.loc 1 548 0
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 26


 847 0024 7440     		eors	r4, r6	@ tmp120, tmp117
 848              	.LVL101:
 849              	@ rfm70.cpp:547:    rfm70::register_write( RFM70_CMD_ACTIVATE, 0x53 );
 547:rfm70.cpp     ****    rfm70::register_write( RFM70_CMD_ACTIVATE, 0x53 );
 850              		.loc 1 547 0
 851 0026 5021     		movs	r1, #80	@,
 852 0028 FFF7FEFF 		bl	_ZN5rfm7014register_writeEhh	@
 853              	.LVL102:
 854              	@ rfm70.cpp:548:    return ( st1 ^ st2 ) == 0x80;
 855              		.loc 1 548 0
 856 002c E0B2     		uxtb	r0, r4	@ tmp121, tmp120
 857 002e 8038     		subs	r0, r0, #128	@ tmp123,
 858 0030 4442     		rsbs	r4, r0, #0	@ tmp124, tmp123
 859 0032 6041     		adcs	r0, r0, r4	@ tmp122, tmp123, tmp124
 860              	@ rfm70.cpp:549: }
 549:rfm70.cpp     **** }
 861              		.loc 1 549 0
 862              		@ sp needed	@
 863              	@ rfm70.cpp:548:    return ( st1 ^ st2 ) == 0x80;
 548:rfm70.cpp     ****    return ( st1 ^ st2 ) == 0x80;
 864              		.loc 1 548 0
 865 0034 C0B2     		uxtb	r0, r0	@ tmp125, tmp122
 866              	.LVL103:
 867              	.LVL104:
 868              	@ rfm70.cpp:549: }
 869              		.loc 1 549 0
 870 0036 70BD     		pop	{r4, r5, r6, pc}
 871              		.cfi_endproc
 872              	.LFE15:
 873              		.size	_ZN5rfm7010is_presentEv, .-_ZN5rfm7010is_presentEv
 874              		.section	.text._ZN5rfm7012mode_receiveEv,"ax",%progbits
 875              		.align	1
 876              		.global	_ZN5rfm7012mode_receiveEv
 877              		.syntax unified
 878              		.code	16
 879              		.thumb_func
 880              		.fpu softvfp
 881              		.type	_ZN5rfm7012mode_receiveEv, %function
 882              	_ZN5rfm7012mode_receiveEv:
 883              	.LFB16:
 550:rfm70.cpp     **** 
 551:rfm70.cpp     **** void rfm70::mode_receive( void ){
 884              		.loc 1 551 0
 885              		.cfi_startproc
 886              		@ args = 0, pretend = 0, frame = 0
 887              		@ frame_needed = 0, uses_anonymous_args = 0
 888              	.LVL105:
 889 0000 10B5     		push	{r4, lr}	@
 890              		.cfi_def_cfa_offset 8
 891              		.cfi_offset 4, -8
 892              		.cfi_offset 14, -4
 893              	@ rfm70.cpp:551: void rfm70::mode_receive( void ){
 894              		.loc 1 551 0
 895 0002 0400     		movs	r4, r0	@ this, this
 896              	@ rfm70.cpp:555:    rfm70::register_write( RFM70_CMD_FLUSH_RX, 0 );
 552:rfm70.cpp     ****    unsigned char value;
 553:rfm70.cpp     ****    
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 27


 554:rfm70.cpp     ****    // flush receive queue 
 555:rfm70.cpp     ****    rfm70::register_write( RFM70_CMD_FLUSH_RX, 0 );
 897              		.loc 1 555 0
 898 0004 0022     		movs	r2, #0	@,
 899 0006 E221     		movs	r1, #226	@,
 900 0008 FFF7FEFF 		bl	_ZN5rfm7014register_writeEhh	@
 901              	.LVL106:
 902              	@ rfm70.cpp:558:    value = rfm70::register_read( RFM70_REG_STATUS );
 556:rfm70.cpp     ****    
 557:rfm70.cpp     ****    // clear interrupt status
 558:rfm70.cpp     ****    value = rfm70::register_read( RFM70_REG_STATUS );
 903              		.loc 1 558 0
 904 000c 0721     		movs	r1, #7	@,
 905 000e 2000     		movs	r0, r4	@, this
 906 0010 FFF7FEFF 		bl	_ZN5rfm7013register_readEh	@
 907              	.LVL107:
 908              	@ rfm70.cpp:559:    rfm70::register_write( RFM70_REG_STATUS ,value );
 559:rfm70.cpp     ****    rfm70::register_write( RFM70_REG_STATUS ,value );
 909              		.loc 1 559 0
 910 0014 0721     		movs	r1, #7	@,
 911              	@ rfm70.cpp:558:    value = rfm70::register_read( RFM70_REG_STATUS );
 558:rfm70.cpp     ****    rfm70::register_write( RFM70_REG_STATUS ,value );
 912              		.loc 1 558 0
 913 0016 0200     		movs	r2, r0	@ tmp120,
 914              	.LVL108:
 915              	@ rfm70.cpp:559:    rfm70::register_write( RFM70_REG_STATUS ,value );
 916              		.loc 1 559 0
 917 0018 2000     		movs	r0, r4	@, this
 918 001a FFF7FEFF 		bl	_ZN5rfm7014register_writeEhh	@
 919              	.LVL109:
 920              	@ rfm70.cpp:562:    RFM70_CE( 0 );
 560:rfm70.cpp     ****    
 561:rfm70.cpp     ****    // switch to receive mode
 562:rfm70.cpp     ****    RFM70_CE( 0 );
 921              		.loc 1 562 0
 922 001e 2069     		ldr	r0, [r4, #16]	@ _1, this_8(D)->ce
 923 0020 0021     		movs	r1, #0	@,
 924 0022 0368     		ldr	r3, [r0]	@ _1->_vptr.output_pin, _1->_vptr.output_pin
 925              	@ rfm70.cpp:568: }
 563:rfm70.cpp     ****    value = rfm70::register_read( RFM70_REG_CONFIG );
 564:rfm70.cpp     ****    value |= 0x01; // set RX bit
 565:rfm70.cpp     ****    value |= 0x02; // set PWR_UP bit
 566:rfm70.cpp     ****    rfm70::register_write( RFM70_REG_CONFIG, value );
 567:rfm70.cpp     ****    RFM70_CE( 1 );
 568:rfm70.cpp     **** }
 926              		.loc 1 568 0
 927              		@ sp needed	@
 928              	@ rfm70.cpp:562:    RFM70_CE( 0 );
 562:rfm70.cpp     ****    value = rfm70::register_read( RFM70_REG_CONFIG );
 929              		.loc 1 562 0
 930 0024 1B68     		ldr	r3, [r3]	@ *_2, *_2
 931 0026 9847     		blx	r3	@ *_2
 932              	.LVL110:
 933              	@ rfm70.cpp:563:    value = rfm70::register_read( RFM70_REG_CONFIG );
 563:rfm70.cpp     ****    value = rfm70::register_read( RFM70_REG_CONFIG );
 934              		.loc 1 563 0
 935 0028 0021     		movs	r1, #0	@,
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 28


 936 002a 2000     		movs	r0, r4	@, this
 937 002c FFF7FEFF 		bl	_ZN5rfm7013register_readEh	@
 938              	.LVL111:
 939              	@ rfm70.cpp:565:    value |= 0x02; // set PWR_UP bit
 565:rfm70.cpp     ****    rfm70::register_write( RFM70_REG_CONFIG, value );
 940              		.loc 1 565 0
 941 0030 0322     		movs	r2, #3	@ tmp127,
 942 0032 0243     		orrs	r2, r0	@ tmp126, tmp124
 943              	@ rfm70.cpp:566:    rfm70::register_write( RFM70_REG_CONFIG, value );
 566:rfm70.cpp     ****    RFM70_CE( 1 );
 944              		.loc 1 566 0
 945 0034 D2B2     		uxtb	r2, r2	@ tmp128, tmp126
 946 0036 2000     		movs	r0, r4	@, this
 947              	.LVL112:
 948 0038 0021     		movs	r1, #0	@,
 949 003a FFF7FEFF 		bl	_ZN5rfm7014register_writeEhh	@
 950              	.LVL113:
 951              	@ rfm70.cpp:567:    RFM70_CE( 1 );
 567:rfm70.cpp     **** }
 952              		.loc 1 567 0
 953 003e 2069     		ldr	r0, [r4, #16]	@ _4, this_8(D)->ce
 954 0040 0121     		movs	r1, #1	@,
 955 0042 0368     		ldr	r3, [r0]	@ _4->_vptr.output_pin, _4->_vptr.output_pin
 956 0044 1B68     		ldr	r3, [r3]	@ *_5, *_5
 957 0046 9847     		blx	r3	@ *_5
 958              	.LVL114:
 959              	.LVL115:
 960              	@ rfm70.cpp:568: }
 961              		.loc 1 568 0
 962 0048 10BD     		pop	{r4, pc}
 963              		.cfi_endproc
 964              	.LFE16:
 965              		.size	_ZN5rfm7012mode_receiveEv, .-_ZN5rfm7012mode_receiveEv
 966              		.section	.text._ZN5rfm7013mode_transmitEv,"ax",%progbits
 967              		.align	1
 968              		.global	_ZN5rfm7013mode_transmitEv
 969              		.syntax unified
 970              		.code	16
 971              		.thumb_func
 972              		.fpu softvfp
 973              		.type	_ZN5rfm7013mode_transmitEv, %function
 974              	_ZN5rfm7013mode_transmitEv:
 975              	.LFB17:
 569:rfm70.cpp     **** 
 570:rfm70.cpp     **** void rfm70::mode_transmit( void ){
 976              		.loc 1 570 0
 977              		.cfi_startproc
 978              		@ args = 0, pretend = 0, frame = 0
 979              		@ frame_needed = 0, uses_anonymous_args = 0
 980              	.LVL116:
 981 0000 70B5     		push	{r4, r5, r6, lr}	@
 982              		.cfi_def_cfa_offset 16
 983              		.cfi_offset 4, -16
 984              		.cfi_offset 5, -12
 985              		.cfi_offset 6, -8
 986              		.cfi_offset 14, -4
 987              	@ rfm70.cpp:570: void rfm70::mode_transmit( void ){
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 29


 988              		.loc 1 570 0
 989 0002 0400     		movs	r4, r0	@ this, this
 990              	@ rfm70.cpp:574:    rfm70::register_write( RFM70_CMD_FLUSH_TX, 0);
 571:rfm70.cpp     ****    unsigned char value;
 572:rfm70.cpp     ****    
 573:rfm70.cpp     ****    // flush transmit queue
 574:rfm70.cpp     ****    rfm70::register_write( RFM70_CMD_FLUSH_TX, 0);
 991              		.loc 1 574 0
 992 0004 0022     		movs	r2, #0	@,
 993 0006 E121     		movs	r1, #225	@,
 994 0008 FFF7FEFF 		bl	_ZN5rfm7014register_writeEhh	@
 995              	.LVL117:
 996              	@ rfm70.cpp:577:    value = rfm70::register_read( RFM70_REG_STATUS );
 575:rfm70.cpp     ****    
 576:rfm70.cpp     ****    // clear interrupt status
 577:rfm70.cpp     ****    value = rfm70::register_read( RFM70_REG_STATUS );
 997              		.loc 1 577 0
 998 000c 0721     		movs	r1, #7	@,
 999 000e 2000     		movs	r0, r4	@, this
 1000 0010 FFF7FEFF 		bl	_ZN5rfm7013register_readEh	@
 1001              	.LVL118:
 1002              	@ rfm70.cpp:578:    rfm70::register_write( RFM70_REG_STATUS ,value );
 578:rfm70.cpp     ****    rfm70::register_write( RFM70_REG_STATUS ,value );
 1003              		.loc 1 578 0
 1004 0014 0721     		movs	r1, #7	@,
 1005              	@ rfm70.cpp:577:    value = rfm70::register_read( RFM70_REG_STATUS );
 577:rfm70.cpp     ****    rfm70::register_write( RFM70_REG_STATUS ,value );
 1006              		.loc 1 577 0
 1007 0016 0200     		movs	r2, r0	@ tmp121,
 1008              	.LVL119:
 1009              	@ rfm70.cpp:578:    rfm70::register_write( RFM70_REG_STATUS ,value );
 1010              		.loc 1 578 0
 1011 0018 2000     		movs	r0, r4	@, this
 1012 001a FFF7FEFF 		bl	_ZN5rfm7014register_writeEhh	@
 1013              	.LVL120:
 1014              	@ rfm70.cpp:581:    RFM70_CE( 0 );
 579:rfm70.cpp     ****    
 580:rfm70.cpp     ****    // switch to transmit mode
 581:rfm70.cpp     ****    RFM70_CE( 0 );
 1015              		.loc 1 581 0
 1016 001e 2069     		ldr	r0, [r4, #16]	@ _1, this_8(D)->ce
 1017 0020 0021     		movs	r1, #0	@,
 1018 0022 0368     		ldr	r3, [r0]	@ _1->_vptr.output_pin, _1->_vptr.output_pin
 1019              	@ rfm70.cpp:583:    value &= 0xFE; // clear RX bit
 582:rfm70.cpp     ****    value = rfm70::register_read( RFM70_REG_CONFIG );
 583:rfm70.cpp     ****    value &= 0xFE; // clear RX bit
 1020              		.loc 1 583 0
 1021 0024 0125     		movs	r5, #1	@ tmp128,
 1022              	@ rfm70.cpp:581:    RFM70_CE( 0 );
 581:rfm70.cpp     ****    value = rfm70::register_read( RFM70_REG_CONFIG );
 1023              		.loc 1 581 0
 1024 0026 1B68     		ldr	r3, [r3]	@ *_2, *_2
 1025 0028 9847     		blx	r3	@ *_2
 1026              	.LVL121:
 1027              	@ rfm70.cpp:582:    value = rfm70::register_read( RFM70_REG_CONFIG );
 582:rfm70.cpp     ****    value = rfm70::register_read( RFM70_REG_CONFIG );
 1028              		.loc 1 582 0
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 30


 1029 002a 0021     		movs	r1, #0	@,
 1030 002c 2000     		movs	r0, r4	@, this
 1031 002e FFF7FEFF 		bl	_ZN5rfm7013register_readEh	@
 1032              	.LVL122:
 1033              	@ rfm70.cpp:583:    value &= 0xFE; // clear RX bit
 1034              		.loc 1 583 0
 1035 0032 A843     		bics	r0, r5	@ tmp127, tmp128
 1036              	.LVL123:
 1037 0034 C2B2     		uxtb	r2, r0	@ value, tmp127
 1038              	.LVL124:
 1039              	@ rfm70.cpp:585:    rfm70::register_write( RFM70_REG_CONFIG, value );
 584:rfm70.cpp     ****    value |= 0x02; // set PWR_UP bit
 585:rfm70.cpp     ****    rfm70::register_write( RFM70_REG_CONFIG, value );
 1040              		.loc 1 585 0
 1041 0036 0220     		movs	r0, #2	@ tmp130,
 1042 0038 0021     		movs	r1, #0	@,
 1043 003a 0243     		orrs	r2, r0	@ tmp131, tmp130
 1044              	.LVL125:
 1045 003c 2000     		movs	r0, r4	@, this
 1046 003e FFF7FEFF 		bl	_ZN5rfm7014register_writeEhh	@
 1047              	.LVL126:
 1048              	@ rfm70.cpp:586:    RFM70_CE( 1 );
 586:rfm70.cpp     ****    RFM70_CE( 1 );
 1049              		.loc 1 586 0
 1050 0042 2069     		ldr	r0, [r4, #16]	@ _4, this_8(D)->ce
 1051 0044 2900     		movs	r1, r5	@, tmp128
 1052 0046 0368     		ldr	r3, [r0]	@ _4->_vptr.output_pin, _4->_vptr.output_pin
 1053              	@ rfm70.cpp:587: }
 587:rfm70.cpp     **** }
 1054              		.loc 1 587 0
 1055              		@ sp needed	@
 1056              	@ rfm70.cpp:586:    RFM70_CE( 1 );
 586:rfm70.cpp     ****    RFM70_CE( 1 );
 1057              		.loc 1 586 0
 1058 0048 1B68     		ldr	r3, [r3]	@ *_5, *_5
 1059 004a 9847     		blx	r3	@ *_5
 1060              	.LVL127:
 1061              	.LVL128:
 1062              	@ rfm70.cpp:587: }
 1063              		.loc 1 587 0
 1064 004c 70BD     		pop	{r4, r5, r6, pc}
 1065              		.cfi_endproc
 1066              	.LFE17:
 1067              		.size	_ZN5rfm7013mode_transmitEv, .-_ZN5rfm7013mode_transmitEv
 1068              		.section	.text._ZN5rfm7012mode_standbyEv,"ax",%progbits
 1069              		.align	1
 1070              		.global	_ZN5rfm7012mode_standbyEv
 1071              		.syntax unified
 1072              		.code	16
 1073              		.thumb_func
 1074              		.fpu softvfp
 1075              		.type	_ZN5rfm7012mode_standbyEv, %function
 1076              	_ZN5rfm7012mode_standbyEv:
 1077              	.LFB18:
 588:rfm70.cpp     **** 
 589:rfm70.cpp     **** void rfm70::mode_standby( void ){
 1078              		.loc 1 589 0
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 31


 1079              		.cfi_startproc
 1080              		@ args = 0, pretend = 0, frame = 0
 1081              		@ frame_needed = 0, uses_anonymous_args = 0
 1082              	.LVL129:
 1083 0000 10B5     		push	{r4, lr}	@
 1084              		.cfi_def_cfa_offset 8
 1085              		.cfi_offset 4, -8
 1086              		.cfi_offset 14, -4
 1087              	@ rfm70.cpp:589: void rfm70::mode_standby( void ){
 1088              		.loc 1 589 0
 1089 0002 0400     		movs	r4, r0	@ this, this
 1090              	@ rfm70.cpp:591:    RFM70_CE( 0 );
 590:rfm70.cpp     ****    unsigned char value;
 591:rfm70.cpp     ****    RFM70_CE( 0 );
 1091              		.loc 1 591 0
 1092 0004 0069     		ldr	r0, [r0, #16]	@ _1, this_5(D)->ce
 1093              	.LVL130:
 1094 0006 0021     		movs	r1, #0	@,
 1095 0008 0368     		ldr	r3, [r0]	@ _1->_vptr.output_pin, _1->_vptr.output_pin
 1096              	@ rfm70.cpp:595: }
 592:rfm70.cpp     ****    value = rfm70::register_read( RFM70_REG_CONFIG );
 593:rfm70.cpp     ****    value |= 0x02; // set PWR_UP bit
 594:rfm70.cpp     ****    rfm70::register_write( RFM70_REG_CONFIG, value );
 595:rfm70.cpp     **** }
 1097              		.loc 1 595 0
 1098              		@ sp needed	@
 1099              	@ rfm70.cpp:591:    RFM70_CE( 0 );
 591:rfm70.cpp     ****    value = rfm70::register_read( RFM70_REG_CONFIG );
 1100              		.loc 1 591 0
 1101 000a 1B68     		ldr	r3, [r3]	@ *_2, *_2
 1102 000c 9847     		blx	r3	@ *_2
 1103              	.LVL131:
 1104              	@ rfm70.cpp:592:    value = rfm70::register_read( RFM70_REG_CONFIG );
 592:rfm70.cpp     ****    value = rfm70::register_read( RFM70_REG_CONFIG );
 1105              		.loc 1 592 0
 1106 000e 0021     		movs	r1, #0	@,
 1107 0010 2000     		movs	r0, r4	@, this
 1108 0012 FFF7FEFF 		bl	_ZN5rfm7013register_readEh	@
 1109              	.LVL132:
 1110              	@ rfm70.cpp:593:    value |= 0x02; // set PWR_UP bit
 593:rfm70.cpp     ****    rfm70::register_write( RFM70_REG_CONFIG, value );
 1111              		.loc 1 593 0
 1112 0016 0222     		movs	r2, #2	@ tmp121,
 1113 0018 0243     		orrs	r2, r0	@ tmp120, tmp118
 1114              	@ rfm70.cpp:594:    rfm70::register_write( RFM70_REG_CONFIG, value );
 594:rfm70.cpp     **** }
 1115              		.loc 1 594 0
 1116 001a D2B2     		uxtb	r2, r2	@ tmp122, tmp120
 1117 001c 0021     		movs	r1, #0	@,
 1118 001e 2000     		movs	r0, r4	@, this
 1119              	.LVL133:
 1120 0020 FFF7FEFF 		bl	_ZN5rfm7014register_writeEhh	@
 1121              	.LVL134:
 1122              	.LVL135:
 1123              	@ rfm70.cpp:595: }
 1124              		.loc 1 595 0
 1125 0024 10BD     		pop	{r4, pc}
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 32


 1126              		.cfi_endproc
 1127              	.LFE18:
 1128              		.size	_ZN5rfm7012mode_standbyEv, .-_ZN5rfm7012mode_standbyEv
 1129              		.section	.text._ZN5rfm7014mode_powerdownEv,"ax",%progbits
 1130              		.align	1
 1131              		.global	_ZN5rfm7014mode_powerdownEv
 1132              		.syntax unified
 1133              		.code	16
 1134              		.thumb_func
 1135              		.fpu softvfp
 1136              		.type	_ZN5rfm7014mode_powerdownEv, %function
 1137              	_ZN5rfm7014mode_powerdownEv:
 1138              	.LFB19:
 596:rfm70.cpp     **** 
 597:rfm70.cpp     **** void rfm70::mode_powerdown( void ){
 1139              		.loc 1 597 0
 1140              		.cfi_startproc
 1141              		@ args = 0, pretend = 0, frame = 0
 1142              		@ frame_needed = 0, uses_anonymous_args = 0
 1143              	.LVL136:
 1144 0000 10B5     		push	{r4, lr}	@
 1145              		.cfi_def_cfa_offset 8
 1146              		.cfi_offset 4, -8
 1147              		.cfi_offset 14, -4
 1148              	@ rfm70.cpp:597: void rfm70::mode_powerdown( void ){
 1149              		.loc 1 597 0
 1150 0002 0400     		movs	r4, r0	@ this, this
 1151              	@ rfm70.cpp:599:    RFM70_CE( 0 );
 598:rfm70.cpp     ****    unsigned char value;
 599:rfm70.cpp     ****    RFM70_CE( 0 );
 1152              		.loc 1 599 0
 1153 0004 0069     		ldr	r0, [r0, #16]	@ _1, this_5(D)->ce
 1154              	.LVL137:
 1155 0006 0021     		movs	r1, #0	@,
 1156 0008 0368     		ldr	r3, [r0]	@ _1->_vptr.output_pin, _1->_vptr.output_pin
 1157              	@ rfm70.cpp:603: }
 600:rfm70.cpp     ****    value = rfm70::register_read( RFM70_REG_CONFIG );
 601:rfm70.cpp     ****    value &= 0xFD; // clear PWR_UP bit
 602:rfm70.cpp     ****    rfm70::register_write( RFM70_REG_CONFIG, value );
 603:rfm70.cpp     **** }
 1158              		.loc 1 603 0
 1159              		@ sp needed	@
 1160              	@ rfm70.cpp:599:    RFM70_CE( 0 );
 599:rfm70.cpp     ****    value = rfm70::register_read( RFM70_REG_CONFIG );
 1161              		.loc 1 599 0
 1162 000a 1B68     		ldr	r3, [r3]	@ *_2, *_2
 1163 000c 9847     		blx	r3	@ *_2
 1164              	.LVL138:
 1165              	@ rfm70.cpp:600:    value = rfm70::register_read( RFM70_REG_CONFIG );
 600:rfm70.cpp     ****    value = rfm70::register_read( RFM70_REG_CONFIG );
 1166              		.loc 1 600 0
 1167 000e 0021     		movs	r1, #0	@,
 1168 0010 2000     		movs	r0, r4	@, this
 1169 0012 FFF7FEFF 		bl	_ZN5rfm7013register_readEh	@
 1170              	.LVL139:
 1171              	@ rfm70.cpp:601:    value &= 0xFD; // clear PWR_UP bit
 601:rfm70.cpp     ****    rfm70::register_write( RFM70_REG_CONFIG, value );
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 33


 1172              		.loc 1 601 0
 1173 0016 FD22     		movs	r2, #253	@ tmp120,
 1174              	@ rfm70.cpp:602:    rfm70::register_write( RFM70_REG_CONFIG, value );
 602:rfm70.cpp     **** }
 1175              		.loc 1 602 0
 1176 0018 0021     		movs	r1, #0	@,
 1177 001a 0240     		ands	r2, r0	@ tmp122, tmp118
 1178 001c 2000     		movs	r0, r4	@, this
 1179              	.LVL140:
 1180 001e FFF7FEFF 		bl	_ZN5rfm7014register_writeEhh	@
 1181              	.LVL141:
 1182              	.LVL142:
 1183              	@ rfm70.cpp:603: }
 1184              		.loc 1 603 0
 1185 0022 10BD     		pop	{r4, pc}
 1186              		.cfi_endproc
 1187              	.LFE19:
 1188              		.size	_ZN5rfm7014mode_powerdownEv, .-_ZN5rfm7014mode_powerdownEv
 1189              		.section	.text._ZN5rfm707channelEh,"ax",%progbits
 1190              		.align	1
 1191              		.global	_ZN5rfm707channelEh
 1192              		.syntax unified
 1193              		.code	16
 1194              		.thumb_func
 1195              		.fpu softvfp
 1196              		.type	_ZN5rfm707channelEh, %function
 1197              	_ZN5rfm707channelEh:
 1198              	.LFB20:
 604:rfm70.cpp     **** 
 605:rfm70.cpp     **** void rfm70::channel( unsigned char ch ){
 1199              		.loc 1 605 0
 1200              		.cfi_startproc
 1201              		@ args = 0, pretend = 0, frame = 0
 1202              		@ frame_needed = 0, uses_anonymous_args = 0
 1203              	.LVL143:
 1204              	@ rfm70.cpp:607:   rfm70::register_write( RFM70_REG_RF_CH, ch & 0x7E );
 606:rfm70.cpp     ****   // MSB must be 0
 607:rfm70.cpp     ****   rfm70::register_write( RFM70_REG_RF_CH, ch & 0x7E );
 1205              		.loc 1 607 0
 1206 0000 7E22     		movs	r2, #126	@ tmp114,
 1207              	@ rfm70.cpp:605: void rfm70::channel( unsigned char ch ){
 605:rfm70.cpp     ****   // MSB must be 0
 1208              		.loc 1 605 0
 1209 0002 10B5     		push	{r4, lr}	@
 1210              		.cfi_def_cfa_offset 8
 1211              		.cfi_offset 4, -8
 1212              		.cfi_offset 14, -4
 1213              	@ rfm70.cpp:607:   rfm70::register_write( RFM70_REG_RF_CH, ch & 0x7E );
 1214              		.loc 1 607 0
 1215 0004 0A40     		ands	r2, r1	@ tmp115, ch
 1216 0006 0521     		movs	r1, #5	@,
 1217              	.LVL144:
 1218 0008 FFF7FEFF 		bl	_ZN5rfm7014register_writeEhh	@
 1219              	.LVL145:
 1220              	@ rfm70.cpp:608: }
 608:rfm70.cpp     **** }
 1221              		.loc 1 608 0
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 34


 1222              		@ sp needed	@
 1223 000c 10BD     		pop	{r4, pc}
 1224              		.cfi_endproc
 1225              	.LFE20:
 1226              		.size	_ZN5rfm707channelEh, .-_ZN5rfm707channelEh
 1227              		.section	.text._ZN5rfm7013air_data_rateEh,"ax",%progbits
 1228              		.align	1
 1229              		.global	_ZN5rfm7013air_data_rateEh
 1230              		.syntax unified
 1231              		.code	16
 1232              		.thumb_func
 1233              		.fpu softvfp
 1234              		.type	_ZN5rfm7013air_data_rateEh, %function
 1235              	_ZN5rfm7013air_data_rateEh:
 1236              	.LFB21:
 609:rfm70.cpp     **** 
 610:rfm70.cpp     **** void rfm70::air_data_rate( unsigned char rate ){
 1237              		.loc 1 610 0
 1238              		.cfi_startproc
 1239              		@ args = 0, pretend = 0, frame = 0
 1240              		@ frame_needed = 0, uses_anonymous_args = 0
 1241              	.LVL146:
 1242 0000 70B5     		push	{r4, r5, r6, lr}	@
 1243              		.cfi_def_cfa_offset 16
 1244              		.cfi_offset 4, -16
 1245              		.cfi_offset 5, -12
 1246              		.cfi_offset 6, -8
 1247              		.cfi_offset 14, -4
 1248              	@ rfm70.cpp:610: void rfm70::air_data_rate( unsigned char rate ){
 1249              		.loc 1 610 0
 1250 0002 0400     		movs	r4, r0	@ this, this
 1251              	@ rfm70.cpp:612:    RFM70_CE( 0 );
 611:rfm70.cpp     ****    unsigned char value; 
 612:rfm70.cpp     ****    RFM70_CE( 0 );
 1252              		.loc 1 612 0
 1253 0004 0069     		ldr	r0, [r0, #16]	@ _1, this_9(D)->ce
 1254              	.LVL147:
 1255              	@ rfm70.cpp:610: void rfm70::air_data_rate( unsigned char rate ){
 610:rfm70.cpp     ****    unsigned char value; 
 1256              		.loc 1 610 0
 1257 0006 0D00     		movs	r5, r1	@ rate, rate
 1258              	@ rfm70.cpp:612:    RFM70_CE( 0 );
 1259              		.loc 1 612 0
 1260 0008 0368     		ldr	r3, [r0]	@ _1->_vptr.output_pin, _1->_vptr.output_pin
 1261 000a 0021     		movs	r1, #0	@,
 1262              	.LVL148:
 1263 000c 1B68     		ldr	r3, [r3]	@ *_2, *_2
 1264 000e 9847     		blx	r3	@ *_2
 1265              	.LVL149:
 1266              	@ rfm70.cpp:613:    value = rfm70::register_read( RFM70_REG_RF_SETUP );
 613:rfm70.cpp     ****    value = rfm70::register_read( RFM70_REG_RF_SETUP );
 1267              		.loc 1 613 0
 1268 0010 0621     		movs	r1, #6	@,
 1269 0012 2000     		movs	r0, r4	@, this
 1270 0014 FFF7FEFF 		bl	_ZN5rfm7013register_readEh	@
 1271              	.LVL150:
 1272              	@ rfm70.cpp:614:    value &= 0xF7;
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 35


 614:rfm70.cpp     ****    value &= 0xF7;
 1273              		.loc 1 614 0
 1274 0018 0823     		movs	r3, #8	@ tmp125,
 1275 001a 9843     		bics	r0, r3	@ tmp124, tmp125
 1276              	.LVL151:
 1277 001c C2B2     		uxtb	r2, r0	@ value, tmp124
 1278              	.LVL152:
 1279              	@ rfm70.cpp:615:    if( rate > 1 ){
 615:rfm70.cpp     ****    if( rate > 1 ){
 1280              		.loc 1 615 0
 1281 001e 012D     		cmp	r5, #1	@ rate,
 1282 0020 00D9     		bls	.L38	@,
 1283              	@ rfm70.cpp:616:       value |= 0x08;  
 616:rfm70.cpp     ****       value |= 0x08;  
 1284              		.loc 1 616 0
 1285 0022 1A43     		orrs	r2, r3	@ value, tmp125
 1286              	.LVL153:
 1287              	.L38:
 1288              	@ rfm70.cpp:618:    rfm70::register_write( RFM70_REG_RF_SETUP, value );
 617:rfm70.cpp     ****    }
 618:rfm70.cpp     ****    rfm70::register_write( RFM70_REG_RF_SETUP, value );
 1289              		.loc 1 618 0
 1290 0024 2000     		movs	r0, r4	@, this
 1291 0026 0621     		movs	r1, #6	@,
 1292 0028 FFF7FEFF 		bl	_ZN5rfm7014register_writeEhh	@
 1293              	.LVL154:
 1294              	@ rfm70.cpp:619:    RFM70_CE( 1 );
 619:rfm70.cpp     ****    RFM70_CE( 1 );
 1295              		.loc 1 619 0
 1296 002c 2069     		ldr	r0, [r4, #16]	@ _4, this_9(D)->ce
 1297 002e 0121     		movs	r1, #1	@,
 1298 0030 0368     		ldr	r3, [r0]	@ _4->_vptr.output_pin, _4->_vptr.output_pin
 1299              	@ rfm70.cpp:620: }
 620:rfm70.cpp     **** }
 1300              		.loc 1 620 0
 1301              		@ sp needed	@
 1302              	@ rfm70.cpp:619:    RFM70_CE( 1 );
 619:rfm70.cpp     ****    RFM70_CE( 1 );
 1303              		.loc 1 619 0
 1304 0032 1B68     		ldr	r3, [r3]	@ *_5, *_5
 1305 0034 9847     		blx	r3	@ *_5
 1306              	.LVL155:
 1307              	.LVL156:
 1308              	@ rfm70.cpp:620: }
 1309              		.loc 1 620 0
 1310 0036 70BD     		pop	{r4, r5, r6, pc}
 1311              		.cfi_endproc
 1312              	.LFE21:
 1313              		.size	_ZN5rfm7013air_data_rateEh, .-_ZN5rfm7013air_data_rateEh
 1314              		.section	.text._ZN5rfm7010crc_lengthEh,"ax",%progbits
 1315              		.align	1
 1316              		.global	_ZN5rfm7010crc_lengthEh
 1317              		.syntax unified
 1318              		.code	16
 1319              		.thumb_func
 1320              		.fpu softvfp
 1321              		.type	_ZN5rfm7010crc_lengthEh, %function
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 36


 1322              	_ZN5rfm7010crc_lengthEh:
 1323              	.LFB22:
 621:rfm70.cpp     **** 
 622:rfm70.cpp     **** void rfm70::crc_length( unsigned char len ){
 1324              		.loc 1 622 0
 1325              		.cfi_startproc
 1326              		@ args = 0, pretend = 0, frame = 0
 1327              		@ frame_needed = 0, uses_anonymous_args = 0
 1328              	.LVL157:
 1329 0000 70B5     		push	{r4, r5, r6, lr}	@
 1330              		.cfi_def_cfa_offset 16
 1331              		.cfi_offset 4, -16
 1332              		.cfi_offset 5, -12
 1333              		.cfi_offset 6, -8
 1334              		.cfi_offset 14, -4
 1335              	@ rfm70.cpp:622: void rfm70::crc_length( unsigned char len ){
 1336              		.loc 1 622 0
 1337 0002 0E00     		movs	r6, r1	@ len, len
 1338              	.LVL158:
 1339              	@ rfm70.cpp:627:    val = rfm70::register_read( RFM70_REG_CONFIG );
 623:rfm70.cpp     ****    unsigned char val;
 624:rfm70.cpp     ****    if( len > 2 ){
 625:rfm70.cpp     ****       len = 2;
 626:rfm70.cpp     ****    }   
 627:rfm70.cpp     ****    val = rfm70::register_read( RFM70_REG_CONFIG );
 1340              		.loc 1 627 0
 1341 0004 0021     		movs	r1, #0	@,
 1342              	@ rfm70.cpp:622: void rfm70::crc_length( unsigned char len ){
 622:rfm70.cpp     ****    unsigned char val;
 1343              		.loc 1 622 0
 1344 0006 0500     		movs	r5, r0	@ this, this
 1345              	@ rfm70.cpp:627:    val = rfm70::register_read( RFM70_REG_CONFIG );
 1346              		.loc 1 627 0
 1347 0008 FFF7FEFF 		bl	_ZN5rfm7013register_readEh	@
 1348              	.LVL159:
 1349 000c 0400     		movs	r4, r0	@ tmp115,
 1350              	.LVL160:
 1351              	@ rfm70.cpp:628:    if( len == 0 ){
 628:rfm70.cpp     ****    if( len == 0 ){
 1352              		.loc 1 628 0
 1353 000e 002E     		cmp	r6, #0	@ len,
 1354 0010 0BD1     		bne	.L40	@,
 1355              	.LVL161:
 1356              	@ rfm70.cpp:630:       rfm70::register_write( RFM70_REG_EN_AA, 0 );
 629:rfm70.cpp     ****       val &= 0xF3;
 630:rfm70.cpp     ****       rfm70::register_write( RFM70_REG_EN_AA, 0 );
 1357              		.loc 1 630 0
 1358 0012 3200     		movs	r2, r6	@, len
 1359 0014 0121     		movs	r1, #1	@,
 1360 0016 2800     		movs	r0, r5	@, this
 1361 0018 FFF7FEFF 		bl	_ZN5rfm7014register_writeEhh	@
 1362              	.LVL162:
 1363              	@ rfm70.cpp:629:       val &= 0xF3;
 629:rfm70.cpp     ****       val &= 0xF3;
 1364              		.loc 1 629 0
 1365 001c F322     		movs	r2, #243	@ tmp117,
 1366              	@ rfm70.cpp:631:       rfm70::register_write( RFM70_REG_CONFIG, val );
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 37


 631:rfm70.cpp     ****       rfm70::register_write( RFM70_REG_CONFIG, val );
 1367              		.loc 1 631 0
 1368 001e 2240     		ands	r2, r4	@ tmp119, tmp115
 1369              	.LVL163:
 1370              	.L42:
 1371              	@ rfm70.cpp:638:       rfm70::register_write( RFM70_REG_CONFIG, val );
 632:rfm70.cpp     ****    } else {
 633:rfm70.cpp     ****       rfm70::register_write( RFM70_REG_EN_AA, 0x3F );
 634:rfm70.cpp     ****       val &= 0xFB;
 635:rfm70.cpp     ****       if( val == 2 ){
 636:rfm70.cpp     ****          val |= 0x04; 
 637:rfm70.cpp     ****       }   
 638:rfm70.cpp     ****       rfm70::register_write( RFM70_REG_CONFIG, val );
 1372              		.loc 1 638 0
 1373 0020 2800     		movs	r0, r5	@, this
 1374 0022 0021     		movs	r1, #0	@,
 1375 0024 FFF7FEFF 		bl	_ZN5rfm7014register_writeEhh	@
 1376              	.LVL164:
 1377              	@ rfm70.cpp:640: }
 639:rfm70.cpp     ****    }  
 640:rfm70.cpp     **** }
 1378              		.loc 1 640 0
 1379              		@ sp needed	@
 1380              	.LVL165:
 1381              	.LVL166:
 1382 0028 70BD     		pop	{r4, r5, r6, pc}
 1383              	.LVL167:
 1384              	.L40:
 1385              	@ rfm70.cpp:633:       rfm70::register_write( RFM70_REG_EN_AA, 0x3F );
 633:rfm70.cpp     ****       val &= 0xFB;
 1386              		.loc 1 633 0
 1387 002a 3F22     		movs	r2, #63	@,
 1388 002c 0121     		movs	r1, #1	@,
 1389 002e 2800     		movs	r0, r5	@, this
 1390 0030 FFF7FEFF 		bl	_ZN5rfm7014register_writeEhh	@
 1391              	.LVL168:
 1392              	@ rfm70.cpp:634:       val &= 0xFB;
 634:rfm70.cpp     ****       if( val == 2 ){
 1393              		.loc 1 634 0
 1394 0034 FB22     		movs	r2, #251	@ tmp120,
 1395 0036 2240     		ands	r2, r4	@ val, tmp115
 1396              	.LVL169:
 1397              	@ rfm70.cpp:635:       if( val == 2 ){
 635:rfm70.cpp     ****          val |= 0x04; 
 1398              		.loc 1 635 0
 1399 0038 022A     		cmp	r2, #2	@ val,
 1400 003a F1D1     		bne	.L42	@,
 1401              	@ rfm70.cpp:636:          val |= 0x04; 
 636:rfm70.cpp     ****       }   
 1402              		.loc 1 636 0
 1403 003c 0432     		adds	r2, r2, #4	@ val,
 1404              	.LVL170:
 1405 003e EFE7     		b	.L42	@
 1406              		.cfi_endproc
 1407              	.LFE22:
 1408              		.size	_ZN5rfm7010crc_lengthEh, .-_ZN5rfm7010crc_lengthEh
 1409              		.section	.text._ZN5rfm7014address_lengthEh,"ax",%progbits
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 38


 1410              		.align	1
 1411              		.global	_ZN5rfm7014address_lengthEh
 1412              		.syntax unified
 1413              		.code	16
 1414              		.thumb_func
 1415              		.fpu softvfp
 1416              		.type	_ZN5rfm7014address_lengthEh, %function
 1417              	_ZN5rfm7014address_lengthEh:
 1418              	.LFB23:
 641:rfm70.cpp     **** 
 642:rfm70.cpp     **** void rfm70::address_length( unsigned char len ){
 1419              		.loc 1 642 0
 1420              		.cfi_startproc
 1421              		@ args = 0, pretend = 0, frame = 0
 1422              		@ frame_needed = 0, uses_anonymous_args = 0
 1423              	.LVL171:
 1424 0000 10B5     		push	{r4, lr}	@
 1425              		.cfi_def_cfa_offset 8
 1426              		.cfi_offset 4, -8
 1427              		.cfi_offset 14, -4
 1428 0002 0A1C     		adds	r2, r1, #0	@ len, len
 1429 0004 0329     		cmp	r1, #3	@ len,
 1430 0006 00D2     		bcs	.L44	@,
 1431 0008 0322     		movs	r2, #3	@ len,
 1432              	.L44:
 1433              	.LVL172:
 1434              	@ rfm70.cpp:649:    rfm70::register_write( RFM70_REG_SETUP_AW, len - 2  );   
 643:rfm70.cpp     ****    if( len > 5 ){
 644:rfm70.cpp     ****       len = 5;
 645:rfm70.cpp     ****    }
 646:rfm70.cpp     ****    if( len < 3 ){
 647:rfm70.cpp     ****       len = 3;    
 648:rfm70.cpp     ****    }
 649:rfm70.cpp     ****    rfm70::register_write( RFM70_REG_SETUP_AW, len - 2  );   
 1435              		.loc 1 649 0
 1436 000a D3B2     		uxtb	r3, r2	@ len, len
 1437 000c 052B     		cmp	r3, #5	@ len,
 1438 000e 00D9     		bls	.L45	@,
 1439 0010 0522     		movs	r2, #5	@ len,
 1440              	.LVL173:
 1441              	.L45:
 1442 0012 023A     		subs	r2, r2, #2	@ tmp121,
 1443 0014 D2B2     		uxtb	r2, r2	@ tmp122, tmp121
 1444 0016 0321     		movs	r1, #3	@,
 1445 0018 FFF7FEFF 		bl	_ZN5rfm7014register_writeEhh	@
 1446              	.LVL174:
 1447              	@ rfm70.cpp:650: }
 650:rfm70.cpp     **** }
 1448              		.loc 1 650 0
 1449              		@ sp needed	@
 1450 001c 10BD     		pop	{r4, pc}
 1451              		.cfi_endproc
 1452              	.LFE23:
 1453              		.size	_ZN5rfm7014address_lengthEh, .-_ZN5rfm7014address_lengthEh
 1454              		.section	.text._ZN5rfm7018transmit_fifo_fullEv,"ax",%progbits
 1455              		.align	1
 1456              		.global	_ZN5rfm7018transmit_fifo_fullEv
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 39


 1457              		.syntax unified
 1458              		.code	16
 1459              		.thumb_func
 1460              		.fpu softvfp
 1461              		.type	_ZN5rfm7018transmit_fifo_fullEv, %function
 1462              	_ZN5rfm7018transmit_fifo_fullEv:
 1463              	.LFB24:
 651:rfm70.cpp     **** 
 652:rfm70.cpp     **** bool rfm70::transmit_fifo_full( void ){
 1464              		.loc 1 652 0
 1465              		.cfi_startproc
 1466              		@ args = 0, pretend = 0, frame = 0
 1467              		@ frame_needed = 0, uses_anonymous_args = 0
 1468              	.LVL175:
 1469 0000 10B5     		push	{r4, lr}	@
 1470              		.cfi_def_cfa_offset 8
 1471              		.cfi_offset 4, -8
 1472              		.cfi_offset 14, -4
 1473              	@ rfm70.cpp:654:   s = rfm70::register_read( RFM70_REG_FIFO_STATUS );
 653:rfm70.cpp     ****   unsigned char s;
 654:rfm70.cpp     ****   s = rfm70::register_read( RFM70_REG_FIFO_STATUS );
 1474              		.loc 1 654 0
 1475 0002 1721     		movs	r1, #23	@,
 1476 0004 FFF7FEFF 		bl	_ZN5rfm7013register_readEh	@
 1477              	.LVL176:
 1478              	@ rfm70.cpp:655:   return ( s & FIFO_STATUS_TX_FULL ) != 0;
 655:rfm70.cpp     ****   return ( s & FIFO_STATUS_TX_FULL ) != 0;
 1479              		.loc 1 655 0
 1480 0008 8006     		lsls	r0, r0, #26	@ tmp120, tmp114,
 1481              	.LVL177:
 1482 000a C00F     		lsrs	r0, r0, #31	@ tmp121, tmp120,
 1483              	@ rfm70.cpp:656: }
 656:rfm70.cpp     **** }
 1484              		.loc 1 656 0
 1485              		@ sp needed	@
 1486 000c 10BD     		pop	{r4, pc}
 1487              		.cfi_endproc
 1488              	.LFE24:
 1489              		.size	_ZN5rfm7018transmit_fifo_fullEv, .-_ZN5rfm7018transmit_fifo_fullEv
 1490              		.section	.text._ZN5rfm7018receive_fifo_emptyEv,"ax",%progbits
 1491              		.align	1
 1492              		.global	_ZN5rfm7018receive_fifo_emptyEv
 1493              		.syntax unified
 1494              		.code	16
 1495              		.thumb_func
 1496              		.fpu softvfp
 1497              		.type	_ZN5rfm7018receive_fifo_emptyEv, %function
 1498              	_ZN5rfm7018receive_fifo_emptyEv:
 1499              	.LFB25:
 657:rfm70.cpp     ****     
 658:rfm70.cpp     **** bool rfm70::receive_fifo_empty( void ){
 1500              		.loc 1 658 0
 1501              		.cfi_startproc
 1502              		@ args = 0, pretend = 0, frame = 0
 1503              		@ frame_needed = 0, uses_anonymous_args = 0
 1504              	.LVL178:
 1505 0000 10B5     		push	{r4, lr}	@
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 40


 1506              		.cfi_def_cfa_offset 8
 1507              		.cfi_offset 4, -8
 1508              		.cfi_offset 14, -4
 1509              	@ rfm70.cpp:660:   s = rfm70::register_read( RFM70_REG_FIFO_STATUS );
 659:rfm70.cpp     ****   unsigned char s;
 660:rfm70.cpp     ****   s = rfm70::register_read( RFM70_REG_FIFO_STATUS );
 1510              		.loc 1 660 0
 1511 0002 1721     		movs	r1, #23	@,
 1512 0004 FFF7FEFF 		bl	_ZN5rfm7013register_readEh	@
 1513              	.LVL179:
 1514              	@ rfm70.cpp:661:   return ( s & FIFO_STATUS_RX_EMPTY ) != 0;
 661:rfm70.cpp     ****   return ( s & FIFO_STATUS_RX_EMPTY ) != 0;
 1515              		.loc 1 661 0
 1516 0008 0123     		movs	r3, #1	@ tmp118,
 1517              	@ rfm70.cpp:662: }
 662:rfm70.cpp     **** }
 1518              		.loc 1 662 0
 1519              		@ sp needed	@
 1520              	@ rfm70.cpp:661:   return ( s & FIFO_STATUS_RX_EMPTY ) != 0;
 661:rfm70.cpp     ****   return ( s & FIFO_STATUS_RX_EMPTY ) != 0;
 1521              		.loc 1 661 0
 1522 000a 1840     		ands	r0, r3	@ tmp119, tmp118
 1523              	.LVL180:
 1524              	@ rfm70.cpp:662: }
 1525              		.loc 1 662 0
 1526 000c 10BD     		pop	{r4, pc}
 1527              		.cfi_endproc
 1528              	.LFE25:
 1529              		.size	_ZN5rfm7018receive_fifo_emptyEv, .-_ZN5rfm7018receive_fifo_emptyEv
 1530              		.section	.text._ZN5rfm7018receive_address_p0EPKh,"ax",%progbits
 1531              		.align	1
 1532              		.global	_ZN5rfm7018receive_address_p0EPKh
 1533              		.syntax unified
 1534              		.code	16
 1535              		.thumb_func
 1536              		.fpu softvfp
 1537              		.type	_ZN5rfm7018receive_address_p0EPKh, %function
 1538              	_ZN5rfm7018receive_address_p0EPKh:
 1539              	.LFB26:
 663:rfm70.cpp     **** 
 664:rfm70.cpp     **** void rfm70::receive_address_p0( const unsigned char address[ 5 ] ){
 1540              		.loc 1 664 0
 1541              		.cfi_startproc
 1542              		@ args = 0, pretend = 0, frame = 0
 1543              		@ frame_needed = 0, uses_anonymous_args = 0
 1544              	.LVL181:
 1545 0000 10B5     		push	{r4, lr}	@
 1546              		.cfi_def_cfa_offset 8
 1547              		.cfi_offset 4, -8
 1548              		.cfi_offset 14, -4
 1549              	@ rfm70.cpp:664: void rfm70::receive_address_p0( const unsigned char address[ 5 ] ){
 1550              		.loc 1 664 0
 1551 0002 0A00     		movs	r2, r1	@ address, address
 1552              	@ rfm70.cpp:665:    rfm70::buffer_write( RFM70_REG_RX_ADDR_P0, address, 5 );  
 665:rfm70.cpp     ****    rfm70::buffer_write( RFM70_REG_RX_ADDR_P0, address, 5 );  
 1553              		.loc 1 665 0
 1554 0004 0523     		movs	r3, #5	@,
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 41


 1555 0006 0A21     		movs	r1, #10	@,
 1556              	.LVL182:
 1557 0008 FFF7FEFF 		bl	_ZN5rfm7012buffer_writeEcPKhh	@
 1558              	.LVL183:
 1559              	@ rfm70.cpp:666: }
 666:rfm70.cpp     **** }
 1560              		.loc 1 666 0
 1561              		@ sp needed	@
 1562 000c 10BD     		pop	{r4, pc}
 1563              		.cfi_endproc
 1564              	.LFE26:
 1565              		.size	_ZN5rfm7018receive_address_p0EPKh, .-_ZN5rfm7018receive_address_p0EPKh
 1566              		.section	.text._ZN5rfm7018receive_address_p1EPKh,"ax",%progbits
 1567              		.align	1
 1568              		.global	_ZN5rfm7018receive_address_p1EPKh
 1569              		.syntax unified
 1570              		.code	16
 1571              		.thumb_func
 1572              		.fpu softvfp
 1573              		.type	_ZN5rfm7018receive_address_p1EPKh, %function
 1574              	_ZN5rfm7018receive_address_p1EPKh:
 1575              	.LFB27:
 667:rfm70.cpp     **** 
 668:rfm70.cpp     **** void rfm70::receive_address_p1( const unsigned char address[ 5 ] ){
 1576              		.loc 1 668 0
 1577              		.cfi_startproc
 1578              		@ args = 0, pretend = 0, frame = 0
 1579              		@ frame_needed = 0, uses_anonymous_args = 0
 1580              	.LVL184:
 1581 0000 10B5     		push	{r4, lr}	@
 1582              		.cfi_def_cfa_offset 8
 1583              		.cfi_offset 4, -8
 1584              		.cfi_offset 14, -4
 1585              	@ rfm70.cpp:668: void rfm70::receive_address_p1( const unsigned char address[ 5 ] ){
 1586              		.loc 1 668 0
 1587 0002 0A00     		movs	r2, r1	@ address, address
 1588              	@ rfm70.cpp:669:    rfm70::buffer_write( RFM70_REG_RX_ADDR_P1, address, 5 );  
 669:rfm70.cpp     ****    rfm70::buffer_write( RFM70_REG_RX_ADDR_P1, address, 5 );  
 1589              		.loc 1 669 0
 1590 0004 0523     		movs	r3, #5	@,
 1591 0006 0B21     		movs	r1, #11	@,
 1592              	.LVL185:
 1593 0008 FFF7FEFF 		bl	_ZN5rfm7012buffer_writeEcPKhh	@
 1594              	.LVL186:
 1595              	@ rfm70.cpp:670: }
 670:rfm70.cpp     **** }
 1596              		.loc 1 670 0
 1597              		@ sp needed	@
 1598 000c 10BD     		pop	{r4, pc}
 1599              		.cfi_endproc
 1600              	.LFE27:
 1601              		.size	_ZN5rfm7018receive_address_p1EPKh, .-_ZN5rfm7018receive_address_p1EPKh
 1602              		.section	.text._ZN5rfm7018receive_address_pnEhh,"ax",%progbits
 1603              		.align	1
 1604              		.global	_ZN5rfm7018receive_address_pnEhh
 1605              		.syntax unified
 1606              		.code	16
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 42


 1607              		.thumb_func
 1608              		.fpu softvfp
 1609              		.type	_ZN5rfm7018receive_address_pnEhh, %function
 1610              	_ZN5rfm7018receive_address_pnEhh:
 1611              	.LFB28:
 671:rfm70.cpp     **** 
 672:rfm70.cpp     **** void rfm70::receive_address_pn( unsigned char channel, unsigned char address ){
 1612              		.loc 1 672 0
 1613              		.cfi_startproc
 1614              		@ args = 0, pretend = 0, frame = 0
 1615              		@ frame_needed = 0, uses_anonymous_args = 0
 1616              	.LVL187:
 1617 0000 10B5     		push	{r4, lr}	@
 1618              		.cfi_def_cfa_offset 8
 1619              		.cfi_offset 4, -8
 1620              		.cfi_offset 14, -4
 1621              	@ rfm70.cpp:673:    rfm70::register_write( RFM70_REG_RX_ADDR_P0 + channel, address ); 
 673:rfm70.cpp     ****    rfm70::register_write( RFM70_REG_RX_ADDR_P0 + channel, address ); 
 1622              		.loc 1 673 0
 1623 0002 0A31     		adds	r1, r1, #10	@ tmp114,
 1624              	.LVL188:
 1625 0004 C9B2     		uxtb	r1, r1	@ tmp115, tmp114
 1626 0006 FFF7FEFF 		bl	_ZN5rfm7014register_writeEhh	@
 1627              	.LVL189:
 1628              	@ rfm70.cpp:674: }
 674:rfm70.cpp     **** }
 1629              		.loc 1 674 0
 1630              		@ sp needed	@
 1631 000a 10BD     		pop	{r4, pc}
 1632              		.cfi_endproc
 1633              	.LFE28:
 1634              		.size	_ZN5rfm7018receive_address_pnEhh, .-_ZN5rfm7018receive_address_pnEhh
 1635              		.section	.text._ZN5rfm7016transmit_addressEPKh,"ax",%progbits
 1636              		.align	1
 1637              		.global	_ZN5rfm7016transmit_addressEPKh
 1638              		.syntax unified
 1639              		.code	16
 1640              		.thumb_func
 1641              		.fpu softvfp
 1642              		.type	_ZN5rfm7016transmit_addressEPKh, %function
 1643              	_ZN5rfm7016transmit_addressEPKh:
 1644              	.LFB29:
 675:rfm70.cpp     **** 
 676:rfm70.cpp     **** void rfm70::transmit_address( const unsigned char *address ){
 1645              		.loc 1 676 0
 1646              		.cfi_startproc
 1647              		@ args = 0, pretend = 0, frame = 0
 1648              		@ frame_needed = 0, uses_anonymous_args = 0
 1649              	.LVL190:
 1650 0000 10B5     		push	{r4, lr}	@
 1651              		.cfi_def_cfa_offset 8
 1652              		.cfi_offset 4, -8
 1653              		.cfi_offset 14, -4
 1654              	@ rfm70.cpp:676: void rfm70::transmit_address( const unsigned char *address ){
 1655              		.loc 1 676 0
 1656 0002 0A00     		movs	r2, r1	@ address, address
 1657              	@ rfm70.cpp:677:    rfm70::buffer_write( RFM70_REG_TX_ADDR, address, 5 );   
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 43


 677:rfm70.cpp     ****    rfm70::buffer_write( RFM70_REG_TX_ADDR, address, 5 );   
 1658              		.loc 1 677 0
 1659 0004 0523     		movs	r3, #5	@,
 1660 0006 1021     		movs	r1, #16	@,
 1661              	.LVL191:
 1662 0008 FFF7FEFF 		bl	_ZN5rfm7012buffer_writeEcPKhh	@
 1663              	.LVL192:
 1664              	@ rfm70.cpp:678: } 
 678:rfm70.cpp     **** } 
 1665              		.loc 1 678 0
 1666              		@ sp needed	@
 1667 000c 10BD     		pop	{r4, pc}
 1668              		.cfi_endproc
 1669              	.LFE29:
 1670              		.size	_ZN5rfm7016transmit_addressEPKh, .-_ZN5rfm7016transmit_addressEPKh
 1671              		.section	.text._ZN5rfm7016retransmit_countEv,"ax",%progbits
 1672              		.align	1
 1673              		.global	_ZN5rfm7016retransmit_countEv
 1674              		.syntax unified
 1675              		.code	16
 1676              		.thumb_func
 1677              		.fpu softvfp
 1678              		.type	_ZN5rfm7016retransmit_countEv, %function
 1679              	_ZN5rfm7016retransmit_countEv:
 1680              	.LFB30:
 679:rfm70.cpp     **** 
 680:rfm70.cpp     **** unsigned char rfm70::retransmit_count( void ){
 1681              		.loc 1 680 0
 1682              		.cfi_startproc
 1683              		@ args = 0, pretend = 0, frame = 0
 1684              		@ frame_needed = 0, uses_anonymous_args = 0
 1685              	.LVL193:
 1686 0000 10B5     		push	{r4, lr}	@
 1687              		.cfi_def_cfa_offset 8
 1688              		.cfi_offset 4, -8
 1689              		.cfi_offset 14, -4
 1690              	@ rfm70.cpp:681:    return rfm70::register_read( RFM70_REG_OBSERVE_TX ) & 0x0F;   
 681:rfm70.cpp     ****    return rfm70::register_read( RFM70_REG_OBSERVE_TX ) & 0x0F;   
 1691              		.loc 1 681 0
 1692 0002 0821     		movs	r1, #8	@,
 1693 0004 FFF7FEFF 		bl	_ZN5rfm7013register_readEh	@
 1694              	.LVL194:
 1695 0008 0F23     		movs	r3, #15	@ tmp117,
 1696              	@ rfm70.cpp:682: }
 682:rfm70.cpp     **** }
 1697              		.loc 1 682 0
 1698              		@ sp needed	@
 1699              	@ rfm70.cpp:681:    return rfm70::register_read( RFM70_REG_OBSERVE_TX ) & 0x0F;   
 681:rfm70.cpp     ****    return rfm70::register_read( RFM70_REG_OBSERVE_TX ) & 0x0F;   
 1700              		.loc 1 681 0
 1701 000a 1840     		ands	r0, r3	@ tmp118, tmp117
 1702              	@ rfm70.cpp:682: }
 1703              		.loc 1 682 0
 1704 000c 10BD     		pop	{r4, pc}
 1705              		.cfi_endproc
 1706              	.LFE30:
 1707              		.size	_ZN5rfm7016retransmit_countEv, .-_ZN5rfm7016retransmit_countEv
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 44


 1708              		.section	.text._ZN5rfm7018lost_packets_countEv,"ax",%progbits
 1709              		.align	1
 1710              		.global	_ZN5rfm7018lost_packets_countEv
 1711              		.syntax unified
 1712              		.code	16
 1713              		.thumb_func
 1714              		.fpu softvfp
 1715              		.type	_ZN5rfm7018lost_packets_countEv, %function
 1716              	_ZN5rfm7018lost_packets_countEv:
 1717              	.LFB31:
 683:rfm70.cpp     **** 
 684:rfm70.cpp     **** unsigned char rfm70::lost_packets_count( void ){
 1718              		.loc 1 684 0
 1719              		.cfi_startproc
 1720              		@ args = 0, pretend = 0, frame = 0
 1721              		@ frame_needed = 0, uses_anonymous_args = 0
 1722              	.LVL195:
 1723 0000 10B5     		push	{r4, lr}	@
 1724              		.cfi_def_cfa_offset 8
 1725              		.cfi_offset 4, -8
 1726              		.cfi_offset 14, -4
 1727              	@ rfm70.cpp:685:    return ( rfm70::register_read( RFM70_REG_OBSERVE_TX ) >> 4 ) & 0x0F;   
 685:rfm70.cpp     ****    return ( rfm70::register_read( RFM70_REG_OBSERVE_TX ) >> 4 ) & 0x0F;   
 1728              		.loc 1 685 0
 1729 0002 0821     		movs	r1, #8	@,
 1730 0004 FFF7FEFF 		bl	_ZN5rfm7013register_readEh	@
 1731              	.LVL196:
 1732 0008 0011     		asrs	r0, r0, #4	@ tmp118, tmp115,
 1733 000a C0B2     		uxtb	r0, r0	@ tmp119, tmp118
 1734              	@ rfm70.cpp:686: }
 686:rfm70.cpp     **** }
 1735              		.loc 1 686 0
 1736              		@ sp needed	@
 1737 000c 10BD     		pop	{r4, pc}
 1738              		.cfi_endproc
 1739              	.LFE31:
 1740              		.size	_ZN5rfm7018lost_packets_countEv, .-_ZN5rfm7018lost_packets_countEv
 1741              		.section	.text._ZN5rfm7012pipe_autoackEhb,"ax",%progbits
 1742              		.align	1
 1743              		.global	_ZN5rfm7012pipe_autoackEhb
 1744              		.syntax unified
 1745              		.code	16
 1746              		.thumb_func
 1747              		.fpu softvfp
 1748              		.type	_ZN5rfm7012pipe_autoackEhb, %function
 1749              	_ZN5rfm7012pipe_autoackEhb:
 1750              	.LFB32:
 687:rfm70.cpp     **** 
 688:rfm70.cpp     **** void rfm70::pipe_autoack( unsigned char pipe, bool enabled ){
 1751              		.loc 1 688 0
 1752              		.cfi_startproc
 1753              		@ args = 0, pretend = 0, frame = 0
 1754              		@ frame_needed = 0, uses_anonymous_args = 0
 1755              	.LVL197:
 1756 0000 70B5     		push	{r4, r5, r6, lr}	@
 1757              		.cfi_def_cfa_offset 16
 1758              		.cfi_offset 4, -16
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 45


 1759              		.cfi_offset 5, -12
 1760              		.cfi_offset 6, -8
 1761              		.cfi_offset 14, -4
 1762              	@ rfm70.cpp:688: void rfm70::pipe_autoack( unsigned char pipe, bool enabled ){
 1763              		.loc 1 688 0
 1764 0002 0E00     		movs	r6, r1	@ pipe, pipe
 1765              	@ rfm70.cpp:689:    unsigned char val = rfm70::register_read( RFM70_REG_EN_AA ); 
 689:rfm70.cpp     ****    unsigned char val = rfm70::register_read( RFM70_REG_EN_AA ); 
 1766              		.loc 1 689 0
 1767 0004 0121     		movs	r1, #1	@,
 1768              	.LVL198:
 1769              	@ rfm70.cpp:688: void rfm70::pipe_autoack( unsigned char pipe, bool enabled ){
 688:rfm70.cpp     ****    unsigned char val = rfm70::register_read( RFM70_REG_EN_AA ); 
 1770              		.loc 1 688 0
 1771 0006 0400     		movs	r4, r0	@ this, this
 1772 0008 1500     		movs	r5, r2	@ enabled, enabled
 1773              	@ rfm70.cpp:689:    unsigned char val = rfm70::register_read( RFM70_REG_EN_AA ); 
 1774              		.loc 1 689 0
 1775 000a FFF7FEFF 		bl	_ZN5rfm7013register_readEh	@
 1776              	.LVL199:
 1777 000e 331C     		adds	r3, r6, #0	@ pipe, pipe
 1778 0010 052E     		cmp	r6, #5	@ pipe,
 1779 0012 00D9     		bls	.L55	@,
 1780 0014 0523     		movs	r3, #5	@ pipe,
 1781              	.L55:
 1782 0016 0121     		movs	r1, #1	@ tmp131,
 1783 0018 DBB2     		uxtb	r3, r3	@ pipe, pipe
 1784 001a 9940     		lsls	r1, r1, r3	@ tmp130, tmp131, pipe
 1785              	@ rfm70.cpp:696:       val &= ~ ( 1 << pipe );
 690:rfm70.cpp     ****    if( pipe > 5 ){ 
 691:rfm70.cpp     ****       pipe = 5; 
 692:rfm70.cpp     ****    }   
 693:rfm70.cpp     ****    if( enabled ){
 694:rfm70.cpp     ****       val |= 1 << pipe;
 695:rfm70.cpp     ****    } else {
 696:rfm70.cpp     ****       val &= ~ ( 1 << pipe );
 1786              		.loc 1 696 0
 1787 001c 0200     		movs	r2, r0	@ tmp138, tmp124
 1788 001e 4BB2     		sxtb	r3, r1	@ _25, tmp130
 1789 0020 9A43     		bics	r2, r3	@ tmp138, _25
 1790 0022 D2B2     		uxtb	r2, r2	@ val, tmp138
 1791              	@ rfm70.cpp:693:    if( enabled ){
 693:rfm70.cpp     ****       val |= 1 << pipe;
 1792              		.loc 1 693 0
 1793 0024 002D     		cmp	r5, #0	@ enabled,
 1794 0026 01D0     		beq	.L57	@,
 1795              	@ rfm70.cpp:694:       val |= 1 << pipe;
 694:rfm70.cpp     ****    } else {
 1796              		.loc 1 694 0
 1797 0028 0343     		orrs	r3, r0	@ tmp133, tmp124
 1798 002a DAB2     		uxtb	r2, r3	@ val, tmp133
 1799              	.LVL200:
 1800              	.L57:
 1801              	@ rfm70.cpp:698:    rfm70::register_write( RFM70_REG_EN_AA, val ); 
 697:rfm70.cpp     ****    }
 698:rfm70.cpp     ****    rfm70::register_write( RFM70_REG_EN_AA, val ); 
 1802              		.loc 1 698 0
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 46


 1803 002c 0121     		movs	r1, #1	@,
 1804 002e 2000     		movs	r0, r4	@, this
 1805 0030 FFF7FEFF 		bl	_ZN5rfm7014register_writeEhh	@
 1806              	.LVL201:
 1807              	@ rfm70.cpp:699: }
 699:rfm70.cpp     **** }
 1808              		.loc 1 699 0
 1809              		@ sp needed	@
 1810              	.LVL202:
 1811              	.LVL203:
 1812 0034 70BD     		pop	{r4, r5, r6, pc}
 1813              		.cfi_endproc
 1814              	.LFE32:
 1815              		.size	_ZN5rfm7012pipe_autoackEhb, .-_ZN5rfm7012pipe_autoackEhb
 1816              		.section	.text._ZN5rfm7011pipe_enableEhb,"ax",%progbits
 1817              		.align	1
 1818              		.global	_ZN5rfm7011pipe_enableEhb
 1819              		.syntax unified
 1820              		.code	16
 1821              		.thumb_func
 1822              		.fpu softvfp
 1823              		.type	_ZN5rfm7011pipe_enableEhb, %function
 1824              	_ZN5rfm7011pipe_enableEhb:
 1825              	.LFB33:
 700:rfm70.cpp     **** 
 701:rfm70.cpp     **** void rfm70::pipe_enable( unsigned char pipe, bool enabled ){
 1826              		.loc 1 701 0
 1827              		.cfi_startproc
 1828              		@ args = 0, pretend = 0, frame = 0
 1829              		@ frame_needed = 0, uses_anonymous_args = 0
 1830              	.LVL204:
 1831 0000 70B5     		push	{r4, r5, r6, lr}	@
 1832              		.cfi_def_cfa_offset 16
 1833              		.cfi_offset 4, -16
 1834              		.cfi_offset 5, -12
 1835              		.cfi_offset 6, -8
 1836              		.cfi_offset 14, -4
 1837              	@ rfm70.cpp:701: void rfm70::pipe_enable( unsigned char pipe, bool enabled ){
 1838              		.loc 1 701 0
 1839 0002 0E00     		movs	r6, r1	@ pipe, pipe
 1840              	@ rfm70.cpp:702:    unsigned char val = rfm70::register_read( RFM70_REG_EN_RXADDR ); 
 702:rfm70.cpp     ****    unsigned char val = rfm70::register_read( RFM70_REG_EN_RXADDR ); 
 1841              		.loc 1 702 0
 1842 0004 0221     		movs	r1, #2	@,
 1843              	.LVL205:
 1844              	@ rfm70.cpp:701: void rfm70::pipe_enable( unsigned char pipe, bool enabled ){
 701:rfm70.cpp     ****    unsigned char val = rfm70::register_read( RFM70_REG_EN_RXADDR ); 
 1845              		.loc 1 701 0
 1846 0006 0400     		movs	r4, r0	@ this, this
 1847 0008 1500     		movs	r5, r2	@ enabled, enabled
 1848              	@ rfm70.cpp:702:    unsigned char val = rfm70::register_read( RFM70_REG_EN_RXADDR ); 
 1849              		.loc 1 702 0
 1850 000a FFF7FEFF 		bl	_ZN5rfm7013register_readEh	@
 1851              	.LVL206:
 1852 000e 331C     		adds	r3, r6, #0	@ pipe, pipe
 1853 0010 052E     		cmp	r6, #5	@ pipe,
 1854 0012 00D9     		bls	.L59	@,
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 47


 1855 0014 0523     		movs	r3, #5	@ pipe,
 1856              	.L59:
 1857 0016 0121     		movs	r1, #1	@ tmp131,
 1858 0018 DBB2     		uxtb	r3, r3	@ pipe, pipe
 1859 001a 9940     		lsls	r1, r1, r3	@ tmp130, tmp131, pipe
 1860              	@ rfm70.cpp:709:       val &= ~ ( 1 << pipe );
 703:rfm70.cpp     ****    if( pipe > 5 ){ 
 704:rfm70.cpp     ****       pipe = 5; 
 705:rfm70.cpp     ****    }   
 706:rfm70.cpp     ****    if( enabled ){
 707:rfm70.cpp     ****       val |= 1 << pipe;
 708:rfm70.cpp     ****    } else {
 709:rfm70.cpp     ****       val &= ~ ( 1 << pipe );
 1861              		.loc 1 709 0
 1862 001c 0200     		movs	r2, r0	@ tmp138, tmp124
 1863 001e 4BB2     		sxtb	r3, r1	@ _25, tmp130
 1864 0020 9A43     		bics	r2, r3	@ tmp138, _25
 1865 0022 D2B2     		uxtb	r2, r2	@ val, tmp138
 1866              	@ rfm70.cpp:706:    if( enabled ){
 706:rfm70.cpp     ****       val |= 1 << pipe;
 1867              		.loc 1 706 0
 1868 0024 002D     		cmp	r5, #0	@ enabled,
 1869 0026 01D0     		beq	.L61	@,
 1870              	@ rfm70.cpp:707:       val |= 1 << pipe;
 707:rfm70.cpp     ****    } else {
 1871              		.loc 1 707 0
 1872 0028 0343     		orrs	r3, r0	@ tmp133, tmp124
 1873 002a DAB2     		uxtb	r2, r3	@ val, tmp133
 1874              	.LVL207:
 1875              	.L61:
 1876              	@ rfm70.cpp:711:    rfm70::register_write( RFM70_REG_EN_RXADDR, val ); 
 710:rfm70.cpp     ****    }
 711:rfm70.cpp     ****    rfm70::register_write( RFM70_REG_EN_RXADDR, val ); 
 1877              		.loc 1 711 0
 1878 002c 0221     		movs	r1, #2	@,
 1879 002e 2000     		movs	r0, r4	@, this
 1880 0030 FFF7FEFF 		bl	_ZN5rfm7014register_writeEhh	@
 1881              	.LVL208:
 1882              	@ rfm70.cpp:712: }
 712:rfm70.cpp     **** }
 1883              		.loc 1 712 0
 1884              		@ sp needed	@
 1885              	.LVL209:
 1886              	.LVL210:
 1887 0034 70BD     		pop	{r4, r5, r6, pc}
 1888              		.cfi_endproc
 1889              	.LFE33:
 1890              		.size	_ZN5rfm7011pipe_enableEhb, .-_ZN5rfm7011pipe_enableEhb
 1891              		.section	.text._ZN5rfm7018lost_packets_resetEv,"ax",%progbits
 1892              		.align	1
 1893              		.global	_ZN5rfm7018lost_packets_resetEv
 1894              		.syntax unified
 1895              		.code	16
 1896              		.thumb_func
 1897              		.fpu softvfp
 1898              		.type	_ZN5rfm7018lost_packets_resetEv, %function
 1899              	_ZN5rfm7018lost_packets_resetEv:
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 48


 1900              	.LFB34:
 713:rfm70.cpp     **** 
 714:rfm70.cpp     **** void rfm70::lost_packets_reset( void ){
 1901              		.loc 1 714 0
 1902              		.cfi_startproc
 1903              		@ args = 0, pretend = 0, frame = 0
 1904              		@ frame_needed = 0, uses_anonymous_args = 0
 1905              	.LVL211:
 1906 0000 10B5     		push	{r4, lr}	@
 1907              		.cfi_def_cfa_offset 8
 1908              		.cfi_offset 4, -8
 1909              		.cfi_offset 14, -4
 1910              	@ rfm70.cpp:715:    unsigned char val = rfm70::register_read( RFM70_REG_RF_CH );  
 715:rfm70.cpp     ****    unsigned char val = rfm70::register_read( RFM70_REG_RF_CH );  
 1911              		.loc 1 715 0
 1912 0002 0521     		movs	r1, #5	@,
 1913              	@ rfm70.cpp:714: void rfm70::lost_packets_reset( void ){
 714:rfm70.cpp     ****    unsigned char val = rfm70::register_read( RFM70_REG_RF_CH );  
 1914              		.loc 1 714 0
 1915 0004 0400     		movs	r4, r0	@ this, this
 1916              	@ rfm70.cpp:715:    unsigned char val = rfm70::register_read( RFM70_REG_RF_CH );  
 1917              		.loc 1 715 0
 1918 0006 FFF7FEFF 		bl	_ZN5rfm7013register_readEh	@
 1919              	.LVL212:
 1920              	@ rfm70.cpp:716:    rfm70::register_write( RFM70_REG_RF_CH, val );    
 716:rfm70.cpp     ****    rfm70::register_write( RFM70_REG_RF_CH, val );    
 1921              		.loc 1 716 0
 1922 000a 0521     		movs	r1, #5	@,
 1923              	@ rfm70.cpp:715:    unsigned char val = rfm70::register_read( RFM70_REG_RF_CH );  
 715:rfm70.cpp     ****    unsigned char val = rfm70::register_read( RFM70_REG_RF_CH );  
 1924              		.loc 1 715 0
 1925 000c 0200     		movs	r2, r0	@ tmp112,
 1926              	.LVL213:
 1927              	@ rfm70.cpp:716:    rfm70::register_write( RFM70_REG_RF_CH, val );    
 1928              		.loc 1 716 0
 1929 000e 2000     		movs	r0, r4	@, this
 1930 0010 FFF7FEFF 		bl	_ZN5rfm7014register_writeEhh	@
 1931              	.LVL214:
 1932              	@ rfm70.cpp:717: }
 717:rfm70.cpp     **** }
 1933              		.loc 1 717 0
 1934              		@ sp needed	@
 1935              	.LVL215:
 1936 0014 10BD     		pop	{r4, pc}
 1937              		.cfi_endproc
 1938              	.LFE34:
 1939              		.size	_ZN5rfm7018lost_packets_resetEv, .-_ZN5rfm7018lost_packets_resetEv
 1940              		.section	.text._ZN5rfm7025retransmit_delay_attemptsEhh,"ax",%progbits
 1941              		.align	1
 1942              		.global	_ZN5rfm7025retransmit_delay_attemptsEhh
 1943              		.syntax unified
 1944              		.code	16
 1945              		.thumb_func
 1946              		.fpu softvfp
 1947              		.type	_ZN5rfm7025retransmit_delay_attemptsEhh, %function
 1948              	_ZN5rfm7025retransmit_delay_attemptsEhh:
 1949              	.LFB35:
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 49


 718:rfm70.cpp     **** 
 719:rfm70.cpp     **** void rfm70::retransmit_delay_attempts( unsigned char d, unsigned char n ){
 1950              		.loc 1 719 0
 1951              		.cfi_startproc
 1952              		@ args = 0, pretend = 0, frame = 0
 1953              		@ frame_needed = 0, uses_anonymous_args = 0
 1954              	.LVL216:
 1955              	@ rfm70.cpp:721:       RFM70_REG_SETUP_RETR, ( n & 0x0F ) | (( d & 0x0F ) << 4 ));
 720:rfm70.cpp     ****    rfm70::register_write( 
 721:rfm70.cpp     ****       RFM70_REG_SETUP_RETR, ( n & 0x0F ) | (( d & 0x0F ) << 4 ));
 1956              		.loc 1 721 0
 1957 0000 0F23     		movs	r3, #15	@ tmp122,
 1958              	@ rfm70.cpp:719: void rfm70::retransmit_delay_attempts( unsigned char d, unsigned char n ){
 719:rfm70.cpp     ****    rfm70::register_write( 
 1959              		.loc 1 719 0
 1960 0002 10B5     		push	{r4, lr}	@
 1961              		.cfi_def_cfa_offset 8
 1962              		.cfi_offset 4, -8
 1963              		.cfi_offset 14, -4
 1964              	@ rfm70.cpp:721:       RFM70_REG_SETUP_RETR, ( n & 0x0F ) | (( d & 0x0F ) << 4 ));
 1965              		.loc 1 721 0
 1966 0004 1A40     		ands	r2, r3	@ tmp121, tmp122
 1967              	.LVL217:
 1968 0006 0901     		lsls	r1, r1, #4	@ tmp123, d,
 1969              	.LVL218:
 1970 0008 0A43     		orrs	r2, r1	@ tmp126, tmp123
 1971              	@ rfm70.cpp:720:    rfm70::register_write( 
 720:rfm70.cpp     ****    rfm70::register_write( 
 1972              		.loc 1 720 0
 1973 000a D2B2     		uxtb	r2, r2	@ tmp127, tmp126
 1974 000c 0421     		movs	r1, #4	@,
 1975 000e FFF7FEFF 		bl	_ZN5rfm7014register_writeEhh	@
 1976              	.LVL219:
 1977              	@ rfm70.cpp:722: }
 722:rfm70.cpp     **** }
 1978              		.loc 1 722 0
 1979              		@ sp needed	@
 1980 0012 10BD     		pop	{r4, pc}
 1981              		.cfi_endproc
 1982              	.LFE35:
 1983              		.size	_ZN5rfm7025retransmit_delay_attemptsEhh, .-_ZN5rfm7025retransmit_delay_attemptsEhh
 1984              		.section	.text._ZN5rfm708lna_highEv,"ax",%progbits
 1985              		.align	1
 1986              		.global	_ZN5rfm708lna_highEv
 1987              		.syntax unified
 1988              		.code	16
 1989              		.thumb_func
 1990              		.fpu softvfp
 1991              		.type	_ZN5rfm708lna_highEv, %function
 1992              	_ZN5rfm708lna_highEv:
 1993              	.LFB36:
 723:rfm70.cpp     **** 
 724:rfm70.cpp     **** void rfm70::lna_high( void ){
 1994              		.loc 1 724 0
 1995              		.cfi_startproc
 1996              		@ args = 0, pretend = 0, frame = 0
 1997              		@ frame_needed = 0, uses_anonymous_args = 0
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 50


 1998              	.LVL220:
 1999 0000 10B5     		push	{r4, lr}	@
 2000              		.cfi_def_cfa_offset 8
 2001              		.cfi_offset 4, -8
 2002              		.cfi_offset 14, -4
 2003              	@ rfm70.cpp:725:    unsigned char val = rfm70::register_read( RFM70_REG_RF_SETUP ); 
 725:rfm70.cpp     ****    unsigned char val = rfm70::register_read( RFM70_REG_RF_SETUP ); 
 2004              		.loc 1 725 0
 2005 0002 0621     		movs	r1, #6	@,
 2006              	@ rfm70.cpp:724: void rfm70::lna_high( void ){
 724:rfm70.cpp     ****    unsigned char val = rfm70::register_read( RFM70_REG_RF_SETUP ); 
 2007              		.loc 1 724 0
 2008 0004 0400     		movs	r4, r0	@ this, this
 2009              	@ rfm70.cpp:725:    unsigned char val = rfm70::register_read( RFM70_REG_RF_SETUP ); 
 2010              		.loc 1 725 0
 2011 0006 FFF7FEFF 		bl	_ZN5rfm7013register_readEh	@
 2012              	.LVL221:
 2013              	@ rfm70.cpp:726:    val |= 0x01;
 726:rfm70.cpp     ****    val |= 0x01;
 2014              		.loc 1 726 0
 2015 000a 0122     		movs	r2, #1	@ tmp116,
 2016 000c 0243     		orrs	r2, r0	@ tmp115, tmp113
 2017              	@ rfm70.cpp:727:    rfm70::register_write( RFM70_REG_RF_SETUP, val ); 
 727:rfm70.cpp     ****    rfm70::register_write( RFM70_REG_RF_SETUP, val ); 
 2018              		.loc 1 727 0
 2019 000e D2B2     		uxtb	r2, r2	@ tmp117, tmp115
 2020 0010 0621     		movs	r1, #6	@,
 2021 0012 2000     		movs	r0, r4	@, this
 2022              	.LVL222:
 2023 0014 FFF7FEFF 		bl	_ZN5rfm7014register_writeEhh	@
 2024              	.LVL223:
 2025              	@ rfm70.cpp:728: }
 728:rfm70.cpp     **** }
 2026              		.loc 1 728 0
 2027              		@ sp needed	@
 2028              	.LVL224:
 2029 0018 10BD     		pop	{r4, pc}
 2030              		.cfi_endproc
 2031              	.LFE36:
 2032              		.size	_ZN5rfm708lna_highEv, .-_ZN5rfm708lna_highEv
 2033              		.section	.text._ZN5rfm707lna_lowEv,"ax",%progbits
 2034              		.align	1
 2035              		.global	_ZN5rfm707lna_lowEv
 2036              		.syntax unified
 2037              		.code	16
 2038              		.thumb_func
 2039              		.fpu softvfp
 2040              		.type	_ZN5rfm707lna_lowEv, %function
 2041              	_ZN5rfm707lna_lowEv:
 2042              	.LFB37:
 729:rfm70.cpp     **** 
 730:rfm70.cpp     **** void rfm70::lna_low( void ){
 2043              		.loc 1 730 0
 2044              		.cfi_startproc
 2045              		@ args = 0, pretend = 0, frame = 0
 2046              		@ frame_needed = 0, uses_anonymous_args = 0
 2047              	.LVL225:
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 51


 2048 0000 10B5     		push	{r4, lr}	@
 2049              		.cfi_def_cfa_offset 8
 2050              		.cfi_offset 4, -8
 2051              		.cfi_offset 14, -4
 2052              	@ rfm70.cpp:731:    unsigned char val = rfm70::register_read( RFM70_REG_RF_SETUP ); 
 731:rfm70.cpp     ****    unsigned char val = rfm70::register_read( RFM70_REG_RF_SETUP ); 
 2053              		.loc 1 731 0
 2054 0002 0621     		movs	r1, #6	@,
 2055              	@ rfm70.cpp:730: void rfm70::lna_low( void ){
 730:rfm70.cpp     ****    unsigned char val = rfm70::register_read( RFM70_REG_RF_SETUP ); 
 2056              		.loc 1 730 0
 2057 0004 0400     		movs	r4, r0	@ this, this
 2058              	@ rfm70.cpp:731:    unsigned char val = rfm70::register_read( RFM70_REG_RF_SETUP ); 
 2059              		.loc 1 731 0
 2060 0006 FFF7FEFF 		bl	_ZN5rfm7013register_readEh	@
 2061              	.LVL226:
 2062              	@ rfm70.cpp:732:    val &= 0xFE;
 732:rfm70.cpp     ****    val &= 0xFE;
 2063              		.loc 1 732 0
 2064 000a FE22     		movs	r2, #254	@ tmp115,
 2065              	@ rfm70.cpp:733:    rfm70::register_write( RFM70_REG_RF_SETUP, val ); 
 733:rfm70.cpp     ****    rfm70::register_write( RFM70_REG_RF_SETUP, val ); 
 2066              		.loc 1 733 0
 2067 000c 0621     		movs	r1, #6	@,
 2068 000e 0240     		ands	r2, r0	@ tmp117, tmp113
 2069 0010 2000     		movs	r0, r4	@, this
 2070              	.LVL227:
 2071 0012 FFF7FEFF 		bl	_ZN5rfm7014register_writeEhh	@
 2072              	.LVL228:
 2073              	@ rfm70.cpp:734: }
 734:rfm70.cpp     **** }
 2074              		.loc 1 734 0
 2075              		@ sp needed	@
 2076              	.LVL229:
 2077 0016 10BD     		pop	{r4, pc}
 2078              		.cfi_endproc
 2079              	.LFE37:
 2080              		.size	_ZN5rfm707lna_lowEv, .-_ZN5rfm707lna_lowEv
 2081              		.section	.text._ZN5rfm705powerEh,"ax",%progbits
 2082              		.align	1
 2083              		.global	_ZN5rfm705powerEh
 2084              		.syntax unified
 2085              		.code	16
 2086              		.thumb_func
 2087              		.fpu softvfp
 2088              		.type	_ZN5rfm705powerEh, %function
 2089              	_ZN5rfm705powerEh:
 2090              	.LFB38:
 735:rfm70.cpp     **** 
 736:rfm70.cpp     **** void rfm70::power( unsigned char level ){
 2091              		.loc 1 736 0
 2092              		.cfi_startproc
 2093              		@ args = 0, pretend = 0, frame = 0
 2094              		@ frame_needed = 0, uses_anonymous_args = 0
 2095              	.LVL230:
 2096 0000 70B5     		push	{r4, r5, r6, lr}	@
 2097              		.cfi_def_cfa_offset 16
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 52


 2098              		.cfi_offset 4, -16
 2099              		.cfi_offset 5, -12
 2100              		.cfi_offset 6, -8
 2101              		.cfi_offset 14, -4
 2102              	@ rfm70.cpp:736: void rfm70::power( unsigned char level ){
 2103              		.loc 1 736 0
 2104 0002 0400     		movs	r4, r0	@ this, this
 2105              	@ rfm70.cpp:740:    RFM70_CE( 0 );
 737:rfm70.cpp     ****    if( level > 3 ){ 
 738:rfm70.cpp     ****        level = 3; 
 739:rfm70.cpp     ****    }
 740:rfm70.cpp     ****    RFM70_CE( 0 );
 2106              		.loc 1 740 0
 2107 0004 0069     		ldr	r0, [r0, #16]	@ _1, this_15(D)->ce
 2108              	.LVL231:
 2109              	@ rfm70.cpp:736: void rfm70::power( unsigned char level ){
 736:rfm70.cpp     ****    if( level > 3 ){ 
 2110              		.loc 1 736 0
 2111 0006 0D00     		movs	r5, r1	@ level, level
 2112              	.LVL232:
 2113              	@ rfm70.cpp:740:    RFM70_CE( 0 );
 2114              		.loc 1 740 0
 2115 0008 0368     		ldr	r3, [r0]	@ _1->_vptr.output_pin, _1->_vptr.output_pin
 2116 000a 0021     		movs	r1, #0	@,
 2117 000c 1B68     		ldr	r3, [r3]	@ *_2, *_2
 2118 000e 9847     		blx	r3	@ *_2
 2119              	.LVL233:
 2120              	@ rfm70.cpp:741:    unsigned char val = rfm70::register_read( RFM70_REG_RF_SETUP ); 
 741:rfm70.cpp     ****    unsigned char val = rfm70::register_read( RFM70_REG_RF_SETUP ); 
 2121              		.loc 1 741 0
 2122 0010 0621     		movs	r1, #6	@,
 2123 0012 2000     		movs	r0, r4	@, this
 2124 0014 FFF7FEFF 		bl	_ZN5rfm7013register_readEh	@
 2125              	.LVL234:
 2126              	@ rfm70.cpp:742:    val &= 0x09; 
 742:rfm70.cpp     ****    val &= 0x09; 
 2127              		.loc 1 742 0
 2128 0018 0921     		movs	r1, #9	@ tmp133,
 2129              	@ rfm70.cpp:744:    val |= ( level << 1 );
 743:rfm70.cpp     ****    val |= 0x30;
 744:rfm70.cpp     ****    val |= ( level << 1 );
 2130              		.loc 1 744 0
 2131 001a 2A1C     		adds	r2, r5, #0	@ level, level
 2132              	@ rfm70.cpp:742:    val &= 0x09; 
 742:rfm70.cpp     ****    val &= 0x09; 
 2133              		.loc 1 742 0
 2134 001c 0140     		ands	r1, r0	@ val, tmp130
 2135              	.LVL235:
 2136              	@ rfm70.cpp:744:    val |= ( level << 1 );
 2137              		.loc 1 744 0
 2138 001e 032D     		cmp	r5, #3	@ level,
 2139 0020 00D9     		bls	.L67	@,
 2140 0022 0322     		movs	r2, #3	@ level,
 2141              	.L67:
 2142              	@ rfm70.cpp:743:    val |= 0x30;
 743:rfm70.cpp     ****    val |= 0x30;
 2143              		.loc 1 743 0
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 53


 2144 0024 3020     		movs	r0, #48	@ tmp140,
 2145              	@ rfm70.cpp:744:    val |= ( level << 1 );
 2146              		.loc 1 744 0
 2147 0026 D2B2     		uxtb	r2, r2	@ level, level
 2148              	@ rfm70.cpp:743:    val |= 0x30;
 743:rfm70.cpp     ****    val |= 0x30;
 2149              		.loc 1 743 0
 2150 0028 0843     		orrs	r0, r1	@ tmp139, val
 2151              	@ rfm70.cpp:744:    val |= ( level << 1 );
 2152              		.loc 1 744 0
 2153 002a 5200     		lsls	r2, r2, #1	@ tmp138, level,
 2154 002c 0243     		orrs	r2, r0	@ tmp143, tmp139
 2155              	.LVL236:
 2156              	@ rfm70.cpp:745:    rfm70::register_write( RFM70_REG_RF_SETUP, val ); 
 745:rfm70.cpp     ****    rfm70::register_write( RFM70_REG_RF_SETUP, val ); 
 2157              		.loc 1 745 0
 2158 002e D2B2     		uxtb	r2, r2	@ _8, tmp143
 2159 0030 2000     		movs	r0, r4	@, this
 2160 0032 0621     		movs	r1, #6	@,
 2161 0034 FFF7FEFF 		bl	_ZN5rfm7014register_writeEhh	@
 2162              	.LVL237:
 2163              	@ rfm70.cpp:746:    RFM70_CE( 1 );
 746:rfm70.cpp     ****    RFM70_CE( 1 );
 2164              		.loc 1 746 0
 2165 0038 2069     		ldr	r0, [r4, #16]	@ _9, this_15(D)->ce
 2166 003a 0121     		movs	r1, #1	@,
 2167 003c 0368     		ldr	r3, [r0]	@ _9->_vptr.output_pin, _9->_vptr.output_pin
 2168              	@ rfm70.cpp:747: }
 747:rfm70.cpp     **** }
 2169              		.loc 1 747 0
 2170              		@ sp needed	@
 2171              	@ rfm70.cpp:746:    RFM70_CE( 1 );
 746:rfm70.cpp     ****    RFM70_CE( 1 );
 2172              		.loc 1 746 0
 2173 003e 1B68     		ldr	r3, [r3]	@ *_10, *_10
 2174 0040 9847     		blx	r3	@ *_10
 2175              	.LVL238:
 2176              	.LVL239:
 2177              	.LVL240:
 2178              	@ rfm70.cpp:747: }
 2179              		.loc 1 747 0
 2180 0042 70BD     		pop	{r4, r5, r6, pc}
 2181              		.cfi_endproc
 2182              	.LFE38:
 2183              		.size	_ZN5rfm705powerEh, .-_ZN5rfm705powerEh
 2184              		.section	.text._ZN5rfm7020channel_payload_sizeEhh,"ax",%progbits
 2185              		.align	1
 2186              		.global	_ZN5rfm7020channel_payload_sizeEhh
 2187              		.syntax unified
 2188              		.code	16
 2189              		.thumb_func
 2190              		.fpu softvfp
 2191              		.type	_ZN5rfm7020channel_payload_sizeEhh, %function
 2192              	_ZN5rfm7020channel_payload_sizeEhh:
 2193              	.LFB39:
 748:rfm70.cpp     **** 
 749:rfm70.cpp     **** void rfm70::channel_payload_size( unsigned char channel, unsigned char size ){
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 54


 2194              		.loc 1 749 0
 2195              		.cfi_startproc
 2196              		@ args = 0, pretend = 0, frame = 0
 2197              		@ frame_needed = 0, uses_anonymous_args = 0
 2198              	.LVL241:
 2199 0000 F8B5     		push	{r3, r4, r5, r6, r7, lr}	@
 2200              		.cfi_def_cfa_offset 24
 2201              		.cfi_offset 3, -24
 2202              		.cfi_offset 4, -20
 2203              		.cfi_offset 5, -16
 2204              		.cfi_offset 6, -12
 2205              		.cfi_offset 7, -8
 2206              		.cfi_offset 14, -4
 2207              	@ rfm70.cpp:749: void rfm70::channel_payload_size( unsigned char channel, unsigned char size ){
 2208              		.loc 1 749 0
 2209 0002 0600     		movs	r6, r0	@ this, this
 2210 0004 0C00     		movs	r4, r1	@ channel, channel
 2211 0006 1700     		movs	r7, r2	@ size, size
 2212 0008 151C     		adds	r5, r2, #0	@ size, size
 2213 000a 202A     		cmp	r2, #32	@ size,
 2214 000c 00D9     		bls	.L69	@,
 2215 000e 2025     		movs	r5, #32	@ size,
 2216              	.L69:
 2217              	@ rfm70.cpp:754:    val = rfm70::register_read( RFM70_REG_DYNPD );  
 750:rfm70.cpp     ****    unsigned char val;
 751:rfm70.cpp     ****    if( size > 32 ){
 752:rfm70.cpp     ****       size = 32;
 753:rfm70.cpp     ****    }
 754:rfm70.cpp     ****    val = rfm70::register_read( RFM70_REG_DYNPD );  
 2218              		.loc 1 754 0
 2219 0010 1C21     		movs	r1, #28	@,
 2220              	.LVL242:
 2221 0012 3000     		movs	r0, r6	@, this
 2222              	.LVL243:
 2223 0014 FFF7FEFF 		bl	_ZN5rfm7013register_readEh	@
 2224              	.LVL244:
 2225 0018 0121     		movs	r1, #1	@ tmp131,
 2226 001a A140     		lsls	r1, r1, r4	@ tmp130, tmp131, channel
 2227              	@ rfm70.cpp:758:       val &= ~ ( 1 << channel );
 755:rfm70.cpp     ****    if( size == 0 ){
 756:rfm70.cpp     ****       val |= 1 << channel;
 757:rfm70.cpp     ****    } else {
 758:rfm70.cpp     ****       val &= ~ ( 1 << channel );
 2228              		.loc 1 758 0
 2229 001c 0200     		movs	r2, r0	@ tmp138, tmp128
 2230 001e 4BB2     		sxtb	r3, r1	@ _27, tmp130
 2231 0020 9A43     		bics	r2, r3	@ tmp138, _27
 2232 0022 EDB2     		uxtb	r5, r5	@ size, size
 2233              	.LVL245:
 2234 0024 D2B2     		uxtb	r2, r2	@ val, tmp138
 2235              	@ rfm70.cpp:755:    if( size == 0 ){
 755:rfm70.cpp     ****    if( size == 0 ){
 2236              		.loc 1 755 0
 2237 0026 002F     		cmp	r7, #0	@ size,
 2238 0028 01D1     		bne	.L71	@,
 2239              	@ rfm70.cpp:756:       val |= 1 << channel;
 756:rfm70.cpp     ****    } else {
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 55


 2240              		.loc 1 756 0
 2241 002a 0343     		orrs	r3, r0	@ tmp133, tmp128
 2242 002c DAB2     		uxtb	r2, r3	@ val, tmp133
 2243              	.LVL246:
 2244              	.L71:
 2245              	@ rfm70.cpp:760:    rfm70::register_write( RFM70_REG_DYNPD, val );
 759:rfm70.cpp     ****    }    
 760:rfm70.cpp     ****    rfm70::register_write( RFM70_REG_DYNPD, val );
 2246              		.loc 1 760 0
 2247 002e 3000     		movs	r0, r6	@, this
 2248 0030 1C21     		movs	r1, #28	@,
 2249              	@ rfm70.cpp:761:    rfm70::register_write( RFM70_REG_RX_PW_P0 + channel, size );  
 761:rfm70.cpp     ****    rfm70::register_write( RFM70_REG_RX_PW_P0 + channel, size );  
 2250              		.loc 1 761 0
 2251 0032 1134     		adds	r4, r4, #17	@ tmp140,
 2252              	@ rfm70.cpp:760:    rfm70::register_write( RFM70_REG_DYNPD, val );
 760:rfm70.cpp     ****    rfm70::register_write( RFM70_REG_RX_PW_P0 + channel, size );  
 2253              		.loc 1 760 0
 2254 0034 FFF7FEFF 		bl	_ZN5rfm7014register_writeEhh	@
 2255              	.LVL247:
 2256              	@ rfm70.cpp:761:    rfm70::register_write( RFM70_REG_RX_PW_P0 + channel, size );  
 2257              		.loc 1 761 0
 2258 0038 2A00     		movs	r2, r5	@, size
 2259 003a 3000     		movs	r0, r6	@, this
 2260 003c E1B2     		uxtb	r1, r4	@ tmp141, tmp140
 2261 003e FFF7FEFF 		bl	_ZN5rfm7014register_writeEhh	@
 2262              	.LVL248:
 2263              	@ rfm70.cpp:762: }
 762:rfm70.cpp     **** }
 2264              		.loc 1 762 0
 2265              		@ sp needed	@
 2266              	.LVL249:
 2267 0042 F8BD     		pop	{r3, r4, r5, r6, r7, pc}
 2268              		.cfi_endproc
 2269              	.LFE39:
 2270              		.size	_ZN5rfm7020channel_payload_sizeEhh, .-_ZN5rfm7020channel_payload_sizeEhh
 2271              		.section	.text._ZN5rfm7016transmit_messageEPKhh,"ax",%progbits
 2272              		.align	1
 2273              		.global	_ZN5rfm7016transmit_messageEPKhh
 2274              		.syntax unified
 2275              		.code	16
 2276              		.thumb_func
 2277              		.fpu softvfp
 2278              		.type	_ZN5rfm7016transmit_messageEPKhh, %function
 2279              	_ZN5rfm7016transmit_messageEPKhh:
 2280              	.LFB40:
 763:rfm70.cpp     **** 
 764:rfm70.cpp     **** void rfm70::transmit_message(
 765:rfm70.cpp     ****    const unsigned char *buf,
 766:rfm70.cpp     ****    unsigned char length
 767:rfm70.cpp     **** ){
 2281              		.loc 1 767 0
 2282              		.cfi_startproc
 2283              		@ args = 0, pretend = 0, frame = 0
 2284              		@ frame_needed = 0, uses_anonymous_args = 0
 2285              	.LVL250:
 2286 0000 10B5     		push	{r4, lr}	@
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 56


 2287              		.cfi_def_cfa_offset 8
 2288              		.cfi_offset 4, -8
 2289              		.cfi_offset 14, -4
 2290              	@ rfm70.cpp:771:    rfm70::buffer_write( RFM70_CMD_W_TX_PAYLOAD, buf, length );
 768:rfm70.cpp     ****    if( length > 32 ){
 769:rfm70.cpp     ****       length = 32;
 770:rfm70.cpp     ****    }
 771:rfm70.cpp     ****    rfm70::buffer_write( RFM70_CMD_W_TX_PAYLOAD, buf, length );
 2291              		.loc 1 771 0
 2292 0002 131C     		adds	r3, r2, #0	@ length, length
 2293 0004 202A     		cmp	r2, #32	@ length,
 2294 0006 00D9     		bls	.L73	@,
 2295 0008 2023     		movs	r3, #32	@ length,
 2296              	.L73:
 2297 000a 0A00     		movs	r2, r1	@, buf
 2298              	.LVL251:
 2299 000c DBB2     		uxtb	r3, r3	@ length, length
 2300 000e A021     		movs	r1, #160	@,
 2301              	.LVL252:
 2302 0010 FFF7FEFF 		bl	_ZN5rfm7012buffer_writeEcPKhh	@
 2303              	.LVL253:
 2304              	@ rfm70.cpp:772: }
 772:rfm70.cpp     **** }
 2305              		.loc 1 772 0
 2306              		@ sp needed	@
 2307 0014 10BD     		pop	{r4, pc}
 2308              		.cfi_endproc
 2309              	.LFE40:
 2310              		.size	_ZN5rfm7016transmit_messageEPKhh, .-_ZN5rfm7016transmit_messageEPKhh
 2311              		.section	.text._ZN5rfm7021transmit_message_onceEPKhh,"ax",%progbits
 2312              		.align	1
 2313              		.global	_ZN5rfm7021transmit_message_onceEPKhh
 2314              		.syntax unified
 2315              		.code	16
 2316              		.thumb_func
 2317              		.fpu softvfp
 2318              		.type	_ZN5rfm7021transmit_message_onceEPKhh, %function
 2319              	_ZN5rfm7021transmit_message_onceEPKhh:
 2320              	.LFB41:
 773:rfm70.cpp     ****     
 774:rfm70.cpp     **** void rfm70::transmit_message_once(
 775:rfm70.cpp     ****    const unsigned char *buf,
 776:rfm70.cpp     ****    unsigned char length
 777:rfm70.cpp     **** ){
 2321              		.loc 1 777 0
 2322              		.cfi_startproc
 2323              		@ args = 0, pretend = 0, frame = 0
 2324              		@ frame_needed = 0, uses_anonymous_args = 0
 2325              	.LVL254:
 2326 0000 10B5     		push	{r4, lr}	@
 2327              		.cfi_def_cfa_offset 8
 2328              		.cfi_offset 4, -8
 2329              		.cfi_offset 14, -4
 2330              	@ rfm70.cpp:781:    rfm70::buffer_write( RFM70_CMD_W_TX_PAYLOAD_NOACK, buf, length );
 778:rfm70.cpp     ****    if( length > 32 ){
 779:rfm70.cpp     ****       length = 32;
 780:rfm70.cpp     ****    }
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 57


 781:rfm70.cpp     ****    rfm70::buffer_write( RFM70_CMD_W_TX_PAYLOAD_NOACK, buf, length );
 2331              		.loc 1 781 0
 2332 0002 131C     		adds	r3, r2, #0	@ length, length
 2333 0004 202A     		cmp	r2, #32	@ length,
 2334 0006 00D9     		bls	.L75	@,
 2335 0008 2023     		movs	r3, #32	@ length,
 2336              	.L75:
 2337 000a 0A00     		movs	r2, r1	@, buf
 2338              	.LVL255:
 2339 000c DBB2     		uxtb	r3, r3	@ length, length
 2340 000e B021     		movs	r1, #176	@,
 2341              	.LVL256:
 2342 0010 FFF7FEFF 		bl	_ZN5rfm7012buffer_writeEcPKhh	@
 2343              	.LVL257:
 2344              	@ rfm70.cpp:782: }
 782:rfm70.cpp     **** }
 2345              		.loc 1 782 0
 2346              		@ sp needed	@
 2347 0014 10BD     		pop	{r4, pc}
 2348              		.cfi_endproc
 2349              	.LFE41:
 2350              		.size	_ZN5rfm7021transmit_message_onceEPKhh, .-_ZN5rfm7021transmit_message_onceEPKhh
 2351              		.section	.text._ZN5rfm7017receive_next_pipeEv,"ax",%progbits
 2352              		.align	1
 2353              		.global	_ZN5rfm7017receive_next_pipeEv
 2354              		.syntax unified
 2355              		.code	16
 2356              		.thumb_func
 2357              		.fpu softvfp
 2358              		.type	_ZN5rfm7017receive_next_pipeEv, %function
 2359              	_ZN5rfm7017receive_next_pipeEv:
 2360              	.LFB42:
 783:rfm70.cpp     **** 
 784:rfm70.cpp     **** unsigned char rfm70::receive_next_pipe( void ){
 2361              		.loc 1 784 0
 2362              		.cfi_startproc
 2363              		@ args = 0, pretend = 0, frame = 0
 2364              		@ frame_needed = 0, uses_anonymous_args = 0
 2365              	.LVL258:
 2366 0000 10B5     		push	{r4, lr}	@
 2367              		.cfi_def_cfa_offset 8
 2368              		.cfi_offset 4, -8
 2369              		.cfi_offset 14, -4
 2370              	@ rfm70.cpp:785:    unsigned char status = rfm70::register_read( RFM70_REG_STATUS ); 
 785:rfm70.cpp     ****    unsigned char status = rfm70::register_read( RFM70_REG_STATUS ); 
 2371              		.loc 1 785 0
 2372 0002 0721     		movs	r1, #7	@,
 2373 0004 FFF7FEFF 		bl	_ZN5rfm7013register_readEh	@
 2374              	.LVL259:
 2375              	@ rfm70.cpp:786:    return ( status >> 1 ) & 0x07;
 786:rfm70.cpp     ****    return ( status >> 1 ) & 0x07;
 2376              		.loc 1 786 0
 2377 0008 0007     		lsls	r0, r0, #28	@ tmp122, tmp116,
 2378              	.LVL260:
 2379 000a 400F     		lsrs	r0, r0, #29	@ tmp123, tmp122,
 2380              	@ rfm70.cpp:787: }
 787:rfm70.cpp     **** }
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 58


 2381              		.loc 1 787 0
 2382              		@ sp needed	@
 2383 000c 10BD     		pop	{r4, pc}
 2384              		.cfi_endproc
 2385              	.LFE42:
 2386              		.size	_ZN5rfm7017receive_next_pipeEv, .-_ZN5rfm7017receive_next_pipeEv
 2387              		.section	.text._ZN5rfm7019receive_next_lengthEv,"ax",%progbits
 2388              		.align	1
 2389              		.global	_ZN5rfm7019receive_next_lengthEv
 2390              		.syntax unified
 2391              		.code	16
 2392              		.thumb_func
 2393              		.fpu softvfp
 2394              		.type	_ZN5rfm7019receive_next_lengthEv, %function
 2395              	_ZN5rfm7019receive_next_lengthEv:
 2396              	.LFB43:
 788:rfm70.cpp     **** 
 789:rfm70.cpp     **** unsigned char rfm70::receive_next_length( void ){
 2397              		.loc 1 789 0
 2398              		.cfi_startproc
 2399              		@ args = 0, pretend = 0, frame = 0
 2400              		@ frame_needed = 0, uses_anonymous_args = 0
 2401              	.LVL261:
 2402 0000 10B5     		push	{r4, lr}	@
 2403              		.cfi_def_cfa_offset 8
 2404              		.cfi_offset 4, -8
 2405              		.cfi_offset 14, -4
 2406              	@ rfm70.cpp:790:    return rfm70::register_read( RFM70_CMD_R_RX_PL_WID );
 790:rfm70.cpp     ****    return rfm70::register_read( RFM70_CMD_R_RX_PL_WID );
 2407              		.loc 1 790 0
 2408 0002 6021     		movs	r1, #96	@,
 2409 0004 FFF7FEFF 		bl	_ZN5rfm7013register_readEh	@
 2410              	.LVL262:
 2411              	@ rfm70.cpp:791: }
 791:rfm70.cpp     **** }
 2412              		.loc 1 791 0
 2413              		@ sp needed	@
 2414 0008 10BD     		pop	{r4, pc}
 2415              		.cfi_endproc
 2416              	.LFE43:
 2417              		.size	_ZN5rfm7019receive_next_lengthEv, .-_ZN5rfm7019receive_next_lengthEv
 2418              		.section	.text._ZN5rfm707receiveERhPhS0_,"ax",%progbits
 2419              		.align	1
 2420              		.global	_ZN5rfm707receiveERhPhS0_
 2421              		.syntax unified
 2422              		.code	16
 2423              		.thumb_func
 2424              		.fpu softvfp
 2425              		.type	_ZN5rfm707receiveERhPhS0_, %function
 2426              	_ZN5rfm707receiveERhPhS0_:
 2427              	.LFB44:
 792:rfm70.cpp     **** 
 793:rfm70.cpp     **** bool rfm70::receive(
 794:rfm70.cpp     ****    unsigned char & pipe,
 795:rfm70.cpp     ****    unsigned char *buf,
 796:rfm70.cpp     ****    unsigned char & length
 797:rfm70.cpp     **** ){
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 59


 2428              		.loc 1 797 0
 2429              		.cfi_startproc
 2430              		@ args = 0, pretend = 0, frame = 0
 2431              		@ frame_needed = 0, uses_anonymous_args = 0
 2432              	.LVL263:
 2433 0000 F8B5     		push	{r3, r4, r5, r6, r7, lr}	@
 2434              		.cfi_def_cfa_offset 24
 2435              		.cfi_offset 3, -24
 2436              		.cfi_offset 4, -20
 2437              		.cfi_offset 5, -16
 2438              		.cfi_offset 6, -12
 2439              		.cfi_offset 7, -8
 2440              		.cfi_offset 14, -4
 2441              	@ rfm70.cpp:797: ){
 2442              		.loc 1 797 0
 2443 0002 1E00     		movs	r6, r3	@ length, length
 2444 0004 0400     		movs	r4, r0	@ this, this
 2445 0006 0F00     		movs	r7, r1	@ pipe, pipe
 2446 0008 1500     		movs	r5, r2	@ buf, buf
 2447              	@ rfm70.cpp:798:    unsigned char p = rfm70::receive_next_pipe();
 798:rfm70.cpp     ****    unsigned char p = rfm70::receive_next_pipe();
 2448              		.loc 1 798 0
 2449 000a FFF7FEFF 		bl	_ZN5rfm7017receive_next_pipeEv	@
 2450              	.LVL264:
 2451              	@ rfm70.cpp:800:       return 0;
 799:rfm70.cpp     ****    if( p == 0x07 ){
 800:rfm70.cpp     ****       return 0;
 2452              		.loc 1 800 0
 2453 000e 0023     		movs	r3, #0	@ <retval>,
 2454              	@ rfm70.cpp:799:    if( p == 0x07 ){
 799:rfm70.cpp     ****    if( p == 0x07 ){
 2455              		.loc 1 799 0
 2456 0010 0728     		cmp	r0, #7	@ tmp117,
 2457 0012 0BD0     		beq	.L79	@,
 2458              	@ rfm70.cpp:802:     pipe = p;
 801:rfm70.cpp     ****    }   
 802:rfm70.cpp     ****     pipe = p;
 2459              		.loc 1 802 0
 2460 0014 3870     		strb	r0, [r7]	@ tmp117, *pipe_8(D)
 2461              	@ rfm70.cpp:803:     length = rfm70::receive_next_length();
 803:rfm70.cpp     ****     length = rfm70::receive_next_length();
 2462              		.loc 1 803 0
 2463 0016 2000     		movs	r0, r4	@, this
 2464              	.LVL265:
 2465 0018 FFF7FEFF 		bl	_ZN5rfm7019receive_next_lengthEv	@
 2466              	.LVL266:
 2467              	@ rfm70.cpp:804:    rfm70::buffer_read( RFM70_CMD_R_RX_PAYLOAD, buf,  length );
 804:rfm70.cpp     ****    rfm70::buffer_read( RFM70_CMD_R_RX_PAYLOAD, buf,  length );
 2468              		.loc 1 804 0
 2469 001c 2A00     		movs	r2, r5	@, buf
 2470              	@ rfm70.cpp:803:     length = rfm70::receive_next_length();
 803:rfm70.cpp     ****     length = rfm70::receive_next_length();
 2471              		.loc 1 803 0
 2472 001e 0300     		movs	r3, r0	@ tmp120,
 2473 0020 3070     		strb	r0, [r6]	@ tmp120, *length_11(D)
 2474              	@ rfm70.cpp:804:    rfm70::buffer_read( RFM70_CMD_R_RX_PAYLOAD, buf,  length );
 2475              		.loc 1 804 0
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 60


 2476 0022 6121     		movs	r1, #97	@,
 2477 0024 2000     		movs	r0, r4	@, this
 2478 0026 FFF7FEFF 		bl	_ZN5rfm7011buffer_readEhPhh	@
 2479              	.LVL267:
 2480              	@ rfm70.cpp:805:    return 1;
 805:rfm70.cpp     ****    return 1;
 2481              		.loc 1 805 0
 2482 002a 0123     		movs	r3, #1	@ <retval>,
 2483              	.L79:
 2484              	@ rfm70.cpp:806: }
 806:rfm70.cpp     **** }
 2485              		.loc 1 806 0
 2486 002c 1800     		movs	r0, r3	@, <retval>
 2487              		@ sp needed	@
 2488              	.LVL268:
 2489              	.LVL269:
 2490              	.LVL270:
 2491              	.LVL271:
 2492 002e F8BD     		pop	{r3, r4, r5, r6, r7, pc}
 2493              		.cfi_endproc
 2494              	.LFE44:
 2495              		.size	_ZN5rfm707receiveERhPhS0_, .-_ZN5rfm707receiveERhPhS0_
 2496              		.section	.text._ZN5rfm704initEv,"ax",%progbits
 2497              		.align	1
 2498              		.global	_ZN5rfm704initEv
 2499              		.syntax unified
 2500              		.code	16
 2501              		.thumb_func
 2502              		.fpu softvfp
 2503              		.type	_ZN5rfm704initEv, %function
 2504              	_ZN5rfm704initEv:
 2505              	.LFB45:
 807:rfm70.cpp     ****     
 808:rfm70.cpp     **** void rfm70::init( void ){
 2506              		.loc 1 808 0
 2507              		.cfi_startproc
 2508              		@ args = 0, pretend = 0, frame = 0
 2509              		@ frame_needed = 0, uses_anonymous_args = 0
 2510              	.LVL272:
 2511 0000 70B5     		push	{r4, r5, r6, lr}	@
 2512              		.cfi_def_cfa_offset 16
 2513              		.cfi_offset 4, -16
 2514              		.cfi_offset 5, -12
 2515              		.cfi_offset 6, -8
 2516              		.cfi_offset 14, -4
 2517              	@ rfm70.cpp:808: void rfm70::init( void ){
 2518              		.loc 1 808 0
 2519 0002 0400     		movs	r4, r0	@ this, this
 2520              	@ rfm70.cpp:811:    sclk.direction_set_output();
 809:rfm70.cpp     ****    unsigned char i;
 810:rfm70.cpp     ****    
 811:rfm70.cpp     ****    sclk.direction_set_output();
 2521              		.loc 1 811 0
 2522 0004 0068     		ldr	r0, [r0]	@ _1, this_37(D)->sclk
 2523              	.LVL273:
 2524              	@ rfm70.cpp:827:    rfm70::bank( 0 );
 812:rfm70.cpp     ****    mosi.direction_set_output();      
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 61


 813:rfm70.cpp     ****    miso.direction_set_input();
 814:rfm70.cpp     ****    csn.direction_set_output();
 815:rfm70.cpp     ****    ce.direction_set_output();
 816:rfm70.cpp     **** 
 817:rfm70.cpp     ****    RFM70_CE( 0 );
 818:rfm70.cpp     ****    RFM70_CSN( 1 );
 819:rfm70.cpp     ****    RFM70_SCK( 0 );
 820:rfm70.cpp     ****    RFM70_MOSI( 0 );
 821:rfm70.cpp     **** 
 822:rfm70.cpp     ****    // delay at least 50ms.
 823:rfm70.cpp     ****    // the example code says so, but why??
 824:rfm70.cpp     ****    (*wait_ms)( 50 );
 825:rfm70.cpp     **** 
 826:rfm70.cpp     ****    // write array of default init settings
 827:rfm70.cpp     ****    rfm70::bank( 0 );
 2525              		.loc 1 827 0
 2526 0006 0025     		movs	r5, #0	@ ivtmp.192,
 2527              	@ rfm70.cpp:811:    sclk.direction_set_output();
 811:rfm70.cpp     ****    mosi.direction_set_output();      
 2528              		.loc 1 811 0
 2529 0008 0368     		ldr	r3, [r0]	@ _1->_vptr.output_pin, _1->_vptr.output_pin
 2530 000a 5B68     		ldr	r3, [r3, #4]	@ MEM[(int (*__vtbl_ptr_type) () *)_2 + 4B], MEM[(int (*__vtbl_ptr_type) () *)_2 
 2531 000c 9847     		blx	r3	@ MEM[(int (*__vtbl_ptr_type) () *)_2 + 4B]
 2532              	.LVL274:
 2533              	@ rfm70.cpp:812:    mosi.direction_set_output();      
 812:rfm70.cpp     ****    mosi.direction_set_output();      
 2534              		.loc 1 812 0
 2535 000e 6068     		ldr	r0, [r4, #4]	@ _4, this_37(D)->mosi
 2536 0010 0368     		ldr	r3, [r0]	@ _4->_vptr.output_pin, _4->_vptr.output_pin
 2537 0012 5B68     		ldr	r3, [r3, #4]	@ MEM[(int (*__vtbl_ptr_type) () *)_5 + 4B], MEM[(int (*__vtbl_ptr_type) () *)_5 
 2538 0014 9847     		blx	r3	@ MEM[(int (*__vtbl_ptr_type) () *)_5 + 4B]
 2539              	.LVL275:
 2540              	@ rfm70.cpp:813:    miso.direction_set_input();
 813:rfm70.cpp     ****    csn.direction_set_output();
 2541              		.loc 1 813 0
 2542 0016 A068     		ldr	r0, [r4, #8]	@ _7, this_37(D)->miso
 2543 0018 0368     		ldr	r3, [r0]	@ _7->_vptr.input_pin, _7->_vptr.input_pin
 2544 001a 5B68     		ldr	r3, [r3, #4]	@ MEM[(int (*__vtbl_ptr_type) () *)_8 + 4B], MEM[(int (*__vtbl_ptr_type) () *)_8 
 2545 001c 9847     		blx	r3	@ MEM[(int (*__vtbl_ptr_type) () *)_8 + 4B]
 2546              	.LVL276:
 2547              	@ rfm70.cpp:814:    csn.direction_set_output();
 814:rfm70.cpp     ****    ce.direction_set_output();
 2548              		.loc 1 814 0
 2549 001e E068     		ldr	r0, [r4, #12]	@ _10, this_37(D)->csn
 2550 0020 0368     		ldr	r3, [r0]	@ _10->_vptr.output_pin, _10->_vptr.output_pin
 2551 0022 5B68     		ldr	r3, [r3, #4]	@ MEM[(int (*__vtbl_ptr_type) () *)_11 + 4B], MEM[(int (*__vtbl_ptr_type) () *)_1
 2552 0024 9847     		blx	r3	@ MEM[(int (*__vtbl_ptr_type) () *)_11 + 4B]
 2553              	.LVL277:
 2554              	@ rfm70.cpp:815:    ce.direction_set_output();
 815:rfm70.cpp     **** 
 2555              		.loc 1 815 0
 2556 0026 2069     		ldr	r0, [r4, #16]	@ _13, this_37(D)->ce
 2557 0028 0368     		ldr	r3, [r0]	@ _13->_vptr.output_pin, _13->_vptr.output_pin
 2558 002a 5B68     		ldr	r3, [r3, #4]	@ MEM[(int (*__vtbl_ptr_type) () *)_14 + 4B], MEM[(int (*__vtbl_ptr_type) () *)_1
 2559 002c 9847     		blx	r3	@ MEM[(int (*__vtbl_ptr_type) () *)_14 + 4B]
 2560              	.LVL278:
 2561              	@ rfm70.cpp:817:    RFM70_CE( 0 );
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 62


 817:rfm70.cpp     ****    RFM70_CSN( 1 );
 2562              		.loc 1 817 0
 2563 002e 2069     		ldr	r0, [r4, #16]	@ _16, this_37(D)->ce
 2564 0030 0021     		movs	r1, #0	@,
 2565 0032 0368     		ldr	r3, [r0]	@ _16->_vptr.output_pin, _16->_vptr.output_pin
 2566 0034 1B68     		ldr	r3, [r3]	@ *_17, *_17
 2567 0036 9847     		blx	r3	@ *_17
 2568              	.LVL279:
 2569              	@ rfm70.cpp:818:    RFM70_CSN( 1 );
 818:rfm70.cpp     ****    RFM70_SCK( 0 );
 2570              		.loc 1 818 0
 2571 0038 E068     		ldr	r0, [r4, #12]	@ _19, this_37(D)->csn
 2572 003a 0121     		movs	r1, #1	@,
 2573 003c 0368     		ldr	r3, [r0]	@ _19->_vptr.output_pin, _19->_vptr.output_pin
 2574 003e 1B68     		ldr	r3, [r3]	@ *_20, *_20
 2575 0040 9847     		blx	r3	@ *_20
 2576              	.LVL280:
 2577              	@ rfm70.cpp:819:    RFM70_SCK( 0 );
 819:rfm70.cpp     ****    RFM70_MOSI( 0 );
 2578              		.loc 1 819 0
 2579 0042 2068     		ldr	r0, [r4]	@ _22, this_37(D)->sclk
 2580 0044 0021     		movs	r1, #0	@,
 2581 0046 0368     		ldr	r3, [r0]	@ _22->_vptr.output_pin, _22->_vptr.output_pin
 2582 0048 1B68     		ldr	r3, [r3]	@ *_23, *_23
 2583 004a 9847     		blx	r3	@ *_23
 2584              	.LVL281:
 2585              	@ rfm70.cpp:820:    RFM70_MOSI( 0 );
 820:rfm70.cpp     **** 
 2586              		.loc 1 820 0
 2587 004c 6068     		ldr	r0, [r4, #4]	@ _25, this_37(D)->mosi
 2588 004e 0021     		movs	r1, #0	@,
 2589 0050 0368     		ldr	r3, [r0]	@ _25->_vptr.output_pin, _25->_vptr.output_pin
 2590 0052 1B68     		ldr	r3, [r3]	@ *_26, *_26
 2591 0054 9847     		blx	r3	@ *_26
 2592              	.LVL282:
 2593              	@ rfm70.cpp:824:    (*wait_ms)( 50 );
 824:rfm70.cpp     **** 
 2594              		.loc 1 824 0
 2595 0056 3220     		movs	r0, #50	@,
 2596 0058 6369     		ldr	r3, [r4, #20]	@ tmp183, this_37(D)->wait_ms
 2597 005a 9847     		blx	r3	@ tmp183
 2598              	.LVL283:
 2599              	@ rfm70.cpp:827:    rfm70::bank( 0 );
 2600              		.loc 1 827 0
 2601 005c 0021     		movs	r1, #0	@,
 2602 005e 2000     		movs	r0, r4	@, this
 2603 0060 FFF7FEFF 		bl	_ZN5rfm704bankEh	@
 2604              	.LVL284:
 2605              	.L83:
 2606              	@ rfm70.cpp:829:      rfm70::register_write( Bank0_Reg[ i ][0], Bank0_Reg[ i ][1] );
 828:rfm70.cpp     ****    for( i = 0; i < BANK0_ENTRIES; i++ ){
 829:rfm70.cpp     ****      rfm70::register_write( Bank0_Reg[ i ][0], Bank0_Reg[ i ][1] );
 2607              		.loc 1 829 0 discriminator 2
 2608 0064 1F4B     		ldr	r3, .L86	@ tmp172,
 2609 0066 2000     		movs	r0, r4	@, this
 2610 0068 5A19     		adds	r2, r3, r5	@ tmp173, tmp172, ivtmp.192
 2611 006a E95C     		ldrb	r1, [r5, r3]	@ MEM[symbol: Bank0_Reg, index: ivtmp.192_76, offset: 0B], MEM[symbol: Bank0_Reg
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 63


 2612 006c 5278     		ldrb	r2, [r2, #1]	@ MEM[base: _73, offset: 1B], MEM[base: _73, offset: 1B]
 2613 006e 0235     		adds	r5, r5, #2	@ ivtmp.192,
 2614 0070 FFF7FEFF 		bl	_ZN5rfm7014register_writeEhh	@
 2615              	.LVL285:
 2616              	@ rfm70.cpp:828:    for( i = 0; i < BANK0_ENTRIES; i++ ){
 828:rfm70.cpp     ****    for( i = 0; i < BANK0_ENTRIES; i++ ){
 2617              		.loc 1 828 0 discriminator 2
 2618 0074 142D     		cmp	r5, #20	@ ivtmp.192,
 2619 0076 F5D1     		bne	.L83	@,
 2620              	@ rfm70.cpp:832:    rfm70::receive_address_p0( RX0_Address );
 830:rfm70.cpp     ****    }
 831:rfm70.cpp     **** 
 832:rfm70.cpp     ****    rfm70::receive_address_p0( RX0_Address );
 2621              		.loc 1 832 0
 2622 0078 1B4D     		ldr	r5, .L86+4	@ tmp177,
 2623 007a 2000     		movs	r0, r4	@, this
 2624 007c 2900     		movs	r1, r5	@, tmp177
 2625 007e FFF7FEFF 		bl	_ZN5rfm7018receive_address_p0EPKh	@
 2626              	.LVL286:
 2627              	@ rfm70.cpp:833:    rfm70::receive_address_p1( RX0_Address );
 833:rfm70.cpp     ****    rfm70::receive_address_p1( RX0_Address );
 2628              		.loc 1 833 0
 2629 0082 2900     		movs	r1, r5	@, tmp177
 2630 0084 2000     		movs	r0, r4	@, this
 2631 0086 FFF7FEFF 		bl	_ZN5rfm7018receive_address_p1EPKh	@
 2632              	.LVL287:
 2633              	@ rfm70.cpp:834:    rfm70::transmit_address( RX0_Address );
 834:rfm70.cpp     ****    rfm70::transmit_address( RX0_Address );
 2634              		.loc 1 834 0
 2635 008a 2900     		movs	r1, r5	@, tmp177
 2636 008c 2000     		movs	r0, r4	@, this
 2637 008e FFF7FEFF 		bl	_ZN5rfm7016transmit_addressEPKh	@
 2638              	.LVL288:
 2639              	@ rfm70.cpp:837:    i = rfm70::register_read(29);
 835:rfm70.cpp     **** 
 836:rfm70.cpp     ****    // enable the extra features
 837:rfm70.cpp     ****    i = rfm70::register_read(29);
 2640              		.loc 1 837 0
 2641 0092 1D21     		movs	r1, #29	@,
 2642 0094 2000     		movs	r0, r4	@, this
 2643 0096 FFF7FEFF 		bl	_ZN5rfm7013register_readEh	@
 2644              	.LVL289:
 2645              	@ rfm70.cpp:838:    if( i == 0 ){ // only when the extra features are not yet activated!
 838:rfm70.cpp     ****    if( i == 0 ){ // only when the extra features are not yet activated!
 2646              		.loc 1 838 0
 2647 009a 0028     		cmp	r0, #0	@ tmp180,
 2648 009c 04D1     		bne	.L84	@,
 2649              	@ rfm70.cpp:839:       rfm70::register_write( RFM70_CMD_ACTIVATE, 0x73 );
 839:rfm70.cpp     ****       rfm70::register_write( RFM70_CMD_ACTIVATE, 0x73 );
 2650              		.loc 1 839 0
 2651 009e 7322     		movs	r2, #115	@,
 2652 00a0 5021     		movs	r1, #80	@,
 2653 00a2 2000     		movs	r0, r4	@, this
 2654              	.LVL290:
 2655 00a4 FFF7FEFF 		bl	_ZN5rfm7014register_writeEhh	@
 2656              	.LVL291:
 2657              	.L84:
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 64


 2658              	@ rfm70.cpp:843:    rfm70::register_write( 28, 0x3F ); 
 840:rfm70.cpp     ****    }
 841:rfm70.cpp     ****    
 842:rfm70.cpp     ****    // select dynamic payload length data pipe5\4\3\2\1\0
 843:rfm70.cpp     ****    rfm70::register_write( 28, 0x3F ); 
 2659              		.loc 1 843 0
 2660 00a8 2000     		movs	r0, r4	@, this
 2661 00aa 3F22     		movs	r2, #63	@,
 2662 00ac 1C21     		movs	r1, #28	@,
 2663 00ae FFF7FEFF 		bl	_ZN5rfm7014register_writeEhh	@
 2664              	.LVL292:
 2665              	@ rfm70.cpp:846:    rfm70::register_write( 29, 0x07 );  
 844:rfm70.cpp     ****    
 845:rfm70.cpp     ****    // select Dynamic Payload Length, Payload with ACK, W_TX_PAYLOAD_NOACK
 846:rfm70.cpp     ****    rfm70::register_write( 29, 0x07 );  
 2666              		.loc 1 846 0
 2667 00b2 2000     		movs	r0, r4	@, this
 2668 00b4 0722     		movs	r2, #7	@,
 2669 00b6 1D21     		movs	r1, #29	@,
 2670 00b8 FFF7FEFF 		bl	_ZN5rfm7014register_writeEhh	@
 2671              	.LVL293:
 2672              	@ rfm70.cpp:849:    rfm70::channel_payload_size( 0, 0 );
 847:rfm70.cpp     ****    
 848:rfm70.cpp     ****    // dynamic payload sizing on channels 0 and 1
 849:rfm70.cpp     ****    rfm70::channel_payload_size( 0, 0 );
 2673              		.loc 1 849 0
 2674 00bc 0022     		movs	r2, #0	@,
 2675 00be 2000     		movs	r0, r4	@, this
 2676 00c0 1100     		movs	r1, r2	@,
 2677 00c2 FFF7FEFF 		bl	_ZN5rfm7020channel_payload_sizeEhh	@
 2678              	.LVL294:
 2679              	@ rfm70.cpp:850:    rfm70::channel_payload_size( 1, 0 );
 850:rfm70.cpp     ****    rfm70::channel_payload_size( 1, 0 );
 2680              		.loc 1 850 0
 2681 00c6 0022     		movs	r2, #0	@,
 2682 00c8 0121     		movs	r1, #1	@,
 2683 00ca 2000     		movs	r0, r4	@, this
 2684 00cc FFF7FEFF 		bl	_ZN5rfm7020channel_payload_sizeEhh	@
 2685              	.LVL295:
 2686              	@ rfm70.cpp:852:    rfm70::init_bank1();
 851:rfm70.cpp     **** 
 852:rfm70.cpp     ****    rfm70::init_bank1();
 2687              		.loc 1 852 0
 2688 00d0 2000     		movs	r0, r4	@, this
 2689 00d2 FFF7FEFF 		bl	_ZN5rfm7010init_bank1Ev	@
 2690              	.LVL296:
 2691              	@ rfm70.cpp:853:    (*wait_ms)( 50 ); 
 853:rfm70.cpp     ****    (*wait_ms)( 50 ); 
 2692              		.loc 1 853 0
 2693 00d6 6369     		ldr	r3, [r4, #20]	@ tmp185, this_37(D)->wait_ms
 2694 00d8 3220     		movs	r0, #50	@,
 2695 00da 9847     		blx	r3	@ tmp185
 2696              	.LVL297:
 2697              	@ rfm70.cpp:854:    rfm70::mode_receive();
 854:rfm70.cpp     ****    rfm70::mode_receive();
 2698              		.loc 1 854 0
 2699 00dc 2000     		movs	r0, r4	@, this
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 65


 2700 00de FFF7FEFF 		bl	_ZN5rfm7012mode_receiveEv	@
 2701              	.LVL298:
 2702              	@ rfm70.cpp:855: }
 855:rfm70.cpp     **** }
 2703              		.loc 1 855 0
 2704              		@ sp needed	@
 2705              	.LVL299:
 2706 00e2 70BD     		pop	{r4, r5, r6, pc}
 2707              	.L87:
 2708              		.align	2
 2709              	.L86:
 2710 00e4 00000000 		.word	.LANCHOR2
 2711 00e8 00000000 		.word	.LANCHOR3
 2712              		.cfi_endproc
 2713              	.LFE45:
 2714              		.size	_ZN5rfm704initEv, .-_ZN5rfm704initEv
 2715              		.section	.rodata._ZL11Bank1_Reg14,"a",%progbits
 2716              		.set	.LANCHOR1,. + 0
 2717              		.type	_ZL11Bank1_Reg14, %object
 2718              		.size	_ZL11Bank1_Reg14, 11
 2719              	_ZL11Bank1_Reg14:
 2720 0000 41       		.byte	65
 2721 0001 20       		.byte	32
 2722 0002 08       		.byte	8
 2723 0003 04       		.byte	4
 2724 0004 81       		.byte	-127
 2725 0005 20       		.byte	32
 2726 0006 CF       		.byte	-49
 2727 0007 F7       		.byte	-9
 2728 0008 FE       		.byte	-2
 2729 0009 FF       		.byte	-1
 2730 000a FF       		.byte	-1
 2731              		.section	.rodata._ZL11RX0_Address,"a",%progbits
 2732              		.set	.LANCHOR3,. + 0
 2733              		.type	_ZL11RX0_Address, %object
 2734              		.size	_ZL11RX0_Address, 5
 2735              	_ZL11RX0_Address:
 2736 0000 34       		.byte	52
 2737 0001 43       		.byte	67
 2738 0002 10       		.byte	16
 2739 0003 10       		.byte	16
 2740 0004 01       		.byte	1
 2741              		.section	.rodata._ZL13Bank1_Reg0_13,"a",%progbits
 2742              		.align	2
 2743              		.set	.LANCHOR0,. + 0
 2744              		.type	_ZL13Bank1_Reg0_13, %object
 2745              		.size	_ZL13Bank1_Reg0_13, 56
 2746              	_ZL13Bank1_Reg0_13:
 2747 0000 404B01E2 		.word	-503231680
 2748 0004 C04B0000 		.word	19392
 2749 0008 D0FC8C02 		.word	42794192
 2750 000c 99003941 		.word	1094254745
 2751 0010 F99E860B 		.word	193371897
 2752 0014 24067FA6 		.word	-1501624796
 2753 0018 00000000 		.word	0
 2754 001c 00000000 		.word	0
 2755 0020 00000000 		.word	0
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 66


 2756 0024 00000000 		.word	0
 2757 0028 00000000 		.word	0
 2758 002c 00000000 		.word	0
 2759 0030 00731200 		.word	1209088
 2760 0034 0080B436 		.word	917798912
 2761              		.section	.rodata._ZL9Bank0_Reg,"a",%progbits
 2762              		.set	.LANCHOR2,. + 0
 2763              		.type	_ZL9Bank0_Reg, %object
 2764              		.size	_ZL9Bank0_Reg, 20
 2765              	_ZL9Bank0_Reg:
 2766 0000 00       		.byte	0
 2767 0001 0F       		.byte	15
 2768 0002 01       		.byte	1
 2769 0003 3F       		.byte	63
 2770 0004 02       		.byte	2
 2771 0005 03       		.byte	3
 2772 0006 03       		.byte	3
 2773 0007 03       		.byte	3
 2774 0008 04       		.byte	4
 2775 0009 FF       		.byte	-1
 2776 000a 05       		.byte	5
 2777 000b 0A       		.byte	10
 2778 000c 06       		.byte	6
 2779 000d 37       		.byte	55
 2780 000e 07       		.byte	7
 2781 000f 07       		.byte	7
 2782 0010 08       		.byte	8
 2783 0011 00       		.byte	0
 2784 0012 17       		.byte	23
 2785 0013 00       		.byte	0
 2786              		.text
 2787              	.Letext0:
 2788              		.file 2 "pins.h"
 2789              		.file 3 "rfm70.h"
 2790              		.section	.debug_info,"",%progbits
 2791              	.Ldebug_info0:
 2792 0000 5F1D0000 		.4byte	0x1d5f
 2793 0004 0400     		.2byte	0x4
 2794 0006 00000000 		.4byte	.Ldebug_abbrev0
 2795 000a 04       		.byte	0x4
 2796 000b 01       		.uleb128 0x1
 2797 000c 83020000 		.4byte	.LASF613
 2798 0010 04       		.byte	0x4
 2799 0011 CC1B0000 		.4byte	.LASF614
 2800 0015 0A0C0000 		.4byte	.LASF615
 2801 0019 00000000 		.4byte	.Ldebug_ranges0+0
 2802 001d 00000000 		.4byte	0
 2803 0021 00000000 		.4byte	.Ldebug_line0
 2804 0025 00000000 		.4byte	.Ldebug_macro0
 2805 0029 02       		.uleb128 0x2
 2806 002a 04       		.byte	0x4
 2807 002b 07       		.byte	0x7
 2808 002c DF040000 		.4byte	.LASF497
 2809 0030 02       		.uleb128 0x2
 2810 0031 01       		.byte	0x1
 2811 0032 08       		.byte	0x8
 2812 0033 67300000 		.4byte	.LASF498
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 67


 2813 0037 03       		.uleb128 0x3
 2814 0038 30000000 		.4byte	0x30
 2815 003c 04       		.uleb128 0x4
 2816 003d 2D370000 		.4byte	.LASF616
 2817 0041 02       		.byte	0x2
 2818 0042 0A       		.byte	0xa
 2819 0043 23010000 		.4byte	0x123
 2820 0047 05       		.uleb128 0x5
 2821 0048 00000000 		.4byte	.LASF617
 2822 004c 07       		.byte	0x7
 2823 004d 01       		.byte	0x1
 2824 004e 30000000 		.4byte	0x30
 2825 0052 02       		.byte	0x2
 2826 0053 18       		.byte	0x18
 2827 0054 65000000 		.4byte	0x65
 2828 0058 06       		.uleb128 0x6
 2829 0059 312F0000 		.4byte	.LASF499
 2830 005d 00       		.byte	0
 2831 005e 06       		.uleb128 0x6
 2832 005f 33020000 		.4byte	.LASF500
 2833 0063 01       		.byte	0x1
 2834 0064 00       		.byte	0
 2835 0065 07       		.uleb128 0x7
 2836 0066 90140000 		.4byte	.LASF501
 2837 006a 8D000000 		.4byte	0x8d
 2838 006e 08       		.uleb128 0x8
 2839 006f 68070000 		.4byte	.LASF503
 2840 0073 02       		.byte	0x2
 2841 0074 0F       		.byte	0xf
 2842 0075 AF300000 		.4byte	.LASF505
 2843 0079 01       		.byte	0x1
 2844 007a 02       		.uleb128 0x2
 2845 007b 10       		.byte	0x10
 2846 007c 01       		.uleb128 0x1
 2847 007d 65000000 		.4byte	0x65
 2848 0081 01       		.byte	0x1
 2849 0082 86000000 		.4byte	0x86
 2850 0086 09       		.uleb128 0x9
 2851 0087 AF1C0000 		.4byte	0x1caf
 2852 008b 00       		.byte	0
 2853 008c 00       		.byte	0
 2854 008d 07       		.uleb128 0x7
 2855 008e 5B0C0000 		.4byte	.LASF502
 2856 0092 B5000000 		.4byte	0xb5
 2857 0096 08       		.uleb128 0x8
 2858 0097 270A0000 		.4byte	.LASF504
 2859 009b 02       		.byte	0x2
 2860 009c 15       		.byte	0x15
 2861 009d 63270000 		.4byte	.LASF506
 2862 00a1 01       		.byte	0x1
 2863 00a2 02       		.uleb128 0x2
 2864 00a3 10       		.byte	0x10
 2865 00a4 01       		.uleb128 0x1
 2866 00a5 8D000000 		.4byte	0x8d
 2867 00a9 01       		.byte	0x1
 2868 00aa AE000000 		.4byte	0xae
 2869 00ae 09       		.uleb128 0x9
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 68


 2870 00af 8D1C0000 		.4byte	0x1c8d
 2871 00b3 00       		.byte	0
 2872 00b4 00       		.byte	0
 2873 00b5 0A       		.uleb128 0xa
 2874 00b6 00280000 		.4byte	.LASF618
 2875 00ba 0B       		.uleb128 0xb
 2876 00bb 68070000 		.4byte	.LASF503
 2877 00bf 02       		.byte	0x2
 2878 00c0 26       		.byte	0x26
 2879 00c1 46220000 		.4byte	.LASF507
 2880 00c5 01       		.byte	0x1
 2881 00c6 02       		.uleb128 0x2
 2882 00c7 10       		.byte	0x10
 2883 00c8 01       		.uleb128 0x1
 2884 00c9 B5000000 		.4byte	0xb5
 2885 00cd 01       		.byte	0x1
 2886 00ce D6000000 		.4byte	0xd6
 2887 00d2 DC000000 		.4byte	0xdc
 2888 00d6 09       		.uleb128 0x9
 2889 00d7 341C0000 		.4byte	0x1c34
 2890 00db 00       		.byte	0
 2891 00dc 0B       		.uleb128 0xb
 2892 00dd 270A0000 		.4byte	.LASF504
 2893 00e1 02       		.byte	0x2
 2894 00e2 23       		.byte	0x23
 2895 00e3 1D2E0000 		.4byte	.LASF508
 2896 00e7 01       		.byte	0x1
 2897 00e8 02       		.uleb128 0x2
 2898 00e9 10       		.byte	0x10
 2899 00ea 03       		.uleb128 0x3
 2900 00eb B5000000 		.4byte	0xb5
 2901 00ef 01       		.byte	0x1
 2902 00f0 F8000000 		.4byte	0xf8
 2903 00f4 FE000000 		.4byte	0xfe
 2904 00f8 09       		.uleb128 0x9
 2905 00f9 341C0000 		.4byte	0x1c34
 2906 00fd 00       		.byte	0
 2907 00fe 08       		.uleb128 0x8
 2908 00ff 5F350000 		.4byte	.LASF509
 2909 0103 02       		.byte	0x2
 2910 0104 1C       		.byte	0x1c
 2911 0105 68060000 		.4byte	.LASF510
 2912 0109 01       		.byte	0x1
 2913 010a 02       		.uleb128 0x2
 2914 010b 10       		.byte	0x10
 2915 010c 02       		.uleb128 0x2
 2916 010d B5000000 		.4byte	0xb5
 2917 0111 01       		.byte	0x1
 2918 0112 16010000 		.4byte	0x116
 2919 0116 09       		.uleb128 0x9
 2920 0117 341C0000 		.4byte	0x1c34
 2921 011b 0C       		.uleb128 0xc
 2922 011c 47000000 		.4byte	0x47
 2923 0120 00       		.byte	0
 2924 0121 00       		.byte	0
 2925 0122 00       		.byte	0
 2926 0123 0D       		.uleb128 0xd
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 69


 2927 0124 3A020000 		.4byte	.LASF524
 2928 0128 1C       		.byte	0x1c
 2929 0129 03       		.byte	0x3
 2930 012a 7C01     		.2byte	0x17c
 2931 012c A4060000 		.4byte	0x6a4
 2932 0130 0E       		.uleb128 0xe
 2933 0131 950F0000 		.4byte	.LASF511
 2934 0135 03       		.byte	0x3
 2935 0136 7F01     		.2byte	0x17f
 2936 0138 A4060000 		.4byte	0x6a4
 2937 013c 00       		.byte	0
 2938 013d 0E       		.uleb128 0xe
 2939 013e 07080000 		.4byte	.LASF512
 2940 0142 03       		.byte	0x3
 2941 0143 8001     		.2byte	0x180
 2942 0145 A4060000 		.4byte	0x6a4
 2943 0149 04       		.byte	0x4
 2944 014a 0E       		.uleb128 0xe
 2945 014b 992B0000 		.4byte	.LASF513
 2946 014f 03       		.byte	0x3
 2947 0150 8101     		.2byte	0x181
 2948 0152 AA060000 		.4byte	0x6aa
 2949 0156 08       		.byte	0x8
 2950 0157 0F       		.uleb128 0xf
 2951 0158 63736E00 		.ascii	"csn\000"
 2952 015c 03       		.byte	0x3
 2953 015d 8201     		.2byte	0x182
 2954 015f A4060000 		.4byte	0x6a4
 2955 0163 0C       		.byte	0xc
 2956 0164 0F       		.uleb128 0xf
 2957 0165 636500   		.ascii	"ce\000"
 2958 0168 03       		.byte	0x3
 2959 0169 8301     		.2byte	0x183
 2960 016b A4060000 		.4byte	0x6a4
 2961 016f 10       		.byte	0x10
 2962 0170 0E       		.uleb128 0xe
 2963 0171 792F0000 		.4byte	.LASF514
 2964 0175 03       		.byte	0x3
 2965 0176 8501     		.2byte	0x185
 2966 0178 BB060000 		.4byte	0x6bb
 2967 017c 14       		.byte	0x14
 2968 017d 0E       		.uleb128 0xe
 2969 017e 36140000 		.4byte	.LASF515
 2970 0182 03       		.byte	0x3
 2971 0183 8601     		.2byte	0x186
 2972 0185 BB060000 		.4byte	0x6bb
 2973 0189 18       		.byte	0x18
 2974 018a 10       		.uleb128 0x10
 2975 018b BF1E0000 		.4byte	.LASF520
 2976 018f 03       		.byte	0x3
 2977 0190 8801     		.2byte	0x188
 2978 0192 3A160000 		.4byte	.LASF522
 2979 0196 30000000 		.4byte	0x30
 2980 019a A2010000 		.4byte	0x1a2
 2981 019e AD010000 		.4byte	0x1ad
 2982 01a2 09       		.uleb128 0x9
 2983 01a3 C1060000 		.4byte	0x6c1
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 70


 2984 01a7 0C       		.uleb128 0xc
 2985 01a8 30000000 		.4byte	0x30
 2986 01ac 00       		.byte	0
 2987 01ad 11       		.uleb128 0x11
 2988 01ae 3A020000 		.4byte	.LASF524
 2989 01b2 03       		.byte	0x3
 2990 01b3 9101     		.2byte	0x191
 2991 01b5 071F0000 		.4byte	.LASF526
 2992 01b9 C1060000 		.4byte	0x6c1
 2993 01bd 01       		.byte	0x1
 2994 01be C6010000 		.4byte	0x1c6
 2995 01c2 EF010000 		.4byte	0x1ef
 2996 01c6 09       		.uleb128 0x9
 2997 01c7 C1060000 		.4byte	0x6c1
 2998 01cb 0C       		.uleb128 0xc
 2999 01cc A4060000 		.4byte	0x6a4
 3000 01d0 0C       		.uleb128 0xc
 3001 01d1 A4060000 		.4byte	0x6a4
 3002 01d5 0C       		.uleb128 0xc
 3003 01d6 AA060000 		.4byte	0x6aa
 3004 01da 0C       		.uleb128 0xc
 3005 01db A4060000 		.4byte	0x6a4
 3006 01df 0C       		.uleb128 0xc
 3007 01e0 A4060000 		.4byte	0x6a4
 3008 01e4 0C       		.uleb128 0xc
 3009 01e5 BB060000 		.4byte	0x6bb
 3010 01e9 0C       		.uleb128 0xc
 3011 01ea BB060000 		.4byte	0x6bb
 3012 01ee 00       		.byte	0
 3013 01ef 12       		.uleb128 0x12
 3014 01f0 0E160000 		.4byte	.LASF516
 3015 01f4 03       		.byte	0x3
 3016 01f5 A601     		.2byte	0x1a6
 3017 01f7 EC210000 		.4byte	.LASF518
 3018 01fb 03020000 		.4byte	0x203
 3019 01ff 0E020000 		.4byte	0x20e
 3020 0203 09       		.uleb128 0x9
 3021 0204 C1060000 		.4byte	0x6c1
 3022 0208 0C       		.uleb128 0xc
 3023 0209 30000000 		.4byte	0x30
 3024 020d 00       		.byte	0
 3025 020e 12       		.uleb128 0x12
 3026 020f 8F1D0000 		.4byte	.LASF517
 3027 0213 03       		.byte	0x3
 3028 0214 A701     		.2byte	0x1a7
 3029 0216 4F370000 		.4byte	.LASF519
 3030 021a 22020000 		.4byte	0x222
 3031 021e 28020000 		.4byte	0x228
 3032 0222 09       		.uleb128 0x9
 3033 0223 C1060000 		.4byte	0x6c1
 3034 0227 00       		.byte	0
 3035 0228 13       		.uleb128 0x13
 3036 0229 3F2D0000 		.4byte	.LASF521
 3037 022d 03       		.byte	0x3
 3038 022e BE01     		.2byte	0x1be
 3039 0230 0A010000 		.4byte	.LASF523
 3040 0234 01       		.byte	0x1
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 71


 3041 0235 3D020000 		.4byte	0x23d
 3042 0239 43020000 		.4byte	0x243
 3043 023d 09       		.uleb128 0x9
 3044 023e C1060000 		.4byte	0x6c1
 3045 0242 00       		.byte	0
 3046 0243 11       		.uleb128 0x11
 3047 0244 84130000 		.4byte	.LASF525
 3048 0248 03       		.byte	0x3
 3049 0249 C501     		.2byte	0x1c5
 3050 024b DE090000 		.4byte	.LASF527
 3051 024f 30000000 		.4byte	0x30
 3052 0253 01       		.byte	0x1
 3053 0254 5C020000 		.4byte	0x25c
 3054 0258 67020000 		.4byte	0x267
 3055 025c 09       		.uleb128 0x9
 3056 025d C1060000 		.4byte	0x6c1
 3057 0261 0C       		.uleb128 0xc
 3058 0262 30000000 		.4byte	0x30
 3059 0266 00       		.byte	0
 3060 0267 13       		.uleb128 0x13
 3061 0268 13160000 		.4byte	.LASF528
 3062 026c 03       		.byte	0x3
 3063 026d CC01     		.2byte	0x1cc
 3064 026f 86390000 		.4byte	.LASF529
 3065 0273 01       		.byte	0x1
 3066 0274 7C020000 		.4byte	0x27c
 3067 0278 91020000 		.4byte	0x291
 3068 027c 09       		.uleb128 0x9
 3069 027d C1060000 		.4byte	0x6c1
 3070 0281 0C       		.uleb128 0xc
 3071 0282 30000000 		.4byte	0x30
 3072 0286 0C       		.uleb128 0xc
 3073 0287 CC060000 		.4byte	0x6cc
 3074 028b 0C       		.uleb128 0xc
 3075 028c 30000000 		.4byte	0x30
 3076 0290 00       		.byte	0
 3077 0291 13       		.uleb128 0x13
 3078 0292 570B0000 		.4byte	.LASF530
 3079 0296 03       		.byte	0x3
 3080 0297 D701     		.2byte	0x1d7
 3081 0299 32370000 		.4byte	.LASF531
 3082 029d 01       		.byte	0x1
 3083 029e A6020000 		.4byte	0x2a6
 3084 02a2 B6020000 		.4byte	0x2b6
 3085 02a6 09       		.uleb128 0x9
 3086 02a7 C1060000 		.4byte	0x6c1
 3087 02ab 0C       		.uleb128 0xc
 3088 02ac 30000000 		.4byte	0x30
 3089 02b0 0C       		.uleb128 0xc
 3090 02b1 30000000 		.4byte	0x30
 3091 02b5 00       		.byte	0
 3092 02b6 13       		.uleb128 0x13
 3093 02b7 5B070000 		.4byte	.LASF532
 3094 02bb 03       		.byte	0x3
 3095 02bc DF01     		.2byte	0x1df
 3096 02be EF2B0000 		.4byte	.LASF533
 3097 02c2 01       		.byte	0x1
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 72


 3098 02c3 CB020000 		.4byte	0x2cb
 3099 02c7 E0020000 		.4byte	0x2e0
 3100 02cb 09       		.uleb128 0x9
 3101 02cc C1060000 		.4byte	0x6c1
 3102 02d0 0C       		.uleb128 0xc
 3103 02d1 D2060000 		.4byte	0x6d2
 3104 02d5 0C       		.uleb128 0xc
 3105 02d6 D9060000 		.4byte	0x6d9
 3106 02da 0C       		.uleb128 0xc
 3107 02db 30000000 		.4byte	0x30
 3108 02df 00       		.byte	0
 3109 02e0 11       		.uleb128 0x11
 3110 02e1 E4350000 		.4byte	.LASF534
 3111 02e5 03       		.byte	0x3
 3112 02e6 F201     		.2byte	0x1f2
 3113 02e8 11190000 		.4byte	.LASF535
 3114 02ec DF060000 		.4byte	0x6df
 3115 02f0 01       		.byte	0x1
 3116 02f1 F9020000 		.4byte	0x2f9
 3117 02f5 FF020000 		.4byte	0x2ff
 3118 02f9 09       		.uleb128 0x9
 3119 02fa C1060000 		.4byte	0x6c1
 3120 02fe 00       		.byte	0
 3121 02ff 13       		.uleb128 0x13
 3122 0300 F5260000 		.4byte	.LASF536
 3123 0304 03       		.byte	0x3
 3124 0305 F901     		.2byte	0x1f9
 3125 0307 FC200000 		.4byte	.LASF537
 3126 030b 01       		.byte	0x1
 3127 030c 14030000 		.4byte	0x314
 3128 0310 1A030000 		.4byte	0x31a
 3129 0314 09       		.uleb128 0x9
 3130 0315 C1060000 		.4byte	0x6c1
 3131 0319 00       		.byte	0
 3132 031a 13       		.uleb128 0x13
 3133 031b 83140000 		.4byte	.LASF538
 3134 031f 03       		.byte	0x3
 3135 0320 0002     		.2byte	0x200
 3136 0322 EE300000 		.4byte	.LASF539
 3137 0326 01       		.byte	0x1
 3138 0327 2F030000 		.4byte	0x32f
 3139 032b 35030000 		.4byte	0x335
 3140 032f 09       		.uleb128 0x9
 3141 0330 C1060000 		.4byte	0x6c1
 3142 0334 00       		.byte	0
 3143 0335 13       		.uleb128 0x13
 3144 0336 27210000 		.4byte	.LASF540
 3145 033a 03       		.byte	0x3
 3146 033b 0B02     		.2byte	0x20b
 3147 033d AD2F0000 		.4byte	.LASF541
 3148 0341 01       		.byte	0x1
 3149 0342 4A030000 		.4byte	0x34a
 3150 0346 50030000 		.4byte	0x350
 3151 034a 09       		.uleb128 0x9
 3152 034b C1060000 		.4byte	0x6c1
 3153 034f 00       		.byte	0
 3154 0350 13       		.uleb128 0x13
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 73


 3155 0351 CE0F0000 		.4byte	.LASF542
 3156 0355 03       		.byte	0x3
 3157 0356 1302     		.2byte	0x213
 3158 0358 4B300000 		.4byte	.LASF543
 3159 035c 01       		.byte	0x1
 3160 035d 65030000 		.4byte	0x365
 3161 0361 6B030000 		.4byte	0x36b
 3162 0365 09       		.uleb128 0x9
 3163 0366 C1060000 		.4byte	0x6c1
 3164 036a 00       		.byte	0
 3165 036b 13       		.uleb128 0x13
 3166 036c 49200000 		.4byte	.LASF544
 3167 0370 03       		.byte	0x3
 3168 0371 1A02     		.2byte	0x21a
 3169 0373 54020000 		.4byte	.LASF545
 3170 0377 01       		.byte	0x1
 3171 0378 80030000 		.4byte	0x380
 3172 037c 86030000 		.4byte	0x386
 3173 0380 09       		.uleb128 0x9
 3174 0381 C1060000 		.4byte	0x6c1
 3175 0385 00       		.byte	0
 3176 0386 13       		.uleb128 0x13
 3177 0387 B8050000 		.4byte	.LASF546
 3178 038b 03       		.byte	0x3
 3179 038c 2102     		.2byte	0x221
 3180 038e A0210000 		.4byte	.LASF547
 3181 0392 01       		.byte	0x1
 3182 0393 9B030000 		.4byte	0x39b
 3183 0397 A1030000 		.4byte	0x3a1
 3184 039b 09       		.uleb128 0x9
 3185 039c C1060000 		.4byte	0x6c1
 3186 03a0 00       		.byte	0
 3187 03a1 13       		.uleb128 0x13
 3188 03a2 58250000 		.4byte	.LASF548
 3189 03a6 03       		.byte	0x3
 3190 03a7 2B02     		.2byte	0x22b
 3191 03a9 17180000 		.4byte	.LASF549
 3192 03ad 01       		.byte	0x1
 3193 03ae B6030000 		.4byte	0x3b6
 3194 03b2 C1030000 		.4byte	0x3c1
 3195 03b6 09       		.uleb128 0x9
 3196 03b7 C1060000 		.4byte	0x6c1
 3197 03bb 0C       		.uleb128 0xc
 3198 03bc 30000000 		.4byte	0x30
 3199 03c0 00       		.byte	0
 3200 03c1 13       		.uleb128 0x13
 3201 03c2 FC080000 		.4byte	.LASF550
 3202 03c6 03       		.byte	0x3
 3203 03c7 3902     		.2byte	0x239
 3204 03c9 FF380000 		.4byte	.LASF551
 3205 03cd 01       		.byte	0x1
 3206 03ce D6030000 		.4byte	0x3d6
 3207 03d2 E1030000 		.4byte	0x3e1
 3208 03d6 09       		.uleb128 0x9
 3209 03d7 C1060000 		.4byte	0x6c1
 3210 03db 0C       		.uleb128 0xc
 3211 03dc 30000000 		.4byte	0x30
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 74


 3212 03e0 00       		.byte	0
 3213 03e1 13       		.uleb128 0x13
 3214 03e2 40230000 		.4byte	.LASF552
 3215 03e6 03       		.byte	0x3
 3216 03e7 4402     		.2byte	0x244
 3217 03e9 81160000 		.4byte	.LASF553
 3218 03ed 01       		.byte	0x1
 3219 03ee F6030000 		.4byte	0x3f6
 3220 03f2 01040000 		.4byte	0x401
 3221 03f6 09       		.uleb128 0x9
 3222 03f7 C1060000 		.4byte	0x6c1
 3223 03fb 0C       		.uleb128 0xc
 3224 03fc 30000000 		.4byte	0x30
 3225 0400 00       		.byte	0
 3226 0401 13       		.uleb128 0x13
 3227 0402 8E250000 		.4byte	.LASF554
 3228 0406 03       		.byte	0x3
 3229 0407 4E02     		.2byte	0x24e
 3230 0409 B7220000 		.4byte	.LASF555
 3231 040d 01       		.byte	0x1
 3232 040e 16040000 		.4byte	0x416
 3233 0412 21040000 		.4byte	0x421
 3234 0416 09       		.uleb128 0x9
 3235 0417 C1060000 		.4byte	0x6c1
 3236 041b 0C       		.uleb128 0xc
 3237 041c 30000000 		.4byte	0x30
 3238 0420 00       		.byte	0
 3239 0421 13       		.uleb128 0x13
 3240 0422 AA130000 		.4byte	.LASF556
 3241 0426 03       		.byte	0x3
 3242 0427 5A02     		.2byte	0x25a
 3243 0429 C72F0000 		.4byte	.LASF557
 3244 042d 01       		.byte	0x1
 3245 042e 36040000 		.4byte	0x436
 3246 0432 41040000 		.4byte	0x441
 3247 0436 09       		.uleb128 0x9
 3248 0437 C1060000 		.4byte	0x6c1
 3249 043b 0C       		.uleb128 0xc
 3250 043c 30000000 		.4byte	0x30
 3251 0440 00       		.byte	0
 3252 0441 13       		.uleb128 0x13
 3253 0442 1A130000 		.4byte	.LASF558
 3254 0446 03       		.byte	0x3
 3255 0447 6D02     		.2byte	0x26d
 3256 0449 16330000 		.4byte	.LASF559
 3257 044d 01       		.byte	0x1
 3258 044e 56040000 		.4byte	0x456
 3259 0452 66040000 		.4byte	0x466
 3260 0456 09       		.uleb128 0x9
 3261 0457 C1060000 		.4byte	0x6c1
 3262 045b 0C       		.uleb128 0xc
 3263 045c 30000000 		.4byte	0x30
 3264 0460 0C       		.uleb128 0xc
 3265 0461 30000000 		.4byte	0x30
 3266 0465 00       		.byte	0
 3267 0466 11       		.uleb128 0x11
 3268 0467 33040000 		.4byte	.LASF560
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 75


 3269 046b 03       		.byte	0x3
 3270 046c 7502     		.2byte	0x275
 3271 046e 580D0000 		.4byte	.LASF561
 3272 0472 30000000 		.4byte	0x30
 3273 0476 01       		.byte	0x1
 3274 0477 7F040000 		.4byte	0x47f
 3275 047b 85040000 		.4byte	0x485
 3276 047f 09       		.uleb128 0x9
 3277 0480 C1060000 		.4byte	0x6c1
 3278 0484 00       		.byte	0
 3279 0485 11       		.uleb128 0x11
 3280 0486 BB040000 		.4byte	.LASF562
 3281 048a 03       		.byte	0x3
 3282 048b 8002     		.2byte	0x280
 3283 048d F60F0000 		.4byte	.LASF563
 3284 0491 30000000 		.4byte	0x30
 3285 0495 01       		.byte	0x1
 3286 0496 9E040000 		.4byte	0x49e
 3287 049a A4040000 		.4byte	0x4a4
 3288 049e 09       		.uleb128 0x9
 3289 049f C1060000 		.4byte	0x6c1
 3290 04a3 00       		.byte	0
 3291 04a4 13       		.uleb128 0x13
 3292 04a5 44040000 		.4byte	.LASF564
 3293 04a9 03       		.byte	0x3
 3294 04aa 8702     		.2byte	0x287
 3295 04ac 112A0000 		.4byte	.LASF565
 3296 04b0 01       		.byte	0x1
 3297 04b1 B9040000 		.4byte	0x4b9
 3298 04b5 BF040000 		.4byte	0x4bf
 3299 04b9 09       		.uleb128 0x9
 3300 04ba C1060000 		.4byte	0x6c1
 3301 04be 00       		.byte	0
 3302 04bf 13       		.uleb128 0x13
 3303 04c0 67370000 		.4byte	.LASF566
 3304 04c4 03       		.byte	0x3
 3305 04c5 9102     		.2byte	0x291
 3306 04c7 C90C0000 		.4byte	.LASF567
 3307 04cb 01       		.byte	0x1
 3308 04cc D4040000 		.4byte	0x4d4
 3309 04d0 E4040000 		.4byte	0x4e4
 3310 04d4 09       		.uleb128 0x9
 3311 04d5 C1060000 		.4byte	0x6c1
 3312 04d9 0C       		.uleb128 0xc
 3313 04da 30000000 		.4byte	0x30
 3314 04de 0C       		.uleb128 0xc
 3315 04df DF060000 		.4byte	0x6df
 3316 04e3 00       		.byte	0
 3317 04e4 13       		.uleb128 0x13
 3318 04e5 64330000 		.4byte	.LASF568
 3319 04e9 03       		.byte	0x3
 3320 04ea 9A02     		.2byte	0x29a
 3321 04ec C60B0000 		.4byte	.LASF569
 3322 04f0 01       		.byte	0x1
 3323 04f1 F9040000 		.4byte	0x4f9
 3324 04f5 09050000 		.4byte	0x509
 3325 04f9 09       		.uleb128 0x9
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 76


 3326 04fa C1060000 		.4byte	0x6c1
 3327 04fe 0C       		.uleb128 0xc
 3328 04ff 30000000 		.4byte	0x30
 3329 0503 0C       		.uleb128 0xc
 3330 0504 DF060000 		.4byte	0x6df
 3331 0508 00       		.byte	0
 3332 0509 13       		.uleb128 0x13
 3333 050a C1050000 		.4byte	.LASF570
 3334 050e 03       		.byte	0x3
 3335 050f A602     		.2byte	0x2a6
 3336 0511 90070000 		.4byte	.LASF571
 3337 0515 01       		.byte	0x1
 3338 0516 1E050000 		.4byte	0x51e
 3339 051a 29050000 		.4byte	0x529
 3340 051e 09       		.uleb128 0x9
 3341 051f C1060000 		.4byte	0x6c1
 3342 0523 0C       		.uleb128 0xc
 3343 0524 D9060000 		.4byte	0x6d9
 3344 0528 00       		.byte	0
 3345 0529 13       		.uleb128 0x13
 3346 052a 17320000 		.4byte	.LASF572
 3347 052e 03       		.byte	0x3
 3348 052f B202     		.2byte	0x2b2
 3349 0531 062D0000 		.4byte	.LASF573
 3350 0535 01       		.byte	0x1
 3351 0536 3E050000 		.4byte	0x53e
 3352 053a 49050000 		.4byte	0x549
 3353 053e 09       		.uleb128 0x9
 3354 053f C1060000 		.4byte	0x6c1
 3355 0543 0C       		.uleb128 0xc
 3356 0544 D9060000 		.4byte	0x6d9
 3357 0548 00       		.byte	0
 3358 0549 13       		.uleb128 0x13
 3359 054a 4C350000 		.4byte	.LASF574
 3360 054e 03       		.byte	0x3
 3361 054f BA02     		.2byte	0x2ba
 3362 0551 25090000 		.4byte	.LASF575
 3363 0555 01       		.byte	0x1
 3364 0556 5E050000 		.4byte	0x55e
 3365 055a 6E050000 		.4byte	0x56e
 3366 055e 09       		.uleb128 0x9
 3367 055f C1060000 		.4byte	0x6c1
 3368 0563 0C       		.uleb128 0xc
 3369 0564 30000000 		.4byte	0x30
 3370 0568 0C       		.uleb128 0xc
 3371 0569 30000000 		.4byte	0x30
 3372 056d 00       		.byte	0
 3373 056e 13       		.uleb128 0x13
 3374 056f 6E090000 		.4byte	.LASF576
 3375 0573 03       		.byte	0x3
 3376 0574 C402     		.2byte	0x2c4
 3377 0576 97090000 		.4byte	.LASF577
 3378 057a 01       		.byte	0x1
 3379 057b 83050000 		.4byte	0x583
 3380 057f 93050000 		.4byte	0x593
 3381 0583 09       		.uleb128 0x9
 3382 0584 C1060000 		.4byte	0x6c1
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 77


 3383 0588 0C       		.uleb128 0xc
 3384 0589 30000000 		.4byte	0x30
 3385 058d 0C       		.uleb128 0xc
 3386 058e 30000000 		.4byte	0x30
 3387 0592 00       		.byte	0
 3388 0593 13       		.uleb128 0x13
 3389 0594 7A040000 		.4byte	.LASF578
 3390 0598 03       		.byte	0x3
 3391 0599 CB02     		.2byte	0x2cb
 3392 059b 72230000 		.4byte	.LASF579
 3393 059f 01       		.byte	0x1
 3394 05a0 A8050000 		.4byte	0x5a8
 3395 05a4 B3050000 		.4byte	0x5b3
 3396 05a8 09       		.uleb128 0x9
 3397 05a9 C1060000 		.4byte	0x6c1
 3398 05ad 0C       		.uleb128 0xc
 3399 05ae D9060000 		.4byte	0x6d9
 3400 05b2 00       		.byte	0
 3401 05b3 11       		.uleb128 0x11
 3402 05b4 B60C0000 		.4byte	.LASF580
 3403 05b8 03       		.byte	0x3
 3404 05b9 D102     		.2byte	0x2d1
 3405 05bb 87010000 		.4byte	.LASF581
 3406 05bf DF060000 		.4byte	0x6df
 3407 05c3 01       		.byte	0x1
 3408 05c4 CC050000 		.4byte	0x5cc
 3409 05c8 D2050000 		.4byte	0x5d2
 3410 05cc 09       		.uleb128 0x9
 3411 05cd C1060000 		.4byte	0x6c1
 3412 05d1 00       		.byte	0
 3413 05d2 11       		.uleb128 0x11
 3414 05d3 061A0000 		.4byte	.LASF582
 3415 05d7 03       		.byte	0x3
 3416 05d8 D702     		.2byte	0x2d7
 3417 05da 192B0000 		.4byte	.LASF583
 3418 05de DF060000 		.4byte	0x6df
 3419 05e2 01       		.byte	0x1
 3420 05e3 EB050000 		.4byte	0x5eb
 3421 05e7 F1050000 		.4byte	0x5f1
 3422 05eb 09       		.uleb128 0x9
 3423 05ec C1060000 		.4byte	0x6c1
 3424 05f0 00       		.byte	0
 3425 05f1 13       		.uleb128 0x13
 3426 05f2 73130000 		.4byte	.LASF584
 3427 05f6 03       		.byte	0x3
 3428 05f7 E902     		.2byte	0x2e9
 3429 05f9 65390000 		.4byte	.LASF585
 3430 05fd 01       		.byte	0x1
 3431 05fe 06060000 		.4byte	0x606
 3432 0602 16060000 		.4byte	0x616
 3433 0606 09       		.uleb128 0x9
 3434 0607 C1060000 		.4byte	0x6c1
 3435 060b 0C       		.uleb128 0xc
 3436 060c D9060000 		.4byte	0x6d9
 3437 0610 0C       		.uleb128 0xc
 3438 0611 30000000 		.4byte	0x30
 3439 0615 00       		.byte	0
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 78


 3440 0616 13       		.uleb128 0x13
 3441 0617 B31A0000 		.4byte	.LASF586
 3442 061b 03       		.byte	0x3
 3443 061c FC02     		.2byte	0x2fc
 3444 061e 9C260000 		.4byte	.LASF587
 3445 0622 01       		.byte	0x1
 3446 0623 2B060000 		.4byte	0x62b
 3447 0627 3B060000 		.4byte	0x63b
 3448 062b 09       		.uleb128 0x9
 3449 062c C1060000 		.4byte	0x6c1
 3450 0630 0C       		.uleb128 0xc
 3451 0631 D9060000 		.4byte	0x6d9
 3452 0635 0C       		.uleb128 0xc
 3453 0636 30000000 		.4byte	0x30
 3454 063a 00       		.byte	0
 3455 063b 11       		.uleb128 0x11
 3456 063c 20260000 		.4byte	.LASF588
 3457 0640 03       		.byte	0x3
 3458 0641 0903     		.2byte	0x309
 3459 0643 B5210000 		.4byte	.LASF589
 3460 0647 30000000 		.4byte	0x30
 3461 064b 01       		.byte	0x1
 3462 064c 54060000 		.4byte	0x654
 3463 0650 5A060000 		.4byte	0x65a
 3464 0654 09       		.uleb128 0x9
 3465 0655 C1060000 		.4byte	0x6c1
 3466 0659 00       		.byte	0
 3467 065a 11       		.uleb128 0x11
 3468 065b 03270000 		.4byte	.LASF590
 3469 065f 03       		.byte	0x3
 3470 0660 1303     		.2byte	0x313
 3471 0662 3C1C0000 		.4byte	.LASF591
 3472 0666 30000000 		.4byte	0x30
 3473 066a 01       		.byte	0x1
 3474 066b 73060000 		.4byte	0x673
 3475 066f 79060000 		.4byte	0x679
 3476 0673 09       		.uleb128 0x9
 3477 0674 C1060000 		.4byte	0x6c1
 3478 0678 00       		.byte	0
 3479 0679 14       		.uleb128 0x14
 3480 067a C9180000 		.4byte	.LASF592
 3481 067e 03       		.byte	0x3
 3482 067f 2503     		.2byte	0x325
 3483 0681 E2340000 		.4byte	.LASF593
 3484 0685 DF060000 		.4byte	0x6df
 3485 0689 01       		.byte	0x1
 3486 068a 8E060000 		.4byte	0x68e
 3487 068e 09       		.uleb128 0x9
 3488 068f C1060000 		.4byte	0x6c1
 3489 0693 0C       		.uleb128 0xc
 3490 0694 E6060000 		.4byte	0x6e6
 3491 0698 0C       		.uleb128 0xc
 3492 0699 CC060000 		.4byte	0x6cc
 3493 069d 0C       		.uleb128 0xc
 3494 069e E6060000 		.4byte	0x6e6
 3495 06a2 00       		.byte	0
 3496 06a3 00       		.byte	0
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 79


 3497 06a4 15       		.uleb128 0x15
 3498 06a5 04       		.byte	0x4
 3499 06a6 65000000 		.4byte	0x65
 3500 06aa 15       		.uleb128 0x15
 3501 06ab 04       		.byte	0x4
 3502 06ac 8D000000 		.4byte	0x8d
 3503 06b0 16       		.uleb128 0x16
 3504 06b1 BB060000 		.4byte	0x6bb
 3505 06b5 0C       		.uleb128 0xc
 3506 06b6 29000000 		.4byte	0x29
 3507 06ba 00       		.byte	0
 3508 06bb 17       		.uleb128 0x17
 3509 06bc 04       		.byte	0x4
 3510 06bd B0060000 		.4byte	0x6b0
 3511 06c1 17       		.uleb128 0x17
 3512 06c2 04       		.byte	0x4
 3513 06c3 23010000 		.4byte	0x123
 3514 06c7 03       		.uleb128 0x3
 3515 06c8 C1060000 		.4byte	0x6c1
 3516 06cc 17       		.uleb128 0x17
 3517 06cd 04       		.byte	0x4
 3518 06ce 30000000 		.4byte	0x30
 3519 06d2 02       		.uleb128 0x2
 3520 06d3 01       		.byte	0x1
 3521 06d4 08       		.byte	0x8
 3522 06d5 CD170000 		.4byte	.LASF594
 3523 06d9 17       		.uleb128 0x17
 3524 06da 04       		.byte	0x4
 3525 06db 37000000 		.4byte	0x37
 3526 06df 02       		.uleb128 0x2
 3527 06e0 01       		.byte	0x1
 3528 06e1 02       		.byte	0x2
 3529 06e2 EE1D0000 		.4byte	.LASF595
 3530 06e6 15       		.uleb128 0x15
 3531 06e7 04       		.byte	0x4
 3532 06e8 30000000 		.4byte	0x30
 3533 06ec 18       		.uleb128 0x18
 3534 06ed 01       		.byte	0x1
 3535 06ee 7501     		.2byte	0x175
 3536 06f0 3C000000 		.4byte	0x3c
 3537 06f4 19       		.uleb128 0x19
 3538 06f5 37000000 		.4byte	0x37
 3539 06f9 0A070000 		.4byte	0x70a
 3540 06fd 1A       		.uleb128 0x1a
 3541 06fe 29000000 		.4byte	0x29
 3542 0702 09       		.byte	0x9
 3543 0703 1A       		.uleb128 0x1a
 3544 0704 29000000 		.4byte	0x29
 3545 0708 01       		.byte	0x1
 3546 0709 00       		.byte	0
 3547 070a 03       		.uleb128 0x3
 3548 070b F4060000 		.4byte	0x6f4
 3549 070f 1B       		.uleb128 0x1b
 3550 0710 9A280000 		.4byte	.LASF596
 3551 0714 01       		.byte	0x1
 3552 0715 8101     		.2byte	0x181
 3553 0717 0A070000 		.4byte	0x70a
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 80


 3554 071b 05       		.uleb128 0x5
 3555 071c 03       		.byte	0x3
 3556 071d 00000000 		.4byte	_ZL9Bank0_Reg
 3557 0721 19       		.uleb128 0x19
 3558 0722 37000000 		.4byte	0x37
 3559 0726 31070000 		.4byte	0x731
 3560 072a 1A       		.uleb128 0x1a
 3561 072b 29000000 		.4byte	0x29
 3562 072f 04       		.byte	0x4
 3563 0730 00       		.byte	0
 3564 0731 03       		.uleb128 0x3
 3565 0732 21070000 		.4byte	0x721
 3566 0736 1B       		.uleb128 0x1b
 3567 0737 100B0000 		.4byte	.LASF597
 3568 073b 01       		.byte	0x1
 3569 073c 9001     		.2byte	0x190
 3570 073e 31070000 		.4byte	0x731
 3571 0742 05       		.uleb128 0x5
 3572 0743 03       		.byte	0x3
 3573 0744 00000000 		.4byte	_ZL11RX0_Address
 3574 0748 19       		.uleb128 0x19
 3575 0749 64070000 		.4byte	0x764
 3576 074d 58070000 		.4byte	0x758
 3577 0751 1A       		.uleb128 0x1a
 3578 0752 29000000 		.4byte	0x29
 3579 0756 0D       		.byte	0xd
 3580 0757 00       		.byte	0
 3581 0758 03       		.uleb128 0x3
 3582 0759 48070000 		.4byte	0x748
 3583 075d 02       		.uleb128 0x2
 3584 075e 04       		.byte	0x4
 3585 075f 07       		.byte	0x7
 3586 0760 E52D0000 		.4byte	.LASF598
 3587 0764 03       		.uleb128 0x3
 3588 0765 5D070000 		.4byte	0x75d
 3589 0769 1B       		.uleb128 0x1b
 3590 076a C61E0000 		.4byte	.LASF599
 3591 076e 01       		.byte	0x1
 3592 076f E401     		.2byte	0x1e4
 3593 0771 58070000 		.4byte	0x758
 3594 0775 05       		.uleb128 0x5
 3595 0776 03       		.byte	0x3
 3596 0777 00000000 		.4byte	_ZL13Bank1_Reg0_13
 3597 077b 19       		.uleb128 0x19
 3598 077c 37000000 		.4byte	0x37
 3599 0780 8B070000 		.4byte	0x78b
 3600 0784 1A       		.uleb128 0x1a
 3601 0785 29000000 		.4byte	0x29
 3602 0789 0A       		.byte	0xa
 3603 078a 00       		.byte	0
 3604 078b 03       		.uleb128 0x3
 3605 078c 7B070000 		.4byte	0x77b
 3606 0790 1B       		.uleb128 0x1b
 3607 0791 77020000 		.4byte	.LASF600
 3608 0795 01       		.byte	0x1
 3609 0796 F501     		.2byte	0x1f5
 3610 0798 8B070000 		.4byte	0x78b
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 81


 3611 079c 05       		.uleb128 0x5
 3612 079d 03       		.byte	0x3
 3613 079e 00000000 		.4byte	_ZL11Bank1_Reg14
 3614 07a2 1C       		.uleb128 0x1c
 3615 07a3 28020000 		.4byte	0x228
 3616 07a7 01       		.byte	0x1
 3617 07a8 2803     		.2byte	0x328
 3618 07aa C0070000 		.4byte	0x7c0
 3619 07ae 00000000 		.4byte	.LFB45
 3620 07b2 EC000000 		.4byte	.LFE45-.LFB45
 3621 07b6 01       		.uleb128 0x1
 3622 07b7 9C       		.byte	0x9c
 3623 07b8 C0070000 		.4byte	0x7c0
 3624 07bc 9B090000 		.4byte	0x99b
 3625 07c0 1D       		.uleb128 0x1d
 3626 07c1 1E250000 		.4byte	.LASF601
 3627 07c5 C7060000 		.4byte	0x6c7
 3628 07c9 00000000 		.4byte	.LLST99
 3629 07cd 1E       		.uleb128 0x1e
 3630 07ce 6900     		.ascii	"i\000"
 3631 07d0 01       		.byte	0x1
 3632 07d1 2903     		.2byte	0x329
 3633 07d3 30000000 		.4byte	0x30
 3634 07d7 2C000000 		.4byte	.LLST100
 3635 07db 1F       		.uleb128 0x1f
 3636 07dc 38000000 		.4byte	.LVL279
 3637 07e0 EB070000 		.4byte	0x7eb
 3638 07e4 20       		.uleb128 0x20
 3639 07e5 01       		.uleb128 0x1
 3640 07e6 51       		.byte	0x51
 3641 07e7 02       		.uleb128 0x2
 3642 07e8 75       		.byte	0x75
 3643 07e9 00       		.sleb128 0
 3644 07ea 00       		.byte	0
 3645 07eb 1F       		.uleb128 0x1f
 3646 07ec 42000000 		.4byte	.LVL280
 3647 07f0 FA070000 		.4byte	0x7fa
 3648 07f4 20       		.uleb128 0x20
 3649 07f5 01       		.uleb128 0x1
 3650 07f6 51       		.byte	0x51
 3651 07f7 01       		.uleb128 0x1
 3652 07f8 31       		.byte	0x31
 3653 07f9 00       		.byte	0
 3654 07fa 1F       		.uleb128 0x1f
 3655 07fb 4C000000 		.4byte	.LVL281
 3656 07ff 0A080000 		.4byte	0x80a
 3657 0803 20       		.uleb128 0x20
 3658 0804 01       		.uleb128 0x1
 3659 0805 51       		.byte	0x51
 3660 0806 02       		.uleb128 0x2
 3661 0807 75       		.byte	0x75
 3662 0808 00       		.sleb128 0
 3663 0809 00       		.byte	0
 3664 080a 1F       		.uleb128 0x1f
 3665 080b 56000000 		.4byte	.LVL282
 3666 080f 1A080000 		.4byte	0x81a
 3667 0813 20       		.uleb128 0x20
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 82


 3668 0814 01       		.uleb128 0x1
 3669 0815 51       		.byte	0x51
 3670 0816 02       		.uleb128 0x2
 3671 0817 75       		.byte	0x75
 3672 0818 00       		.sleb128 0
 3673 0819 00       		.byte	0
 3674 081a 1F       		.uleb128 0x1f
 3675 081b 5C000000 		.4byte	.LVL283
 3676 081f 2A080000 		.4byte	0x82a
 3677 0823 20       		.uleb128 0x20
 3678 0824 01       		.uleb128 0x1
 3679 0825 50       		.byte	0x50
 3680 0826 02       		.uleb128 0x2
 3681 0827 08       		.byte	0x8
 3682 0828 32       		.byte	0x32
 3683 0829 00       		.byte	0
 3684 082a 21       		.uleb128 0x21
 3685 082b 64000000 		.4byte	.LVL284
 3686 082f BF180000 		.4byte	0x18bf
 3687 0833 44080000 		.4byte	0x844
 3688 0837 20       		.uleb128 0x20
 3689 0838 01       		.uleb128 0x1
 3690 0839 50       		.byte	0x50
 3691 083a 02       		.uleb128 0x2
 3692 083b 74       		.byte	0x74
 3693 083c 00       		.sleb128 0
 3694 083d 20       		.uleb128 0x20
 3695 083e 01       		.uleb128 0x1
 3696 083f 51       		.byte	0x51
 3697 0840 02       		.uleb128 0x2
 3698 0841 75       		.byte	0x75
 3699 0842 00       		.sleb128 0
 3700 0843 00       		.byte	0
 3701 0844 21       		.uleb128 0x21
 3702 0845 74000000 		.4byte	.LVL285
 3703 0849 F51A0000 		.4byte	0x1af5
 3704 084d 66080000 		.4byte	0x866
 3705 0851 20       		.uleb128 0x20
 3706 0852 01       		.uleb128 0x1
 3707 0853 50       		.byte	0x50
 3708 0854 02       		.uleb128 0x2
 3709 0855 74       		.byte	0x74
 3710 0856 00       		.sleb128 0
 3711 0857 20       		.uleb128 0x20
 3712 0858 01       		.uleb128 0x1
 3713 0859 51       		.byte	0x51
 3714 085a 0A       		.uleb128 0xa
 3715 085b 75       		.byte	0x75
 3716 085c 00       		.sleb128 0
 3717 085d 03       		.byte	0x3
 3718 085e FEFFFFFF 		.4byte	.LANCHOR2-2
 3719 0862 22       		.byte	0x22
 3720 0863 94       		.byte	0x94
 3721 0864 01       		.byte	0x1
 3722 0865 00       		.byte	0
 3723 0866 21       		.uleb128 0x21
 3724 0867 82000000 		.4byte	.LVL286
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 83


 3725 086b 33110000 		.4byte	0x1133
 3726 086f 80080000 		.4byte	0x880
 3727 0873 20       		.uleb128 0x20
 3728 0874 01       		.uleb128 0x1
 3729 0875 50       		.byte	0x50
 3730 0876 02       		.uleb128 0x2
 3731 0877 74       		.byte	0x74
 3732 0878 00       		.sleb128 0
 3733 0879 20       		.uleb128 0x20
 3734 087a 01       		.uleb128 0x1
 3735 087b 51       		.byte	0x51
 3736 087c 02       		.uleb128 0x2
 3737 087d 75       		.byte	0x75
 3738 087e 00       		.sleb128 0
 3739 087f 00       		.byte	0
 3740 0880 21       		.uleb128 0x21
 3741 0881 8A000000 		.4byte	.LVL287
 3742 0885 D5100000 		.4byte	0x10d5
 3743 0889 9A080000 		.4byte	0x89a
 3744 088d 20       		.uleb128 0x20
 3745 088e 01       		.uleb128 0x1
 3746 088f 50       		.byte	0x50
 3747 0890 02       		.uleb128 0x2
 3748 0891 74       		.byte	0x74
 3749 0892 00       		.sleb128 0
 3750 0893 20       		.uleb128 0x20
 3751 0894 01       		.uleb128 0x1
 3752 0895 51       		.byte	0x51
 3753 0896 02       		.uleb128 0x2
 3754 0897 75       		.byte	0x75
 3755 0898 00       		.sleb128 0
 3756 0899 00       		.byte	0
 3757 089a 21       		.uleb128 0x21
 3758 089b 92000000 		.4byte	.LVL288
 3759 089f 1A100000 		.4byte	0x101a
 3760 08a3 B4080000 		.4byte	0x8b4
 3761 08a7 20       		.uleb128 0x20
 3762 08a8 01       		.uleb128 0x1
 3763 08a9 50       		.byte	0x50
 3764 08aa 02       		.uleb128 0x2
 3765 08ab 74       		.byte	0x74
 3766 08ac 00       		.sleb128 0
 3767 08ad 20       		.uleb128 0x20
 3768 08ae 01       		.uleb128 0x1
 3769 08af 51       		.byte	0x51
 3770 08b0 02       		.uleb128 0x2
 3771 08b1 75       		.byte	0x75
 3772 08b2 00       		.sleb128 0
 3773 08b3 00       		.byte	0
 3774 08b4 21       		.uleb128 0x21
 3775 08b5 9A000000 		.4byte	.LVL289
 3776 08b9 5C1A0000 		.4byte	0x1a5c
 3777 08bd CD080000 		.4byte	0x8cd
 3778 08c1 20       		.uleb128 0x20
 3779 08c2 01       		.uleb128 0x1
 3780 08c3 50       		.byte	0x50
 3781 08c4 02       		.uleb128 0x2
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 84


 3782 08c5 74       		.byte	0x74
 3783 08c6 00       		.sleb128 0
 3784 08c7 20       		.uleb128 0x20
 3785 08c8 01       		.uleb128 0x1
 3786 08c9 51       		.byte	0x51
 3787 08ca 01       		.uleb128 0x1
 3788 08cb 4D       		.byte	0x4d
 3789 08cc 00       		.byte	0
 3790 08cd 21       		.uleb128 0x21
 3791 08ce A8000000 		.4byte	.LVL291
 3792 08d2 F51A0000 		.4byte	0x1af5
 3793 08d6 ED080000 		.4byte	0x8ed
 3794 08da 20       		.uleb128 0x20
 3795 08db 01       		.uleb128 0x1
 3796 08dc 50       		.byte	0x50
 3797 08dd 02       		.uleb128 0x2
 3798 08de 74       		.byte	0x74
 3799 08df 00       		.sleb128 0
 3800 08e0 20       		.uleb128 0x20
 3801 08e1 01       		.uleb128 0x1
 3802 08e2 51       		.byte	0x51
 3803 08e3 02       		.uleb128 0x2
 3804 08e4 08       		.byte	0x8
 3805 08e5 50       		.byte	0x50
 3806 08e6 20       		.uleb128 0x20
 3807 08e7 01       		.uleb128 0x1
 3808 08e8 52       		.byte	0x52
 3809 08e9 02       		.uleb128 0x2
 3810 08ea 08       		.byte	0x8
 3811 08eb 73       		.byte	0x73
 3812 08ec 00       		.byte	0
 3813 08ed 21       		.uleb128 0x21
 3814 08ee B2000000 		.4byte	.LVL292
 3815 08f2 F51A0000 		.4byte	0x1af5
 3816 08f6 0C090000 		.4byte	0x90c
 3817 08fa 20       		.uleb128 0x20
 3818 08fb 01       		.uleb128 0x1
 3819 08fc 50       		.byte	0x50
 3820 08fd 02       		.uleb128 0x2
 3821 08fe 74       		.byte	0x74
 3822 08ff 00       		.sleb128 0
 3823 0900 20       		.uleb128 0x20
 3824 0901 01       		.uleb128 0x1
 3825 0902 51       		.byte	0x51
 3826 0903 01       		.uleb128 0x1
 3827 0904 4C       		.byte	0x4c
 3828 0905 20       		.uleb128 0x20
 3829 0906 01       		.uleb128 0x1
 3830 0907 52       		.byte	0x52
 3831 0908 02       		.uleb128 0x2
 3832 0909 08       		.byte	0x8
 3833 090a 3F       		.byte	0x3f
 3834 090b 00       		.byte	0
 3835 090c 21       		.uleb128 0x21
 3836 090d BC000000 		.4byte	.LVL293
 3837 0911 F51A0000 		.4byte	0x1af5
 3838 0915 2A090000 		.4byte	0x92a
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 85


 3839 0919 20       		.uleb128 0x20
 3840 091a 01       		.uleb128 0x1
 3841 091b 50       		.byte	0x50
 3842 091c 02       		.uleb128 0x2
 3843 091d 74       		.byte	0x74
 3844 091e 00       		.sleb128 0
 3845 091f 20       		.uleb128 0x20
 3846 0920 01       		.uleb128 0x1
 3847 0921 51       		.byte	0x51
 3848 0922 01       		.uleb128 0x1
 3849 0923 4D       		.byte	0x4d
 3850 0924 20       		.uleb128 0x20
 3851 0925 01       		.uleb128 0x1
 3852 0926 52       		.byte	0x52
 3853 0927 01       		.uleb128 0x1
 3854 0928 37       		.byte	0x37
 3855 0929 00       		.byte	0
 3856 092a 21       		.uleb128 0x21
 3857 092b C6000000 		.4byte	.LVL294
 3858 092f A40B0000 		.4byte	0xba4
 3859 0933 48090000 		.4byte	0x948
 3860 0937 20       		.uleb128 0x20
 3861 0938 01       		.uleb128 0x1
 3862 0939 50       		.byte	0x50
 3863 093a 02       		.uleb128 0x2
 3864 093b 74       		.byte	0x74
 3865 093c 00       		.sleb128 0
 3866 093d 20       		.uleb128 0x20
 3867 093e 01       		.uleb128 0x1
 3868 093f 51       		.byte	0x51
 3869 0940 01       		.uleb128 0x1
 3870 0941 30       		.byte	0x30
 3871 0942 20       		.uleb128 0x20
 3872 0943 01       		.uleb128 0x1
 3873 0944 52       		.byte	0x52
 3874 0945 01       		.uleb128 0x1
 3875 0946 30       		.byte	0x30
 3876 0947 00       		.byte	0
 3877 0948 21       		.uleb128 0x21
 3878 0949 D0000000 		.4byte	.LVL295
 3879 094d A40B0000 		.4byte	0xba4
 3880 0951 66090000 		.4byte	0x966
 3881 0955 20       		.uleb128 0x20
 3882 0956 01       		.uleb128 0x1
 3883 0957 50       		.byte	0x50
 3884 0958 02       		.uleb128 0x2
 3885 0959 74       		.byte	0x74
 3886 095a 00       		.sleb128 0
 3887 095b 20       		.uleb128 0x20
 3888 095c 01       		.uleb128 0x1
 3889 095d 51       		.byte	0x51
 3890 095e 01       		.uleb128 0x1
 3891 095f 31       		.byte	0x31
 3892 0960 20       		.uleb128 0x20
 3893 0961 01       		.uleb128 0x1
 3894 0962 52       		.byte	0x52
 3895 0963 01       		.uleb128 0x1
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 86


 3896 0964 30       		.byte	0x30
 3897 0965 00       		.byte	0
 3898 0966 21       		.uleb128 0x21
 3899 0967 D6000000 		.4byte	.LVL296
 3900 096b 7C170000 		.4byte	0x177c
 3901 096f 7A090000 		.4byte	0x97a
 3902 0973 20       		.uleb128 0x20
 3903 0974 01       		.uleb128 0x1
 3904 0975 50       		.byte	0x50
 3905 0976 02       		.uleb128 0x2
 3906 0977 74       		.byte	0x74
 3907 0978 00       		.sleb128 0
 3908 0979 00       		.byte	0
 3909 097a 1F       		.uleb128 0x1f
 3910 097b DC000000 		.4byte	.LVL297
 3911 097f 8A090000 		.4byte	0x98a
 3912 0983 20       		.uleb128 0x20
 3913 0984 01       		.uleb128 0x1
 3914 0985 50       		.byte	0x50
 3915 0986 02       		.uleb128 0x2
 3916 0987 08       		.byte	0x8
 3917 0988 32       		.byte	0x32
 3918 0989 00       		.byte	0
 3919 098a 22       		.uleb128 0x22
 3920 098b E2000000 		.4byte	.LVL298
 3921 098f E9150000 		.4byte	0x15e9
 3922 0993 20       		.uleb128 0x20
 3923 0994 01       		.uleb128 0x1
 3924 0995 50       		.byte	0x50
 3925 0996 02       		.uleb128 0x2
 3926 0997 74       		.byte	0x74
 3927 0998 00       		.sleb128 0
 3928 0999 00       		.byte	0
 3929 099a 00       		.byte	0
 3930 099b 23       		.uleb128 0x23
 3931 099c 79060000 		.4byte	0x679
 3932 09a0 01       		.byte	0x1
 3933 09a1 1903     		.2byte	0x319
 3934 09a3 B9090000 		.4byte	0x9b9
 3935 09a7 00000000 		.4byte	.LFB44
 3936 09ab 30000000 		.4byte	.LFE44-.LFB44
 3937 09af 01       		.uleb128 0x1
 3938 09b0 9C       		.byte	0x9c
 3939 09b1 B9090000 		.4byte	0x9b9
 3940 09b5 490A0000 		.4byte	0xa49
 3941 09b9 1D       		.uleb128 0x1d
 3942 09ba 1E250000 		.4byte	.LASF601
 3943 09be C7060000 		.4byte	0x6c7
 3944 09c2 3F000000 		.4byte	.LLST94
 3945 09c6 24       		.uleb128 0x24
 3946 09c7 62100000 		.4byte	.LASF602
 3947 09cb 01       		.byte	0x1
 3948 09cc 1A03     		.2byte	0x31a
 3949 09ce E6060000 		.4byte	0x6e6
 3950 09d2 6B000000 		.4byte	.LLST95
 3951 09d6 25       		.uleb128 0x25
 3952 09d7 62756600 		.ascii	"buf\000"
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 87


 3953 09db 01       		.byte	0x1
 3954 09dc 1B03     		.2byte	0x31b
 3955 09de CC060000 		.4byte	0x6cc
 3956 09e2 97000000 		.4byte	.LLST96
 3957 09e6 24       		.uleb128 0x24
 3958 09e7 F9270000 		.4byte	.LASF603
 3959 09eb 01       		.byte	0x1
 3960 09ec 1C03     		.2byte	0x31c
 3961 09ee E6060000 		.4byte	0x6e6
 3962 09f2 C3000000 		.4byte	.LLST97
 3963 09f6 1E       		.uleb128 0x1e
 3964 09f7 7000     		.ascii	"p\000"
 3965 09f9 01       		.byte	0x1
 3966 09fa 1E03     		.2byte	0x31e
 3967 09fc 30000000 		.4byte	0x30
 3968 0a00 EF000000 		.4byte	.LLST98
 3969 0a04 21       		.uleb128 0x21
 3970 0a05 0E000000 		.4byte	.LVL264
 3971 0a09 8C0A0000 		.4byte	0xa8c
 3972 0a0d 180A0000 		.4byte	0xa18
 3973 0a11 20       		.uleb128 0x20
 3974 0a12 01       		.uleb128 0x1
 3975 0a13 50       		.byte	0x50
 3976 0a14 02       		.uleb128 0x2
 3977 0a15 74       		.byte	0x74
 3978 0a16 00       		.sleb128 0
 3979 0a17 00       		.byte	0
 3980 0a18 21       		.uleb128 0x21
 3981 0a19 1C000000 		.4byte	.LVL266
 3982 0a1d 490A0000 		.4byte	0xa49
 3983 0a21 2C0A0000 		.4byte	0xa2c
 3984 0a25 20       		.uleb128 0x20
 3985 0a26 01       		.uleb128 0x1
 3986 0a27 50       		.byte	0x50
 3987 0a28 02       		.uleb128 0x2
 3988 0a29 74       		.byte	0x74
 3989 0a2a 00       		.sleb128 0
 3990 0a2b 00       		.byte	0
 3991 0a2c 22       		.uleb128 0x22
 3992 0a2d 2A000000 		.4byte	.LVL267
 3993 0a31 A5190000 		.4byte	0x19a5
 3994 0a35 20       		.uleb128 0x20
 3995 0a36 01       		.uleb128 0x1
 3996 0a37 50       		.byte	0x50
 3997 0a38 02       		.uleb128 0x2
 3998 0a39 74       		.byte	0x74
 3999 0a3a 00       		.sleb128 0
 4000 0a3b 20       		.uleb128 0x20
 4001 0a3c 01       		.uleb128 0x1
 4002 0a3d 51       		.byte	0x51
 4003 0a3e 02       		.uleb128 0x2
 4004 0a3f 08       		.byte	0x8
 4005 0a40 61       		.byte	0x61
 4006 0a41 20       		.uleb128 0x20
 4007 0a42 01       		.uleb128 0x1
 4008 0a43 52       		.byte	0x52
 4009 0a44 02       		.uleb128 0x2
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 88


 4010 0a45 75       		.byte	0x75
 4011 0a46 00       		.sleb128 0
 4012 0a47 00       		.byte	0
 4013 0a48 00       		.byte	0
 4014 0a49 23       		.uleb128 0x23
 4015 0a4a 5A060000 		.4byte	0x65a
 4016 0a4e 01       		.byte	0x1
 4017 0a4f 1503     		.2byte	0x315
 4018 0a51 670A0000 		.4byte	0xa67
 4019 0a55 00000000 		.4byte	.LFB43
 4020 0a59 0A000000 		.4byte	.LFE43-.LFB43
 4021 0a5d 01       		.uleb128 0x1
 4022 0a5e 9C       		.byte	0x9c
 4023 0a5f 670A0000 		.4byte	0xa67
 4024 0a63 8C0A0000 		.4byte	0xa8c
 4025 0a67 1D       		.uleb128 0x1d
 4026 0a68 1E250000 		.4byte	.LASF601
 4027 0a6c C7060000 		.4byte	0x6c7
 4028 0a70 0E010000 		.4byte	.LLST93
 4029 0a74 22       		.uleb128 0x22
 4030 0a75 08000000 		.4byte	.LVL262
 4031 0a79 5C1A0000 		.4byte	0x1a5c
 4032 0a7d 20       		.uleb128 0x20
 4033 0a7e 01       		.uleb128 0x1
 4034 0a7f 50       		.byte	0x50
 4035 0a80 03       		.uleb128 0x3
 4036 0a81 F3       		.byte	0xf3
 4037 0a82 01       		.uleb128 0x1
 4038 0a83 50       		.byte	0x50
 4039 0a84 20       		.uleb128 0x20
 4040 0a85 01       		.uleb128 0x1
 4041 0a86 51       		.byte	0x51
 4042 0a87 02       		.uleb128 0x2
 4043 0a88 08       		.byte	0x8
 4044 0a89 60       		.byte	0x60
 4045 0a8a 00       		.byte	0
 4046 0a8b 00       		.byte	0
 4047 0a8c 23       		.uleb128 0x23
 4048 0a8d 3B060000 		.4byte	0x63b
 4049 0a91 01       		.byte	0x1
 4050 0a92 1003     		.2byte	0x310
 4051 0a94 AA0A0000 		.4byte	0xaaa
 4052 0a98 00000000 		.4byte	.LFB42
 4053 0a9c 0E000000 		.4byte	.LFE42-.LFB42
 4054 0aa0 01       		.uleb128 0x1
 4055 0aa1 9C       		.byte	0x9c
 4056 0aa2 AA0A0000 		.4byte	0xaaa
 4057 0aa6 DE0A0000 		.4byte	0xade
 4058 0aaa 1D       		.uleb128 0x1d
 4059 0aab 1E250000 		.4byte	.LASF601
 4060 0aaf C7060000 		.4byte	0x6c7
 4061 0ab3 2F010000 		.4byte	.LLST91
 4062 0ab7 26       		.uleb128 0x26
 4063 0ab8 591A0000 		.4byte	.LASF604
 4064 0abc 01       		.byte	0x1
 4065 0abd 1103     		.2byte	0x311
 4066 0abf 30000000 		.4byte	0x30
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 89


 4067 0ac3 50010000 		.4byte	.LLST92
 4068 0ac7 22       		.uleb128 0x22
 4069 0ac8 08000000 		.4byte	.LVL259
 4070 0acc 5C1A0000 		.4byte	0x1a5c
 4071 0ad0 20       		.uleb128 0x20
 4072 0ad1 01       		.uleb128 0x1
 4073 0ad2 50       		.byte	0x50
 4074 0ad3 03       		.uleb128 0x3
 4075 0ad4 F3       		.byte	0xf3
 4076 0ad5 01       		.uleb128 0x1
 4077 0ad6 50       		.byte	0x50
 4078 0ad7 20       		.uleb128 0x20
 4079 0ad8 01       		.uleb128 0x1
 4080 0ad9 51       		.byte	0x51
 4081 0ada 01       		.uleb128 0x1
 4082 0adb 37       		.byte	0x37
 4083 0adc 00       		.byte	0
 4084 0add 00       		.byte	0
 4085 0ade 23       		.uleb128 0x23
 4086 0adf 16060000 		.4byte	0x616
 4087 0ae3 01       		.byte	0x1
 4088 0ae4 0603     		.2byte	0x306
 4089 0ae6 FC0A0000 		.4byte	0xafc
 4090 0aea 00000000 		.4byte	.LFB41
 4091 0aee 16000000 		.4byte	.LFE41-.LFB41
 4092 0af2 01       		.uleb128 0x1
 4093 0af3 9C       		.byte	0x9c
 4094 0af4 FC0A0000 		.4byte	0xafc
 4095 0af8 410B0000 		.4byte	0xb41
 4096 0afc 1D       		.uleb128 0x1d
 4097 0afd 1E250000 		.4byte	.LASF601
 4098 0b01 C7060000 		.4byte	0x6c7
 4099 0b05 63010000 		.4byte	.LLST88
 4100 0b09 25       		.uleb128 0x25
 4101 0b0a 62756600 		.ascii	"buf\000"
 4102 0b0e 01       		.byte	0x1
 4103 0b0f 0703     		.2byte	0x307
 4104 0b11 D9060000 		.4byte	0x6d9
 4105 0b15 84010000 		.4byte	.LLST89
 4106 0b19 24       		.uleb128 0x24
 4107 0b1a F9270000 		.4byte	.LASF603
 4108 0b1e 01       		.byte	0x1
 4109 0b1f 0803     		.2byte	0x308
 4110 0b21 30000000 		.4byte	0x30
 4111 0b25 B0010000 		.4byte	.LLST90
 4112 0b29 22       		.uleb128 0x22
 4113 0b2a 14000000 		.4byte	.LVL257
 4114 0b2e F3180000 		.4byte	0x18f3
 4115 0b32 20       		.uleb128 0x20
 4116 0b33 01       		.uleb128 0x1
 4117 0b34 51       		.byte	0x51
 4118 0b35 02       		.uleb128 0x2
 4119 0b36 09       		.byte	0x9
 4120 0b37 B0       		.byte	0xb0
 4121 0b38 20       		.uleb128 0x20
 4122 0b39 01       		.uleb128 0x1
 4123 0b3a 52       		.byte	0x52
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 90


 4124 0b3b 03       		.uleb128 0x3
 4125 0b3c F3       		.byte	0xf3
 4126 0b3d 01       		.uleb128 0x1
 4127 0b3e 51       		.byte	0x51
 4128 0b3f 00       		.byte	0
 4129 0b40 00       		.byte	0
 4130 0b41 23       		.uleb128 0x23
 4131 0b42 F1050000 		.4byte	0x5f1
 4132 0b46 01       		.byte	0x1
 4133 0b47 FC02     		.2byte	0x2fc
 4134 0b49 5F0B0000 		.4byte	0xb5f
 4135 0b4d 00000000 		.4byte	.LFB40
 4136 0b51 16000000 		.4byte	.LFE40-.LFB40
 4137 0b55 01       		.uleb128 0x1
 4138 0b56 9C       		.byte	0x9c
 4139 0b57 5F0B0000 		.4byte	0xb5f
 4140 0b5b A40B0000 		.4byte	0xba4
 4141 0b5f 1D       		.uleb128 0x1d
 4142 0b60 1E250000 		.4byte	.LASF601
 4143 0b64 C7060000 		.4byte	0x6c7
 4144 0b68 00020000 		.4byte	.LLST85
 4145 0b6c 25       		.uleb128 0x25
 4146 0b6d 62756600 		.ascii	"buf\000"
 4147 0b71 01       		.byte	0x1
 4148 0b72 FD02     		.2byte	0x2fd
 4149 0b74 D9060000 		.4byte	0x6d9
 4150 0b78 21020000 		.4byte	.LLST86
 4151 0b7c 24       		.uleb128 0x24
 4152 0b7d F9270000 		.4byte	.LASF603
 4153 0b81 01       		.byte	0x1
 4154 0b82 FE02     		.2byte	0x2fe
 4155 0b84 30000000 		.4byte	0x30
 4156 0b88 4D020000 		.4byte	.LLST87
 4157 0b8c 22       		.uleb128 0x22
 4158 0b8d 14000000 		.4byte	.LVL253
 4159 0b91 F3180000 		.4byte	0x18f3
 4160 0b95 20       		.uleb128 0x20
 4161 0b96 01       		.uleb128 0x1
 4162 0b97 51       		.byte	0x51
 4163 0b98 02       		.uleb128 0x2
 4164 0b99 09       		.byte	0x9
 4165 0b9a A0       		.byte	0xa0
 4166 0b9b 20       		.uleb128 0x20
 4167 0b9c 01       		.uleb128 0x1
 4168 0b9d 52       		.byte	0x52
 4169 0b9e 03       		.uleb128 0x3
 4170 0b9f F3       		.byte	0xf3
 4171 0ba0 01       		.uleb128 0x1
 4172 0ba1 51       		.byte	0x51
 4173 0ba2 00       		.byte	0
 4174 0ba3 00       		.byte	0
 4175 0ba4 23       		.uleb128 0x23
 4176 0ba5 6E050000 		.4byte	0x56e
 4177 0ba9 01       		.byte	0x1
 4178 0baa ED02     		.2byte	0x2ed
 4179 0bac C20B0000 		.4byte	0xbc2
 4180 0bb0 00000000 		.4byte	.LFB39
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 91


 4181 0bb4 44000000 		.4byte	.LFE39-.LFB39
 4182 0bb8 01       		.uleb128 0x1
 4183 0bb9 9C       		.byte	0x9c
 4184 0bba C20B0000 		.4byte	0xbc2
 4185 0bbe 4E0C0000 		.4byte	0xc4e
 4186 0bc2 1D       		.uleb128 0x1d
 4187 0bc3 1E250000 		.4byte	.LASF601
 4188 0bc7 C7060000 		.4byte	0x6c7
 4189 0bcb 9D020000 		.4byte	.LLST81
 4190 0bcf 24       		.uleb128 0x24
 4191 0bd0 58250000 		.4byte	.LASF548
 4192 0bd4 01       		.byte	0x1
 4193 0bd5 ED02     		.2byte	0x2ed
 4194 0bd7 30000000 		.4byte	0x30
 4195 0bdb C9020000 		.4byte	.LLST82
 4196 0bdf 24       		.uleb128 0x24
 4197 0be0 2C200000 		.4byte	.LASF605
 4198 0be4 01       		.byte	0x1
 4199 0be5 ED02     		.2byte	0x2ed
 4200 0be7 30000000 		.4byte	0x30
 4201 0beb EA020000 		.4byte	.LLST83
 4202 0bef 1E       		.uleb128 0x1e
 4203 0bf0 76616C00 		.ascii	"val\000"
 4204 0bf4 01       		.byte	0x1
 4205 0bf5 EE02     		.2byte	0x2ee
 4206 0bf7 30000000 		.4byte	0x30
 4207 0bfb 0B030000 		.4byte	.LLST84
 4208 0bff 21       		.uleb128 0x21
 4209 0c00 18000000 		.4byte	.LVL244
 4210 0c04 5C1A0000 		.4byte	0x1a5c
 4211 0c08 180C0000 		.4byte	0xc18
 4212 0c0c 20       		.uleb128 0x20
 4213 0c0d 01       		.uleb128 0x1
 4214 0c0e 50       		.byte	0x50
 4215 0c0f 02       		.uleb128 0x2
 4216 0c10 76       		.byte	0x76
 4217 0c11 00       		.sleb128 0
 4218 0c12 20       		.uleb128 0x20
 4219 0c13 01       		.uleb128 0x1
 4220 0c14 51       		.byte	0x51
 4221 0c15 01       		.uleb128 0x1
 4222 0c16 4C       		.byte	0x4c
 4223 0c17 00       		.byte	0
 4224 0c18 21       		.uleb128 0x21
 4225 0c19 38000000 		.4byte	.LVL247
 4226 0c1d F51A0000 		.4byte	0x1af5
 4227 0c21 310C0000 		.4byte	0xc31
 4228 0c25 20       		.uleb128 0x20
 4229 0c26 01       		.uleb128 0x1
 4230 0c27 50       		.byte	0x50
 4231 0c28 02       		.uleb128 0x2
 4232 0c29 76       		.byte	0x76
 4233 0c2a 00       		.sleb128 0
 4234 0c2b 20       		.uleb128 0x20
 4235 0c2c 01       		.uleb128 0x1
 4236 0c2d 51       		.byte	0x51
 4237 0c2e 01       		.uleb128 0x1
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 92


 4238 0c2f 4C       		.byte	0x4c
 4239 0c30 00       		.byte	0
 4240 0c31 22       		.uleb128 0x22
 4241 0c32 42000000 		.4byte	.LVL248
 4242 0c36 F51A0000 		.4byte	0x1af5
 4243 0c3a 20       		.uleb128 0x20
 4244 0c3b 01       		.uleb128 0x1
 4245 0c3c 50       		.byte	0x50
 4246 0c3d 02       		.uleb128 0x2
 4247 0c3e 76       		.byte	0x76
 4248 0c3f 00       		.sleb128 0
 4249 0c40 20       		.uleb128 0x20
 4250 0c41 01       		.uleb128 0x1
 4251 0c42 51       		.byte	0x51
 4252 0c43 02       		.uleb128 0x2
 4253 0c44 74       		.byte	0x74
 4254 0c45 00       		.sleb128 0
 4255 0c46 20       		.uleb128 0x20
 4256 0c47 01       		.uleb128 0x1
 4257 0c48 52       		.byte	0x52
 4258 0c49 02       		.uleb128 0x2
 4259 0c4a 75       		.byte	0x75
 4260 0c4b 00       		.sleb128 0
 4261 0c4c 00       		.byte	0
 4262 0c4d 00       		.byte	0
 4263 0c4e 23       		.uleb128 0x23
 4264 0c4f 21040000 		.4byte	0x421
 4265 0c53 01       		.byte	0x1
 4266 0c54 E002     		.2byte	0x2e0
 4267 0c56 6C0C0000 		.4byte	0xc6c
 4268 0c5a 00000000 		.4byte	.LFB38
 4269 0c5e 44000000 		.4byte	.LFE38-.LFB38
 4270 0c62 01       		.uleb128 0x1
 4271 0c63 9C       		.byte	0x9c
 4272 0c64 6C0C0000 		.4byte	0xc6c
 4273 0c68 E60C0000 		.4byte	0xce6
 4274 0c6c 1D       		.uleb128 0x1d
 4275 0c6d 1E250000 		.4byte	.LASF601
 4276 0c71 C7060000 		.4byte	0x6c7
 4277 0c75 29030000 		.4byte	.LLST78
 4278 0c79 24       		.uleb128 0x24
 4279 0c7a 42070000 		.4byte	.LASF606
 4280 0c7e 01       		.byte	0x1
 4281 0c7f E002     		.2byte	0x2e0
 4282 0c81 30000000 		.4byte	0x30
 4283 0c85 55030000 		.4byte	.LLST79
 4284 0c89 1E       		.uleb128 0x1e
 4285 0c8a 76616C00 		.ascii	"val\000"
 4286 0c8e 01       		.byte	0x1
 4287 0c8f E502     		.2byte	0x2e5
 4288 0c91 30000000 		.4byte	0x30
 4289 0c95 85030000 		.4byte	.LLST80
 4290 0c99 1F       		.uleb128 0x1f
 4291 0c9a 10000000 		.4byte	.LVL233
 4292 0c9e A80C0000 		.4byte	0xca8
 4293 0ca2 20       		.uleb128 0x20
 4294 0ca3 01       		.uleb128 0x1
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 93


 4295 0ca4 51       		.byte	0x51
 4296 0ca5 01       		.uleb128 0x1
 4297 0ca6 30       		.byte	0x30
 4298 0ca7 00       		.byte	0
 4299 0ca8 21       		.uleb128 0x21
 4300 0ca9 18000000 		.4byte	.LVL234
 4301 0cad 5C1A0000 		.4byte	0x1a5c
 4302 0cb1 C10C0000 		.4byte	0xcc1
 4303 0cb5 20       		.uleb128 0x20
 4304 0cb6 01       		.uleb128 0x1
 4305 0cb7 50       		.byte	0x50
 4306 0cb8 02       		.uleb128 0x2
 4307 0cb9 74       		.byte	0x74
 4308 0cba 00       		.sleb128 0
 4309 0cbb 20       		.uleb128 0x20
 4310 0cbc 01       		.uleb128 0x1
 4311 0cbd 51       		.byte	0x51
 4312 0cbe 01       		.uleb128 0x1
 4313 0cbf 36       		.byte	0x36
 4314 0cc0 00       		.byte	0
 4315 0cc1 21       		.uleb128 0x21
 4316 0cc2 38000000 		.4byte	.LVL237
 4317 0cc6 F51A0000 		.4byte	0x1af5
 4318 0cca DA0C0000 		.4byte	0xcda
 4319 0cce 20       		.uleb128 0x20
 4320 0ccf 01       		.uleb128 0x1
 4321 0cd0 50       		.byte	0x50
 4322 0cd1 02       		.uleb128 0x2
 4323 0cd2 74       		.byte	0x74
 4324 0cd3 00       		.sleb128 0
 4325 0cd4 20       		.uleb128 0x20
 4326 0cd5 01       		.uleb128 0x1
 4327 0cd6 51       		.byte	0x51
 4328 0cd7 01       		.uleb128 0x1
 4329 0cd8 36       		.byte	0x36
 4330 0cd9 00       		.byte	0
 4331 0cda 27       		.uleb128 0x27
 4332 0cdb 42000000 		.4byte	.LVL238
 4333 0cdf 20       		.uleb128 0x20
 4334 0ce0 01       		.uleb128 0x1
 4335 0ce1 51       		.byte	0x51
 4336 0ce2 01       		.uleb128 0x1
 4337 0ce3 31       		.byte	0x31
 4338 0ce4 00       		.byte	0
 4339 0ce5 00       		.byte	0
 4340 0ce6 23       		.uleb128 0x23
 4341 0ce7 6B030000 		.4byte	0x36b
 4342 0ceb 01       		.byte	0x1
 4343 0cec DA02     		.2byte	0x2da
 4344 0cee 040D0000 		.4byte	0xd04
 4345 0cf2 00000000 		.4byte	.LFB37
 4346 0cf6 18000000 		.4byte	.LFE37-.LFB37
 4347 0cfa 01       		.uleb128 0x1
 4348 0cfb 9C       		.byte	0x9c
 4349 0cfc 040D0000 		.4byte	0xd04
 4350 0d00 500D0000 		.4byte	0xd50
 4351 0d04 1D       		.uleb128 0x1d
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 94


 4352 0d05 1E250000 		.4byte	.LASF601
 4353 0d09 C7060000 		.4byte	0x6c7
 4354 0d0d B3030000 		.4byte	.LLST76
 4355 0d11 1E       		.uleb128 0x1e
 4356 0d12 76616C00 		.ascii	"val\000"
 4357 0d16 01       		.byte	0x1
 4358 0d17 DB02     		.2byte	0x2db
 4359 0d19 30000000 		.4byte	0x30
 4360 0d1d DF030000 		.4byte	.LLST77
 4361 0d21 21       		.uleb128 0x21
 4362 0d22 0A000000 		.4byte	.LVL226
 4363 0d26 5C1A0000 		.4byte	0x1a5c
 4364 0d2a 3A0D0000 		.4byte	0xd3a
 4365 0d2e 20       		.uleb128 0x20
 4366 0d2f 01       		.uleb128 0x1
 4367 0d30 50       		.byte	0x50
 4368 0d31 02       		.uleb128 0x2
 4369 0d32 74       		.byte	0x74
 4370 0d33 00       		.sleb128 0
 4371 0d34 20       		.uleb128 0x20
 4372 0d35 01       		.uleb128 0x1
 4373 0d36 51       		.byte	0x51
 4374 0d37 01       		.uleb128 0x1
 4375 0d38 36       		.byte	0x36
 4376 0d39 00       		.byte	0
 4377 0d3a 22       		.uleb128 0x22
 4378 0d3b 16000000 		.4byte	.LVL228
 4379 0d3f F51A0000 		.4byte	0x1af5
 4380 0d43 20       		.uleb128 0x20
 4381 0d44 01       		.uleb128 0x1
 4382 0d45 50       		.byte	0x50
 4383 0d46 02       		.uleb128 0x2
 4384 0d47 74       		.byte	0x74
 4385 0d48 00       		.sleb128 0
 4386 0d49 20       		.uleb128 0x20
 4387 0d4a 01       		.uleb128 0x1
 4388 0d4b 51       		.byte	0x51
 4389 0d4c 01       		.uleb128 0x1
 4390 0d4d 36       		.byte	0x36
 4391 0d4e 00       		.byte	0
 4392 0d4f 00       		.byte	0
 4393 0d50 23       		.uleb128 0x23
 4394 0d51 86030000 		.4byte	0x386
 4395 0d55 01       		.byte	0x1
 4396 0d56 D402     		.2byte	0x2d4
 4397 0d58 6E0D0000 		.4byte	0xd6e
 4398 0d5c 00000000 		.4byte	.LFB36
 4399 0d60 1A000000 		.4byte	.LFE36-.LFB36
 4400 0d64 01       		.uleb128 0x1
 4401 0d65 9C       		.byte	0x9c
 4402 0d66 6E0D0000 		.4byte	0xd6e
 4403 0d6a BA0D0000 		.4byte	0xdba
 4404 0d6e 1D       		.uleb128 0x1d
 4405 0d6f 1E250000 		.4byte	.LASF601
 4406 0d73 C7060000 		.4byte	0x6c7
 4407 0d77 F7030000 		.4byte	.LLST74
 4408 0d7b 1E       		.uleb128 0x1e
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 95


 4409 0d7c 76616C00 		.ascii	"val\000"
 4410 0d80 01       		.byte	0x1
 4411 0d81 D502     		.2byte	0x2d5
 4412 0d83 30000000 		.4byte	0x30
 4413 0d87 23040000 		.4byte	.LLST75
 4414 0d8b 21       		.uleb128 0x21
 4415 0d8c 0A000000 		.4byte	.LVL221
 4416 0d90 5C1A0000 		.4byte	0x1a5c
 4417 0d94 A40D0000 		.4byte	0xda4
 4418 0d98 20       		.uleb128 0x20
 4419 0d99 01       		.uleb128 0x1
 4420 0d9a 50       		.byte	0x50
 4421 0d9b 02       		.uleb128 0x2
 4422 0d9c 74       		.byte	0x74
 4423 0d9d 00       		.sleb128 0
 4424 0d9e 20       		.uleb128 0x20
 4425 0d9f 01       		.uleb128 0x1
 4426 0da0 51       		.byte	0x51
 4427 0da1 01       		.uleb128 0x1
 4428 0da2 36       		.byte	0x36
 4429 0da3 00       		.byte	0
 4430 0da4 22       		.uleb128 0x22
 4431 0da5 18000000 		.4byte	.LVL223
 4432 0da9 F51A0000 		.4byte	0x1af5
 4433 0dad 20       		.uleb128 0x20
 4434 0dae 01       		.uleb128 0x1
 4435 0daf 50       		.byte	0x50
 4436 0db0 02       		.uleb128 0x2
 4437 0db1 74       		.byte	0x74
 4438 0db2 00       		.sleb128 0
 4439 0db3 20       		.uleb128 0x20
 4440 0db4 01       		.uleb128 0x1
 4441 0db5 51       		.byte	0x51
 4442 0db6 01       		.uleb128 0x1
 4443 0db7 36       		.byte	0x36
 4444 0db8 00       		.byte	0
 4445 0db9 00       		.byte	0
 4446 0dba 23       		.uleb128 0x23
 4447 0dbb 41040000 		.4byte	0x441
 4448 0dbf 01       		.byte	0x1
 4449 0dc0 CF02     		.2byte	0x2cf
 4450 0dc2 D80D0000 		.4byte	0xdd8
 4451 0dc6 00000000 		.4byte	.LFB35
 4452 0dca 14000000 		.4byte	.LFE35-.LFB35
 4453 0dce 01       		.uleb128 0x1
 4454 0dcf 9C       		.byte	0x9c
 4455 0dd0 D80D0000 		.4byte	0xdd8
 4456 0dd4 180E0000 		.4byte	0xe18
 4457 0dd8 1D       		.uleb128 0x1d
 4458 0dd9 1E250000 		.4byte	.LASF601
 4459 0ddd C7060000 		.4byte	0x6c7
 4460 0de1 3A040000 		.4byte	.LLST71
 4461 0de5 25       		.uleb128 0x25
 4462 0de6 6400     		.ascii	"d\000"
 4463 0de8 01       		.byte	0x1
 4464 0de9 CF02     		.2byte	0x2cf
 4465 0deb 30000000 		.4byte	0x30
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 96


 4466 0def 5B040000 		.4byte	.LLST72
 4467 0df3 25       		.uleb128 0x25
 4468 0df4 6E00     		.ascii	"n\000"
 4469 0df6 01       		.byte	0x1
 4470 0df7 CF02     		.2byte	0x2cf
 4471 0df9 30000000 		.4byte	0x30
 4472 0dfd 7C040000 		.4byte	.LLST73
 4473 0e01 22       		.uleb128 0x22
 4474 0e02 12000000 		.4byte	.LVL219
 4475 0e06 F51A0000 		.4byte	0x1af5
 4476 0e0a 20       		.uleb128 0x20
 4477 0e0b 01       		.uleb128 0x1
 4478 0e0c 50       		.byte	0x50
 4479 0e0d 03       		.uleb128 0x3
 4480 0e0e F3       		.byte	0xf3
 4481 0e0f 01       		.uleb128 0x1
 4482 0e10 50       		.byte	0x50
 4483 0e11 20       		.uleb128 0x20
 4484 0e12 01       		.uleb128 0x1
 4485 0e13 51       		.byte	0x51
 4486 0e14 01       		.uleb128 0x1
 4487 0e15 34       		.byte	0x34
 4488 0e16 00       		.byte	0
 4489 0e17 00       		.byte	0
 4490 0e18 23       		.uleb128 0x23
 4491 0e19 A4040000 		.4byte	0x4a4
 4492 0e1d 01       		.byte	0x1
 4493 0e1e CA02     		.2byte	0x2ca
 4494 0e20 360E0000 		.4byte	0xe36
 4495 0e24 00000000 		.4byte	.LFB34
 4496 0e28 16000000 		.4byte	.LFE34-.LFB34
 4497 0e2c 01       		.uleb128 0x1
 4498 0e2d 9C       		.byte	0x9c
 4499 0e2e 360E0000 		.4byte	0xe36
 4500 0e32 820E0000 		.4byte	0xe82
 4501 0e36 1D       		.uleb128 0x1d
 4502 0e37 1E250000 		.4byte	.LASF601
 4503 0e3b C7060000 		.4byte	0x6c7
 4504 0e3f 9D040000 		.4byte	.LLST69
 4505 0e43 1E       		.uleb128 0x1e
 4506 0e44 76616C00 		.ascii	"val\000"
 4507 0e48 01       		.byte	0x1
 4508 0e49 CB02     		.2byte	0x2cb
 4509 0e4b 30000000 		.4byte	0x30
 4510 0e4f C9040000 		.4byte	.LLST70
 4511 0e53 21       		.uleb128 0x21
 4512 0e54 0A000000 		.4byte	.LVL212
 4513 0e58 5C1A0000 		.4byte	0x1a5c
 4514 0e5c 6C0E0000 		.4byte	0xe6c
 4515 0e60 20       		.uleb128 0x20
 4516 0e61 01       		.uleb128 0x1
 4517 0e62 50       		.byte	0x50
 4518 0e63 02       		.uleb128 0x2
 4519 0e64 74       		.byte	0x74
 4520 0e65 00       		.sleb128 0
 4521 0e66 20       		.uleb128 0x20
 4522 0e67 01       		.uleb128 0x1
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 97


 4523 0e68 51       		.byte	0x51
 4524 0e69 01       		.uleb128 0x1
 4525 0e6a 35       		.byte	0x35
 4526 0e6b 00       		.byte	0
 4527 0e6c 22       		.uleb128 0x22
 4528 0e6d 14000000 		.4byte	.LVL214
 4529 0e71 F51A0000 		.4byte	0x1af5
 4530 0e75 20       		.uleb128 0x20
 4531 0e76 01       		.uleb128 0x1
 4532 0e77 50       		.byte	0x50
 4533 0e78 02       		.uleb128 0x2
 4534 0e79 74       		.byte	0x74
 4535 0e7a 00       		.sleb128 0
 4536 0e7b 20       		.uleb128 0x20
 4537 0e7c 01       		.uleb128 0x1
 4538 0e7d 51       		.byte	0x51
 4539 0e7e 01       		.uleb128 0x1
 4540 0e7f 35       		.byte	0x35
 4541 0e80 00       		.byte	0
 4542 0e81 00       		.byte	0
 4543 0e82 23       		.uleb128 0x23
 4544 0e83 E4040000 		.4byte	0x4e4
 4545 0e87 01       		.byte	0x1
 4546 0e88 BD02     		.2byte	0x2bd
 4547 0e8a A00E0000 		.4byte	0xea0
 4548 0e8e 00000000 		.4byte	.LFB33
 4549 0e92 36000000 		.4byte	.LFE33-.LFB33
 4550 0e96 01       		.uleb128 0x1
 4551 0e97 9C       		.byte	0x9c
 4552 0e98 A00E0000 		.4byte	0xea0
 4553 0e9c 0C0F0000 		.4byte	0xf0c
 4554 0ea0 1D       		.uleb128 0x1d
 4555 0ea1 1E250000 		.4byte	.LASF601
 4556 0ea5 C7060000 		.4byte	0x6c7
 4557 0ea9 DC040000 		.4byte	.LLST65
 4558 0ead 24       		.uleb128 0x24
 4559 0eae 62100000 		.4byte	.LASF602
 4560 0eb2 01       		.byte	0x1
 4561 0eb3 BD02     		.2byte	0x2bd
 4562 0eb5 30000000 		.4byte	0x30
 4563 0eb9 08050000 		.4byte	.LLST66
 4564 0ebd 24       		.uleb128 0x24
 4565 0ebe 94260000 		.4byte	.LASF607
 4566 0ec2 01       		.byte	0x1
 4567 0ec3 BD02     		.2byte	0x2bd
 4568 0ec5 DF060000 		.4byte	0x6df
 4569 0ec9 46050000 		.4byte	.LLST67
 4570 0ecd 1E       		.uleb128 0x1e
 4571 0ece 76616C00 		.ascii	"val\000"
 4572 0ed2 01       		.byte	0x1
 4573 0ed3 BE02     		.2byte	0x2be
 4574 0ed5 30000000 		.4byte	0x30
 4575 0ed9 67050000 		.4byte	.LLST68
 4576 0edd 21       		.uleb128 0x21
 4577 0ede 0E000000 		.4byte	.LVL206
 4578 0ee2 5C1A0000 		.4byte	0x1a5c
 4579 0ee6 F60E0000 		.4byte	0xef6
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 98


 4580 0eea 20       		.uleb128 0x20
 4581 0eeb 01       		.uleb128 0x1
 4582 0eec 50       		.byte	0x50
 4583 0eed 02       		.uleb128 0x2
 4584 0eee 74       		.byte	0x74
 4585 0eef 00       		.sleb128 0
 4586 0ef0 20       		.uleb128 0x20
 4587 0ef1 01       		.uleb128 0x1
 4588 0ef2 51       		.byte	0x51
 4589 0ef3 01       		.uleb128 0x1
 4590 0ef4 32       		.byte	0x32
 4591 0ef5 00       		.byte	0
 4592 0ef6 22       		.uleb128 0x22
 4593 0ef7 34000000 		.4byte	.LVL208
 4594 0efb F51A0000 		.4byte	0x1af5
 4595 0eff 20       		.uleb128 0x20
 4596 0f00 01       		.uleb128 0x1
 4597 0f01 50       		.byte	0x50
 4598 0f02 02       		.uleb128 0x2
 4599 0f03 74       		.byte	0x74
 4600 0f04 00       		.sleb128 0
 4601 0f05 20       		.uleb128 0x20
 4602 0f06 01       		.uleb128 0x1
 4603 0f07 51       		.byte	0x51
 4604 0f08 01       		.uleb128 0x1
 4605 0f09 32       		.byte	0x32
 4606 0f0a 00       		.byte	0
 4607 0f0b 00       		.byte	0
 4608 0f0c 23       		.uleb128 0x23
 4609 0f0d BF040000 		.4byte	0x4bf
 4610 0f11 01       		.byte	0x1
 4611 0f12 B002     		.2byte	0x2b0
 4612 0f14 2A0F0000 		.4byte	0xf2a
 4613 0f18 00000000 		.4byte	.LFB32
 4614 0f1c 36000000 		.4byte	.LFE32-.LFB32
 4615 0f20 01       		.uleb128 0x1
 4616 0f21 9C       		.byte	0x9c
 4617 0f22 2A0F0000 		.4byte	0xf2a
 4618 0f26 960F0000 		.4byte	0xf96
 4619 0f2a 1D       		.uleb128 0x1d
 4620 0f2b 1E250000 		.4byte	.LASF601
 4621 0f2f C7060000 		.4byte	0x6c7
 4622 0f33 85050000 		.4byte	.LLST61
 4623 0f37 24       		.uleb128 0x24
 4624 0f38 62100000 		.4byte	.LASF602
 4625 0f3c 01       		.byte	0x1
 4626 0f3d B002     		.2byte	0x2b0
 4627 0f3f 30000000 		.4byte	0x30
 4628 0f43 B1050000 		.4byte	.LLST62
 4629 0f47 24       		.uleb128 0x24
 4630 0f48 94260000 		.4byte	.LASF607
 4631 0f4c 01       		.byte	0x1
 4632 0f4d B002     		.2byte	0x2b0
 4633 0f4f DF060000 		.4byte	0x6df
 4634 0f53 EF050000 		.4byte	.LLST63
 4635 0f57 1E       		.uleb128 0x1e
 4636 0f58 76616C00 		.ascii	"val\000"
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 99


 4637 0f5c 01       		.byte	0x1
 4638 0f5d B102     		.2byte	0x2b1
 4639 0f5f 30000000 		.4byte	0x30
 4640 0f63 10060000 		.4byte	.LLST64
 4641 0f67 21       		.uleb128 0x21
 4642 0f68 0E000000 		.4byte	.LVL199
 4643 0f6c 5C1A0000 		.4byte	0x1a5c
 4644 0f70 800F0000 		.4byte	0xf80
 4645 0f74 20       		.uleb128 0x20
 4646 0f75 01       		.uleb128 0x1
 4647 0f76 50       		.byte	0x50
 4648 0f77 02       		.uleb128 0x2
 4649 0f78 74       		.byte	0x74
 4650 0f79 00       		.sleb128 0
 4651 0f7a 20       		.uleb128 0x20
 4652 0f7b 01       		.uleb128 0x1
 4653 0f7c 51       		.byte	0x51
 4654 0f7d 01       		.uleb128 0x1
 4655 0f7e 31       		.byte	0x31
 4656 0f7f 00       		.byte	0
 4657 0f80 22       		.uleb128 0x22
 4658 0f81 34000000 		.4byte	.LVL201
 4659 0f85 F51A0000 		.4byte	0x1af5
 4660 0f89 20       		.uleb128 0x20
 4661 0f8a 01       		.uleb128 0x1
 4662 0f8b 50       		.byte	0x50
 4663 0f8c 02       		.uleb128 0x2
 4664 0f8d 74       		.byte	0x74
 4665 0f8e 00       		.sleb128 0
 4666 0f8f 20       		.uleb128 0x20
 4667 0f90 01       		.uleb128 0x1
 4668 0f91 51       		.byte	0x51
 4669 0f92 01       		.uleb128 0x1
 4670 0f93 31       		.byte	0x31
 4671 0f94 00       		.byte	0
 4672 0f95 00       		.byte	0
 4673 0f96 23       		.uleb128 0x23
 4674 0f97 85040000 		.4byte	0x485
 4675 0f9b 01       		.byte	0x1
 4676 0f9c AC02     		.2byte	0x2ac
 4677 0f9e B40F0000 		.4byte	0xfb4
 4678 0fa2 00000000 		.4byte	.LFB31
 4679 0fa6 0E000000 		.4byte	.LFE31-.LFB31
 4680 0faa 01       		.uleb128 0x1
 4681 0fab 9C       		.byte	0x9c
 4682 0fac B40F0000 		.4byte	0xfb4
 4683 0fb0 D80F0000 		.4byte	0xfd8
 4684 0fb4 1D       		.uleb128 0x1d
 4685 0fb5 1E250000 		.4byte	.LASF601
 4686 0fb9 C7060000 		.4byte	0x6c7
 4687 0fbd 2E060000 		.4byte	.LLST60
 4688 0fc1 22       		.uleb128 0x22
 4689 0fc2 08000000 		.4byte	.LVL196
 4690 0fc6 5C1A0000 		.4byte	0x1a5c
 4691 0fca 20       		.uleb128 0x20
 4692 0fcb 01       		.uleb128 0x1
 4693 0fcc 50       		.byte	0x50
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 100


 4694 0fcd 03       		.uleb128 0x3
 4695 0fce F3       		.byte	0xf3
 4696 0fcf 01       		.uleb128 0x1
 4697 0fd0 50       		.byte	0x50
 4698 0fd1 20       		.uleb128 0x20
 4699 0fd2 01       		.uleb128 0x1
 4700 0fd3 51       		.byte	0x51
 4701 0fd4 01       		.uleb128 0x1
 4702 0fd5 38       		.byte	0x38
 4703 0fd6 00       		.byte	0
 4704 0fd7 00       		.byte	0
 4705 0fd8 23       		.uleb128 0x23
 4706 0fd9 66040000 		.4byte	0x466
 4707 0fdd 01       		.byte	0x1
 4708 0fde A802     		.2byte	0x2a8
 4709 0fe0 F60F0000 		.4byte	0xff6
 4710 0fe4 00000000 		.4byte	.LFB30
 4711 0fe8 0E000000 		.4byte	.LFE30-.LFB30
 4712 0fec 01       		.uleb128 0x1
 4713 0fed 9C       		.byte	0x9c
 4714 0fee F60F0000 		.4byte	0xff6
 4715 0ff2 1A100000 		.4byte	0x101a
 4716 0ff6 1D       		.uleb128 0x1d
 4717 0ff7 1E250000 		.4byte	.LASF601
 4718 0ffb C7060000 		.4byte	0x6c7
 4719 0fff 4F060000 		.4byte	.LLST59
 4720 1003 22       		.uleb128 0x22
 4721 1004 08000000 		.4byte	.LVL194
 4722 1008 5C1A0000 		.4byte	0x1a5c
 4723 100c 20       		.uleb128 0x20
 4724 100d 01       		.uleb128 0x1
 4725 100e 50       		.byte	0x50
 4726 100f 03       		.uleb128 0x3
 4727 1010 F3       		.byte	0xf3
 4728 1011 01       		.uleb128 0x1
 4729 1012 50       		.byte	0x50
 4730 1013 20       		.uleb128 0x20
 4731 1014 01       		.uleb128 0x1
 4732 1015 51       		.byte	0x51
 4733 1016 01       		.uleb128 0x1
 4734 1017 38       		.byte	0x38
 4735 1018 00       		.byte	0
 4736 1019 00       		.byte	0
 4737 101a 23       		.uleb128 0x23
 4738 101b 93050000 		.4byte	0x593
 4739 101f 01       		.byte	0x1
 4740 1020 A402     		.2byte	0x2a4
 4741 1022 38100000 		.4byte	0x1038
 4742 1026 00000000 		.4byte	.LFB29
 4743 102a 0E000000 		.4byte	.LFE29-.LFB29
 4744 102e 01       		.uleb128 0x1
 4745 102f 9C       		.byte	0x9c
 4746 1030 38100000 		.4byte	0x1038
 4747 1034 78100000 		.4byte	0x1078
 4748 1038 1D       		.uleb128 0x1d
 4749 1039 1E250000 		.4byte	.LASF601
 4750 103d C7060000 		.4byte	0x6c7
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 101


 4751 1041 70060000 		.4byte	.LLST57
 4752 1045 24       		.uleb128 0x24
 4753 1046 152E0000 		.4byte	.LASF608
 4754 104a 01       		.byte	0x1
 4755 104b A402     		.2byte	0x2a4
 4756 104d D9060000 		.4byte	0x6d9
 4757 1051 91060000 		.4byte	.LLST58
 4758 1055 22       		.uleb128 0x22
 4759 1056 0C000000 		.4byte	.LVL192
 4760 105a F3180000 		.4byte	0x18f3
 4761 105e 20       		.uleb128 0x20
 4762 105f 01       		.uleb128 0x1
 4763 1060 50       		.byte	0x50
 4764 1061 03       		.uleb128 0x3
 4765 1062 F3       		.byte	0xf3
 4766 1063 01       		.uleb128 0x1
 4767 1064 50       		.byte	0x50
 4768 1065 20       		.uleb128 0x20
 4769 1066 01       		.uleb128 0x1
 4770 1067 51       		.byte	0x51
 4771 1068 01       		.uleb128 0x1
 4772 1069 40       		.byte	0x40
 4773 106a 20       		.uleb128 0x20
 4774 106b 01       		.uleb128 0x1
 4775 106c 52       		.byte	0x52
 4776 106d 03       		.uleb128 0x3
 4777 106e F3       		.byte	0xf3
 4778 106f 01       		.uleb128 0x1
 4779 1070 51       		.byte	0x51
 4780 1071 20       		.uleb128 0x20
 4781 1072 01       		.uleb128 0x1
 4782 1073 53       		.byte	0x53
 4783 1074 01       		.uleb128 0x1
 4784 1075 35       		.byte	0x35
 4785 1076 00       		.byte	0
 4786 1077 00       		.byte	0
 4787 1078 23       		.uleb128 0x23
 4788 1079 49050000 		.4byte	0x549
 4789 107d 01       		.byte	0x1
 4790 107e A002     		.2byte	0x2a0
 4791 1080 96100000 		.4byte	0x1096
 4792 1084 00000000 		.4byte	.LFB28
 4793 1088 0C000000 		.4byte	.LFE28-.LFB28
 4794 108c 01       		.uleb128 0x1
 4795 108d 9C       		.byte	0x9c
 4796 108e 96100000 		.4byte	0x1096
 4797 1092 D5100000 		.4byte	0x10d5
 4798 1096 1D       		.uleb128 0x1d
 4799 1097 1E250000 		.4byte	.LASF601
 4800 109b C7060000 		.4byte	0x6c7
 4801 109f BD060000 		.4byte	.LLST54
 4802 10a3 24       		.uleb128 0x24
 4803 10a4 58250000 		.4byte	.LASF548
 4804 10a8 01       		.byte	0x1
 4805 10a9 A002     		.2byte	0x2a0
 4806 10ab 30000000 		.4byte	0x30
 4807 10af DE060000 		.4byte	.LLST55
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 102


 4808 10b3 24       		.uleb128 0x24
 4809 10b4 152E0000 		.4byte	.LASF608
 4810 10b8 01       		.byte	0x1
 4811 10b9 A002     		.2byte	0x2a0
 4812 10bb 30000000 		.4byte	0x30
 4813 10bf FF060000 		.4byte	.LLST56
 4814 10c3 22       		.uleb128 0x22
 4815 10c4 0A000000 		.4byte	.LVL189
 4816 10c8 F51A0000 		.4byte	0x1af5
 4817 10cc 20       		.uleb128 0x20
 4818 10cd 01       		.uleb128 0x1
 4819 10ce 50       		.byte	0x50
 4820 10cf 03       		.uleb128 0x3
 4821 10d0 F3       		.byte	0xf3
 4822 10d1 01       		.uleb128 0x1
 4823 10d2 50       		.byte	0x50
 4824 10d3 00       		.byte	0
 4825 10d4 00       		.byte	0
 4826 10d5 23       		.uleb128 0x23
 4827 10d6 29050000 		.4byte	0x529
 4828 10da 01       		.byte	0x1
 4829 10db 9C02     		.2byte	0x29c
 4830 10dd F3100000 		.4byte	0x10f3
 4831 10e1 00000000 		.4byte	.LFB27
 4832 10e5 0E000000 		.4byte	.LFE27-.LFB27
 4833 10e9 01       		.uleb128 0x1
 4834 10ea 9C       		.byte	0x9c
 4835 10eb F3100000 		.4byte	0x10f3
 4836 10ef 33110000 		.4byte	0x1133
 4837 10f3 1D       		.uleb128 0x1d
 4838 10f4 1E250000 		.4byte	.LASF601
 4839 10f8 C7060000 		.4byte	0x6c7
 4840 10fc 20070000 		.4byte	.LLST52
 4841 1100 24       		.uleb128 0x24
 4842 1101 152E0000 		.4byte	.LASF608
 4843 1105 01       		.byte	0x1
 4844 1106 9C02     		.2byte	0x29c
 4845 1108 D9060000 		.4byte	0x6d9
 4846 110c 41070000 		.4byte	.LLST53
 4847 1110 22       		.uleb128 0x22
 4848 1111 0C000000 		.4byte	.LVL186
 4849 1115 F3180000 		.4byte	0x18f3
 4850 1119 20       		.uleb128 0x20
 4851 111a 01       		.uleb128 0x1
 4852 111b 50       		.byte	0x50
 4853 111c 03       		.uleb128 0x3
 4854 111d F3       		.byte	0xf3
 4855 111e 01       		.uleb128 0x1
 4856 111f 50       		.byte	0x50
 4857 1120 20       		.uleb128 0x20
 4858 1121 01       		.uleb128 0x1
 4859 1122 51       		.byte	0x51
 4860 1123 01       		.uleb128 0x1
 4861 1124 3B       		.byte	0x3b
 4862 1125 20       		.uleb128 0x20
 4863 1126 01       		.uleb128 0x1
 4864 1127 52       		.byte	0x52
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 103


 4865 1128 03       		.uleb128 0x3
 4866 1129 F3       		.byte	0xf3
 4867 112a 01       		.uleb128 0x1
 4868 112b 51       		.byte	0x51
 4869 112c 20       		.uleb128 0x20
 4870 112d 01       		.uleb128 0x1
 4871 112e 53       		.byte	0x53
 4872 112f 01       		.uleb128 0x1
 4873 1130 35       		.byte	0x35
 4874 1131 00       		.byte	0
 4875 1132 00       		.byte	0
 4876 1133 23       		.uleb128 0x23
 4877 1134 09050000 		.4byte	0x509
 4878 1138 01       		.byte	0x1
 4879 1139 9802     		.2byte	0x298
 4880 113b 51110000 		.4byte	0x1151
 4881 113f 00000000 		.4byte	.LFB26
 4882 1143 0E000000 		.4byte	.LFE26-.LFB26
 4883 1147 01       		.uleb128 0x1
 4884 1148 9C       		.byte	0x9c
 4885 1149 51110000 		.4byte	0x1151
 4886 114d 91110000 		.4byte	0x1191
 4887 1151 1D       		.uleb128 0x1d
 4888 1152 1E250000 		.4byte	.LASF601
 4889 1156 C7060000 		.4byte	0x6c7
 4890 115a 6D070000 		.4byte	.LLST50
 4891 115e 24       		.uleb128 0x24
 4892 115f 152E0000 		.4byte	.LASF608
 4893 1163 01       		.byte	0x1
 4894 1164 9802     		.2byte	0x298
 4895 1166 D9060000 		.4byte	0x6d9
 4896 116a 8E070000 		.4byte	.LLST51
 4897 116e 22       		.uleb128 0x22
 4898 116f 0C000000 		.4byte	.LVL183
 4899 1173 F3180000 		.4byte	0x18f3
 4900 1177 20       		.uleb128 0x20
 4901 1178 01       		.uleb128 0x1
 4902 1179 50       		.byte	0x50
 4903 117a 03       		.uleb128 0x3
 4904 117b F3       		.byte	0xf3
 4905 117c 01       		.uleb128 0x1
 4906 117d 50       		.byte	0x50
 4907 117e 20       		.uleb128 0x20
 4908 117f 01       		.uleb128 0x1
 4909 1180 51       		.byte	0x51
 4910 1181 01       		.uleb128 0x1
 4911 1182 3A       		.byte	0x3a
 4912 1183 20       		.uleb128 0x20
 4913 1184 01       		.uleb128 0x1
 4914 1185 52       		.byte	0x52
 4915 1186 03       		.uleb128 0x3
 4916 1187 F3       		.byte	0xf3
 4917 1188 01       		.uleb128 0x1
 4918 1189 51       		.byte	0x51
 4919 118a 20       		.uleb128 0x20
 4920 118b 01       		.uleb128 0x1
 4921 118c 53       		.byte	0x53
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 104


 4922 118d 01       		.uleb128 0x1
 4923 118e 35       		.byte	0x35
 4924 118f 00       		.byte	0
 4925 1190 00       		.byte	0
 4926 1191 23       		.uleb128 0x23
 4927 1192 D2050000 		.4byte	0x5d2
 4928 1196 01       		.byte	0x1
 4929 1197 9202     		.2byte	0x292
 4930 1199 AF110000 		.4byte	0x11af
 4931 119d 00000000 		.4byte	.LFB25
 4932 11a1 0E000000 		.4byte	.LFE25-.LFB25
 4933 11a5 01       		.uleb128 0x1
 4934 11a6 9C       		.byte	0x9c
 4935 11a7 AF110000 		.4byte	0x11af
 4936 11ab E1110000 		.4byte	0x11e1
 4937 11af 1D       		.uleb128 0x1d
 4938 11b0 1E250000 		.4byte	.LASF601
 4939 11b4 C7060000 		.4byte	0x6c7
 4940 11b8 BA070000 		.4byte	.LLST48
 4941 11bc 1E       		.uleb128 0x1e
 4942 11bd 7300     		.ascii	"s\000"
 4943 11bf 01       		.byte	0x1
 4944 11c0 9302     		.2byte	0x293
 4945 11c2 30000000 		.4byte	0x30
 4946 11c6 DB070000 		.4byte	.LLST49
 4947 11ca 22       		.uleb128 0x22
 4948 11cb 08000000 		.4byte	.LVL179
 4949 11cf 5C1A0000 		.4byte	0x1a5c
 4950 11d3 20       		.uleb128 0x20
 4951 11d4 01       		.uleb128 0x1
 4952 11d5 50       		.byte	0x50
 4953 11d6 03       		.uleb128 0x3
 4954 11d7 F3       		.byte	0xf3
 4955 11d8 01       		.uleb128 0x1
 4956 11d9 50       		.byte	0x50
 4957 11da 20       		.uleb128 0x20
 4958 11db 01       		.uleb128 0x1
 4959 11dc 51       		.byte	0x51
 4960 11dd 01       		.uleb128 0x1
 4961 11de 47       		.byte	0x47
 4962 11df 00       		.byte	0
 4963 11e0 00       		.byte	0
 4964 11e1 23       		.uleb128 0x23
 4965 11e2 B3050000 		.4byte	0x5b3
 4966 11e6 01       		.byte	0x1
 4967 11e7 8C02     		.2byte	0x28c
 4968 11e9 FF110000 		.4byte	0x11ff
 4969 11ed 00000000 		.4byte	.LFB24
 4970 11f1 0E000000 		.4byte	.LFE24-.LFB24
 4971 11f5 01       		.uleb128 0x1
 4972 11f6 9C       		.byte	0x9c
 4973 11f7 FF110000 		.4byte	0x11ff
 4974 11fb 31120000 		.4byte	0x1231
 4975 11ff 1D       		.uleb128 0x1d
 4976 1200 1E250000 		.4byte	.LASF601
 4977 1204 C7060000 		.4byte	0x6c7
 4978 1208 EE070000 		.4byte	.LLST46
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 105


 4979 120c 1E       		.uleb128 0x1e
 4980 120d 7300     		.ascii	"s\000"
 4981 120f 01       		.byte	0x1
 4982 1210 8D02     		.2byte	0x28d
 4983 1212 30000000 		.4byte	0x30
 4984 1216 0F080000 		.4byte	.LLST47
 4985 121a 22       		.uleb128 0x22
 4986 121b 08000000 		.4byte	.LVL176
 4987 121f 5C1A0000 		.4byte	0x1a5c
 4988 1223 20       		.uleb128 0x20
 4989 1224 01       		.uleb128 0x1
 4990 1225 50       		.byte	0x50
 4991 1226 03       		.uleb128 0x3
 4992 1227 F3       		.byte	0xf3
 4993 1228 01       		.uleb128 0x1
 4994 1229 50       		.byte	0x50
 4995 122a 20       		.uleb128 0x20
 4996 122b 01       		.uleb128 0x1
 4997 122c 51       		.byte	0x51
 4998 122d 01       		.uleb128 0x1
 4999 122e 47       		.byte	0x47
 5000 122f 00       		.byte	0
 5001 1230 00       		.byte	0
 5002 1231 23       		.uleb128 0x23
 5003 1232 01040000 		.4byte	0x401
 5004 1236 01       		.byte	0x1
 5005 1237 8202     		.2byte	0x282
 5006 1239 4F120000 		.4byte	0x124f
 5007 123d 00000000 		.4byte	.LFB23
 5008 1241 1E000000 		.4byte	.LFE23-.LFB23
 5009 1245 01       		.uleb128 0x1
 5010 1246 9C       		.byte	0x9c
 5011 1247 4F120000 		.4byte	0x124f
 5012 124b 7C120000 		.4byte	0x127c
 5013 124f 1D       		.uleb128 0x1d
 5014 1250 1E250000 		.4byte	.LASF601
 5015 1254 C7060000 		.4byte	0x6c7
 5016 1258 22080000 		.4byte	.LLST44
 5017 125c 25       		.uleb128 0x25
 5018 125d 6C656E00 		.ascii	"len\000"
 5019 1261 01       		.byte	0x1
 5020 1262 8202     		.2byte	0x282
 5021 1264 30000000 		.4byte	0x30
 5022 1268 43080000 		.4byte	.LLST45
 5023 126c 22       		.uleb128 0x22
 5024 126d 1C000000 		.4byte	.LVL174
 5025 1271 F51A0000 		.4byte	0x1af5
 5026 1275 20       		.uleb128 0x20
 5027 1276 01       		.uleb128 0x1
 5028 1277 51       		.byte	0x51
 5029 1278 01       		.uleb128 0x1
 5030 1279 33       		.byte	0x33
 5031 127a 00       		.byte	0
 5032 127b 00       		.byte	0
 5033 127c 23       		.uleb128 0x23
 5034 127d E1030000 		.4byte	0x3e1
 5035 1281 01       		.byte	0x1
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 106


 5036 1282 6E02     		.2byte	0x26e
 5037 1284 9A120000 		.4byte	0x129a
 5038 1288 00000000 		.4byte	.LFB22
 5039 128c 40000000 		.4byte	.LFE22-.LFB22
 5040 1290 01       		.uleb128 0x1
 5041 1291 9C       		.byte	0x9c
 5042 1292 9A120000 		.4byte	0x129a
 5043 1296 34130000 		.4byte	0x1334
 5044 129a 1D       		.uleb128 0x1d
 5045 129b 1E250000 		.4byte	.LASF601
 5046 129f C7060000 		.4byte	0x6c7
 5047 12a3 90080000 		.4byte	.LLST41
 5048 12a7 25       		.uleb128 0x25
 5049 12a8 6C656E00 		.ascii	"len\000"
 5050 12ac 01       		.byte	0x1
 5051 12ad 6E02     		.2byte	0x26e
 5052 12af 30000000 		.4byte	0x30
 5053 12b3 C7080000 		.4byte	.LLST42
 5054 12b7 1E       		.uleb128 0x1e
 5055 12b8 76616C00 		.ascii	"val\000"
 5056 12bc 01       		.byte	0x1
 5057 12bd 6F02     		.2byte	0x26f
 5058 12bf 30000000 		.4byte	0x30
 5059 12c3 14090000 		.4byte	.LLST43
 5060 12c7 21       		.uleb128 0x21
 5061 12c8 0C000000 		.4byte	.LVL159
 5062 12cc 5C1A0000 		.4byte	0x1a5c
 5063 12d0 E0120000 		.4byte	0x12e0
 5064 12d4 20       		.uleb128 0x20
 5065 12d5 01       		.uleb128 0x1
 5066 12d6 50       		.byte	0x50
 5067 12d7 02       		.uleb128 0x2
 5068 12d8 75       		.byte	0x75
 5069 12d9 00       		.sleb128 0
 5070 12da 20       		.uleb128 0x20
 5071 12db 01       		.uleb128 0x1
 5072 12dc 51       		.byte	0x51
 5073 12dd 01       		.uleb128 0x1
 5074 12de 30       		.byte	0x30
 5075 12df 00       		.byte	0
 5076 12e0 21       		.uleb128 0x21
 5077 12e1 1C000000 		.4byte	.LVL162
 5078 12e5 F51A0000 		.4byte	0x1af5
 5079 12e9 FF120000 		.4byte	0x12ff
 5080 12ed 20       		.uleb128 0x20
 5081 12ee 01       		.uleb128 0x1
 5082 12ef 50       		.byte	0x50
 5083 12f0 02       		.uleb128 0x2
 5084 12f1 75       		.byte	0x75
 5085 12f2 00       		.sleb128 0
 5086 12f3 20       		.uleb128 0x20
 5087 12f4 01       		.uleb128 0x1
 5088 12f5 51       		.byte	0x51
 5089 12f6 01       		.uleb128 0x1
 5090 12f7 31       		.byte	0x31
 5091 12f8 20       		.uleb128 0x20
 5092 12f9 01       		.uleb128 0x1
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 107


 5093 12fa 52       		.byte	0x52
 5094 12fb 02       		.uleb128 0x2
 5095 12fc 76       		.byte	0x76
 5096 12fd 00       		.sleb128 0
 5097 12fe 00       		.byte	0
 5098 12ff 21       		.uleb128 0x21
 5099 1300 28000000 		.4byte	.LVL164
 5100 1304 F51A0000 		.4byte	0x1af5
 5101 1308 18130000 		.4byte	0x1318
 5102 130c 20       		.uleb128 0x20
 5103 130d 01       		.uleb128 0x1
 5104 130e 50       		.byte	0x50
 5105 130f 02       		.uleb128 0x2
 5106 1310 75       		.byte	0x75
 5107 1311 00       		.sleb128 0
 5108 1312 20       		.uleb128 0x20
 5109 1313 01       		.uleb128 0x1
 5110 1314 51       		.byte	0x51
 5111 1315 01       		.uleb128 0x1
 5112 1316 30       		.byte	0x30
 5113 1317 00       		.byte	0
 5114 1318 22       		.uleb128 0x22
 5115 1319 34000000 		.4byte	.LVL168
 5116 131d F51A0000 		.4byte	0x1af5
 5117 1321 20       		.uleb128 0x20
 5118 1322 01       		.uleb128 0x1
 5119 1323 50       		.byte	0x50
 5120 1324 02       		.uleb128 0x2
 5121 1325 75       		.byte	0x75
 5122 1326 00       		.sleb128 0
 5123 1327 20       		.uleb128 0x20
 5124 1328 01       		.uleb128 0x1
 5125 1329 51       		.byte	0x51
 5126 132a 01       		.uleb128 0x1
 5127 132b 31       		.byte	0x31
 5128 132c 20       		.uleb128 0x20
 5129 132d 01       		.uleb128 0x1
 5130 132e 52       		.byte	0x52
 5131 132f 02       		.uleb128 0x2
 5132 1330 08       		.byte	0x8
 5133 1331 3F       		.byte	0x3f
 5134 1332 00       		.byte	0
 5135 1333 00       		.byte	0
 5136 1334 23       		.uleb128 0x23
 5137 1335 C1030000 		.4byte	0x3c1
 5138 1339 01       		.byte	0x1
 5139 133a 6202     		.2byte	0x262
 5140 133c 52130000 		.4byte	0x1352
 5141 1340 00000000 		.4byte	.LFB21
 5142 1344 38000000 		.4byte	.LFE21-.LFB21
 5143 1348 01       		.uleb128 0x1
 5144 1349 9C       		.byte	0x9c
 5145 134a 52130000 		.4byte	0x1352
 5146 134e CC130000 		.4byte	0x13cc
 5147 1352 1D       		.uleb128 0x1d
 5148 1353 1E250000 		.4byte	.LASF601
 5149 1357 C7060000 		.4byte	0x6c7
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 108


 5150 135b 65090000 		.4byte	.LLST38
 5151 135f 24       		.uleb128 0x24
 5152 1360 3B180000 		.4byte	.LASF609
 5153 1364 01       		.byte	0x1
 5154 1365 6202     		.2byte	0x262
 5155 1367 30000000 		.4byte	0x30
 5156 136b 91090000 		.4byte	.LLST39
 5157 136f 26       		.uleb128 0x26
 5158 1370 AB110000 		.4byte	.LASF610
 5159 1374 01       		.byte	0x1
 5160 1375 6302     		.2byte	0x263
 5161 1377 30000000 		.4byte	0x30
 5162 137b B2090000 		.4byte	.LLST40
 5163 137f 1F       		.uleb128 0x1f
 5164 1380 10000000 		.4byte	.LVL149
 5165 1384 8E130000 		.4byte	0x138e
 5166 1388 20       		.uleb128 0x20
 5167 1389 01       		.uleb128 0x1
 5168 138a 51       		.byte	0x51
 5169 138b 01       		.uleb128 0x1
 5170 138c 30       		.byte	0x30
 5171 138d 00       		.byte	0
 5172 138e 21       		.uleb128 0x21
 5173 138f 18000000 		.4byte	.LVL150
 5174 1393 5C1A0000 		.4byte	0x1a5c
 5175 1397 A7130000 		.4byte	0x13a7
 5176 139b 20       		.uleb128 0x20
 5177 139c 01       		.uleb128 0x1
 5178 139d 50       		.byte	0x50
 5179 139e 02       		.uleb128 0x2
 5180 139f 74       		.byte	0x74
 5181 13a0 00       		.sleb128 0
 5182 13a1 20       		.uleb128 0x20
 5183 13a2 01       		.uleb128 0x1
 5184 13a3 51       		.byte	0x51
 5185 13a4 01       		.uleb128 0x1
 5186 13a5 36       		.byte	0x36
 5187 13a6 00       		.byte	0
 5188 13a7 21       		.uleb128 0x21
 5189 13a8 2C000000 		.4byte	.LVL154
 5190 13ac F51A0000 		.4byte	0x1af5
 5191 13b0 C0130000 		.4byte	0x13c0
 5192 13b4 20       		.uleb128 0x20
 5193 13b5 01       		.uleb128 0x1
 5194 13b6 50       		.byte	0x50
 5195 13b7 02       		.uleb128 0x2
 5196 13b8 74       		.byte	0x74
 5197 13b9 00       		.sleb128 0
 5198 13ba 20       		.uleb128 0x20
 5199 13bb 01       		.uleb128 0x1
 5200 13bc 51       		.byte	0x51
 5201 13bd 01       		.uleb128 0x1
 5202 13be 36       		.byte	0x36
 5203 13bf 00       		.byte	0
 5204 13c0 27       		.uleb128 0x27
 5205 13c1 36000000 		.4byte	.LVL155
 5206 13c5 20       		.uleb128 0x20
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 109


 5207 13c6 01       		.uleb128 0x1
 5208 13c7 51       		.byte	0x51
 5209 13c8 01       		.uleb128 0x1
 5210 13c9 31       		.byte	0x31
 5211 13ca 00       		.byte	0
 5212 13cb 00       		.byte	0
 5213 13cc 23       		.uleb128 0x23
 5214 13cd A1030000 		.4byte	0x3a1
 5215 13d1 01       		.byte	0x1
 5216 13d2 5D02     		.2byte	0x25d
 5217 13d4 EA130000 		.4byte	0x13ea
 5218 13d8 00000000 		.4byte	.LFB20
 5219 13dc 0E000000 		.4byte	.LFE20-.LFB20
 5220 13e0 01       		.uleb128 0x1
 5221 13e1 9C       		.byte	0x9c
 5222 13e2 EA130000 		.4byte	0x13ea
 5223 13e6 1D140000 		.4byte	0x141d
 5224 13ea 1D       		.uleb128 0x1d
 5225 13eb 1E250000 		.4byte	.LASF601
 5226 13ef C7060000 		.4byte	0x6c7
 5227 13f3 D0090000 		.4byte	.LLST36
 5228 13f7 25       		.uleb128 0x25
 5229 13f8 636800   		.ascii	"ch\000"
 5230 13fb 01       		.byte	0x1
 5231 13fc 5D02     		.2byte	0x25d
 5232 13fe 30000000 		.4byte	0x30
 5233 1402 F1090000 		.4byte	.LLST37
 5234 1406 22       		.uleb128 0x22
 5235 1407 0C000000 		.4byte	.LVL145
 5236 140b F51A0000 		.4byte	0x1af5
 5237 140f 20       		.uleb128 0x20
 5238 1410 01       		.uleb128 0x1
 5239 1411 50       		.byte	0x50
 5240 1412 03       		.uleb128 0x3
 5241 1413 F3       		.byte	0xf3
 5242 1414 01       		.uleb128 0x1
 5243 1415 50       		.byte	0x50
 5244 1416 20       		.uleb128 0x20
 5245 1417 01       		.uleb128 0x1
 5246 1418 51       		.byte	0x51
 5247 1419 01       		.uleb128 0x1
 5248 141a 35       		.byte	0x35
 5249 141b 00       		.byte	0
 5250 141c 00       		.byte	0
 5251 141d 23       		.uleb128 0x23
 5252 141e 50030000 		.4byte	0x350
 5253 1422 01       		.byte	0x1
 5254 1423 5502     		.2byte	0x255
 5255 1425 3B140000 		.4byte	0x143b
 5256 1429 00000000 		.4byte	.LFB19
 5257 142d 24000000 		.4byte	.LFE19-.LFB19
 5258 1431 01       		.uleb128 0x1
 5259 1432 9C       		.byte	0x9c
 5260 1433 3B140000 		.4byte	0x143b
 5261 1437 96140000 		.4byte	0x1496
 5262 143b 1D       		.uleb128 0x1d
 5263 143c 1E250000 		.4byte	.LASF601
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 110


 5264 1440 C7060000 		.4byte	0x6c7
 5265 1444 120A0000 		.4byte	.LLST34
 5266 1448 26       		.uleb128 0x26
 5267 1449 AB110000 		.4byte	.LASF610
 5268 144d 01       		.byte	0x1
 5269 144e 5602     		.2byte	0x256
 5270 1450 30000000 		.4byte	0x30
 5271 1454 3E0A0000 		.4byte	.LLST35
 5272 1458 1F       		.uleb128 0x1f
 5273 1459 0E000000 		.4byte	.LVL138
 5274 145d 67140000 		.4byte	0x1467
 5275 1461 20       		.uleb128 0x20
 5276 1462 01       		.uleb128 0x1
 5277 1463 51       		.byte	0x51
 5278 1464 01       		.uleb128 0x1
 5279 1465 30       		.byte	0x30
 5280 1466 00       		.byte	0
 5281 1467 21       		.uleb128 0x21
 5282 1468 16000000 		.4byte	.LVL139
 5283 146c 5C1A0000 		.4byte	0x1a5c
 5284 1470 80140000 		.4byte	0x1480
 5285 1474 20       		.uleb128 0x20
 5286 1475 01       		.uleb128 0x1
 5287 1476 50       		.byte	0x50
 5288 1477 02       		.uleb128 0x2
 5289 1478 74       		.byte	0x74
 5290 1479 00       		.sleb128 0
 5291 147a 20       		.uleb128 0x20
 5292 147b 01       		.uleb128 0x1
 5293 147c 51       		.byte	0x51
 5294 147d 01       		.uleb128 0x1
 5295 147e 30       		.byte	0x30
 5296 147f 00       		.byte	0
 5297 1480 22       		.uleb128 0x22
 5298 1481 22000000 		.4byte	.LVL141
 5299 1485 F51A0000 		.4byte	0x1af5
 5300 1489 20       		.uleb128 0x20
 5301 148a 01       		.uleb128 0x1
 5302 148b 50       		.byte	0x50
 5303 148c 02       		.uleb128 0x2
 5304 148d 74       		.byte	0x74
 5305 148e 00       		.sleb128 0
 5306 148f 20       		.uleb128 0x20
 5307 1490 01       		.uleb128 0x1
 5308 1491 51       		.byte	0x51
 5309 1492 01       		.uleb128 0x1
 5310 1493 30       		.byte	0x30
 5311 1494 00       		.byte	0
 5312 1495 00       		.byte	0
 5313 1496 23       		.uleb128 0x23
 5314 1497 35030000 		.4byte	0x335
 5315 149b 01       		.byte	0x1
 5316 149c 4D02     		.2byte	0x24d
 5317 149e B4140000 		.4byte	0x14b4
 5318 14a2 00000000 		.4byte	.LFB18
 5319 14a6 26000000 		.4byte	.LFE18-.LFB18
 5320 14aa 01       		.uleb128 0x1
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 111


 5321 14ab 9C       		.byte	0x9c
 5322 14ac B4140000 		.4byte	0x14b4
 5323 14b0 0F150000 		.4byte	0x150f
 5324 14b4 1D       		.uleb128 0x1d
 5325 14b5 1E250000 		.4byte	.LASF601
 5326 14b9 C7060000 		.4byte	0x6c7
 5327 14bd 560A0000 		.4byte	.LLST32
 5328 14c1 26       		.uleb128 0x26
 5329 14c2 AB110000 		.4byte	.LASF610
 5330 14c6 01       		.byte	0x1
 5331 14c7 4E02     		.2byte	0x24e
 5332 14c9 30000000 		.4byte	0x30
 5333 14cd 820A0000 		.4byte	.LLST33
 5334 14d1 1F       		.uleb128 0x1f
 5335 14d2 0E000000 		.4byte	.LVL131
 5336 14d6 E0140000 		.4byte	0x14e0
 5337 14da 20       		.uleb128 0x20
 5338 14db 01       		.uleb128 0x1
 5339 14dc 51       		.byte	0x51
 5340 14dd 01       		.uleb128 0x1
 5341 14de 30       		.byte	0x30
 5342 14df 00       		.byte	0
 5343 14e0 21       		.uleb128 0x21
 5344 14e1 16000000 		.4byte	.LVL132
 5345 14e5 5C1A0000 		.4byte	0x1a5c
 5346 14e9 F9140000 		.4byte	0x14f9
 5347 14ed 20       		.uleb128 0x20
 5348 14ee 01       		.uleb128 0x1
 5349 14ef 50       		.byte	0x50
 5350 14f0 02       		.uleb128 0x2
 5351 14f1 74       		.byte	0x74
 5352 14f2 00       		.sleb128 0
 5353 14f3 20       		.uleb128 0x20
 5354 14f4 01       		.uleb128 0x1
 5355 14f5 51       		.byte	0x51
 5356 14f6 01       		.uleb128 0x1
 5357 14f7 30       		.byte	0x30
 5358 14f8 00       		.byte	0
 5359 14f9 22       		.uleb128 0x22
 5360 14fa 24000000 		.4byte	.LVL134
 5361 14fe F51A0000 		.4byte	0x1af5
 5362 1502 20       		.uleb128 0x20
 5363 1503 01       		.uleb128 0x1
 5364 1504 50       		.byte	0x50
 5365 1505 02       		.uleb128 0x2
 5366 1506 74       		.byte	0x74
 5367 1507 00       		.sleb128 0
 5368 1508 20       		.uleb128 0x20
 5369 1509 01       		.uleb128 0x1
 5370 150a 51       		.byte	0x51
 5371 150b 01       		.uleb128 0x1
 5372 150c 30       		.byte	0x30
 5373 150d 00       		.byte	0
 5374 150e 00       		.byte	0
 5375 150f 23       		.uleb128 0x23
 5376 1510 FF020000 		.4byte	0x2ff
 5377 1514 01       		.byte	0x1
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 112


 5378 1515 3A02     		.2byte	0x23a
 5379 1517 2D150000 		.4byte	0x152d
 5380 151b 00000000 		.4byte	.LFB17
 5381 151f 4E000000 		.4byte	.LFE17-.LFB17
 5382 1523 01       		.uleb128 0x1
 5383 1524 9C       		.byte	0x9c
 5384 1525 2D150000 		.4byte	0x152d
 5385 1529 E9150000 		.4byte	0x15e9
 5386 152d 1D       		.uleb128 0x1d
 5387 152e 1E250000 		.4byte	.LASF601
 5388 1532 C7060000 		.4byte	0x6c7
 5389 1536 990A0000 		.4byte	.LLST30
 5390 153a 26       		.uleb128 0x26
 5391 153b AB110000 		.4byte	.LASF610
 5392 153f 01       		.byte	0x1
 5393 1540 3B02     		.2byte	0x23b
 5394 1542 30000000 		.4byte	0x30
 5395 1546 C50A0000 		.4byte	.LLST31
 5396 154a 21       		.uleb128 0x21
 5397 154b 0C000000 		.4byte	.LVL117
 5398 154f F51A0000 		.4byte	0x1af5
 5399 1553 69150000 		.4byte	0x1569
 5400 1557 20       		.uleb128 0x20
 5401 1558 01       		.uleb128 0x1
 5402 1559 50       		.byte	0x50
 5403 155a 02       		.uleb128 0x2
 5404 155b 74       		.byte	0x74
 5405 155c 00       		.sleb128 0
 5406 155d 20       		.uleb128 0x20
 5407 155e 01       		.uleb128 0x1
 5408 155f 51       		.byte	0x51
 5409 1560 02       		.uleb128 0x2
 5410 1561 09       		.byte	0x9
 5411 1562 E1       		.byte	0xe1
 5412 1563 20       		.uleb128 0x20
 5413 1564 01       		.uleb128 0x1
 5414 1565 52       		.byte	0x52
 5415 1566 01       		.uleb128 0x1
 5416 1567 30       		.byte	0x30
 5417 1568 00       		.byte	0
 5418 1569 21       		.uleb128 0x21
 5419 156a 14000000 		.4byte	.LVL118
 5420 156e 5C1A0000 		.4byte	0x1a5c
 5421 1572 82150000 		.4byte	0x1582
 5422 1576 20       		.uleb128 0x20
 5423 1577 01       		.uleb128 0x1
 5424 1578 50       		.byte	0x50
 5425 1579 02       		.uleb128 0x2
 5426 157a 74       		.byte	0x74
 5427 157b 00       		.sleb128 0
 5428 157c 20       		.uleb128 0x20
 5429 157d 01       		.uleb128 0x1
 5430 157e 51       		.byte	0x51
 5431 157f 01       		.uleb128 0x1
 5432 1580 37       		.byte	0x37
 5433 1581 00       		.byte	0
 5434 1582 21       		.uleb128 0x21
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 113


 5435 1583 1E000000 		.4byte	.LVL120
 5436 1587 F51A0000 		.4byte	0x1af5
 5437 158b 9B150000 		.4byte	0x159b
 5438 158f 20       		.uleb128 0x20
 5439 1590 01       		.uleb128 0x1
 5440 1591 50       		.byte	0x50
 5441 1592 02       		.uleb128 0x2
 5442 1593 74       		.byte	0x74
 5443 1594 00       		.sleb128 0
 5444 1595 20       		.uleb128 0x20
 5445 1596 01       		.uleb128 0x1
 5446 1597 51       		.byte	0x51
 5447 1598 01       		.uleb128 0x1
 5448 1599 37       		.byte	0x37
 5449 159a 00       		.byte	0
 5450 159b 1F       		.uleb128 0x1f
 5451 159c 2A000000 		.4byte	.LVL121
 5452 15a0 AA150000 		.4byte	0x15aa
 5453 15a4 20       		.uleb128 0x20
 5454 15a5 01       		.uleb128 0x1
 5455 15a6 51       		.byte	0x51
 5456 15a7 01       		.uleb128 0x1
 5457 15a8 30       		.byte	0x30
 5458 15a9 00       		.byte	0
 5459 15aa 21       		.uleb128 0x21
 5460 15ab 32000000 		.4byte	.LVL122
 5461 15af 5C1A0000 		.4byte	0x1a5c
 5462 15b3 C3150000 		.4byte	0x15c3
 5463 15b7 20       		.uleb128 0x20
 5464 15b8 01       		.uleb128 0x1
 5465 15b9 50       		.byte	0x50
 5466 15ba 02       		.uleb128 0x2
 5467 15bb 74       		.byte	0x74
 5468 15bc 00       		.sleb128 0
 5469 15bd 20       		.uleb128 0x20
 5470 15be 01       		.uleb128 0x1
 5471 15bf 51       		.byte	0x51
 5472 15c0 01       		.uleb128 0x1
 5473 15c1 30       		.byte	0x30
 5474 15c2 00       		.byte	0
 5475 15c3 21       		.uleb128 0x21
 5476 15c4 42000000 		.4byte	.LVL126
 5477 15c8 F51A0000 		.4byte	0x1af5
 5478 15cc DC150000 		.4byte	0x15dc
 5479 15d0 20       		.uleb128 0x20
 5480 15d1 01       		.uleb128 0x1
 5481 15d2 50       		.byte	0x50
 5482 15d3 02       		.uleb128 0x2
 5483 15d4 74       		.byte	0x74
 5484 15d5 00       		.sleb128 0
 5485 15d6 20       		.uleb128 0x20
 5486 15d7 01       		.uleb128 0x1
 5487 15d8 51       		.byte	0x51
 5488 15d9 01       		.uleb128 0x1
 5489 15da 30       		.byte	0x30
 5490 15db 00       		.byte	0
 5491 15dc 27       		.uleb128 0x27
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 114


 5492 15dd 4C000000 		.4byte	.LVL127
 5493 15e1 20       		.uleb128 0x20
 5494 15e2 01       		.uleb128 0x1
 5495 15e3 51       		.byte	0x51
 5496 15e4 02       		.uleb128 0x2
 5497 15e5 75       		.byte	0x75
 5498 15e6 00       		.sleb128 0
 5499 15e7 00       		.byte	0
 5500 15e8 00       		.byte	0
 5501 15e9 23       		.uleb128 0x23
 5502 15ea 1A030000 		.4byte	0x31a
 5503 15ee 01       		.byte	0x1
 5504 15ef 2702     		.2byte	0x227
 5505 15f1 07160000 		.4byte	0x1607
 5506 15f5 00000000 		.4byte	.LFB16
 5507 15f9 4A000000 		.4byte	.LFE16-.LFB16
 5508 15fd 01       		.uleb128 0x1
 5509 15fe 9C       		.byte	0x9c
 5510 15ff 07160000 		.4byte	0x1607
 5511 1603 C2160000 		.4byte	0x16c2
 5512 1607 1D       		.uleb128 0x1d
 5513 1608 1E250000 		.4byte	.LASF601
 5514 160c C7060000 		.4byte	0x6c7
 5515 1610 F20A0000 		.4byte	.LLST28
 5516 1614 26       		.uleb128 0x26
 5517 1615 AB110000 		.4byte	.LASF610
 5518 1619 01       		.byte	0x1
 5519 161a 2802     		.2byte	0x228
 5520 161c 30000000 		.4byte	0x30
 5521 1620 1E0B0000 		.4byte	.LLST29
 5522 1624 21       		.uleb128 0x21
 5523 1625 0C000000 		.4byte	.LVL106
 5524 1629 F51A0000 		.4byte	0x1af5
 5525 162d 43160000 		.4byte	0x1643
 5526 1631 20       		.uleb128 0x20
 5527 1632 01       		.uleb128 0x1
 5528 1633 50       		.byte	0x50
 5529 1634 02       		.uleb128 0x2
 5530 1635 74       		.byte	0x74
 5531 1636 00       		.sleb128 0
 5532 1637 20       		.uleb128 0x20
 5533 1638 01       		.uleb128 0x1
 5534 1639 51       		.byte	0x51
 5535 163a 02       		.uleb128 0x2
 5536 163b 09       		.byte	0x9
 5537 163c E2       		.byte	0xe2
 5538 163d 20       		.uleb128 0x20
 5539 163e 01       		.uleb128 0x1
 5540 163f 52       		.byte	0x52
 5541 1640 01       		.uleb128 0x1
 5542 1641 30       		.byte	0x30
 5543 1642 00       		.byte	0
 5544 1643 21       		.uleb128 0x21
 5545 1644 14000000 		.4byte	.LVL107
 5546 1648 5C1A0000 		.4byte	0x1a5c
 5547 164c 5C160000 		.4byte	0x165c
 5548 1650 20       		.uleb128 0x20
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 115


 5549 1651 01       		.uleb128 0x1
 5550 1652 50       		.byte	0x50
 5551 1653 02       		.uleb128 0x2
 5552 1654 74       		.byte	0x74
 5553 1655 00       		.sleb128 0
 5554 1656 20       		.uleb128 0x20
 5555 1657 01       		.uleb128 0x1
 5556 1658 51       		.byte	0x51
 5557 1659 01       		.uleb128 0x1
 5558 165a 37       		.byte	0x37
 5559 165b 00       		.byte	0
 5560 165c 21       		.uleb128 0x21
 5561 165d 1E000000 		.4byte	.LVL109
 5562 1661 F51A0000 		.4byte	0x1af5
 5563 1665 75160000 		.4byte	0x1675
 5564 1669 20       		.uleb128 0x20
 5565 166a 01       		.uleb128 0x1
 5566 166b 50       		.byte	0x50
 5567 166c 02       		.uleb128 0x2
 5568 166d 74       		.byte	0x74
 5569 166e 00       		.sleb128 0
 5570 166f 20       		.uleb128 0x20
 5571 1670 01       		.uleb128 0x1
 5572 1671 51       		.byte	0x51
 5573 1672 01       		.uleb128 0x1
 5574 1673 37       		.byte	0x37
 5575 1674 00       		.byte	0
 5576 1675 1F       		.uleb128 0x1f
 5577 1676 28000000 		.4byte	.LVL110
 5578 167a 84160000 		.4byte	0x1684
 5579 167e 20       		.uleb128 0x20
 5580 167f 01       		.uleb128 0x1
 5581 1680 51       		.byte	0x51
 5582 1681 01       		.uleb128 0x1
 5583 1682 30       		.byte	0x30
 5584 1683 00       		.byte	0
 5585 1684 21       		.uleb128 0x21
 5586 1685 30000000 		.4byte	.LVL111
 5587 1689 5C1A0000 		.4byte	0x1a5c
 5588 168d 9D160000 		.4byte	0x169d
 5589 1691 20       		.uleb128 0x20
 5590 1692 01       		.uleb128 0x1
 5591 1693 50       		.byte	0x50
 5592 1694 02       		.uleb128 0x2
 5593 1695 74       		.byte	0x74
 5594 1696 00       		.sleb128 0
 5595 1697 20       		.uleb128 0x20
 5596 1698 01       		.uleb128 0x1
 5597 1699 51       		.byte	0x51
 5598 169a 01       		.uleb128 0x1
 5599 169b 30       		.byte	0x30
 5600 169c 00       		.byte	0
 5601 169d 21       		.uleb128 0x21
 5602 169e 3E000000 		.4byte	.LVL113
 5603 16a2 F51A0000 		.4byte	0x1af5
 5604 16a6 B6160000 		.4byte	0x16b6
 5605 16aa 20       		.uleb128 0x20
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 116


 5606 16ab 01       		.uleb128 0x1
 5607 16ac 50       		.byte	0x50
 5608 16ad 02       		.uleb128 0x2
 5609 16ae 74       		.byte	0x74
 5610 16af 00       		.sleb128 0
 5611 16b0 20       		.uleb128 0x20
 5612 16b1 01       		.uleb128 0x1
 5613 16b2 51       		.byte	0x51
 5614 16b3 01       		.uleb128 0x1
 5615 16b4 30       		.byte	0x30
 5616 16b5 00       		.byte	0
 5617 16b6 27       		.uleb128 0x27
 5618 16b7 48000000 		.4byte	.LVL114
 5619 16bb 20       		.uleb128 0x20
 5620 16bc 01       		.uleb128 0x1
 5621 16bd 51       		.byte	0x51
 5622 16be 01       		.uleb128 0x1
 5623 16bf 31       		.byte	0x31
 5624 16c0 00       		.byte	0
 5625 16c1 00       		.byte	0
 5626 16c2 23       		.uleb128 0x23
 5627 16c3 E0020000 		.4byte	0x2e0
 5628 16c7 01       		.byte	0x1
 5629 16c8 1E02     		.2byte	0x21e
 5630 16ca E0160000 		.4byte	0x16e0
 5631 16ce 00000000 		.4byte	.LFB15
 5632 16d2 38000000 		.4byte	.LFE15-.LFB15
 5633 16d6 01       		.uleb128 0x1
 5634 16d7 9C       		.byte	0x9c
 5635 16d8 E0160000 		.4byte	0x16e0
 5636 16dc 7C170000 		.4byte	0x177c
 5637 16e0 1D       		.uleb128 0x1d
 5638 16e1 1E250000 		.4byte	.LASF601
 5639 16e5 C7060000 		.4byte	0x6c7
 5640 16e9 400B0000 		.4byte	.LLST25
 5641 16ed 1E       		.uleb128 0x1e
 5642 16ee 73743100 		.ascii	"st1\000"
 5643 16f2 01       		.byte	0x1
 5644 16f3 1F02     		.2byte	0x21f
 5645 16f5 30000000 		.4byte	0x30
 5646 16f9 6C0B0000 		.4byte	.LLST26
 5647 16fd 1E       		.uleb128 0x1e
 5648 16fe 73743200 		.ascii	"st2\000"
 5649 1702 01       		.byte	0x1
 5650 1703 1F02     		.2byte	0x21f
 5651 1705 30000000 		.4byte	0x30
 5652 1709 7F0B0000 		.4byte	.LLST27
 5653 170d 21       		.uleb128 0x21
 5654 170e 0A000000 		.4byte	.LVL96
 5655 1712 5C1A0000 		.4byte	0x1a5c
 5656 1716 26170000 		.4byte	0x1726
 5657 171a 20       		.uleb128 0x20
 5658 171b 01       		.uleb128 0x1
 5659 171c 50       		.byte	0x50
 5660 171d 02       		.uleb128 0x2
 5661 171e 75       		.byte	0x75
 5662 171f 00       		.sleb128 0
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 117


 5663 1720 20       		.uleb128 0x20
 5664 1721 01       		.uleb128 0x1
 5665 1722 51       		.byte	0x51
 5666 1723 01       		.uleb128 0x1
 5667 1724 37       		.byte	0x37
 5668 1725 00       		.byte	0
 5669 1726 21       		.uleb128 0x21
 5670 1727 16000000 		.4byte	.LVL98
 5671 172b F51A0000 		.4byte	0x1af5
 5672 172f 46170000 		.4byte	0x1746
 5673 1733 20       		.uleb128 0x20
 5674 1734 01       		.uleb128 0x1
 5675 1735 50       		.byte	0x50
 5676 1736 02       		.uleb128 0x2
 5677 1737 75       		.byte	0x75
 5678 1738 00       		.sleb128 0
 5679 1739 20       		.uleb128 0x20
 5680 173a 01       		.uleb128 0x1
 5681 173b 51       		.byte	0x51
 5682 173c 02       		.uleb128 0x2
 5683 173d 08       		.byte	0x8
 5684 173e 50       		.byte	0x50
 5685 173f 20       		.uleb128 0x20
 5686 1740 01       		.uleb128 0x1
 5687 1741 52       		.byte	0x52
 5688 1742 02       		.uleb128 0x2
 5689 1743 08       		.byte	0x8
 5690 1744 53       		.byte	0x53
 5691 1745 00       		.byte	0
 5692 1746 21       		.uleb128 0x21
 5693 1747 1E000000 		.4byte	.LVL99
 5694 174b 5C1A0000 		.4byte	0x1a5c
 5695 174f 5F170000 		.4byte	0x175f
 5696 1753 20       		.uleb128 0x20
 5697 1754 01       		.uleb128 0x1
 5698 1755 50       		.byte	0x50
 5699 1756 02       		.uleb128 0x2
 5700 1757 75       		.byte	0x75
 5701 1758 00       		.sleb128 0
 5702 1759 20       		.uleb128 0x20
 5703 175a 01       		.uleb128 0x1
 5704 175b 51       		.byte	0x51
 5705 175c 01       		.uleb128 0x1
 5706 175d 37       		.byte	0x37
 5707 175e 00       		.byte	0
 5708 175f 22       		.uleb128 0x22
 5709 1760 2C000000 		.4byte	.LVL102
 5710 1764 F51A0000 		.4byte	0x1af5
 5711 1768 20       		.uleb128 0x20
 5712 1769 01       		.uleb128 0x1
 5713 176a 50       		.byte	0x50
 5714 176b 02       		.uleb128 0x2
 5715 176c 75       		.byte	0x75
 5716 176d 00       		.sleb128 0
 5717 176e 20       		.uleb128 0x20
 5718 176f 01       		.uleb128 0x1
 5719 1770 51       		.byte	0x51
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 118


 5720 1771 02       		.uleb128 0x2
 5721 1772 08       		.byte	0x8
 5722 1773 50       		.byte	0x50
 5723 1774 20       		.uleb128 0x20
 5724 1775 01       		.uleb128 0x1
 5725 1776 52       		.byte	0x52
 5726 1777 02       		.uleb128 0x2
 5727 1778 08       		.byte	0x8
 5728 1779 53       		.byte	0x53
 5729 177a 00       		.byte	0
 5730 177b 00       		.byte	0
 5731 177c 23       		.uleb128 0x23
 5732 177d 0E020000 		.4byte	0x20e
 5733 1781 01       		.byte	0x1
 5734 1782 FA01     		.2byte	0x1fa
 5735 1784 9A170000 		.4byte	0x179a
 5736 1788 00000000 		.4byte	.LFB14
 5737 178c A4000000 		.4byte	.LFE14-.LFB14
 5738 1790 01       		.uleb128 0x1
 5739 1791 9C       		.byte	0x9c
 5740 1792 9A170000 		.4byte	0x179a
 5741 1796 AF180000 		.4byte	0x18af
 5742 179a 1D       		.uleb128 0x1d
 5743 179b 1E250000 		.4byte	.LASF601
 5744 179f C7060000 		.4byte	0x6c7
 5745 17a3 920B0000 		.4byte	.LLST22
 5746 17a7 1E       		.uleb128 0x1e
 5747 17a8 6900     		.ascii	"i\000"
 5748 17aa 01       		.byte	0x1
 5749 17ab FB01     		.2byte	0x1fb
 5750 17ad 30000000 		.4byte	0x30
 5751 17b1 BE0B0000 		.4byte	.LLST23
 5752 17b5 1E       		.uleb128 0x1e
 5753 17b6 6A00     		.ascii	"j\000"
 5754 17b8 01       		.byte	0x1
 5755 17b9 FB01     		.2byte	0x1fb
 5756 17bb 30000000 		.4byte	0x30
 5757 17bf F20B0000 		.4byte	.LLST24
 5758 17c3 1B       		.uleb128 0x1b
 5759 17c4 F2160000 		.4byte	.LASF611
 5760 17c8 01       		.byte	0x1
 5761 17c9 FC01     		.2byte	0x1fc
 5762 17cb AF180000 		.4byte	0x18af
 5763 17cf 02       		.uleb128 0x2
 5764 17d0 91       		.byte	0x91
 5765 17d1 5C       		.sleb128 -36
 5766 17d2 21       		.uleb128 0x21
 5767 17d3 0E000000 		.4byte	.LVL76
 5768 17d7 BF180000 		.4byte	0x18bf
 5769 17db EB170000 		.4byte	0x17eb
 5770 17df 20       		.uleb128 0x20
 5771 17e0 01       		.uleb128 0x1
 5772 17e1 50       		.byte	0x50
 5773 17e2 02       		.uleb128 0x2
 5774 17e3 76       		.byte	0x76
 5775 17e4 00       		.sleb128 0
 5776 17e5 20       		.uleb128 0x20
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 119


 5777 17e6 01       		.uleb128 0x1
 5778 17e7 51       		.byte	0x51
 5779 17e8 01       		.uleb128 0x1
 5780 17e9 31       		.byte	0x31
 5781 17ea 00       		.byte	0
 5782 17eb 21       		.uleb128 0x21
 5783 17ec 32000000 		.4byte	.LVL82
 5784 17f0 F3180000 		.4byte	0x18f3
 5785 17f4 0A180000 		.4byte	0x180a
 5786 17f8 20       		.uleb128 0x20
 5787 17f9 01       		.uleb128 0x1
 5788 17fa 50       		.byte	0x50
 5789 17fb 02       		.uleb128 0x2
 5790 17fc 76       		.byte	0x76
 5791 17fd 00       		.sleb128 0
 5792 17fe 20       		.uleb128 0x20
 5793 17ff 01       		.uleb128 0x1
 5794 1800 52       		.byte	0x52
 5795 1801 02       		.uleb128 0x2
 5796 1802 74       		.byte	0x74
 5797 1803 00       		.sleb128 0
 5798 1804 20       		.uleb128 0x20
 5799 1805 01       		.uleb128 0x1
 5800 1806 53       		.byte	0x53
 5801 1807 01       		.uleb128 0x1
 5802 1808 34       		.byte	0x34
 5803 1809 00       		.byte	0
 5804 180a 21       		.uleb128 0x21
 5805 180b 56000000 		.4byte	.LVL89
 5806 180f F3180000 		.4byte	0x18f3
 5807 1813 29180000 		.4byte	0x1829
 5808 1817 20       		.uleb128 0x20
 5809 1818 01       		.uleb128 0x1
 5810 1819 50       		.byte	0x50
 5811 181a 02       		.uleb128 0x2
 5812 181b 76       		.byte	0x76
 5813 181c 00       		.sleb128 0
 5814 181d 20       		.uleb128 0x20
 5815 181e 01       		.uleb128 0x1
 5816 181f 52       		.byte	0x52
 5817 1820 02       		.uleb128 0x2
 5818 1821 74       		.byte	0x74
 5819 1822 00       		.sleb128 0
 5820 1823 20       		.uleb128 0x20
 5821 1824 01       		.uleb128 0x1
 5822 1825 53       		.byte	0x53
 5823 1826 01       		.uleb128 0x1
 5824 1827 34       		.byte	0x34
 5825 1828 00       		.byte	0
 5826 1829 21       		.uleb128 0x21
 5827 182a 66000000 		.4byte	.LVL90
 5828 182e F3180000 		.4byte	0x18f3
 5829 1832 51180000 		.4byte	0x1851
 5830 1836 20       		.uleb128 0x20
 5831 1837 01       		.uleb128 0x1
 5832 1838 50       		.byte	0x50
 5833 1839 02       		.uleb128 0x2
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 120


 5834 183a 76       		.byte	0x76
 5835 183b 00       		.sleb128 0
 5836 183c 20       		.uleb128 0x20
 5837 183d 01       		.uleb128 0x1
 5838 183e 51       		.byte	0x51
 5839 183f 02       		.uleb128 0x2
 5840 1840 75       		.byte	0x75
 5841 1841 00       		.sleb128 0
 5842 1842 20       		.uleb128 0x20
 5843 1843 01       		.uleb128 0x1
 5844 1844 52       		.byte	0x52
 5845 1845 05       		.uleb128 0x5
 5846 1846 03       		.byte	0x3
 5847 1847 00000000 		.4byte	.LANCHOR1
 5848 184b 20       		.uleb128 0x20
 5849 184c 01       		.uleb128 0x1
 5850 184d 53       		.byte	0x53
 5851 184e 01       		.uleb128 0x1
 5852 184f 3B       		.byte	0x3b
 5853 1850 00       		.byte	0
 5854 1851 21       		.uleb128 0x21
 5855 1852 76000000 		.4byte	.LVL91
 5856 1856 F3180000 		.4byte	0x18f3
 5857 185a 75180000 		.4byte	0x1875
 5858 185e 20       		.uleb128 0x20
 5859 185f 01       		.uleb128 0x1
 5860 1860 50       		.byte	0x50
 5861 1861 02       		.uleb128 0x2
 5862 1862 76       		.byte	0x76
 5863 1863 00       		.sleb128 0
 5864 1864 20       		.uleb128 0x20
 5865 1865 01       		.uleb128 0x1
 5866 1866 51       		.byte	0x51
 5867 1867 01       		.uleb128 0x1
 5868 1868 34       		.byte	0x34
 5869 1869 20       		.uleb128 0x20
 5870 186a 01       		.uleb128 0x1
 5871 186b 52       		.byte	0x52
 5872 186c 02       		.uleb128 0x2
 5873 186d 74       		.byte	0x74
 5874 186e 00       		.sleb128 0
 5875 186f 20       		.uleb128 0x20
 5876 1870 01       		.uleb128 0x1
 5877 1871 53       		.byte	0x53
 5878 1872 01       		.uleb128 0x1
 5879 1873 34       		.byte	0x34
 5880 1874 00       		.byte	0
 5881 1875 21       		.uleb128 0x21
 5882 1876 8A000000 		.4byte	.LVL92
 5883 187a F3180000 		.4byte	0x18f3
 5884 187e 99180000 		.4byte	0x1899
 5885 1882 20       		.uleb128 0x20
 5886 1883 01       		.uleb128 0x1
 5887 1884 50       		.byte	0x50
 5888 1885 02       		.uleb128 0x2
 5889 1886 76       		.byte	0x76
 5890 1887 00       		.sleb128 0
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 121


 5891 1888 20       		.uleb128 0x20
 5892 1889 01       		.uleb128 0x1
 5893 188a 51       		.byte	0x51
 5894 188b 01       		.uleb128 0x1
 5895 188c 34       		.byte	0x34
 5896 188d 20       		.uleb128 0x20
 5897 188e 01       		.uleb128 0x1
 5898 188f 52       		.byte	0x52
 5899 1890 02       		.uleb128 0x2
 5900 1891 74       		.byte	0x74
 5901 1892 00       		.sleb128 0
 5902 1893 20       		.uleb128 0x20
 5903 1894 01       		.uleb128 0x1
 5904 1895 53       		.byte	0x53
 5905 1896 01       		.uleb128 0x1
 5906 1897 34       		.byte	0x34
 5907 1898 00       		.byte	0
 5908 1899 22       		.uleb128 0x22
 5909 189a 92000000 		.4byte	.LVL93
 5910 189e BF180000 		.4byte	0x18bf
 5911 18a2 20       		.uleb128 0x20
 5912 18a3 01       		.uleb128 0x1
 5913 18a4 50       		.byte	0x50
 5914 18a5 02       		.uleb128 0x2
 5915 18a6 76       		.byte	0x76
 5916 18a7 00       		.sleb128 0
 5917 18a8 20       		.uleb128 0x20
 5918 18a9 01       		.uleb128 0x1
 5919 18aa 51       		.byte	0x51
 5920 18ab 01       		.uleb128 0x1
 5921 18ac 30       		.byte	0x30
 5922 18ad 00       		.byte	0
 5923 18ae 00       		.byte	0
 5924 18af 19       		.uleb128 0x19
 5925 18b0 30000000 		.4byte	0x30
 5926 18b4 BF180000 		.4byte	0x18bf
 5927 18b8 1A       		.uleb128 0x1a
 5928 18b9 29000000 		.4byte	0x29
 5929 18bd 0B       		.byte	0xb
 5930 18be 00       		.byte	0
 5931 18bf 28       		.uleb128 0x28
 5932 18c0 EF010000 		.4byte	0x1ef
 5933 18c4 01       		.byte	0x1
 5934 18c5 DC01     		.2byte	0x1dc
 5935 18c7 D4180000 		.4byte	0x18d4
 5936 18cb 01       		.byte	0x1
 5937 18cc D4180000 		.4byte	0x18d4
 5938 18d0 F3180000 		.4byte	0x18f3
 5939 18d4 29       		.uleb128 0x29
 5940 18d5 1E250000 		.4byte	.LASF601
 5941 18d9 C7060000 		.4byte	0x6c7
 5942 18dd 2A       		.uleb128 0x2a
 5943 18de 6200     		.ascii	"b\000"
 5944 18e0 01       		.byte	0x1
 5945 18e1 DC01     		.2byte	0x1dc
 5946 18e3 30000000 		.4byte	0x30
 5947 18e7 2B       		.uleb128 0x2b
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 122


 5948 18e8 737400   		.ascii	"st\000"
 5949 18eb 01       		.byte	0x1
 5950 18ec DD01     		.2byte	0x1dd
 5951 18ee 30000000 		.4byte	0x30
 5952 18f2 00       		.byte	0
 5953 18f3 23       		.uleb128 0x23
 5954 18f4 B6020000 		.4byte	0x2b6
 5955 18f8 01       		.byte	0x1
 5956 18f9 CB01     		.2byte	0x1cb
 5957 18fb 11190000 		.4byte	0x1911
 5958 18ff 00000000 		.4byte	.LFB12
 5959 1903 42000000 		.4byte	.LFE12-.LFB12
 5960 1907 01       		.uleb128 0x1
 5961 1908 9C       		.byte	0x9c
 5962 1909 11190000 		.4byte	0x1911
 5963 190d A5190000 		.4byte	0x19a5
 5964 1911 1D       		.uleb128 0x1d
 5965 1912 1E250000 		.4byte	.LASF601
 5966 1916 C7060000 		.4byte	0x6c7
 5967 191a 720C0000 		.4byte	.LLST14
 5968 191e 25       		.uleb128 0x25
 5969 191f 72656700 		.ascii	"reg\000"
 5970 1923 01       		.byte	0x1
 5971 1924 CC01     		.2byte	0x1cc
 5972 1926 D2060000 		.4byte	0x6d2
 5973 192a 9E0C0000 		.4byte	.LLST15
 5974 192e 24       		.uleb128 0x24
 5975 192f 59080000 		.4byte	.LASF612
 5976 1933 01       		.byte	0x1
 5977 1934 CD01     		.2byte	0x1cd
 5978 1936 D9060000 		.4byte	0x6d9
 5979 193a BC0C0000 		.4byte	.LLST16
 5980 193e 24       		.uleb128 0x24
 5981 193f F9270000 		.4byte	.LASF603
 5982 1943 01       		.byte	0x1
 5983 1944 CE01     		.2byte	0x1ce
 5984 1946 30000000 		.4byte	0x30
 5985 194a F20C0000 		.4byte	.LLST17
 5986 194e 1E       		.uleb128 0x1e
 5987 194f 6900     		.ascii	"i\000"
 5988 1951 01       		.byte	0x1
 5989 1952 D001     		.2byte	0x1d0
 5990 1954 30000000 		.4byte	0x30
 5991 1958 130D0000 		.4byte	.LLST18
 5992 195c 1F       		.uleb128 0x1f
 5993 195d 1E000000 		.4byte	.LVL56
 5994 1961 6B190000 		.4byte	0x196b
 5995 1965 20       		.uleb128 0x20
 5996 1966 01       		.uleb128 0x1
 5997 1967 51       		.byte	0x51
 5998 1968 01       		.uleb128 0x1
 5999 1969 30       		.byte	0x30
 6000 196a 00       		.byte	0
 6001 196b 21       		.uleb128 0x21
 6002 196c 26000000 		.4byte	.LVL57
 6003 1970 8F1B0000 		.4byte	0x1b8f
 6004 1974 85190000 		.4byte	0x1985
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 123


 6005 1978 20       		.uleb128 0x20
 6006 1979 01       		.uleb128 0x1
 6007 197a 50       		.byte	0x50
 6008 197b 02       		.uleb128 0x2
 6009 197c 75       		.byte	0x75
 6010 197d 00       		.sleb128 0
 6011 197e 20       		.uleb128 0x20
 6012 197f 01       		.uleb128 0x1
 6013 1980 51       		.byte	0x51
 6014 1981 02       		.uleb128 0x2
 6015 1982 77       		.byte	0x77
 6016 1983 00       		.sleb128 0
 6017 1984 00       		.byte	0
 6018 1985 21       		.uleb128 0x21
 6019 1986 32000000 		.4byte	.LVL59
 6020 198a 8F1B0000 		.4byte	0x1b8f
 6021 198e 99190000 		.4byte	0x1999
 6022 1992 20       		.uleb128 0x20
 6023 1993 01       		.uleb128 0x1
 6024 1994 50       		.byte	0x50
 6025 1995 02       		.uleb128 0x2
 6026 1996 75       		.byte	0x75
 6027 1997 00       		.sleb128 0
 6028 1998 00       		.byte	0
 6029 1999 27       		.uleb128 0x27
 6030 199a 40000000 		.4byte	.LVL62
 6031 199e 20       		.uleb128 0x20
 6032 199f 01       		.uleb128 0x1
 6033 19a0 51       		.byte	0x51
 6034 19a1 01       		.uleb128 0x1
 6035 19a2 31       		.byte	0x31
 6036 19a3 00       		.byte	0
 6037 19a4 00       		.byte	0
 6038 19a5 23       		.uleb128 0x23
 6039 19a6 67020000 		.4byte	0x267
 6040 19aa 01       		.byte	0x1
 6041 19ab BA01     		.2byte	0x1ba
 6042 19ad C3190000 		.4byte	0x19c3
 6043 19b1 00000000 		.4byte	.LFB11
 6044 19b5 3C000000 		.4byte	.LFE11-.LFB11
 6045 19b9 01       		.uleb128 0x1
 6046 19ba 9C       		.byte	0x9c
 6047 19bb C3190000 		.4byte	0x19c3
 6048 19bf 5C1A0000 		.4byte	0x1a5c
 6049 19c3 1D       		.uleb128 0x1d
 6050 19c4 1E250000 		.4byte	.LASF601
 6051 19c8 C7060000 		.4byte	0x6c7
 6052 19cc 500D0000 		.4byte	.LLST9
 6053 19d0 25       		.uleb128 0x25
 6054 19d1 72656700 		.ascii	"reg\000"
 6055 19d5 01       		.byte	0x1
 6056 19d6 BB01     		.2byte	0x1bb
 6057 19d8 30000000 		.4byte	0x30
 6058 19dc 7C0D0000 		.4byte	.LLST10
 6059 19e0 24       		.uleb128 0x24
 6060 19e1 59080000 		.4byte	.LASF612
 6061 19e5 01       		.byte	0x1
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 124


 6062 19e6 BC01     		.2byte	0x1bc
 6063 19e8 CC060000 		.4byte	0x6cc
 6064 19ec 9A0D0000 		.4byte	.LLST11
 6065 19f0 24       		.uleb128 0x24
 6066 19f1 F9270000 		.4byte	.LASF603
 6067 19f5 01       		.byte	0x1
 6068 19f6 BD01     		.2byte	0x1bd
 6069 19f8 30000000 		.4byte	0x30
 6070 19fc D00D0000 		.4byte	.LLST12
 6071 1a00 1E       		.uleb128 0x1e
 6072 1a01 6900     		.ascii	"i\000"
 6073 1a03 01       		.byte	0x1
 6074 1a04 BF01     		.2byte	0x1bf
 6075 1a06 30000000 		.4byte	0x30
 6076 1a0a F10D0000 		.4byte	.LLST13
 6077 1a0e 1F       		.uleb128 0x1f
 6078 1a0f 14000000 		.4byte	.LVL40
 6079 1a13 1D1A0000 		.4byte	0x1a1d
 6080 1a17 20       		.uleb128 0x20
 6081 1a18 01       		.uleb128 0x1
 6082 1a19 51       		.byte	0x51
 6083 1a1a 01       		.uleb128 0x1
 6084 1a1b 30       		.byte	0x30
 6085 1a1c 00       		.byte	0
 6086 1a1d 21       		.uleb128 0x21
 6087 1a1e 1C000000 		.4byte	.LVL41
 6088 1a22 8F1B0000 		.4byte	0x1b8f
 6089 1a26 371A0000 		.4byte	0x1a37
 6090 1a2a 20       		.uleb128 0x20
 6091 1a2b 01       		.uleb128 0x1
 6092 1a2c 50       		.byte	0x50
 6093 1a2d 02       		.uleb128 0x2
 6094 1a2e 75       		.byte	0x75
 6095 1a2f 00       		.sleb128 0
 6096 1a30 20       		.uleb128 0x20
 6097 1a31 01       		.uleb128 0x1
 6098 1a32 51       		.byte	0x51
 6099 1a33 02       		.uleb128 0x2
 6100 1a34 77       		.byte	0x77
 6101 1a35 00       		.sleb128 0
 6102 1a36 00       		.byte	0
 6103 1a37 21       		.uleb128 0x21
 6104 1a38 2A000000 		.4byte	.LVL44
 6105 1a3c 8F1B0000 		.4byte	0x1b8f
 6106 1a40 501A0000 		.4byte	0x1a50
 6107 1a44 20       		.uleb128 0x20
 6108 1a45 01       		.uleb128 0x1
 6109 1a46 50       		.byte	0x50
 6110 1a47 02       		.uleb128 0x2
 6111 1a48 75       		.byte	0x75
 6112 1a49 00       		.sleb128 0
 6113 1a4a 20       		.uleb128 0x20
 6114 1a4b 01       		.uleb128 0x1
 6115 1a4c 51       		.byte	0x51
 6116 1a4d 01       		.uleb128 0x1
 6117 1a4e 30       		.byte	0x30
 6118 1a4f 00       		.byte	0
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 125


 6119 1a50 27       		.uleb128 0x27
 6120 1a51 3A000000 		.4byte	.LVL48
 6121 1a55 20       		.uleb128 0x20
 6122 1a56 01       		.uleb128 0x1
 6123 1a57 51       		.byte	0x51
 6124 1a58 01       		.uleb128 0x1
 6125 1a59 31       		.byte	0x31
 6126 1a5a 00       		.byte	0
 6127 1a5b 00       		.byte	0
 6128 1a5c 23       		.uleb128 0x23
 6129 1a5d 43020000 		.4byte	0x243
 6130 1a61 01       		.byte	0x1
 6131 1a62 AE01     		.2byte	0x1ae
 6132 1a64 7A1A0000 		.4byte	0x1a7a
 6133 1a68 00000000 		.4byte	.LFB10
 6134 1a6c 30000000 		.4byte	.LFE10-.LFB10
 6135 1a70 01       		.uleb128 0x1
 6136 1a71 9C       		.byte	0x9c
 6137 1a72 7A1A0000 		.4byte	0x1a7a
 6138 1a76 F51A0000 		.4byte	0x1af5
 6139 1a7a 1D       		.uleb128 0x1d
 6140 1a7b 1E250000 		.4byte	.LASF601
 6141 1a7f C7060000 		.4byte	0x6c7
 6142 1a83 3A0E0000 		.4byte	.LLST6
 6143 1a87 25       		.uleb128 0x25
 6144 1a88 72656700 		.ascii	"reg\000"
 6145 1a8c 01       		.byte	0x1
 6146 1a8d AE01     		.2byte	0x1ae
 6147 1a8f 30000000 		.4byte	0x30
 6148 1a93 660E0000 		.4byte	.LLST7
 6149 1a97 26       		.uleb128 0x26
 6150 1a98 AB110000 		.4byte	.LASF610
 6151 1a9c 01       		.byte	0x1
 6152 1a9d AF01     		.2byte	0x1af
 6153 1a9f 30000000 		.4byte	0x30
 6154 1aa3 840E0000 		.4byte	.LLST8
 6155 1aa7 1F       		.uleb128 0x1f
 6156 1aa8 10000000 		.4byte	.LVL29
 6157 1aac B61A0000 		.4byte	0x1ab6
 6158 1ab0 20       		.uleb128 0x20
 6159 1ab1 01       		.uleb128 0x1
 6160 1ab2 51       		.byte	0x51
 6161 1ab3 01       		.uleb128 0x1
 6162 1ab4 30       		.byte	0x30
 6163 1ab5 00       		.byte	0
 6164 1ab6 21       		.uleb128 0x21
 6165 1ab7 18000000 		.4byte	.LVL30
 6166 1abb 8F1B0000 		.4byte	0x1b8f
 6167 1abf D01A0000 		.4byte	0x1ad0
 6168 1ac3 20       		.uleb128 0x20
 6169 1ac4 01       		.uleb128 0x1
 6170 1ac5 50       		.byte	0x50
 6171 1ac6 02       		.uleb128 0x2
 6172 1ac7 74       		.byte	0x74
 6173 1ac8 00       		.sleb128 0
 6174 1ac9 20       		.uleb128 0x20
 6175 1aca 01       		.uleb128 0x1
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 126


 6176 1acb 51       		.byte	0x51
 6177 1acc 02       		.uleb128 0x2
 6178 1acd 75       		.byte	0x75
 6179 1ace 00       		.sleb128 0
 6180 1acf 00       		.byte	0
 6181 1ad0 21       		.uleb128 0x21
 6182 1ad1 20000000 		.4byte	.LVL31
 6183 1ad5 8F1B0000 		.4byte	0x1b8f
 6184 1ad9 E91A0000 		.4byte	0x1ae9
 6185 1add 20       		.uleb128 0x20
 6186 1ade 01       		.uleb128 0x1
 6187 1adf 50       		.byte	0x50
 6188 1ae0 02       		.uleb128 0x2
 6189 1ae1 74       		.byte	0x74
 6190 1ae2 00       		.sleb128 0
 6191 1ae3 20       		.uleb128 0x20
 6192 1ae4 01       		.uleb128 0x1
 6193 1ae5 51       		.byte	0x51
 6194 1ae6 01       		.uleb128 0x1
 6195 1ae7 30       		.byte	0x30
 6196 1ae8 00       		.byte	0
 6197 1ae9 27       		.uleb128 0x27
 6198 1aea 2C000000 		.4byte	.LVL33
 6199 1aee 20       		.uleb128 0x20
 6200 1aef 01       		.uleb128 0x1
 6201 1af0 51       		.byte	0x51
 6202 1af1 01       		.uleb128 0x1
 6203 1af2 31       		.byte	0x31
 6204 1af3 00       		.byte	0
 6205 1af4 00       		.byte	0
 6206 1af5 23       		.uleb128 0x23
 6207 1af6 91020000 		.4byte	0x291
 6208 1afa 01       		.byte	0x1
 6209 1afb A401     		.2byte	0x1a4
 6210 1afd 131B0000 		.4byte	0x1b13
 6211 1b01 00000000 		.4byte	.LFB9
 6212 1b05 36000000 		.4byte	.LFE9-.LFB9
 6213 1b09 01       		.uleb128 0x1
 6214 1b0a 9C       		.byte	0x9c
 6215 1b0b 131B0000 		.4byte	0x1b13
 6216 1b0f 8F1B0000 		.4byte	0x1b8f
 6217 1b13 1D       		.uleb128 0x1d
 6218 1b14 1E250000 		.4byte	.LASF601
 6219 1b18 C7060000 		.4byte	0x6c7
 6220 1b1c 970E0000 		.4byte	.LLST3
 6221 1b20 25       		.uleb128 0x25
 6222 1b21 72656700 		.ascii	"reg\000"
 6223 1b25 01       		.byte	0x1
 6224 1b26 A401     		.2byte	0x1a4
 6225 1b28 30000000 		.4byte	0x30
 6226 1b2c C30E0000 		.4byte	.LLST4
 6227 1b30 24       		.uleb128 0x24
 6228 1b31 AB110000 		.4byte	.LASF610
 6229 1b35 01       		.byte	0x1
 6230 1b36 A401     		.2byte	0x1a4
 6231 1b38 30000000 		.4byte	0x30
 6232 1b3c E10E0000 		.4byte	.LLST5
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 127


 6233 1b40 1F       		.uleb128 0x1f
 6234 1b41 1A000000 		.4byte	.LVL20
 6235 1b45 4F1B0000 		.4byte	0x1b4f
 6236 1b49 20       		.uleb128 0x20
 6237 1b4a 01       		.uleb128 0x1
 6238 1b4b 51       		.byte	0x51
 6239 1b4c 01       		.uleb128 0x1
 6240 1b4d 30       		.byte	0x30
 6241 1b4e 00       		.byte	0
 6242 1b4f 21       		.uleb128 0x21
 6243 1b50 22000000 		.4byte	.LVL21
 6244 1b54 8F1B0000 		.4byte	0x1b8f
 6245 1b58 691B0000 		.4byte	0x1b69
 6246 1b5c 20       		.uleb128 0x20
 6247 1b5d 01       		.uleb128 0x1
 6248 1b5e 50       		.byte	0x50
 6249 1b5f 02       		.uleb128 0x2
 6250 1b60 74       		.byte	0x74
 6251 1b61 00       		.sleb128 0
 6252 1b62 20       		.uleb128 0x20
 6253 1b63 01       		.uleb128 0x1
 6254 1b64 51       		.byte	0x51
 6255 1b65 02       		.uleb128 0x2
 6256 1b66 75       		.byte	0x75
 6257 1b67 00       		.sleb128 0
 6258 1b68 00       		.byte	0
 6259 1b69 21       		.uleb128 0x21
 6260 1b6a 2A000000 		.4byte	.LVL22
 6261 1b6e 8F1B0000 		.4byte	0x1b8f
 6262 1b72 831B0000 		.4byte	0x1b83
 6263 1b76 20       		.uleb128 0x20
 6264 1b77 01       		.uleb128 0x1
 6265 1b78 50       		.byte	0x50
 6266 1b79 02       		.uleb128 0x2
 6267 1b7a 74       		.byte	0x74
 6268 1b7b 00       		.sleb128 0
 6269 1b7c 20       		.uleb128 0x20
 6270 1b7d 01       		.uleb128 0x1
 6271 1b7e 51       		.byte	0x51
 6272 1b7f 02       		.uleb128 0x2
 6273 1b80 76       		.byte	0x76
 6274 1b81 00       		.sleb128 0
 6275 1b82 00       		.byte	0
 6276 1b83 27       		.uleb128 0x27
 6277 1b84 34000000 		.4byte	.LVL23
 6278 1b88 20       		.uleb128 0x20
 6279 1b89 01       		.uleb128 0x1
 6280 1b8a 51       		.byte	0x51
 6281 1b8b 01       		.uleb128 0x1
 6282 1b8c 31       		.byte	0x31
 6283 1b8d 00       		.byte	0
 6284 1b8e 00       		.byte	0
 6285 1b8f 1C       		.uleb128 0x1c
 6286 1b90 8A010000 		.4byte	0x18a
 6287 1b94 01       		.byte	0x1
 6288 1b95 9201     		.2byte	0x192
 6289 1b97 AD1B0000 		.4byte	0x1bad
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 128


 6290 1b9b 00000000 		.4byte	.LFB8
 6291 1b9f 5C000000 		.4byte	.LFE8-.LFB8
 6292 1ba3 01       		.uleb128 0x1
 6293 1ba4 9C       		.byte	0x9c
 6294 1ba5 AD1B0000 		.4byte	0x1bad
 6295 1ba9 341C0000 		.4byte	0x1c34
 6296 1bad 1D       		.uleb128 0x1d
 6297 1bae 1E250000 		.4byte	.LASF601
 6298 1bb2 C7060000 		.4byte	0x6c7
 6299 1bb6 020F0000 		.4byte	.LLST0
 6300 1bba 24       		.uleb128 0x24
 6301 1bbb AB110000 		.4byte	.LASF610
 6302 1bbf 01       		.byte	0x1
 6303 1bc0 9201     		.2byte	0x192
 6304 1bc2 30000000 		.4byte	0x30
 6305 1bc6 2E0F0000 		.4byte	.LLST1
 6306 1bca 1E       		.uleb128 0x1e
 6307 1bcb 6900     		.ascii	"i\000"
 6308 1bcd 01       		.byte	0x1
 6309 1bce 9301     		.2byte	0x193
 6310 1bd0 30000000 		.4byte	0x30
 6311 1bd4 6D0F0000 		.4byte	.LLST2
 6312 1bd8 1F       		.uleb128 0x1f
 6313 1bd9 10000000 		.4byte	.LVL2
 6314 1bdd E81B0000 		.4byte	0x1be8
 6315 1be1 20       		.uleb128 0x20
 6316 1be2 01       		.uleb128 0x1
 6317 1be3 50       		.byte	0x50
 6318 1be4 02       		.uleb128 0x2
 6319 1be5 77       		.byte	0x77
 6320 1be6 00       		.sleb128 0
 6321 1be7 00       		.byte	0
 6322 1be8 1F       		.uleb128 0x1f
 6323 1be9 22000000 		.4byte	.LVL5
 6324 1bed F81B0000 		.4byte	0x1bf8
 6325 1bf1 20       		.uleb128 0x20
 6326 1bf2 01       		.uleb128 0x1
 6327 1bf3 50       		.byte	0x50
 6328 1bf4 02       		.uleb128 0x2
 6329 1bf5 77       		.byte	0x77
 6330 1bf6 00       		.sleb128 0
 6331 1bf7 00       		.byte	0
 6332 1bf8 1F       		.uleb128 0x1f
 6333 1bf9 2E000000 		.4byte	.LVL7
 6334 1bfd 081C0000 		.4byte	0x1c08
 6335 1c01 20       		.uleb128 0x20
 6336 1c02 01       		.uleb128 0x1
 6337 1c03 51       		.byte	0x51
 6338 1c04 02       		.uleb128 0x2
 6339 1c05 77       		.byte	0x77
 6340 1c06 00       		.sleb128 0
 6341 1c07 00       		.byte	0
 6342 1c08 1F       		.uleb128 0x1f
 6343 1c09 42000000 		.4byte	.LVL11
 6344 1c0d 181C0000 		.4byte	0x1c18
 6345 1c11 20       		.uleb128 0x20
 6346 1c12 01       		.uleb128 0x1
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 129


 6347 1c13 50       		.byte	0x50
 6348 1c14 02       		.uleb128 0x2
 6349 1c15 77       		.byte	0x77
 6350 1c16 00       		.sleb128 0
 6351 1c17 00       		.byte	0
 6352 1c18 1F       		.uleb128 0x1f
 6353 1c19 4E000000 		.4byte	.LVL13
 6354 1c1d 271C0000 		.4byte	0x1c27
 6355 1c21 20       		.uleb128 0x20
 6356 1c22 01       		.uleb128 0x1
 6357 1c23 51       		.byte	0x51
 6358 1c24 01       		.uleb128 0x1
 6359 1c25 30       		.byte	0x30
 6360 1c26 00       		.byte	0
 6361 1c27 27       		.uleb128 0x27
 6362 1c28 54000000 		.4byte	.LVL14
 6363 1c2c 20       		.uleb128 0x20
 6364 1c2d 01       		.uleb128 0x1
 6365 1c2e 50       		.byte	0x50
 6366 1c2f 02       		.uleb128 0x2
 6367 1c30 77       		.byte	0x77
 6368 1c31 00       		.sleb128 0
 6369 1c32 00       		.byte	0
 6370 1c33 00       		.byte	0
 6371 1c34 17       		.uleb128 0x17
 6372 1c35 04       		.byte	0x4
 6373 1c36 B5000000 		.4byte	0xb5
 6374 1c3a 03       		.uleb128 0x3
 6375 1c3b 341C0000 		.4byte	0x1c34
 6376 1c3f 2C       		.uleb128 0x2c
 6377 1c40 BA000000 		.4byte	0xba
 6378 1c44 4C1C0000 		.4byte	0x1c4c
 6379 1c48 561C0000 		.4byte	0x1c56
 6380 1c4c 29       		.uleb128 0x29
 6381 1c4d 1E250000 		.4byte	.LASF601
 6382 1c51 3A1C0000 		.4byte	0x1c3a
 6383 1c55 00       		.byte	0
 6384 1c56 2C       		.uleb128 0x2c
 6385 1c57 DC000000 		.4byte	0xdc
 6386 1c5b 631C0000 		.4byte	0x1c63
 6387 1c5f 6D1C0000 		.4byte	0x1c6d
 6388 1c63 29       		.uleb128 0x29
 6389 1c64 1E250000 		.4byte	.LASF601
 6390 1c68 3A1C0000 		.4byte	0x1c3a
 6391 1c6c 00       		.byte	0
 6392 1c6d 2C       		.uleb128 0x2c
 6393 1c6e FE000000 		.4byte	0xfe
 6394 1c72 7A1C0000 		.4byte	0x1c7a
 6395 1c76 8D1C0000 		.4byte	0x1c8d
 6396 1c7a 29       		.uleb128 0x29
 6397 1c7b 1E250000 		.4byte	.LASF601
 6398 1c7f 3A1C0000 		.4byte	0x1c3a
 6399 1c83 2D       		.uleb128 0x2d
 6400 1c84 6400     		.ascii	"d\000"
 6401 1c86 02       		.byte	0x2
 6402 1c87 1C       		.byte	0x1c
 6403 1c88 47000000 		.4byte	0x47
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 130


 6404 1c8c 00       		.byte	0
 6405 1c8d 17       		.uleb128 0x17
 6406 1c8e 04       		.byte	0x4
 6407 1c8f 8D000000 		.4byte	0x8d
 6408 1c93 03       		.uleb128 0x3
 6409 1c94 8D1C0000 		.4byte	0x1c8d
 6410 1c98 2C       		.uleb128 0x2c
 6411 1c99 96000000 		.4byte	0x96
 6412 1c9d A51C0000 		.4byte	0x1ca5
 6413 1ca1 AF1C0000 		.4byte	0x1caf
 6414 1ca5 29       		.uleb128 0x29
 6415 1ca6 1E250000 		.4byte	.LASF601
 6416 1caa 931C0000 		.4byte	0x1c93
 6417 1cae 00       		.byte	0
 6418 1caf 17       		.uleb128 0x17
 6419 1cb0 04       		.byte	0x4
 6420 1cb1 65000000 		.4byte	0x65
 6421 1cb5 03       		.uleb128 0x3
 6422 1cb6 AF1C0000 		.4byte	0x1caf
 6423 1cba 2C       		.uleb128 0x2c
 6424 1cbb 6E000000 		.4byte	0x6e
 6425 1cbf C71C0000 		.4byte	0x1cc7
 6426 1cc3 D11C0000 		.4byte	0x1cd1
 6427 1cc7 29       		.uleb128 0x29
 6428 1cc8 1E250000 		.4byte	.LASF601
 6429 1ccc B51C0000 		.4byte	0x1cb5
 6430 1cd0 00       		.byte	0
 6431 1cd1 2E       		.uleb128 0x2e
 6432 1cd2 BF180000 		.4byte	0x18bf
 6433 1cd6 EC210000 		.4byte	.LASF518
 6434 1cda 00000000 		.4byte	.LFB13
 6435 1cde 26000000 		.4byte	.LFE13-.LFB13
 6436 1ce2 01       		.uleb128 0x1
 6437 1ce3 9C       		.byte	0x9c
 6438 1ce4 E81C0000 		.4byte	0x1ce8
 6439 1ce8 2F       		.uleb128 0x2f
 6440 1ce9 D4180000 		.4byte	0x18d4
 6441 1ced 900F0000 		.4byte	.LLST19
 6442 1cf1 2F       		.uleb128 0x2f
 6443 1cf2 DD180000 		.4byte	0x18dd
 6444 1cf6 C70F0000 		.4byte	.LLST20
 6445 1cfa 30       		.uleb128 0x30
 6446 1cfb E7180000 		.4byte	0x18e7
 6447 1cff E80F0000 		.4byte	.LLST21
 6448 1d03 31       		.uleb128 0x31
 6449 1d04 BF180000 		.4byte	0x18bf
 6450 1d08 1A000000 		.4byte	.LBB4
 6451 1d0c 0A000000 		.4byte	.LBE4-.LBB4
 6452 1d10 4C1D0000 		.4byte	0x1d4c
 6453 1d14 32       		.uleb128 0x32
 6454 1d15 DD180000 		.4byte	0x18dd
 6455 1d19 33       		.uleb128 0x33
 6456 1d1a D4180000 		.4byte	0x18d4
 6457 1d1e 01       		.uleb128 0x1
 6458 1d1f 54       		.byte	0x54
 6459 1d20 34       		.uleb128 0x34
 6460 1d21 1A000000 		.4byte	.LBB5
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 131


 6461 1d25 0A000000 		.4byte	.LBE5-.LBB5
 6462 1d29 35       		.uleb128 0x35
 6463 1d2a FA1C0000 		.4byte	0x1cfa
 6464 1d2e 22       		.uleb128 0x22
 6465 1d2f 24000000 		.4byte	.LVL74
 6466 1d33 F51A0000 		.4byte	0x1af5
 6467 1d37 20       		.uleb128 0x20
 6468 1d38 01       		.uleb128 0x1
 6469 1d39 50       		.byte	0x50
 6470 1d3a 02       		.uleb128 0x2
 6471 1d3b 74       		.byte	0x74
 6472 1d3c 00       		.sleb128 0
 6473 1d3d 20       		.uleb128 0x20
 6474 1d3e 01       		.uleb128 0x1
 6475 1d3f 51       		.byte	0x51
 6476 1d40 02       		.uleb128 0x2
 6477 1d41 08       		.byte	0x8
 6478 1d42 50       		.byte	0x50
 6479 1d43 20       		.uleb128 0x20
 6480 1d44 01       		.uleb128 0x1
 6481 1d45 52       		.byte	0x52
 6482 1d46 02       		.uleb128 0x2
 6483 1d47 08       		.byte	0x8
 6484 1d48 53       		.byte	0x53
 6485 1d49 00       		.byte	0
 6486 1d4a 00       		.byte	0
 6487 1d4b 00       		.byte	0
 6488 1d4c 22       		.uleb128 0x22
 6489 1d4d 0C000000 		.4byte	.LVL68
 6490 1d51 5C1A0000 		.4byte	0x1a5c
 6491 1d55 20       		.uleb128 0x20
 6492 1d56 01       		.uleb128 0x1
 6493 1d57 50       		.byte	0x50
 6494 1d58 02       		.uleb128 0x2
 6495 1d59 74       		.byte	0x74
 6496 1d5a 00       		.sleb128 0
 6497 1d5b 20       		.uleb128 0x20
 6498 1d5c 01       		.uleb128 0x1
 6499 1d5d 51       		.byte	0x51
 6500 1d5e 01       		.uleb128 0x1
 6501 1d5f 37       		.byte	0x37
 6502 1d60 00       		.byte	0
 6503 1d61 00       		.byte	0
 6504 1d62 00       		.byte	0
 6505              		.section	.debug_abbrev,"",%progbits
 6506              	.Ldebug_abbrev0:
 6507 0000 01       		.uleb128 0x1
 6508 0001 11       		.uleb128 0x11
 6509 0002 01       		.byte	0x1
 6510 0003 25       		.uleb128 0x25
 6511 0004 0E       		.uleb128 0xe
 6512 0005 13       		.uleb128 0x13
 6513 0006 0B       		.uleb128 0xb
 6514 0007 03       		.uleb128 0x3
 6515 0008 0E       		.uleb128 0xe
 6516 0009 1B       		.uleb128 0x1b
 6517 000a 0E       		.uleb128 0xe
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 132


 6518 000b 55       		.uleb128 0x55
 6519 000c 17       		.uleb128 0x17
 6520 000d 11       		.uleb128 0x11
 6521 000e 01       		.uleb128 0x1
 6522 000f 10       		.uleb128 0x10
 6523 0010 17       		.uleb128 0x17
 6524 0011 9942     		.uleb128 0x2119
 6525 0013 17       		.uleb128 0x17
 6526 0014 00       		.byte	0
 6527 0015 00       		.byte	0
 6528 0016 02       		.uleb128 0x2
 6529 0017 24       		.uleb128 0x24
 6530 0018 00       		.byte	0
 6531 0019 0B       		.uleb128 0xb
 6532 001a 0B       		.uleb128 0xb
 6533 001b 3E       		.uleb128 0x3e
 6534 001c 0B       		.uleb128 0xb
 6535 001d 03       		.uleb128 0x3
 6536 001e 0E       		.uleb128 0xe
 6537 001f 00       		.byte	0
 6538 0020 00       		.byte	0
 6539 0021 03       		.uleb128 0x3
 6540 0022 26       		.uleb128 0x26
 6541 0023 00       		.byte	0
 6542 0024 49       		.uleb128 0x49
 6543 0025 13       		.uleb128 0x13
 6544 0026 00       		.byte	0
 6545 0027 00       		.byte	0
 6546 0028 04       		.uleb128 0x4
 6547 0029 39       		.uleb128 0x39
 6548 002a 01       		.byte	0x1
 6549 002b 03       		.uleb128 0x3
 6550 002c 0E       		.uleb128 0xe
 6551 002d 3A       		.uleb128 0x3a
 6552 002e 0B       		.uleb128 0xb
 6553 002f 3B       		.uleb128 0x3b
 6554 0030 0B       		.uleb128 0xb
 6555 0031 01       		.uleb128 0x1
 6556 0032 13       		.uleb128 0x13
 6557 0033 00       		.byte	0
 6558 0034 00       		.byte	0
 6559 0035 05       		.uleb128 0x5
 6560 0036 04       		.uleb128 0x4
 6561 0037 01       		.byte	0x1
 6562 0038 03       		.uleb128 0x3
 6563 0039 0E       		.uleb128 0xe
 6564 003a 3E       		.uleb128 0x3e
 6565 003b 0B       		.uleb128 0xb
 6566 003c 0B       		.uleb128 0xb
 6567 003d 0B       		.uleb128 0xb
 6568 003e 49       		.uleb128 0x49
 6569 003f 13       		.uleb128 0x13
 6570 0040 3A       		.uleb128 0x3a
 6571 0041 0B       		.uleb128 0xb
 6572 0042 3B       		.uleb128 0x3b
 6573 0043 0B       		.uleb128 0xb
 6574 0044 01       		.uleb128 0x1
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 133


 6575 0045 13       		.uleb128 0x13
 6576 0046 00       		.byte	0
 6577 0047 00       		.byte	0
 6578 0048 06       		.uleb128 0x6
 6579 0049 28       		.uleb128 0x28
 6580 004a 00       		.byte	0
 6581 004b 03       		.uleb128 0x3
 6582 004c 0E       		.uleb128 0xe
 6583 004d 1C       		.uleb128 0x1c
 6584 004e 0B       		.uleb128 0xb
 6585 004f 00       		.byte	0
 6586 0050 00       		.byte	0
 6587 0051 07       		.uleb128 0x7
 6588 0052 02       		.uleb128 0x2
 6589 0053 01       		.byte	0x1
 6590 0054 03       		.uleb128 0x3
 6591 0055 0E       		.uleb128 0xe
 6592 0056 3C       		.uleb128 0x3c
 6593 0057 19       		.uleb128 0x19
 6594 0058 01       		.uleb128 0x1
 6595 0059 13       		.uleb128 0x13
 6596 005a 00       		.byte	0
 6597 005b 00       		.byte	0
 6598 005c 08       		.uleb128 0x8
 6599 005d 2E       		.uleb128 0x2e
 6600 005e 01       		.byte	0x1
 6601 005f 3F       		.uleb128 0x3f
 6602 0060 19       		.uleb128 0x19
 6603 0061 03       		.uleb128 0x3
 6604 0062 0E       		.uleb128 0xe
 6605 0063 3A       		.uleb128 0x3a
 6606 0064 0B       		.uleb128 0xb
 6607 0065 3B       		.uleb128 0x3b
 6608 0066 0B       		.uleb128 0xb
 6609 0067 6E       		.uleb128 0x6e
 6610 0068 0E       		.uleb128 0xe
 6611 0069 4C       		.uleb128 0x4c
 6612 006a 0B       		.uleb128 0xb
 6613 006b 4D       		.uleb128 0x4d
 6614 006c 18       		.uleb128 0x18
 6615 006d 1D       		.uleb128 0x1d
 6616 006e 13       		.uleb128 0x13
 6617 006f 32       		.uleb128 0x32
 6618 0070 0B       		.uleb128 0xb
 6619 0071 3C       		.uleb128 0x3c
 6620 0072 19       		.uleb128 0x19
 6621 0073 64       		.uleb128 0x64
 6622 0074 13       		.uleb128 0x13
 6623 0075 00       		.byte	0
 6624 0076 00       		.byte	0
 6625 0077 09       		.uleb128 0x9
 6626 0078 05       		.uleb128 0x5
 6627 0079 00       		.byte	0
 6628 007a 49       		.uleb128 0x49
 6629 007b 13       		.uleb128 0x13
 6630 007c 34       		.uleb128 0x34
 6631 007d 19       		.uleb128 0x19
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 134


 6632 007e 00       		.byte	0
 6633 007f 00       		.byte	0
 6634 0080 0A       		.uleb128 0xa
 6635 0081 02       		.uleb128 0x2
 6636 0082 01       		.byte	0x1
 6637 0083 03       		.uleb128 0x3
 6638 0084 0E       		.uleb128 0xe
 6639 0085 3C       		.uleb128 0x3c
 6640 0086 19       		.uleb128 0x19
 6641 0087 00       		.byte	0
 6642 0088 00       		.byte	0
 6643 0089 0B       		.uleb128 0xb
 6644 008a 2E       		.uleb128 0x2e
 6645 008b 01       		.byte	0x1
 6646 008c 3F       		.uleb128 0x3f
 6647 008d 19       		.uleb128 0x19
 6648 008e 03       		.uleb128 0x3
 6649 008f 0E       		.uleb128 0xe
 6650 0090 3A       		.uleb128 0x3a
 6651 0091 0B       		.uleb128 0xb
 6652 0092 3B       		.uleb128 0x3b
 6653 0093 0B       		.uleb128 0xb
 6654 0094 6E       		.uleb128 0x6e
 6655 0095 0E       		.uleb128 0xe
 6656 0096 4C       		.uleb128 0x4c
 6657 0097 0B       		.uleb128 0xb
 6658 0098 4D       		.uleb128 0x4d
 6659 0099 18       		.uleb128 0x18
 6660 009a 1D       		.uleb128 0x1d
 6661 009b 13       		.uleb128 0x13
 6662 009c 32       		.uleb128 0x32
 6663 009d 0B       		.uleb128 0xb
 6664 009e 3C       		.uleb128 0x3c
 6665 009f 19       		.uleb128 0x19
 6666 00a0 64       		.uleb128 0x64
 6667 00a1 13       		.uleb128 0x13
 6668 00a2 01       		.uleb128 0x1
 6669 00a3 13       		.uleb128 0x13
 6670 00a4 00       		.byte	0
 6671 00a5 00       		.byte	0
 6672 00a6 0C       		.uleb128 0xc
 6673 00a7 05       		.uleb128 0x5
 6674 00a8 00       		.byte	0
 6675 00a9 49       		.uleb128 0x49
 6676 00aa 13       		.uleb128 0x13
 6677 00ab 00       		.byte	0
 6678 00ac 00       		.byte	0
 6679 00ad 0D       		.uleb128 0xd
 6680 00ae 02       		.uleb128 0x2
 6681 00af 01       		.byte	0x1
 6682 00b0 03       		.uleb128 0x3
 6683 00b1 0E       		.uleb128 0xe
 6684 00b2 0B       		.uleb128 0xb
 6685 00b3 0B       		.uleb128 0xb
 6686 00b4 3A       		.uleb128 0x3a
 6687 00b5 0B       		.uleb128 0xb
 6688 00b6 3B       		.uleb128 0x3b
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 135


 6689 00b7 05       		.uleb128 0x5
 6690 00b8 01       		.uleb128 0x1
 6691 00b9 13       		.uleb128 0x13
 6692 00ba 00       		.byte	0
 6693 00bb 00       		.byte	0
 6694 00bc 0E       		.uleb128 0xe
 6695 00bd 0D       		.uleb128 0xd
 6696 00be 00       		.byte	0
 6697 00bf 03       		.uleb128 0x3
 6698 00c0 0E       		.uleb128 0xe
 6699 00c1 3A       		.uleb128 0x3a
 6700 00c2 0B       		.uleb128 0xb
 6701 00c3 3B       		.uleb128 0x3b
 6702 00c4 05       		.uleb128 0x5
 6703 00c5 49       		.uleb128 0x49
 6704 00c6 13       		.uleb128 0x13
 6705 00c7 38       		.uleb128 0x38
 6706 00c8 0B       		.uleb128 0xb
 6707 00c9 00       		.byte	0
 6708 00ca 00       		.byte	0
 6709 00cb 0F       		.uleb128 0xf
 6710 00cc 0D       		.uleb128 0xd
 6711 00cd 00       		.byte	0
 6712 00ce 03       		.uleb128 0x3
 6713 00cf 08       		.uleb128 0x8
 6714 00d0 3A       		.uleb128 0x3a
 6715 00d1 0B       		.uleb128 0xb
 6716 00d2 3B       		.uleb128 0x3b
 6717 00d3 05       		.uleb128 0x5
 6718 00d4 49       		.uleb128 0x49
 6719 00d5 13       		.uleb128 0x13
 6720 00d6 38       		.uleb128 0x38
 6721 00d7 0B       		.uleb128 0xb
 6722 00d8 00       		.byte	0
 6723 00d9 00       		.byte	0
 6724 00da 10       		.uleb128 0x10
 6725 00db 2E       		.uleb128 0x2e
 6726 00dc 01       		.byte	0x1
 6727 00dd 3F       		.uleb128 0x3f
 6728 00de 19       		.uleb128 0x19
 6729 00df 03       		.uleb128 0x3
 6730 00e0 0E       		.uleb128 0xe
 6731 00e1 3A       		.uleb128 0x3a
 6732 00e2 0B       		.uleb128 0xb
 6733 00e3 3B       		.uleb128 0x3b
 6734 00e4 05       		.uleb128 0x5
 6735 00e5 6E       		.uleb128 0x6e
 6736 00e6 0E       		.uleb128 0xe
 6737 00e7 49       		.uleb128 0x49
 6738 00e8 13       		.uleb128 0x13
 6739 00e9 3C       		.uleb128 0x3c
 6740 00ea 19       		.uleb128 0x19
 6741 00eb 64       		.uleb128 0x64
 6742 00ec 13       		.uleb128 0x13
 6743 00ed 01       		.uleb128 0x1
 6744 00ee 13       		.uleb128 0x13
 6745 00ef 00       		.byte	0
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 136


 6746 00f0 00       		.byte	0
 6747 00f1 11       		.uleb128 0x11
 6748 00f2 2E       		.uleb128 0x2e
 6749 00f3 01       		.byte	0x1
 6750 00f4 3F       		.uleb128 0x3f
 6751 00f5 19       		.uleb128 0x19
 6752 00f6 03       		.uleb128 0x3
 6753 00f7 0E       		.uleb128 0xe
 6754 00f8 3A       		.uleb128 0x3a
 6755 00f9 0B       		.uleb128 0xb
 6756 00fa 3B       		.uleb128 0x3b
 6757 00fb 05       		.uleb128 0x5
 6758 00fc 6E       		.uleb128 0x6e
 6759 00fd 0E       		.uleb128 0xe
 6760 00fe 49       		.uleb128 0x49
 6761 00ff 13       		.uleb128 0x13
 6762 0100 32       		.uleb128 0x32
 6763 0101 0B       		.uleb128 0xb
 6764 0102 3C       		.uleb128 0x3c
 6765 0103 19       		.uleb128 0x19
 6766 0104 64       		.uleb128 0x64
 6767 0105 13       		.uleb128 0x13
 6768 0106 01       		.uleb128 0x1
 6769 0107 13       		.uleb128 0x13
 6770 0108 00       		.byte	0
 6771 0109 00       		.byte	0
 6772 010a 12       		.uleb128 0x12
 6773 010b 2E       		.uleb128 0x2e
 6774 010c 01       		.byte	0x1
 6775 010d 3F       		.uleb128 0x3f
 6776 010e 19       		.uleb128 0x19
 6777 010f 03       		.uleb128 0x3
 6778 0110 0E       		.uleb128 0xe
 6779 0111 3A       		.uleb128 0x3a
 6780 0112 0B       		.uleb128 0xb
 6781 0113 3B       		.uleb128 0x3b
 6782 0114 05       		.uleb128 0x5
 6783 0115 6E       		.uleb128 0x6e
 6784 0116 0E       		.uleb128 0xe
 6785 0117 3C       		.uleb128 0x3c
 6786 0118 19       		.uleb128 0x19
 6787 0119 64       		.uleb128 0x64
 6788 011a 13       		.uleb128 0x13
 6789 011b 01       		.uleb128 0x1
 6790 011c 13       		.uleb128 0x13
 6791 011d 00       		.byte	0
 6792 011e 00       		.byte	0
 6793 011f 13       		.uleb128 0x13
 6794 0120 2E       		.uleb128 0x2e
 6795 0121 01       		.byte	0x1
 6796 0122 3F       		.uleb128 0x3f
 6797 0123 19       		.uleb128 0x19
 6798 0124 03       		.uleb128 0x3
 6799 0125 0E       		.uleb128 0xe
 6800 0126 3A       		.uleb128 0x3a
 6801 0127 0B       		.uleb128 0xb
 6802 0128 3B       		.uleb128 0x3b
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 137


 6803 0129 05       		.uleb128 0x5
 6804 012a 6E       		.uleb128 0x6e
 6805 012b 0E       		.uleb128 0xe
 6806 012c 32       		.uleb128 0x32
 6807 012d 0B       		.uleb128 0xb
 6808 012e 3C       		.uleb128 0x3c
 6809 012f 19       		.uleb128 0x19
 6810 0130 64       		.uleb128 0x64
 6811 0131 13       		.uleb128 0x13
 6812 0132 01       		.uleb128 0x1
 6813 0133 13       		.uleb128 0x13
 6814 0134 00       		.byte	0
 6815 0135 00       		.byte	0
 6816 0136 14       		.uleb128 0x14
 6817 0137 2E       		.uleb128 0x2e
 6818 0138 01       		.byte	0x1
 6819 0139 3F       		.uleb128 0x3f
 6820 013a 19       		.uleb128 0x19
 6821 013b 03       		.uleb128 0x3
 6822 013c 0E       		.uleb128 0xe
 6823 013d 3A       		.uleb128 0x3a
 6824 013e 0B       		.uleb128 0xb
 6825 013f 3B       		.uleb128 0x3b
 6826 0140 05       		.uleb128 0x5
 6827 0141 6E       		.uleb128 0x6e
 6828 0142 0E       		.uleb128 0xe
 6829 0143 49       		.uleb128 0x49
 6830 0144 13       		.uleb128 0x13
 6831 0145 32       		.uleb128 0x32
 6832 0146 0B       		.uleb128 0xb
 6833 0147 3C       		.uleb128 0x3c
 6834 0148 19       		.uleb128 0x19
 6835 0149 64       		.uleb128 0x64
 6836 014a 13       		.uleb128 0x13
 6837 014b 00       		.byte	0
 6838 014c 00       		.byte	0
 6839 014d 15       		.uleb128 0x15
 6840 014e 10       		.uleb128 0x10
 6841 014f 00       		.byte	0
 6842 0150 0B       		.uleb128 0xb
 6843 0151 0B       		.uleb128 0xb
 6844 0152 49       		.uleb128 0x49
 6845 0153 13       		.uleb128 0x13
 6846 0154 00       		.byte	0
 6847 0155 00       		.byte	0
 6848 0156 16       		.uleb128 0x16
 6849 0157 15       		.uleb128 0x15
 6850 0158 01       		.byte	0x1
 6851 0159 01       		.uleb128 0x1
 6852 015a 13       		.uleb128 0x13
 6853 015b 00       		.byte	0
 6854 015c 00       		.byte	0
 6855 015d 17       		.uleb128 0x17
 6856 015e 0F       		.uleb128 0xf
 6857 015f 00       		.byte	0
 6858 0160 0B       		.uleb128 0xb
 6859 0161 0B       		.uleb128 0xb
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 138


 6860 0162 49       		.uleb128 0x49
 6861 0163 13       		.uleb128 0x13
 6862 0164 00       		.byte	0
 6863 0165 00       		.byte	0
 6864 0166 18       		.uleb128 0x18
 6865 0167 3A       		.uleb128 0x3a
 6866 0168 00       		.byte	0
 6867 0169 3A       		.uleb128 0x3a
 6868 016a 0B       		.uleb128 0xb
 6869 016b 3B       		.uleb128 0x3b
 6870 016c 05       		.uleb128 0x5
 6871 016d 18       		.uleb128 0x18
 6872 016e 13       		.uleb128 0x13
 6873 016f 00       		.byte	0
 6874 0170 00       		.byte	0
 6875 0171 19       		.uleb128 0x19
 6876 0172 01       		.uleb128 0x1
 6877 0173 01       		.byte	0x1
 6878 0174 49       		.uleb128 0x49
 6879 0175 13       		.uleb128 0x13
 6880 0176 01       		.uleb128 0x1
 6881 0177 13       		.uleb128 0x13
 6882 0178 00       		.byte	0
 6883 0179 00       		.byte	0
 6884 017a 1A       		.uleb128 0x1a
 6885 017b 21       		.uleb128 0x21
 6886 017c 00       		.byte	0
 6887 017d 49       		.uleb128 0x49
 6888 017e 13       		.uleb128 0x13
 6889 017f 2F       		.uleb128 0x2f
 6890 0180 0B       		.uleb128 0xb
 6891 0181 00       		.byte	0
 6892 0182 00       		.byte	0
 6893 0183 1B       		.uleb128 0x1b
 6894 0184 34       		.uleb128 0x34
 6895 0185 00       		.byte	0
 6896 0186 03       		.uleb128 0x3
 6897 0187 0E       		.uleb128 0xe
 6898 0188 3A       		.uleb128 0x3a
 6899 0189 0B       		.uleb128 0xb
 6900 018a 3B       		.uleb128 0x3b
 6901 018b 05       		.uleb128 0x5
 6902 018c 49       		.uleb128 0x49
 6903 018d 13       		.uleb128 0x13
 6904 018e 02       		.uleb128 0x2
 6905 018f 18       		.uleb128 0x18
 6906 0190 00       		.byte	0
 6907 0191 00       		.byte	0
 6908 0192 1C       		.uleb128 0x1c
 6909 0193 2E       		.uleb128 0x2e
 6910 0194 01       		.byte	0x1
 6911 0195 47       		.uleb128 0x47
 6912 0196 13       		.uleb128 0x13
 6913 0197 3A       		.uleb128 0x3a
 6914 0198 0B       		.uleb128 0xb
 6915 0199 3B       		.uleb128 0x3b
 6916 019a 05       		.uleb128 0x5
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 139


 6917 019b 64       		.uleb128 0x64
 6918 019c 13       		.uleb128 0x13
 6919 019d 11       		.uleb128 0x11
 6920 019e 01       		.uleb128 0x1
 6921 019f 12       		.uleb128 0x12
 6922 01a0 06       		.uleb128 0x6
 6923 01a1 40       		.uleb128 0x40
 6924 01a2 18       		.uleb128 0x18
 6925 01a3 64       		.uleb128 0x64
 6926 01a4 13       		.uleb128 0x13
 6927 01a5 9642     		.uleb128 0x2116
 6928 01a7 19       		.uleb128 0x19
 6929 01a8 01       		.uleb128 0x1
 6930 01a9 13       		.uleb128 0x13
 6931 01aa 00       		.byte	0
 6932 01ab 00       		.byte	0
 6933 01ac 1D       		.uleb128 0x1d
 6934 01ad 05       		.uleb128 0x5
 6935 01ae 00       		.byte	0
 6936 01af 03       		.uleb128 0x3
 6937 01b0 0E       		.uleb128 0xe
 6938 01b1 49       		.uleb128 0x49
 6939 01b2 13       		.uleb128 0x13
 6940 01b3 34       		.uleb128 0x34
 6941 01b4 19       		.uleb128 0x19
 6942 01b5 02       		.uleb128 0x2
 6943 01b6 17       		.uleb128 0x17
 6944 01b7 00       		.byte	0
 6945 01b8 00       		.byte	0
 6946 01b9 1E       		.uleb128 0x1e
 6947 01ba 34       		.uleb128 0x34
 6948 01bb 00       		.byte	0
 6949 01bc 03       		.uleb128 0x3
 6950 01bd 08       		.uleb128 0x8
 6951 01be 3A       		.uleb128 0x3a
 6952 01bf 0B       		.uleb128 0xb
 6953 01c0 3B       		.uleb128 0x3b
 6954 01c1 05       		.uleb128 0x5
 6955 01c2 49       		.uleb128 0x49
 6956 01c3 13       		.uleb128 0x13
 6957 01c4 02       		.uleb128 0x2
 6958 01c5 17       		.uleb128 0x17
 6959 01c6 00       		.byte	0
 6960 01c7 00       		.byte	0
 6961 01c8 1F       		.uleb128 0x1f
 6962 01c9 898201   		.uleb128 0x4109
 6963 01cc 01       		.byte	0x1
 6964 01cd 11       		.uleb128 0x11
 6965 01ce 01       		.uleb128 0x1
 6966 01cf 01       		.uleb128 0x1
 6967 01d0 13       		.uleb128 0x13
 6968 01d1 00       		.byte	0
 6969 01d2 00       		.byte	0
 6970 01d3 20       		.uleb128 0x20
 6971 01d4 8A8201   		.uleb128 0x410a
 6972 01d7 00       		.byte	0
 6973 01d8 02       		.uleb128 0x2
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 140


 6974 01d9 18       		.uleb128 0x18
 6975 01da 9142     		.uleb128 0x2111
 6976 01dc 18       		.uleb128 0x18
 6977 01dd 00       		.byte	0
 6978 01de 00       		.byte	0
 6979 01df 21       		.uleb128 0x21
 6980 01e0 898201   		.uleb128 0x4109
 6981 01e3 01       		.byte	0x1
 6982 01e4 11       		.uleb128 0x11
 6983 01e5 01       		.uleb128 0x1
 6984 01e6 31       		.uleb128 0x31
 6985 01e7 13       		.uleb128 0x13
 6986 01e8 01       		.uleb128 0x1
 6987 01e9 13       		.uleb128 0x13
 6988 01ea 00       		.byte	0
 6989 01eb 00       		.byte	0
 6990 01ec 22       		.uleb128 0x22
 6991 01ed 898201   		.uleb128 0x4109
 6992 01f0 01       		.byte	0x1
 6993 01f1 11       		.uleb128 0x11
 6994 01f2 01       		.uleb128 0x1
 6995 01f3 31       		.uleb128 0x31
 6996 01f4 13       		.uleb128 0x13
 6997 01f5 00       		.byte	0
 6998 01f6 00       		.byte	0
 6999 01f7 23       		.uleb128 0x23
 7000 01f8 2E       		.uleb128 0x2e
 7001 01f9 01       		.byte	0x1
 7002 01fa 47       		.uleb128 0x47
 7003 01fb 13       		.uleb128 0x13
 7004 01fc 3A       		.uleb128 0x3a
 7005 01fd 0B       		.uleb128 0xb
 7006 01fe 3B       		.uleb128 0x3b
 7007 01ff 05       		.uleb128 0x5
 7008 0200 64       		.uleb128 0x64
 7009 0201 13       		.uleb128 0x13
 7010 0202 11       		.uleb128 0x11
 7011 0203 01       		.uleb128 0x1
 7012 0204 12       		.uleb128 0x12
 7013 0205 06       		.uleb128 0x6
 7014 0206 40       		.uleb128 0x40
 7015 0207 18       		.uleb128 0x18
 7016 0208 64       		.uleb128 0x64
 7017 0209 13       		.uleb128 0x13
 7018 020a 9742     		.uleb128 0x2117
 7019 020c 19       		.uleb128 0x19
 7020 020d 01       		.uleb128 0x1
 7021 020e 13       		.uleb128 0x13
 7022 020f 00       		.byte	0
 7023 0210 00       		.byte	0
 7024 0211 24       		.uleb128 0x24
 7025 0212 05       		.uleb128 0x5
 7026 0213 00       		.byte	0
 7027 0214 03       		.uleb128 0x3
 7028 0215 0E       		.uleb128 0xe
 7029 0216 3A       		.uleb128 0x3a
 7030 0217 0B       		.uleb128 0xb
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 141


 7031 0218 3B       		.uleb128 0x3b
 7032 0219 05       		.uleb128 0x5
 7033 021a 49       		.uleb128 0x49
 7034 021b 13       		.uleb128 0x13
 7035 021c 02       		.uleb128 0x2
 7036 021d 17       		.uleb128 0x17
 7037 021e 00       		.byte	0
 7038 021f 00       		.byte	0
 7039 0220 25       		.uleb128 0x25
 7040 0221 05       		.uleb128 0x5
 7041 0222 00       		.byte	0
 7042 0223 03       		.uleb128 0x3
 7043 0224 08       		.uleb128 0x8
 7044 0225 3A       		.uleb128 0x3a
 7045 0226 0B       		.uleb128 0xb
 7046 0227 3B       		.uleb128 0x3b
 7047 0228 05       		.uleb128 0x5
 7048 0229 49       		.uleb128 0x49
 7049 022a 13       		.uleb128 0x13
 7050 022b 02       		.uleb128 0x2
 7051 022c 17       		.uleb128 0x17
 7052 022d 00       		.byte	0
 7053 022e 00       		.byte	0
 7054 022f 26       		.uleb128 0x26
 7055 0230 34       		.uleb128 0x34
 7056 0231 00       		.byte	0
 7057 0232 03       		.uleb128 0x3
 7058 0233 0E       		.uleb128 0xe
 7059 0234 3A       		.uleb128 0x3a
 7060 0235 0B       		.uleb128 0xb
 7061 0236 3B       		.uleb128 0x3b
 7062 0237 05       		.uleb128 0x5
 7063 0238 49       		.uleb128 0x49
 7064 0239 13       		.uleb128 0x13
 7065 023a 02       		.uleb128 0x2
 7066 023b 17       		.uleb128 0x17
 7067 023c 00       		.byte	0
 7068 023d 00       		.byte	0
 7069 023e 27       		.uleb128 0x27
 7070 023f 898201   		.uleb128 0x4109
 7071 0242 01       		.byte	0x1
 7072 0243 11       		.uleb128 0x11
 7073 0244 01       		.uleb128 0x1
 7074 0245 00       		.byte	0
 7075 0246 00       		.byte	0
 7076 0247 28       		.uleb128 0x28
 7077 0248 2E       		.uleb128 0x2e
 7078 0249 01       		.byte	0x1
 7079 024a 47       		.uleb128 0x47
 7080 024b 13       		.uleb128 0x13
 7081 024c 3A       		.uleb128 0x3a
 7082 024d 0B       		.uleb128 0xb
 7083 024e 3B       		.uleb128 0x3b
 7084 024f 05       		.uleb128 0x5
 7085 0250 64       		.uleb128 0x64
 7086 0251 13       		.uleb128 0x13
 7087 0252 20       		.uleb128 0x20
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 142


 7088 0253 0B       		.uleb128 0xb
 7089 0254 64       		.uleb128 0x64
 7090 0255 13       		.uleb128 0x13
 7091 0256 01       		.uleb128 0x1
 7092 0257 13       		.uleb128 0x13
 7093 0258 00       		.byte	0
 7094 0259 00       		.byte	0
 7095 025a 29       		.uleb128 0x29
 7096 025b 05       		.uleb128 0x5
 7097 025c 00       		.byte	0
 7098 025d 03       		.uleb128 0x3
 7099 025e 0E       		.uleb128 0xe
 7100 025f 49       		.uleb128 0x49
 7101 0260 13       		.uleb128 0x13
 7102 0261 34       		.uleb128 0x34
 7103 0262 19       		.uleb128 0x19
 7104 0263 00       		.byte	0
 7105 0264 00       		.byte	0
 7106 0265 2A       		.uleb128 0x2a
 7107 0266 05       		.uleb128 0x5
 7108 0267 00       		.byte	0
 7109 0268 03       		.uleb128 0x3
 7110 0269 08       		.uleb128 0x8
 7111 026a 3A       		.uleb128 0x3a
 7112 026b 0B       		.uleb128 0xb
 7113 026c 3B       		.uleb128 0x3b
 7114 026d 05       		.uleb128 0x5
 7115 026e 49       		.uleb128 0x49
 7116 026f 13       		.uleb128 0x13
 7117 0270 00       		.byte	0
 7118 0271 00       		.byte	0
 7119 0272 2B       		.uleb128 0x2b
 7120 0273 34       		.uleb128 0x34
 7121 0274 00       		.byte	0
 7122 0275 03       		.uleb128 0x3
 7123 0276 08       		.uleb128 0x8
 7124 0277 3A       		.uleb128 0x3a
 7125 0278 0B       		.uleb128 0xb
 7126 0279 3B       		.uleb128 0x3b
 7127 027a 05       		.uleb128 0x5
 7128 027b 49       		.uleb128 0x49
 7129 027c 13       		.uleb128 0x13
 7130 027d 00       		.byte	0
 7131 027e 00       		.byte	0
 7132 027f 2C       		.uleb128 0x2c
 7133 0280 2E       		.uleb128 0x2e
 7134 0281 01       		.byte	0x1
 7135 0282 47       		.uleb128 0x47
 7136 0283 13       		.uleb128 0x13
 7137 0284 64       		.uleb128 0x64
 7138 0285 13       		.uleb128 0x13
 7139 0286 01       		.uleb128 0x1
 7140 0287 13       		.uleb128 0x13
 7141 0288 00       		.byte	0
 7142 0289 00       		.byte	0
 7143 028a 2D       		.uleb128 0x2d
 7144 028b 05       		.uleb128 0x5
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 143


 7145 028c 00       		.byte	0
 7146 028d 03       		.uleb128 0x3
 7147 028e 08       		.uleb128 0x8
 7148 028f 3A       		.uleb128 0x3a
 7149 0290 0B       		.uleb128 0xb
 7150 0291 3B       		.uleb128 0x3b
 7151 0292 0B       		.uleb128 0xb
 7152 0293 49       		.uleb128 0x49
 7153 0294 13       		.uleb128 0x13
 7154 0295 00       		.byte	0
 7155 0296 00       		.byte	0
 7156 0297 2E       		.uleb128 0x2e
 7157 0298 2E       		.uleb128 0x2e
 7158 0299 01       		.byte	0x1
 7159 029a 31       		.uleb128 0x31
 7160 029b 13       		.uleb128 0x13
 7161 029c 6E       		.uleb128 0x6e
 7162 029d 0E       		.uleb128 0xe
 7163 029e 11       		.uleb128 0x11
 7164 029f 01       		.uleb128 0x1
 7165 02a0 12       		.uleb128 0x12
 7166 02a1 06       		.uleb128 0x6
 7167 02a2 40       		.uleb128 0x40
 7168 02a3 18       		.uleb128 0x18
 7169 02a4 64       		.uleb128 0x64
 7170 02a5 13       		.uleb128 0x13
 7171 02a6 9742     		.uleb128 0x2117
 7172 02a8 19       		.uleb128 0x19
 7173 02a9 00       		.byte	0
 7174 02aa 00       		.byte	0
 7175 02ab 2F       		.uleb128 0x2f
 7176 02ac 05       		.uleb128 0x5
 7177 02ad 00       		.byte	0
 7178 02ae 31       		.uleb128 0x31
 7179 02af 13       		.uleb128 0x13
 7180 02b0 02       		.uleb128 0x2
 7181 02b1 17       		.uleb128 0x17
 7182 02b2 00       		.byte	0
 7183 02b3 00       		.byte	0
 7184 02b4 30       		.uleb128 0x30
 7185 02b5 34       		.uleb128 0x34
 7186 02b6 00       		.byte	0
 7187 02b7 31       		.uleb128 0x31
 7188 02b8 13       		.uleb128 0x13
 7189 02b9 02       		.uleb128 0x2
 7190 02ba 17       		.uleb128 0x17
 7191 02bb 00       		.byte	0
 7192 02bc 00       		.byte	0
 7193 02bd 31       		.uleb128 0x31
 7194 02be 0B       		.uleb128 0xb
 7195 02bf 01       		.byte	0x1
 7196 02c0 31       		.uleb128 0x31
 7197 02c1 13       		.uleb128 0x13
 7198 02c2 11       		.uleb128 0x11
 7199 02c3 01       		.uleb128 0x1
 7200 02c4 12       		.uleb128 0x12
 7201 02c5 06       		.uleb128 0x6
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 144


 7202 02c6 01       		.uleb128 0x1
 7203 02c7 13       		.uleb128 0x13
 7204 02c8 00       		.byte	0
 7205 02c9 00       		.byte	0
 7206 02ca 32       		.uleb128 0x32
 7207 02cb 05       		.uleb128 0x5
 7208 02cc 00       		.byte	0
 7209 02cd 31       		.uleb128 0x31
 7210 02ce 13       		.uleb128 0x13
 7211 02cf 00       		.byte	0
 7212 02d0 00       		.byte	0
 7213 02d1 33       		.uleb128 0x33
 7214 02d2 05       		.uleb128 0x5
 7215 02d3 00       		.byte	0
 7216 02d4 31       		.uleb128 0x31
 7217 02d5 13       		.uleb128 0x13
 7218 02d6 02       		.uleb128 0x2
 7219 02d7 18       		.uleb128 0x18
 7220 02d8 00       		.byte	0
 7221 02d9 00       		.byte	0
 7222 02da 34       		.uleb128 0x34
 7223 02db 0B       		.uleb128 0xb
 7224 02dc 01       		.byte	0x1
 7225 02dd 11       		.uleb128 0x11
 7226 02de 01       		.uleb128 0x1
 7227 02df 12       		.uleb128 0x12
 7228 02e0 06       		.uleb128 0x6
 7229 02e1 00       		.byte	0
 7230 02e2 00       		.byte	0
 7231 02e3 35       		.uleb128 0x35
 7232 02e4 34       		.uleb128 0x34
 7233 02e5 00       		.byte	0
 7234 02e6 31       		.uleb128 0x31
 7235 02e7 13       		.uleb128 0x13
 7236 02e8 00       		.byte	0
 7237 02e9 00       		.byte	0
 7238 02ea 00       		.byte	0
 7239              		.section	.debug_loc,"",%progbits
 7240              	.Ldebug_loc0:
 7241              	.LLST99:
 7242 0000 00000000 		.4byte	.LVL272
 7243 0004 06000000 		.4byte	.LVL273
 7244 0008 0100     		.2byte	0x1
 7245 000a 50       		.byte	0x50
 7246 000b 06000000 		.4byte	.LVL273
 7247 000f E2000000 		.4byte	.LVL299
 7248 0013 0100     		.2byte	0x1
 7249 0015 54       		.byte	0x54
 7250 0016 E2000000 		.4byte	.LVL299
 7251 001a EC000000 		.4byte	.LFE45
 7252 001e 0400     		.2byte	0x4
 7253 0020 F3       		.byte	0xf3
 7254 0021 01       		.uleb128 0x1
 7255 0022 50       		.byte	0x50
 7256 0023 9F       		.byte	0x9f
 7257 0024 00000000 		.4byte	0
 7258 0028 00000000 		.4byte	0
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 145


 7259              	.LLST100:
 7260 002c 9A000000 		.4byte	.LVL289
 7261 0030 A4000000 		.4byte	.LVL290
 7262 0034 0100     		.2byte	0x1
 7263 0036 50       		.byte	0x50
 7264 0037 00000000 		.4byte	0
 7265 003b 00000000 		.4byte	0
 7266              	.LLST94:
 7267 003f 00000000 		.4byte	.LVL263
 7268 0043 0D000000 		.4byte	.LVL264-1
 7269 0047 0100     		.2byte	0x1
 7270 0049 50       		.byte	0x50
 7271 004a 0D000000 		.4byte	.LVL264-1
 7272 004e 2E000000 		.4byte	.LVL268
 7273 0052 0100     		.2byte	0x1
 7274 0054 54       		.byte	0x54
 7275 0055 2E000000 		.4byte	.LVL268
 7276 0059 30000000 		.4byte	.LFE44
 7277 005d 0400     		.2byte	0x4
 7278 005f F3       		.byte	0xf3
 7279 0060 01       		.uleb128 0x1
 7280 0061 50       		.byte	0x50
 7281 0062 9F       		.byte	0x9f
 7282 0063 00000000 		.4byte	0
 7283 0067 00000000 		.4byte	0
 7284              	.LLST95:
 7285 006b 00000000 		.4byte	.LVL263
 7286 006f 0D000000 		.4byte	.LVL264-1
 7287 0073 0100     		.2byte	0x1
 7288 0075 51       		.byte	0x51
 7289 0076 0D000000 		.4byte	.LVL264-1
 7290 007a 2E000000 		.4byte	.LVL271
 7291 007e 0100     		.2byte	0x1
 7292 0080 57       		.byte	0x57
 7293 0081 2E000000 		.4byte	.LVL271
 7294 0085 30000000 		.4byte	.LFE44
 7295 0089 0400     		.2byte	0x4
 7296 008b F3       		.byte	0xf3
 7297 008c 01       		.uleb128 0x1
 7298 008d 51       		.byte	0x51
 7299 008e 9F       		.byte	0x9f
 7300 008f 00000000 		.4byte	0
 7301 0093 00000000 		.4byte	0
 7302              	.LLST96:
 7303 0097 00000000 		.4byte	.LVL263
 7304 009b 0D000000 		.4byte	.LVL264-1
 7305 009f 0100     		.2byte	0x1
 7306 00a1 52       		.byte	0x52
 7307 00a2 0D000000 		.4byte	.LVL264-1
 7308 00a6 2E000000 		.4byte	.LVL269
 7309 00aa 0100     		.2byte	0x1
 7310 00ac 55       		.byte	0x55
 7311 00ad 2E000000 		.4byte	.LVL269
 7312 00b1 30000000 		.4byte	.LFE44
 7313 00b5 0400     		.2byte	0x4
 7314 00b7 F3       		.byte	0xf3
 7315 00b8 01       		.uleb128 0x1
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 146


 7316 00b9 52       		.byte	0x52
 7317 00ba 9F       		.byte	0x9f
 7318 00bb 00000000 		.4byte	0
 7319 00bf 00000000 		.4byte	0
 7320              	.LLST97:
 7321 00c3 00000000 		.4byte	.LVL263
 7322 00c7 0D000000 		.4byte	.LVL264-1
 7323 00cb 0100     		.2byte	0x1
 7324 00cd 53       		.byte	0x53
 7325 00ce 0D000000 		.4byte	.LVL264-1
 7326 00d2 2E000000 		.4byte	.LVL270
 7327 00d6 0100     		.2byte	0x1
 7328 00d8 56       		.byte	0x56
 7329 00d9 2E000000 		.4byte	.LVL270
 7330 00dd 30000000 		.4byte	.LFE44
 7331 00e1 0400     		.2byte	0x4
 7332 00e3 F3       		.byte	0xf3
 7333 00e4 01       		.uleb128 0x1
 7334 00e5 53       		.byte	0x53
 7335 00e6 9F       		.byte	0x9f
 7336 00e7 00000000 		.4byte	0
 7337 00eb 00000000 		.4byte	0
 7338              	.LLST98:
 7339 00ef 0E000000 		.4byte	.LVL264
 7340 00f3 18000000 		.4byte	.LVL265
 7341 00f7 0100     		.2byte	0x1
 7342 00f9 50       		.byte	0x50
 7343 00fa 18000000 		.4byte	.LVL265
 7344 00fe 1B000000 		.4byte	.LVL266-1
 7345 0102 0200     		.2byte	0x2
 7346 0104 77       		.byte	0x77
 7347 0105 00       		.sleb128 0
 7348 0106 00000000 		.4byte	0
 7349 010a 00000000 		.4byte	0
 7350              	.LLST93:
 7351 010e 00000000 		.4byte	.LVL261
 7352 0112 07000000 		.4byte	.LVL262-1
 7353 0116 0100     		.2byte	0x1
 7354 0118 50       		.byte	0x50
 7355 0119 07000000 		.4byte	.LVL262-1
 7356 011d 0A000000 		.4byte	.LFE43
 7357 0121 0400     		.2byte	0x4
 7358 0123 F3       		.byte	0xf3
 7359 0124 01       		.uleb128 0x1
 7360 0125 50       		.byte	0x50
 7361 0126 9F       		.byte	0x9f
 7362 0127 00000000 		.4byte	0
 7363 012b 00000000 		.4byte	0
 7364              	.LLST91:
 7365 012f 00000000 		.4byte	.LVL258
 7366 0133 07000000 		.4byte	.LVL259-1
 7367 0137 0100     		.2byte	0x1
 7368 0139 50       		.byte	0x50
 7369 013a 07000000 		.4byte	.LVL259-1
 7370 013e 0E000000 		.4byte	.LFE42
 7371 0142 0400     		.2byte	0x4
 7372 0144 F3       		.byte	0xf3
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 147


 7373 0145 01       		.uleb128 0x1
 7374 0146 50       		.byte	0x50
 7375 0147 9F       		.byte	0x9f
 7376 0148 00000000 		.4byte	0
 7377 014c 00000000 		.4byte	0
 7378              	.LLST92:
 7379 0150 08000000 		.4byte	.LVL259
 7380 0154 0A000000 		.4byte	.LVL260
 7381 0158 0100     		.2byte	0x1
 7382 015a 50       		.byte	0x50
 7383 015b 00000000 		.4byte	0
 7384 015f 00000000 		.4byte	0
 7385              	.LLST88:
 7386 0163 00000000 		.4byte	.LVL254
 7387 0167 13000000 		.4byte	.LVL257-1
 7388 016b 0100     		.2byte	0x1
 7389 016d 50       		.byte	0x50
 7390 016e 13000000 		.4byte	.LVL257-1
 7391 0172 16000000 		.4byte	.LFE41
 7392 0176 0400     		.2byte	0x4
 7393 0178 F3       		.byte	0xf3
 7394 0179 01       		.uleb128 0x1
 7395 017a 50       		.byte	0x50
 7396 017b 9F       		.byte	0x9f
 7397 017c 00000000 		.4byte	0
 7398 0180 00000000 		.4byte	0
 7399              	.LLST89:
 7400 0184 00000000 		.4byte	.LVL254
 7401 0188 10000000 		.4byte	.LVL256
 7402 018c 0100     		.2byte	0x1
 7403 018e 51       		.byte	0x51
 7404 018f 10000000 		.4byte	.LVL256
 7405 0193 13000000 		.4byte	.LVL257-1
 7406 0197 0100     		.2byte	0x1
 7407 0199 52       		.byte	0x52
 7408 019a 13000000 		.4byte	.LVL257-1
 7409 019e 16000000 		.4byte	.LFE41
 7410 01a2 0400     		.2byte	0x4
 7411 01a4 F3       		.byte	0xf3
 7412 01a5 01       		.uleb128 0x1
 7413 01a6 51       		.byte	0x51
 7414 01a7 9F       		.byte	0x9f
 7415 01a8 00000000 		.4byte	0
 7416 01ac 00000000 		.4byte	0
 7417              	.LLST90:
 7418 01b0 00000000 		.4byte	.LVL254
 7419 01b4 00000000 		.4byte	.LVL254
 7420 01b8 0100     		.2byte	0x1
 7421 01ba 52       		.byte	0x52
 7422 01bb 00000000 		.4byte	.LVL254
 7423 01bf 0C000000 		.4byte	.LVL255
 7424 01c3 1400     		.2byte	0x14
 7425 01c5 72       		.byte	0x72
 7426 01c6 00       		.sleb128 0
 7427 01c7 12       		.byte	0x12
 7428 01c8 08       		.byte	0x8
 7429 01c9 FF       		.byte	0xff
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 148


 7430 01ca 1A       		.byte	0x1a
 7431 01cb 08       		.byte	0x8
 7432 01cc 20       		.byte	0x20
 7433 01cd 16       		.byte	0x16
 7434 01ce 14       		.byte	0x14
 7435 01cf 08       		.byte	0x8
 7436 01d0 FF       		.byte	0xff
 7437 01d1 1A       		.byte	0x1a
 7438 01d2 2D       		.byte	0x2d
 7439 01d3 28       		.byte	0x28
 7440 01d4 0100     		.2byte	0x1
 7441 01d6 16       		.byte	0x16
 7442 01d7 13       		.byte	0x13
 7443 01d8 9F       		.byte	0x9f
 7444 01d9 0C000000 		.4byte	.LVL255
 7445 01dd 16000000 		.4byte	.LFE41
 7446 01e1 1500     		.2byte	0x15
 7447 01e3 F3       		.byte	0xf3
 7448 01e4 01       		.uleb128 0x1
 7449 01e5 52       		.byte	0x52
 7450 01e6 12       		.byte	0x12
 7451 01e7 08       		.byte	0x8
 7452 01e8 FF       		.byte	0xff
 7453 01e9 1A       		.byte	0x1a
 7454 01ea 08       		.byte	0x8
 7455 01eb 20       		.byte	0x20
 7456 01ec 16       		.byte	0x16
 7457 01ed 14       		.byte	0x14
 7458 01ee 08       		.byte	0x8
 7459 01ef FF       		.byte	0xff
 7460 01f0 1A       		.byte	0x1a
 7461 01f1 2D       		.byte	0x2d
 7462 01f2 28       		.byte	0x28
 7463 01f3 0100     		.2byte	0x1
 7464 01f5 16       		.byte	0x16
 7465 01f6 13       		.byte	0x13
 7466 01f7 9F       		.byte	0x9f
 7467 01f8 00000000 		.4byte	0
 7468 01fc 00000000 		.4byte	0
 7469              	.LLST85:
 7470 0200 00000000 		.4byte	.LVL250
 7471 0204 13000000 		.4byte	.LVL253-1
 7472 0208 0100     		.2byte	0x1
 7473 020a 50       		.byte	0x50
 7474 020b 13000000 		.4byte	.LVL253-1
 7475 020f 16000000 		.4byte	.LFE40
 7476 0213 0400     		.2byte	0x4
 7477 0215 F3       		.byte	0xf3
 7478 0216 01       		.uleb128 0x1
 7479 0217 50       		.byte	0x50
 7480 0218 9F       		.byte	0x9f
 7481 0219 00000000 		.4byte	0
 7482 021d 00000000 		.4byte	0
 7483              	.LLST86:
 7484 0221 00000000 		.4byte	.LVL250
 7485 0225 10000000 		.4byte	.LVL252
 7486 0229 0100     		.2byte	0x1
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 149


 7487 022b 51       		.byte	0x51
 7488 022c 10000000 		.4byte	.LVL252
 7489 0230 13000000 		.4byte	.LVL253-1
 7490 0234 0100     		.2byte	0x1
 7491 0236 52       		.byte	0x52
 7492 0237 13000000 		.4byte	.LVL253-1
 7493 023b 16000000 		.4byte	.LFE40
 7494 023f 0400     		.2byte	0x4
 7495 0241 F3       		.byte	0xf3
 7496 0242 01       		.uleb128 0x1
 7497 0243 51       		.byte	0x51
 7498 0244 9F       		.byte	0x9f
 7499 0245 00000000 		.4byte	0
 7500 0249 00000000 		.4byte	0
 7501              	.LLST87:
 7502 024d 00000000 		.4byte	.LVL250
 7503 0251 00000000 		.4byte	.LVL250
 7504 0255 0100     		.2byte	0x1
 7505 0257 52       		.byte	0x52
 7506 0258 00000000 		.4byte	.LVL250
 7507 025c 0C000000 		.4byte	.LVL251
 7508 0260 1400     		.2byte	0x14
 7509 0262 72       		.byte	0x72
 7510 0263 00       		.sleb128 0
 7511 0264 12       		.byte	0x12
 7512 0265 08       		.byte	0x8
 7513 0266 FF       		.byte	0xff
 7514 0267 1A       		.byte	0x1a
 7515 0268 08       		.byte	0x8
 7516 0269 20       		.byte	0x20
 7517 026a 16       		.byte	0x16
 7518 026b 14       		.byte	0x14
 7519 026c 08       		.byte	0x8
 7520 026d FF       		.byte	0xff
 7521 026e 1A       		.byte	0x1a
 7522 026f 2D       		.byte	0x2d
 7523 0270 28       		.byte	0x28
 7524 0271 0100     		.2byte	0x1
 7525 0273 16       		.byte	0x16
 7526 0274 13       		.byte	0x13
 7527 0275 9F       		.byte	0x9f
 7528 0276 0C000000 		.4byte	.LVL251
 7529 027a 16000000 		.4byte	.LFE40
 7530 027e 1500     		.2byte	0x15
 7531 0280 F3       		.byte	0xf3
 7532 0281 01       		.uleb128 0x1
 7533 0282 52       		.byte	0x52
 7534 0283 12       		.byte	0x12
 7535 0284 08       		.byte	0x8
 7536 0285 FF       		.byte	0xff
 7537 0286 1A       		.byte	0x1a
 7538 0287 08       		.byte	0x8
 7539 0288 20       		.byte	0x20
 7540 0289 16       		.byte	0x16
 7541 028a 14       		.byte	0x14
 7542 028b 08       		.byte	0x8
 7543 028c FF       		.byte	0xff
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 150


 7544 028d 1A       		.byte	0x1a
 7545 028e 2D       		.byte	0x2d
 7546 028f 28       		.byte	0x28
 7547 0290 0100     		.2byte	0x1
 7548 0292 16       		.byte	0x16
 7549 0293 13       		.byte	0x13
 7550 0294 9F       		.byte	0x9f
 7551 0295 00000000 		.4byte	0
 7552 0299 00000000 		.4byte	0
 7553              	.LLST81:
 7554 029d 00000000 		.4byte	.LVL241
 7555 02a1 14000000 		.4byte	.LVL243
 7556 02a5 0100     		.2byte	0x1
 7557 02a7 50       		.byte	0x50
 7558 02a8 14000000 		.4byte	.LVL243
 7559 02ac 42000000 		.4byte	.LVL249
 7560 02b0 0100     		.2byte	0x1
 7561 02b2 56       		.byte	0x56
 7562 02b3 42000000 		.4byte	.LVL249
 7563 02b7 44000000 		.4byte	.LFE39
 7564 02bb 0400     		.2byte	0x4
 7565 02bd F3       		.byte	0xf3
 7566 02be 01       		.uleb128 0x1
 7567 02bf 50       		.byte	0x50
 7568 02c0 9F       		.byte	0x9f
 7569 02c1 00000000 		.4byte	0
 7570 02c5 00000000 		.4byte	0
 7571              	.LLST82:
 7572 02c9 00000000 		.4byte	.LVL241
 7573 02cd 12000000 		.4byte	.LVL242
 7574 02d1 0100     		.2byte	0x1
 7575 02d3 51       		.byte	0x51
 7576 02d4 12000000 		.4byte	.LVL242
 7577 02d8 44000000 		.4byte	.LFE39
 7578 02dc 0400     		.2byte	0x4
 7579 02de F3       		.byte	0xf3
 7580 02df 01       		.uleb128 0x1
 7581 02e0 51       		.byte	0x51
 7582 02e1 9F       		.byte	0x9f
 7583 02e2 00000000 		.4byte	0
 7584 02e6 00000000 		.4byte	0
 7585              	.LLST83:
 7586 02ea 00000000 		.4byte	.LVL241
 7587 02ee 17000000 		.4byte	.LVL244-1
 7588 02f2 0100     		.2byte	0x1
 7589 02f4 52       		.byte	0x52
 7590 02f5 17000000 		.4byte	.LVL244-1
 7591 02f9 24000000 		.4byte	.LVL245
 7592 02fd 0400     		.2byte	0x4
 7593 02ff F3       		.byte	0xf3
 7594 0300 01       		.uleb128 0x1
 7595 0301 52       		.byte	0x52
 7596 0302 9F       		.byte	0x9f
 7597 0303 00000000 		.4byte	0
 7598 0307 00000000 		.4byte	0
 7599              	.LLST84:
 7600 030b 24000000 		.4byte	.LVL245
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 151


 7601 030f 2E000000 		.4byte	.LVL246
 7602 0313 0100     		.2byte	0x1
 7603 0315 50       		.byte	0x50
 7604 0316 2E000000 		.4byte	.LVL246
 7605 031a 37000000 		.4byte	.LVL247-1
 7606 031e 0100     		.2byte	0x1
 7607 0320 52       		.byte	0x52
 7608 0321 00000000 		.4byte	0
 7609 0325 00000000 		.4byte	0
 7610              	.LLST78:
 7611 0329 00000000 		.4byte	.LVL230
 7612 032d 06000000 		.4byte	.LVL231
 7613 0331 0100     		.2byte	0x1
 7614 0333 50       		.byte	0x50
 7615 0334 06000000 		.4byte	.LVL231
 7616 0338 42000000 		.4byte	.LVL239
 7617 033c 0100     		.2byte	0x1
 7618 033e 54       		.byte	0x54
 7619 033f 42000000 		.4byte	.LVL239
 7620 0343 44000000 		.4byte	.LFE38
 7621 0347 0400     		.2byte	0x4
 7622 0349 F3       		.byte	0xf3
 7623 034a 01       		.uleb128 0x1
 7624 034b 50       		.byte	0x50
 7625 034c 9F       		.byte	0x9f
 7626 034d 00000000 		.4byte	0
 7627 0351 00000000 		.4byte	0
 7628              	.LLST79:
 7629 0355 00000000 		.4byte	.LVL230
 7630 0359 08000000 		.4byte	.LVL232
 7631 035d 0100     		.2byte	0x1
 7632 035f 51       		.byte	0x51
 7633 0360 08000000 		.4byte	.LVL232
 7634 0364 42000000 		.4byte	.LVL240
 7635 0368 1300     		.2byte	0x13
 7636 036a 75       		.byte	0x75
 7637 036b 00       		.sleb128 0
 7638 036c 12       		.byte	0x12
 7639 036d 08       		.byte	0x8
 7640 036e FF       		.byte	0xff
 7641 036f 1A       		.byte	0x1a
 7642 0370 33       		.byte	0x33
 7643 0371 16       		.byte	0x16
 7644 0372 14       		.byte	0x14
 7645 0373 08       		.byte	0x8
 7646 0374 FF       		.byte	0xff
 7647 0375 1A       		.byte	0x1a
 7648 0376 2D       		.byte	0x2d
 7649 0377 28       		.byte	0x28
 7650 0378 0100     		.2byte	0x1
 7651 037a 16       		.byte	0x16
 7652 037b 13       		.byte	0x13
 7653 037c 9F       		.byte	0x9f
 7654 037d 00000000 		.4byte	0
 7655 0381 00000000 		.4byte	0
 7656              	.LLST80:
 7657 0385 18000000 		.4byte	.LVL234
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 152


 7658 0389 1E000000 		.4byte	.LVL235
 7659 038d 0100     		.2byte	0x1
 7660 038f 50       		.byte	0x50
 7661 0390 1E000000 		.4byte	.LVL235
 7662 0394 2E000000 		.4byte	.LVL236
 7663 0398 0600     		.2byte	0x6
 7664 039a 71       		.byte	0x71
 7665 039b 00       		.sleb128 0
 7666 039c 08       		.byte	0x8
 7667 039d 30       		.byte	0x30
 7668 039e 21       		.byte	0x21
 7669 039f 9F       		.byte	0x9f
 7670 03a0 2E000000 		.4byte	.LVL236
 7671 03a4 37000000 		.4byte	.LVL237-1
 7672 03a8 0100     		.2byte	0x1
 7673 03aa 52       		.byte	0x52
 7674 03ab 00000000 		.4byte	0
 7675 03af 00000000 		.4byte	0
 7676              	.LLST76:
 7677 03b3 00000000 		.4byte	.LVL225
 7678 03b7 09000000 		.4byte	.LVL226-1
 7679 03bb 0100     		.2byte	0x1
 7680 03bd 50       		.byte	0x50
 7681 03be 09000000 		.4byte	.LVL226-1
 7682 03c2 16000000 		.4byte	.LVL229
 7683 03c6 0100     		.2byte	0x1
 7684 03c8 54       		.byte	0x54
 7685 03c9 16000000 		.4byte	.LVL229
 7686 03cd 18000000 		.4byte	.LFE37
 7687 03d1 0400     		.2byte	0x4
 7688 03d3 F3       		.byte	0xf3
 7689 03d4 01       		.uleb128 0x1
 7690 03d5 50       		.byte	0x50
 7691 03d6 9F       		.byte	0x9f
 7692 03d7 00000000 		.4byte	0
 7693 03db 00000000 		.4byte	0
 7694              	.LLST77:
 7695 03df 0A000000 		.4byte	.LVL226
 7696 03e3 12000000 		.4byte	.LVL227
 7697 03e7 0600     		.2byte	0x6
 7698 03e9 70       		.byte	0x70
 7699 03ea 00       		.sleb128 0
 7700 03eb 09       		.byte	0x9
 7701 03ec FE       		.byte	0xfe
 7702 03ed 1A       		.byte	0x1a
 7703 03ee 9F       		.byte	0x9f
 7704 03ef 00000000 		.4byte	0
 7705 03f3 00000000 		.4byte	0
 7706              	.LLST74:
 7707 03f7 00000000 		.4byte	.LVL220
 7708 03fb 09000000 		.4byte	.LVL221-1
 7709 03ff 0100     		.2byte	0x1
 7710 0401 50       		.byte	0x50
 7711 0402 09000000 		.4byte	.LVL221-1
 7712 0406 18000000 		.4byte	.LVL224
 7713 040a 0100     		.2byte	0x1
 7714 040c 54       		.byte	0x54
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 153


 7715 040d 18000000 		.4byte	.LVL224
 7716 0411 1A000000 		.4byte	.LFE36
 7717 0415 0400     		.2byte	0x4
 7718 0417 F3       		.byte	0xf3
 7719 0418 01       		.uleb128 0x1
 7720 0419 50       		.byte	0x50
 7721 041a 9F       		.byte	0x9f
 7722 041b 00000000 		.4byte	0
 7723 041f 00000000 		.4byte	0
 7724              	.LLST75:
 7725 0423 0A000000 		.4byte	.LVL221
 7726 0427 14000000 		.4byte	.LVL222
 7727 042b 0500     		.2byte	0x5
 7728 042d 70       		.byte	0x70
 7729 042e 00       		.sleb128 0
 7730 042f 31       		.byte	0x31
 7731 0430 21       		.byte	0x21
 7732 0431 9F       		.byte	0x9f
 7733 0432 00000000 		.4byte	0
 7734 0436 00000000 		.4byte	0
 7735              	.LLST71:
 7736 043a 00000000 		.4byte	.LVL216
 7737 043e 11000000 		.4byte	.LVL219-1
 7738 0442 0100     		.2byte	0x1
 7739 0444 50       		.byte	0x50
 7740 0445 11000000 		.4byte	.LVL219-1
 7741 0449 14000000 		.4byte	.LFE35
 7742 044d 0400     		.2byte	0x4
 7743 044f F3       		.byte	0xf3
 7744 0450 01       		.uleb128 0x1
 7745 0451 50       		.byte	0x50
 7746 0452 9F       		.byte	0x9f
 7747 0453 00000000 		.4byte	0
 7748 0457 00000000 		.4byte	0
 7749              	.LLST72:
 7750 045b 00000000 		.4byte	.LVL216
 7751 045f 08000000 		.4byte	.LVL218
 7752 0463 0100     		.2byte	0x1
 7753 0465 51       		.byte	0x51
 7754 0466 08000000 		.4byte	.LVL218
 7755 046a 14000000 		.4byte	.LFE35
 7756 046e 0400     		.2byte	0x4
 7757 0470 F3       		.byte	0xf3
 7758 0471 01       		.uleb128 0x1
 7759 0472 51       		.byte	0x51
 7760 0473 9F       		.byte	0x9f
 7761 0474 00000000 		.4byte	0
 7762 0478 00000000 		.4byte	0
 7763              	.LLST73:
 7764 047c 00000000 		.4byte	.LVL216
 7765 0480 06000000 		.4byte	.LVL217
 7766 0484 0100     		.2byte	0x1
 7767 0486 52       		.byte	0x52
 7768 0487 06000000 		.4byte	.LVL217
 7769 048b 14000000 		.4byte	.LFE35
 7770 048f 0400     		.2byte	0x4
 7771 0491 F3       		.byte	0xf3
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 154


 7772 0492 01       		.uleb128 0x1
 7773 0493 52       		.byte	0x52
 7774 0494 9F       		.byte	0x9f
 7775 0495 00000000 		.4byte	0
 7776 0499 00000000 		.4byte	0
 7777              	.LLST69:
 7778 049d 00000000 		.4byte	.LVL211
 7779 04a1 09000000 		.4byte	.LVL212-1
 7780 04a5 0100     		.2byte	0x1
 7781 04a7 50       		.byte	0x50
 7782 04a8 09000000 		.4byte	.LVL212-1
 7783 04ac 14000000 		.4byte	.LVL215
 7784 04b0 0100     		.2byte	0x1
 7785 04b2 54       		.byte	0x54
 7786 04b3 14000000 		.4byte	.LVL215
 7787 04b7 16000000 		.4byte	.LFE34
 7788 04bb 0400     		.2byte	0x4
 7789 04bd F3       		.byte	0xf3
 7790 04be 01       		.uleb128 0x1
 7791 04bf 50       		.byte	0x50
 7792 04c0 9F       		.byte	0x9f
 7793 04c1 00000000 		.4byte	0
 7794 04c5 00000000 		.4byte	0
 7795              	.LLST70:
 7796 04c9 0E000000 		.4byte	.LVL213
 7797 04cd 13000000 		.4byte	.LVL214-1
 7798 04d1 0100     		.2byte	0x1
 7799 04d3 52       		.byte	0x52
 7800 04d4 00000000 		.4byte	0
 7801 04d8 00000000 		.4byte	0
 7802              	.LLST65:
 7803 04dc 00000000 		.4byte	.LVL204
 7804 04e0 0D000000 		.4byte	.LVL206-1
 7805 04e4 0100     		.2byte	0x1
 7806 04e6 50       		.byte	0x50
 7807 04e7 0D000000 		.4byte	.LVL206-1
 7808 04eb 34000000 		.4byte	.LVL209
 7809 04ef 0100     		.2byte	0x1
 7810 04f1 54       		.byte	0x54
 7811 04f2 34000000 		.4byte	.LVL209
 7812 04f6 36000000 		.4byte	.LFE33
 7813 04fa 0400     		.2byte	0x4
 7814 04fc F3       		.byte	0xf3
 7815 04fd 01       		.uleb128 0x1
 7816 04fe 50       		.byte	0x50
 7817 04ff 9F       		.byte	0x9f
 7818 0500 00000000 		.4byte	0
 7819 0504 00000000 		.4byte	0
 7820              	.LLST66:
 7821 0508 00000000 		.4byte	.LVL204
 7822 050c 06000000 		.4byte	.LVL205
 7823 0510 0100     		.2byte	0x1
 7824 0512 51       		.byte	0x51
 7825 0513 06000000 		.4byte	.LVL205
 7826 0517 0E000000 		.4byte	.LVL206
 7827 051b 0400     		.2byte	0x4
 7828 051d F3       		.byte	0xf3
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 155


 7829 051e 01       		.uleb128 0x1
 7830 051f 51       		.byte	0x51
 7831 0520 9F       		.byte	0x9f
 7832 0521 0E000000 		.4byte	.LVL206
 7833 0525 34000000 		.4byte	.LVL210
 7834 0529 1300     		.2byte	0x13
 7835 052b 76       		.byte	0x76
 7836 052c 00       		.sleb128 0
 7837 052d 12       		.byte	0x12
 7838 052e 08       		.byte	0x8
 7839 052f FF       		.byte	0xff
 7840 0530 1A       		.byte	0x1a
 7841 0531 35       		.byte	0x35
 7842 0532 16       		.byte	0x16
 7843 0533 14       		.byte	0x14
 7844 0534 08       		.byte	0x8
 7845 0535 FF       		.byte	0xff
 7846 0536 1A       		.byte	0x1a
 7847 0537 2D       		.byte	0x2d
 7848 0538 28       		.byte	0x28
 7849 0539 0100     		.2byte	0x1
 7850 053b 16       		.byte	0x16
 7851 053c 13       		.byte	0x13
 7852 053d 9F       		.byte	0x9f
 7853 053e 00000000 		.4byte	0
 7854 0542 00000000 		.4byte	0
 7855              	.LLST67:
 7856 0546 00000000 		.4byte	.LVL204
 7857 054a 0D000000 		.4byte	.LVL206-1
 7858 054e 0100     		.2byte	0x1
 7859 0550 52       		.byte	0x52
 7860 0551 0D000000 		.4byte	.LVL206-1
 7861 0555 36000000 		.4byte	.LFE33
 7862 0559 0400     		.2byte	0x4
 7863 055b F3       		.byte	0xf3
 7864 055c 01       		.uleb128 0x1
 7865 055d 52       		.byte	0x52
 7866 055e 9F       		.byte	0x9f
 7867 055f 00000000 		.4byte	0
 7868 0563 00000000 		.4byte	0
 7869              	.LLST68:
 7870 0567 0E000000 		.4byte	.LVL206
 7871 056b 2C000000 		.4byte	.LVL207
 7872 056f 0100     		.2byte	0x1
 7873 0571 50       		.byte	0x50
 7874 0572 2C000000 		.4byte	.LVL207
 7875 0576 33000000 		.4byte	.LVL208-1
 7876 057a 0100     		.2byte	0x1
 7877 057c 52       		.byte	0x52
 7878 057d 00000000 		.4byte	0
 7879 0581 00000000 		.4byte	0
 7880              	.LLST61:
 7881 0585 00000000 		.4byte	.LVL197
 7882 0589 0D000000 		.4byte	.LVL199-1
 7883 058d 0100     		.2byte	0x1
 7884 058f 50       		.byte	0x50
 7885 0590 0D000000 		.4byte	.LVL199-1
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 156


 7886 0594 34000000 		.4byte	.LVL202
 7887 0598 0100     		.2byte	0x1
 7888 059a 54       		.byte	0x54
 7889 059b 34000000 		.4byte	.LVL202
 7890 059f 36000000 		.4byte	.LFE32
 7891 05a3 0400     		.2byte	0x4
 7892 05a5 F3       		.byte	0xf3
 7893 05a6 01       		.uleb128 0x1
 7894 05a7 50       		.byte	0x50
 7895 05a8 9F       		.byte	0x9f
 7896 05a9 00000000 		.4byte	0
 7897 05ad 00000000 		.4byte	0
 7898              	.LLST62:
 7899 05b1 00000000 		.4byte	.LVL197
 7900 05b5 06000000 		.4byte	.LVL198
 7901 05b9 0100     		.2byte	0x1
 7902 05bb 51       		.byte	0x51
 7903 05bc 06000000 		.4byte	.LVL198
 7904 05c0 0E000000 		.4byte	.LVL199
 7905 05c4 0400     		.2byte	0x4
 7906 05c6 F3       		.byte	0xf3
 7907 05c7 01       		.uleb128 0x1
 7908 05c8 51       		.byte	0x51
 7909 05c9 9F       		.byte	0x9f
 7910 05ca 0E000000 		.4byte	.LVL199
 7911 05ce 34000000 		.4byte	.LVL203
 7912 05d2 1300     		.2byte	0x13
 7913 05d4 76       		.byte	0x76
 7914 05d5 00       		.sleb128 0
 7915 05d6 12       		.byte	0x12
 7916 05d7 08       		.byte	0x8
 7917 05d8 FF       		.byte	0xff
 7918 05d9 1A       		.byte	0x1a
 7919 05da 35       		.byte	0x35
 7920 05db 16       		.byte	0x16
 7921 05dc 14       		.byte	0x14
 7922 05dd 08       		.byte	0x8
 7923 05de FF       		.byte	0xff
 7924 05df 1A       		.byte	0x1a
 7925 05e0 2D       		.byte	0x2d
 7926 05e1 28       		.byte	0x28
 7927 05e2 0100     		.2byte	0x1
 7928 05e4 16       		.byte	0x16
 7929 05e5 13       		.byte	0x13
 7930 05e6 9F       		.byte	0x9f
 7931 05e7 00000000 		.4byte	0
 7932 05eb 00000000 		.4byte	0
 7933              	.LLST63:
 7934 05ef 00000000 		.4byte	.LVL197
 7935 05f3 0D000000 		.4byte	.LVL199-1
 7936 05f7 0100     		.2byte	0x1
 7937 05f9 52       		.byte	0x52
 7938 05fa 0D000000 		.4byte	.LVL199-1
 7939 05fe 36000000 		.4byte	.LFE32
 7940 0602 0400     		.2byte	0x4
 7941 0604 F3       		.byte	0xf3
 7942 0605 01       		.uleb128 0x1
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 157


 7943 0606 52       		.byte	0x52
 7944 0607 9F       		.byte	0x9f
 7945 0608 00000000 		.4byte	0
 7946 060c 00000000 		.4byte	0
 7947              	.LLST64:
 7948 0610 0E000000 		.4byte	.LVL199
 7949 0614 2C000000 		.4byte	.LVL200
 7950 0618 0100     		.2byte	0x1
 7951 061a 50       		.byte	0x50
 7952 061b 2C000000 		.4byte	.LVL200
 7953 061f 33000000 		.4byte	.LVL201-1
 7954 0623 0100     		.2byte	0x1
 7955 0625 52       		.byte	0x52
 7956 0626 00000000 		.4byte	0
 7957 062a 00000000 		.4byte	0
 7958              	.LLST60:
 7959 062e 00000000 		.4byte	.LVL195
 7960 0632 07000000 		.4byte	.LVL196-1
 7961 0636 0100     		.2byte	0x1
 7962 0638 50       		.byte	0x50
 7963 0639 07000000 		.4byte	.LVL196-1
 7964 063d 0E000000 		.4byte	.LFE31
 7965 0641 0400     		.2byte	0x4
 7966 0643 F3       		.byte	0xf3
 7967 0644 01       		.uleb128 0x1
 7968 0645 50       		.byte	0x50
 7969 0646 9F       		.byte	0x9f
 7970 0647 00000000 		.4byte	0
 7971 064b 00000000 		.4byte	0
 7972              	.LLST59:
 7973 064f 00000000 		.4byte	.LVL193
 7974 0653 07000000 		.4byte	.LVL194-1
 7975 0657 0100     		.2byte	0x1
 7976 0659 50       		.byte	0x50
 7977 065a 07000000 		.4byte	.LVL194-1
 7978 065e 0E000000 		.4byte	.LFE30
 7979 0662 0400     		.2byte	0x4
 7980 0664 F3       		.byte	0xf3
 7981 0665 01       		.uleb128 0x1
 7982 0666 50       		.byte	0x50
 7983 0667 9F       		.byte	0x9f
 7984 0668 00000000 		.4byte	0
 7985 066c 00000000 		.4byte	0
 7986              	.LLST57:
 7987 0670 00000000 		.4byte	.LVL190
 7988 0674 0B000000 		.4byte	.LVL192-1
 7989 0678 0100     		.2byte	0x1
 7990 067a 50       		.byte	0x50
 7991 067b 0B000000 		.4byte	.LVL192-1
 7992 067f 0E000000 		.4byte	.LFE29
 7993 0683 0400     		.2byte	0x4
 7994 0685 F3       		.byte	0xf3
 7995 0686 01       		.uleb128 0x1
 7996 0687 50       		.byte	0x50
 7997 0688 9F       		.byte	0x9f
 7998 0689 00000000 		.4byte	0
 7999 068d 00000000 		.4byte	0
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 158


 8000              	.LLST58:
 8001 0691 00000000 		.4byte	.LVL190
 8002 0695 08000000 		.4byte	.LVL191
 8003 0699 0100     		.2byte	0x1
 8004 069b 51       		.byte	0x51
 8005 069c 08000000 		.4byte	.LVL191
 8006 06a0 0B000000 		.4byte	.LVL192-1
 8007 06a4 0100     		.2byte	0x1
 8008 06a6 52       		.byte	0x52
 8009 06a7 0B000000 		.4byte	.LVL192-1
 8010 06ab 0E000000 		.4byte	.LFE29
 8011 06af 0400     		.2byte	0x4
 8012 06b1 F3       		.byte	0xf3
 8013 06b2 01       		.uleb128 0x1
 8014 06b3 51       		.byte	0x51
 8015 06b4 9F       		.byte	0x9f
 8016 06b5 00000000 		.4byte	0
 8017 06b9 00000000 		.4byte	0
 8018              	.LLST54:
 8019 06bd 00000000 		.4byte	.LVL187
 8020 06c1 09000000 		.4byte	.LVL189-1
 8021 06c5 0100     		.2byte	0x1
 8022 06c7 50       		.byte	0x50
 8023 06c8 09000000 		.4byte	.LVL189-1
 8024 06cc 0C000000 		.4byte	.LFE28
 8025 06d0 0400     		.2byte	0x4
 8026 06d2 F3       		.byte	0xf3
 8027 06d3 01       		.uleb128 0x1
 8028 06d4 50       		.byte	0x50
 8029 06d5 9F       		.byte	0x9f
 8030 06d6 00000000 		.4byte	0
 8031 06da 00000000 		.4byte	0
 8032              	.LLST55:
 8033 06de 00000000 		.4byte	.LVL187
 8034 06e2 04000000 		.4byte	.LVL188
 8035 06e6 0100     		.2byte	0x1
 8036 06e8 51       		.byte	0x51
 8037 06e9 04000000 		.4byte	.LVL188
 8038 06ed 0C000000 		.4byte	.LFE28
 8039 06f1 0400     		.2byte	0x4
 8040 06f3 F3       		.byte	0xf3
 8041 06f4 01       		.uleb128 0x1
 8042 06f5 51       		.byte	0x51
 8043 06f6 9F       		.byte	0x9f
 8044 06f7 00000000 		.4byte	0
 8045 06fb 00000000 		.4byte	0
 8046              	.LLST56:
 8047 06ff 00000000 		.4byte	.LVL187
 8048 0703 09000000 		.4byte	.LVL189-1
 8049 0707 0100     		.2byte	0x1
 8050 0709 52       		.byte	0x52
 8051 070a 09000000 		.4byte	.LVL189-1
 8052 070e 0C000000 		.4byte	.LFE28
 8053 0712 0400     		.2byte	0x4
 8054 0714 F3       		.byte	0xf3
 8055 0715 01       		.uleb128 0x1
 8056 0716 52       		.byte	0x52
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 159


 8057 0717 9F       		.byte	0x9f
 8058 0718 00000000 		.4byte	0
 8059 071c 00000000 		.4byte	0
 8060              	.LLST52:
 8061 0720 00000000 		.4byte	.LVL184
 8062 0724 0B000000 		.4byte	.LVL186-1
 8063 0728 0100     		.2byte	0x1
 8064 072a 50       		.byte	0x50
 8065 072b 0B000000 		.4byte	.LVL186-1
 8066 072f 0E000000 		.4byte	.LFE27
 8067 0733 0400     		.2byte	0x4
 8068 0735 F3       		.byte	0xf3
 8069 0736 01       		.uleb128 0x1
 8070 0737 50       		.byte	0x50
 8071 0738 9F       		.byte	0x9f
 8072 0739 00000000 		.4byte	0
 8073 073d 00000000 		.4byte	0
 8074              	.LLST53:
 8075 0741 00000000 		.4byte	.LVL184
 8076 0745 08000000 		.4byte	.LVL185
 8077 0749 0100     		.2byte	0x1
 8078 074b 51       		.byte	0x51
 8079 074c 08000000 		.4byte	.LVL185
 8080 0750 0B000000 		.4byte	.LVL186-1
 8081 0754 0100     		.2byte	0x1
 8082 0756 52       		.byte	0x52
 8083 0757 0B000000 		.4byte	.LVL186-1
 8084 075b 0E000000 		.4byte	.LFE27
 8085 075f 0400     		.2byte	0x4
 8086 0761 F3       		.byte	0xf3
 8087 0762 01       		.uleb128 0x1
 8088 0763 51       		.byte	0x51
 8089 0764 9F       		.byte	0x9f
 8090 0765 00000000 		.4byte	0
 8091 0769 00000000 		.4byte	0
 8092              	.LLST50:
 8093 076d 00000000 		.4byte	.LVL181
 8094 0771 0B000000 		.4byte	.LVL183-1
 8095 0775 0100     		.2byte	0x1
 8096 0777 50       		.byte	0x50
 8097 0778 0B000000 		.4byte	.LVL183-1
 8098 077c 0E000000 		.4byte	.LFE26
 8099 0780 0400     		.2byte	0x4
 8100 0782 F3       		.byte	0xf3
 8101 0783 01       		.uleb128 0x1
 8102 0784 50       		.byte	0x50
 8103 0785 9F       		.byte	0x9f
 8104 0786 00000000 		.4byte	0
 8105 078a 00000000 		.4byte	0
 8106              	.LLST51:
 8107 078e 00000000 		.4byte	.LVL181
 8108 0792 08000000 		.4byte	.LVL182
 8109 0796 0100     		.2byte	0x1
 8110 0798 51       		.byte	0x51
 8111 0799 08000000 		.4byte	.LVL182
 8112 079d 0B000000 		.4byte	.LVL183-1
 8113 07a1 0100     		.2byte	0x1
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 160


 8114 07a3 52       		.byte	0x52
 8115 07a4 0B000000 		.4byte	.LVL183-1
 8116 07a8 0E000000 		.4byte	.LFE26
 8117 07ac 0400     		.2byte	0x4
 8118 07ae F3       		.byte	0xf3
 8119 07af 01       		.uleb128 0x1
 8120 07b0 51       		.byte	0x51
 8121 07b1 9F       		.byte	0x9f
 8122 07b2 00000000 		.4byte	0
 8123 07b6 00000000 		.4byte	0
 8124              	.LLST48:
 8125 07ba 00000000 		.4byte	.LVL178
 8126 07be 07000000 		.4byte	.LVL179-1
 8127 07c2 0100     		.2byte	0x1
 8128 07c4 50       		.byte	0x50
 8129 07c5 07000000 		.4byte	.LVL179-1
 8130 07c9 0E000000 		.4byte	.LFE25
 8131 07cd 0400     		.2byte	0x4
 8132 07cf F3       		.byte	0xf3
 8133 07d0 01       		.uleb128 0x1
 8134 07d1 50       		.byte	0x50
 8135 07d2 9F       		.byte	0x9f
 8136 07d3 00000000 		.4byte	0
 8137 07d7 00000000 		.4byte	0
 8138              	.LLST49:
 8139 07db 08000000 		.4byte	.LVL179
 8140 07df 0C000000 		.4byte	.LVL180
 8141 07e3 0100     		.2byte	0x1
 8142 07e5 50       		.byte	0x50
 8143 07e6 00000000 		.4byte	0
 8144 07ea 00000000 		.4byte	0
 8145              	.LLST46:
 8146 07ee 00000000 		.4byte	.LVL175
 8147 07f2 07000000 		.4byte	.LVL176-1
 8148 07f6 0100     		.2byte	0x1
 8149 07f8 50       		.byte	0x50
 8150 07f9 07000000 		.4byte	.LVL176-1
 8151 07fd 0E000000 		.4byte	.LFE24
 8152 0801 0400     		.2byte	0x4
 8153 0803 F3       		.byte	0xf3
 8154 0804 01       		.uleb128 0x1
 8155 0805 50       		.byte	0x50
 8156 0806 9F       		.byte	0x9f
 8157 0807 00000000 		.4byte	0
 8158 080b 00000000 		.4byte	0
 8159              	.LLST47:
 8160 080f 08000000 		.4byte	.LVL176
 8161 0813 0A000000 		.4byte	.LVL177
 8162 0817 0100     		.2byte	0x1
 8163 0819 50       		.byte	0x50
 8164 081a 00000000 		.4byte	0
 8165 081e 00000000 		.4byte	0
 8166              	.LLST44:
 8167 0822 00000000 		.4byte	.LVL171
 8168 0826 1B000000 		.4byte	.LVL174-1
 8169 082a 0100     		.2byte	0x1
 8170 082c 50       		.byte	0x50
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 161


 8171 082d 1B000000 		.4byte	.LVL174-1
 8172 0831 1E000000 		.4byte	.LFE23
 8173 0835 0400     		.2byte	0x4
 8174 0837 F3       		.byte	0xf3
 8175 0838 01       		.uleb128 0x1
 8176 0839 50       		.byte	0x50
 8177 083a 9F       		.byte	0x9f
 8178 083b 00000000 		.4byte	0
 8179 083f 00000000 		.4byte	0
 8180              	.LLST45:
 8181 0843 00000000 		.4byte	.LVL171
 8182 0847 0A000000 		.4byte	.LVL172
 8183 084b 0100     		.2byte	0x1
 8184 084d 51       		.byte	0x51
 8185 084e 0A000000 		.4byte	.LVL172
 8186 0852 12000000 		.4byte	.LVL173
 8187 0856 1300     		.2byte	0x13
 8188 0858 72       		.byte	0x72
 8189 0859 00       		.sleb128 0
 8190 085a 12       		.byte	0x12
 8191 085b 08       		.byte	0x8
 8192 085c FF       		.byte	0xff
 8193 085d 1A       		.byte	0x1a
 8194 085e 35       		.byte	0x35
 8195 085f 16       		.byte	0x16
 8196 0860 14       		.byte	0x14
 8197 0861 08       		.byte	0x8
 8198 0862 FF       		.byte	0xff
 8199 0863 1A       		.byte	0x1a
 8200 0864 2D       		.byte	0x2d
 8201 0865 28       		.byte	0x28
 8202 0866 0100     		.2byte	0x1
 8203 0868 16       		.byte	0x16
 8204 0869 13       		.byte	0x13
 8205 086a 9F       		.byte	0x9f
 8206 086b 12000000 		.4byte	.LVL173
 8207 086f 1B000000 		.4byte	.LVL174-1
 8208 0873 1300     		.2byte	0x13
 8209 0875 73       		.byte	0x73
 8210 0876 00       		.sleb128 0
 8211 0877 12       		.byte	0x12
 8212 0878 08       		.byte	0x8
 8213 0879 FF       		.byte	0xff
 8214 087a 1A       		.byte	0x1a
 8215 087b 35       		.byte	0x35
 8216 087c 16       		.byte	0x16
 8217 087d 14       		.byte	0x14
 8218 087e 08       		.byte	0x8
 8219 087f FF       		.byte	0xff
 8220 0880 1A       		.byte	0x1a
 8221 0881 2D       		.byte	0x2d
 8222 0882 28       		.byte	0x28
 8223 0883 0100     		.2byte	0x1
 8224 0885 16       		.byte	0x16
 8225 0886 13       		.byte	0x13
 8226 0887 9F       		.byte	0x9f
 8227 0888 00000000 		.4byte	0
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 162


 8228 088c 00000000 		.4byte	0
 8229              	.LLST41:
 8230 0890 00000000 		.4byte	.LVL157
 8231 0894 0B000000 		.4byte	.LVL159-1
 8232 0898 0100     		.2byte	0x1
 8233 089a 50       		.byte	0x50
 8234 089b 0B000000 		.4byte	.LVL159-1
 8235 089f 28000000 		.4byte	.LVL165
 8236 08a3 0100     		.2byte	0x1
 8237 08a5 55       		.byte	0x55
 8238 08a6 28000000 		.4byte	.LVL165
 8239 08aa 2A000000 		.4byte	.LVL167
 8240 08ae 0400     		.2byte	0x4
 8241 08b0 F3       		.byte	0xf3
 8242 08b1 01       		.uleb128 0x1
 8243 08b2 50       		.byte	0x50
 8244 08b3 9F       		.byte	0x9f
 8245 08b4 2A000000 		.4byte	.LVL167
 8246 08b8 40000000 		.4byte	.LFE22
 8247 08bc 0100     		.2byte	0x1
 8248 08be 55       		.byte	0x55
 8249 08bf 00000000 		.4byte	0
 8250 08c3 00000000 		.4byte	0
 8251              	.LLST42:
 8252 08c7 00000000 		.4byte	.LVL157
 8253 08cb 04000000 		.4byte	.LVL158
 8254 08cf 0100     		.2byte	0x1
 8255 08d1 51       		.byte	0x51
 8256 08d2 04000000 		.4byte	.LVL158
 8257 08d6 28000000 		.4byte	.LVL166
 8258 08da 1300     		.2byte	0x13
 8259 08dc 76       		.byte	0x76
 8260 08dd 00       		.sleb128 0
 8261 08de 12       		.byte	0x12
 8262 08df 08       		.byte	0x8
 8263 08e0 FF       		.byte	0xff
 8264 08e1 1A       		.byte	0x1a
 8265 08e2 32       		.byte	0x32
 8266 08e3 16       		.byte	0x16
 8267 08e4 14       		.byte	0x14
 8268 08e5 08       		.byte	0x8
 8269 08e6 FF       		.byte	0xff
 8270 08e7 1A       		.byte	0x1a
 8271 08e8 2D       		.byte	0x2d
 8272 08e9 28       		.byte	0x28
 8273 08ea 0100     		.2byte	0x1
 8274 08ec 16       		.byte	0x16
 8275 08ed 13       		.byte	0x13
 8276 08ee 9F       		.byte	0x9f
 8277 08ef 2A000000 		.4byte	.LVL167
 8278 08f3 40000000 		.4byte	.LFE22
 8279 08f7 1300     		.2byte	0x13
 8280 08f9 76       		.byte	0x76
 8281 08fa 00       		.sleb128 0
 8282 08fb 12       		.byte	0x12
 8283 08fc 08       		.byte	0x8
 8284 08fd FF       		.byte	0xff
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 163


 8285 08fe 1A       		.byte	0x1a
 8286 08ff 32       		.byte	0x32
 8287 0900 16       		.byte	0x16
 8288 0901 14       		.byte	0x14
 8289 0902 08       		.byte	0x8
 8290 0903 FF       		.byte	0xff
 8291 0904 1A       		.byte	0x1a
 8292 0905 2D       		.byte	0x2d
 8293 0906 28       		.byte	0x28
 8294 0907 0100     		.2byte	0x1
 8295 0909 16       		.byte	0x16
 8296 090a 13       		.byte	0x13
 8297 090b 9F       		.byte	0x9f
 8298 090c 00000000 		.4byte	0
 8299 0910 00000000 		.4byte	0
 8300              	.LLST43:
 8301 0914 0E000000 		.4byte	.LVL160
 8302 0918 12000000 		.4byte	.LVL161
 8303 091c 0100     		.2byte	0x1
 8304 091e 54       		.byte	0x54
 8305 091f 12000000 		.4byte	.LVL161
 8306 0923 20000000 		.4byte	.LVL163
 8307 0927 0600     		.2byte	0x6
 8308 0929 74       		.byte	0x74
 8309 092a 00       		.sleb128 0
 8310 092b 09       		.byte	0x9
 8311 092c F3       		.byte	0xf3
 8312 092d 1A       		.byte	0x1a
 8313 092e 9F       		.byte	0x9f
 8314 092f 20000000 		.4byte	.LVL163
 8315 0933 27000000 		.4byte	.LVL164-1
 8316 0937 0100     		.2byte	0x1
 8317 0939 52       		.byte	0x52
 8318 093a 2A000000 		.4byte	.LVL167
 8319 093e 38000000 		.4byte	.LVL169
 8320 0942 0100     		.2byte	0x1
 8321 0944 54       		.byte	0x54
 8322 0945 38000000 		.4byte	.LVL169
 8323 0949 3E000000 		.4byte	.LVL170
 8324 094d 0100     		.2byte	0x1
 8325 094f 52       		.byte	0x52
 8326 0950 3E000000 		.4byte	.LVL170
 8327 0954 40000000 		.4byte	.LFE22
 8328 0958 0300     		.2byte	0x3
 8329 095a 72       		.byte	0x72
 8330 095b 7C       		.sleb128 -4
 8331 095c 9F       		.byte	0x9f
 8332 095d 00000000 		.4byte	0
 8333 0961 00000000 		.4byte	0
 8334              	.LLST38:
 8335 0965 00000000 		.4byte	.LVL146
 8336 0969 06000000 		.4byte	.LVL147
 8337 096d 0100     		.2byte	0x1
 8338 096f 50       		.byte	0x50
 8339 0970 06000000 		.4byte	.LVL147
 8340 0974 36000000 		.4byte	.LVL156
 8341 0978 0100     		.2byte	0x1
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 164


 8342 097a 54       		.byte	0x54
 8343 097b 36000000 		.4byte	.LVL156
 8344 097f 38000000 		.4byte	.LFE21
 8345 0983 0400     		.2byte	0x4
 8346 0985 F3       		.byte	0xf3
 8347 0986 01       		.uleb128 0x1
 8348 0987 50       		.byte	0x50
 8349 0988 9F       		.byte	0x9f
 8350 0989 00000000 		.4byte	0
 8351 098d 00000000 		.4byte	0
 8352              	.LLST39:
 8353 0991 00000000 		.4byte	.LVL146
 8354 0995 0C000000 		.4byte	.LVL148
 8355 0999 0100     		.2byte	0x1
 8356 099b 51       		.byte	0x51
 8357 099c 0C000000 		.4byte	.LVL148
 8358 09a0 38000000 		.4byte	.LFE21
 8359 09a4 0400     		.2byte	0x4
 8360 09a6 F3       		.byte	0xf3
 8361 09a7 01       		.uleb128 0x1
 8362 09a8 51       		.byte	0x51
 8363 09a9 9F       		.byte	0x9f
 8364 09aa 00000000 		.4byte	0
 8365 09ae 00000000 		.4byte	0
 8366              	.LLST40:
 8367 09b2 18000000 		.4byte	.LVL150
 8368 09b6 1C000000 		.4byte	.LVL151
 8369 09ba 0100     		.2byte	0x1
 8370 09bc 50       		.byte	0x50
 8371 09bd 1E000000 		.4byte	.LVL152
 8372 09c1 2B000000 		.4byte	.LVL154-1
 8373 09c5 0100     		.2byte	0x1
 8374 09c7 52       		.byte	0x52
 8375 09c8 00000000 		.4byte	0
 8376 09cc 00000000 		.4byte	0
 8377              	.LLST36:
 8378 09d0 00000000 		.4byte	.LVL143
 8379 09d4 0B000000 		.4byte	.LVL145-1
 8380 09d8 0100     		.2byte	0x1
 8381 09da 50       		.byte	0x50
 8382 09db 0B000000 		.4byte	.LVL145-1
 8383 09df 0E000000 		.4byte	.LFE20
 8384 09e3 0400     		.2byte	0x4
 8385 09e5 F3       		.byte	0xf3
 8386 09e6 01       		.uleb128 0x1
 8387 09e7 50       		.byte	0x50
 8388 09e8 9F       		.byte	0x9f
 8389 09e9 00000000 		.4byte	0
 8390 09ed 00000000 		.4byte	0
 8391              	.LLST37:
 8392 09f1 00000000 		.4byte	.LVL143
 8393 09f5 08000000 		.4byte	.LVL144
 8394 09f9 0100     		.2byte	0x1
 8395 09fb 51       		.byte	0x51
 8396 09fc 08000000 		.4byte	.LVL144
 8397 0a00 0E000000 		.4byte	.LFE20
 8398 0a04 0400     		.2byte	0x4
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 165


 8399 0a06 F3       		.byte	0xf3
 8400 0a07 01       		.uleb128 0x1
 8401 0a08 51       		.byte	0x51
 8402 0a09 9F       		.byte	0x9f
 8403 0a0a 00000000 		.4byte	0
 8404 0a0e 00000000 		.4byte	0
 8405              	.LLST34:
 8406 0a12 00000000 		.4byte	.LVL136
 8407 0a16 06000000 		.4byte	.LVL137
 8408 0a1a 0100     		.2byte	0x1
 8409 0a1c 50       		.byte	0x50
 8410 0a1d 06000000 		.4byte	.LVL137
 8411 0a21 22000000 		.4byte	.LVL142
 8412 0a25 0100     		.2byte	0x1
 8413 0a27 54       		.byte	0x54
 8414 0a28 22000000 		.4byte	.LVL142
 8415 0a2c 24000000 		.4byte	.LFE19
 8416 0a30 0400     		.2byte	0x4
 8417 0a32 F3       		.byte	0xf3
 8418 0a33 01       		.uleb128 0x1
 8419 0a34 50       		.byte	0x50
 8420 0a35 9F       		.byte	0x9f
 8421 0a36 00000000 		.4byte	0
 8422 0a3a 00000000 		.4byte	0
 8423              	.LLST35:
 8424 0a3e 16000000 		.4byte	.LVL139
 8425 0a42 1E000000 		.4byte	.LVL140
 8426 0a46 0600     		.2byte	0x6
 8427 0a48 70       		.byte	0x70
 8428 0a49 00       		.sleb128 0
 8429 0a4a 09       		.byte	0x9
 8430 0a4b FD       		.byte	0xfd
 8431 0a4c 1A       		.byte	0x1a
 8432 0a4d 9F       		.byte	0x9f
 8433 0a4e 00000000 		.4byte	0
 8434 0a52 00000000 		.4byte	0
 8435              	.LLST32:
 8436 0a56 00000000 		.4byte	.LVL129
 8437 0a5a 06000000 		.4byte	.LVL130
 8438 0a5e 0100     		.2byte	0x1
 8439 0a60 50       		.byte	0x50
 8440 0a61 06000000 		.4byte	.LVL130
 8441 0a65 24000000 		.4byte	.LVL135
 8442 0a69 0100     		.2byte	0x1
 8443 0a6b 54       		.byte	0x54
 8444 0a6c 24000000 		.4byte	.LVL135
 8445 0a70 26000000 		.4byte	.LFE18
 8446 0a74 0400     		.2byte	0x4
 8447 0a76 F3       		.byte	0xf3
 8448 0a77 01       		.uleb128 0x1
 8449 0a78 50       		.byte	0x50
 8450 0a79 9F       		.byte	0x9f
 8451 0a7a 00000000 		.4byte	0
 8452 0a7e 00000000 		.4byte	0
 8453              	.LLST33:
 8454 0a82 16000000 		.4byte	.LVL132
 8455 0a86 20000000 		.4byte	.LVL133
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 166


 8456 0a8a 0500     		.2byte	0x5
 8457 0a8c 70       		.byte	0x70
 8458 0a8d 00       		.sleb128 0
 8459 0a8e 32       		.byte	0x32
 8460 0a8f 21       		.byte	0x21
 8461 0a90 9F       		.byte	0x9f
 8462 0a91 00000000 		.4byte	0
 8463 0a95 00000000 		.4byte	0
 8464              	.LLST30:
 8465 0a99 00000000 		.4byte	.LVL116
 8466 0a9d 0B000000 		.4byte	.LVL117-1
 8467 0aa1 0100     		.2byte	0x1
 8468 0aa3 50       		.byte	0x50
 8469 0aa4 0B000000 		.4byte	.LVL117-1
 8470 0aa8 4C000000 		.4byte	.LVL128
 8471 0aac 0100     		.2byte	0x1
 8472 0aae 54       		.byte	0x54
 8473 0aaf 4C000000 		.4byte	.LVL128
 8474 0ab3 4E000000 		.4byte	.LFE17
 8475 0ab7 0400     		.2byte	0x4
 8476 0ab9 F3       		.byte	0xf3
 8477 0aba 01       		.uleb128 0x1
 8478 0abb 50       		.byte	0x50
 8479 0abc 9F       		.byte	0x9f
 8480 0abd 00000000 		.4byte	0
 8481 0ac1 00000000 		.4byte	0
 8482              	.LLST31:
 8483 0ac5 18000000 		.4byte	.LVL119
 8484 0ac9 1D000000 		.4byte	.LVL120-1
 8485 0acd 0100     		.2byte	0x1
 8486 0acf 52       		.byte	0x52
 8487 0ad0 32000000 		.4byte	.LVL122
 8488 0ad4 34000000 		.4byte	.LVL123
 8489 0ad8 0100     		.2byte	0x1
 8490 0ada 50       		.byte	0x50
 8491 0adb 36000000 		.4byte	.LVL124
 8492 0adf 3C000000 		.4byte	.LVL125
 8493 0ae3 0500     		.2byte	0x5
 8494 0ae5 72       		.byte	0x72
 8495 0ae6 00       		.sleb128 0
 8496 0ae7 32       		.byte	0x32
 8497 0ae8 21       		.byte	0x21
 8498 0ae9 9F       		.byte	0x9f
 8499 0aea 00000000 		.4byte	0
 8500 0aee 00000000 		.4byte	0
 8501              	.LLST28:
 8502 0af2 00000000 		.4byte	.LVL105
 8503 0af6 0B000000 		.4byte	.LVL106-1
 8504 0afa 0100     		.2byte	0x1
 8505 0afc 50       		.byte	0x50
 8506 0afd 0B000000 		.4byte	.LVL106-1
 8507 0b01 48000000 		.4byte	.LVL115
 8508 0b05 0100     		.2byte	0x1
 8509 0b07 54       		.byte	0x54
 8510 0b08 48000000 		.4byte	.LVL115
 8511 0b0c 4A000000 		.4byte	.LFE16
 8512 0b10 0400     		.2byte	0x4
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 167


 8513 0b12 F3       		.byte	0xf3
 8514 0b13 01       		.uleb128 0x1
 8515 0b14 50       		.byte	0x50
 8516 0b15 9F       		.byte	0x9f
 8517 0b16 00000000 		.4byte	0
 8518 0b1a 00000000 		.4byte	0
 8519              	.LLST29:
 8520 0b1e 18000000 		.4byte	.LVL108
 8521 0b22 1D000000 		.4byte	.LVL109-1
 8522 0b26 0100     		.2byte	0x1
 8523 0b28 52       		.byte	0x52
 8524 0b29 30000000 		.4byte	.LVL111
 8525 0b2d 38000000 		.4byte	.LVL112
 8526 0b31 0500     		.2byte	0x5
 8527 0b33 70       		.byte	0x70
 8528 0b34 00       		.sleb128 0
 8529 0b35 33       		.byte	0x33
 8530 0b36 21       		.byte	0x21
 8531 0b37 9F       		.byte	0x9f
 8532 0b38 00000000 		.4byte	0
 8533 0b3c 00000000 		.4byte	0
 8534              	.LLST25:
 8535 0b40 00000000 		.4byte	.LVL95
 8536 0b44 09000000 		.4byte	.LVL96-1
 8537 0b48 0100     		.2byte	0x1
 8538 0b4a 50       		.byte	0x50
 8539 0b4b 09000000 		.4byte	.LVL96-1
 8540 0b4f 36000000 		.4byte	.LVL103
 8541 0b53 0100     		.2byte	0x1
 8542 0b55 55       		.byte	0x55
 8543 0b56 36000000 		.4byte	.LVL103
 8544 0b5a 38000000 		.4byte	.LFE15
 8545 0b5e 0400     		.2byte	0x4
 8546 0b60 F3       		.byte	0xf3
 8547 0b61 01       		.uleb128 0x1
 8548 0b62 50       		.byte	0x50
 8549 0b63 9F       		.byte	0x9f
 8550 0b64 00000000 		.4byte	0
 8551 0b68 00000000 		.4byte	0
 8552              	.LLST26:
 8553 0b6c 0E000000 		.4byte	.LVL97
 8554 0b70 26000000 		.4byte	.LVL101
 8555 0b74 0100     		.2byte	0x1
 8556 0b76 54       		.byte	0x54
 8557 0b77 00000000 		.4byte	0
 8558 0b7b 00000000 		.4byte	0
 8559              	.LLST27:
 8560 0b7f 20000000 		.4byte	.LVL100
 8561 0b83 36000000 		.4byte	.LVL104
 8562 0b87 0100     		.2byte	0x1
 8563 0b89 56       		.byte	0x56
 8564 0b8a 00000000 		.4byte	0
 8565 0b8e 00000000 		.4byte	0
 8566              	.LLST22:
 8567 0b92 00000000 		.4byte	.LVL75
 8568 0b96 0D000000 		.4byte	.LVL76-1
 8569 0b9a 0100     		.2byte	0x1
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 168


 8570 0b9c 50       		.byte	0x50
 8571 0b9d 0D000000 		.4byte	.LVL76-1
 8572 0ba1 94000000 		.4byte	.LVL94
 8573 0ba5 0100     		.2byte	0x1
 8574 0ba7 56       		.byte	0x56
 8575 0ba8 94000000 		.4byte	.LVL94
 8576 0bac A4000000 		.4byte	.LFE14
 8577 0bb0 0400     		.2byte	0x4
 8578 0bb2 F3       		.byte	0xf3
 8579 0bb3 01       		.uleb128 0x1
 8580 0bb4 50       		.byte	0x50
 8581 0bb5 9F       		.byte	0x9f
 8582 0bb6 00000000 		.4byte	0
 8583 0bba 00000000 		.4byte	0
 8584              	.LLST23:
 8585 0bbe 0E000000 		.4byte	.LVL76
 8586 0bc2 2E000000 		.4byte	.LVL81
 8587 0bc6 0100     		.2byte	0x1
 8588 0bc8 55       		.byte	0x55
 8589 0bc9 2E000000 		.4byte	.LVL81
 8590 0bcd 31000000 		.4byte	.LVL82-1
 8591 0bd1 0100     		.2byte	0x1
 8592 0bd3 51       		.byte	0x51
 8593 0bd4 36000000 		.4byte	.LVL83
 8594 0bd8 52000000 		.4byte	.LVL88
 8595 0bdc 0100     		.2byte	0x1
 8596 0bde 55       		.byte	0x55
 8597 0bdf 52000000 		.4byte	.LVL88
 8598 0be3 55000000 		.4byte	.LVL89-1
 8599 0be7 0100     		.2byte	0x1
 8600 0be9 51       		.byte	0x51
 8601 0bea 00000000 		.4byte	0
 8602 0bee 00000000 		.4byte	0
 8603              	.LLST24:
 8604 0bf2 0E000000 		.4byte	.LVL76
 8605 0bf6 1A000000 		.4byte	.LVL77
 8606 0bfa 0200     		.2byte	0x2
 8607 0bfc 30       		.byte	0x30
 8608 0bfd 9F       		.byte	0x9f
 8609 0bfe 1A000000 		.4byte	.LVL77
 8610 0c02 1C000000 		.4byte	.LVL78
 8611 0c06 0200     		.2byte	0x2
 8612 0c08 31       		.byte	0x31
 8613 0c09 9F       		.byte	0x9f
 8614 0c0a 1C000000 		.4byte	.LVL78
 8615 0c0e 22000000 		.4byte	.LVL79
 8616 0c12 0200     		.2byte	0x2
 8617 0c14 32       		.byte	0x32
 8618 0c15 9F       		.byte	0x9f
 8619 0c16 22000000 		.4byte	.LVL79
 8620 0c1a 24000000 		.4byte	.LVL80
 8621 0c1e 0200     		.2byte	0x2
 8622 0c20 33       		.byte	0x33
 8623 0c21 9F       		.byte	0x9f
 8624 0c22 24000000 		.4byte	.LVL80
 8625 0c26 36000000 		.4byte	.LVL83
 8626 0c2a 0200     		.2byte	0x2
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 169


 8627 0c2c 34       		.byte	0x34
 8628 0c2d 9F       		.byte	0x9f
 8629 0c2e 36000000 		.4byte	.LVL83
 8630 0c32 40000000 		.4byte	.LVL84
 8631 0c36 0200     		.2byte	0x2
 8632 0c38 30       		.byte	0x30
 8633 0c39 9F       		.byte	0x9f
 8634 0c3a 40000000 		.4byte	.LVL84
 8635 0c3e 44000000 		.4byte	.LVL85
 8636 0c42 0200     		.2byte	0x2
 8637 0c44 31       		.byte	0x31
 8638 0c45 9F       		.byte	0x9f
 8639 0c46 44000000 		.4byte	.LVL85
 8640 0c4a 48000000 		.4byte	.LVL86
 8641 0c4e 0200     		.2byte	0x2
 8642 0c50 32       		.byte	0x32
 8643 0c51 9F       		.byte	0x9f
 8644 0c52 48000000 		.4byte	.LVL86
 8645 0c56 4A000000 		.4byte	.LVL87
 8646 0c5a 0200     		.2byte	0x2
 8647 0c5c 33       		.byte	0x33
 8648 0c5d 9F       		.byte	0x9f
 8649 0c5e 4A000000 		.4byte	.LVL87
 8650 0c62 A4000000 		.4byte	.LFE14
 8651 0c66 0200     		.2byte	0x2
 8652 0c68 34       		.byte	0x34
 8653 0c69 9F       		.byte	0x9f
 8654 0c6a 00000000 		.4byte	0
 8655 0c6e 00000000 		.4byte	0
 8656              	.LLST14:
 8657 0c72 00000000 		.4byte	.LVL52
 8658 0c76 14000000 		.4byte	.LVL55
 8659 0c7a 0100     		.2byte	0x1
 8660 0c7c 50       		.byte	0x50
 8661 0c7d 14000000 		.4byte	.LVL55
 8662 0c81 40000000 		.4byte	.LVL64
 8663 0c85 0100     		.2byte	0x1
 8664 0c87 55       		.byte	0x55
 8665 0c88 40000000 		.4byte	.LVL64
 8666 0c8c 42000000 		.4byte	.LFE12
 8667 0c90 0400     		.2byte	0x4
 8668 0c92 F3       		.byte	0xf3
 8669 0c93 01       		.uleb128 0x1
 8670 0c94 50       		.byte	0x50
 8671 0c95 9F       		.byte	0x9f
 8672 0c96 00000000 		.4byte	0
 8673 0c9a 00000000 		.4byte	0
 8674              	.LLST15:
 8675 0c9e 00000000 		.4byte	.LVL52
 8676 0ca2 12000000 		.4byte	.LVL54
 8677 0ca6 0100     		.2byte	0x1
 8678 0ca8 51       		.byte	0x51
 8679 0ca9 12000000 		.4byte	.LVL54
 8680 0cad 40000000 		.4byte	.LVL65
 8681 0cb1 0100     		.2byte	0x1
 8682 0cb3 57       		.byte	0x57
 8683 0cb4 00000000 		.4byte	0
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 170


 8684 0cb8 00000000 		.4byte	0
 8685              	.LLST16:
 8686 0cbc 00000000 		.4byte	.LVL52
 8687 0cc0 1D000000 		.4byte	.LVL56-1
 8688 0cc4 0100     		.2byte	0x1
 8689 0cc6 52       		.byte	0x52
 8690 0cc7 1D000000 		.4byte	.LVL56-1
 8691 0ccb 2A000000 		.4byte	.LVL58
 8692 0ccf 0100     		.2byte	0x1
 8693 0cd1 54       		.byte	0x54
 8694 0cd2 2A000000 		.4byte	.LVL58
 8695 0cd6 34000000 		.4byte	.LVL60
 8696 0cda 0300     		.2byte	0x3
 8697 0cdc 74       		.byte	0x74
 8698 0cdd 01       		.sleb128 1
 8699 0cde 9F       		.byte	0x9f
 8700 0cdf 34000000 		.4byte	.LVL60
 8701 0ce3 40000000 		.4byte	.LVL63
 8702 0ce7 0100     		.2byte	0x1
 8703 0ce9 54       		.byte	0x54
 8704 0cea 00000000 		.4byte	0
 8705 0cee 00000000 		.4byte	0
 8706              	.LLST17:
 8707 0cf2 00000000 		.4byte	.LVL52
 8708 0cf6 10000000 		.4byte	.LVL53
 8709 0cfa 0100     		.2byte	0x1
 8710 0cfc 53       		.byte	0x53
 8711 0cfd 10000000 		.4byte	.LVL53
 8712 0d01 42000000 		.4byte	.LFE12
 8713 0d05 0400     		.2byte	0x4
 8714 0d07 F3       		.byte	0xf3
 8715 0d08 01       		.uleb128 0x1
 8716 0d09 53       		.byte	0x53
 8717 0d0a 9F       		.byte	0x9f
 8718 0d0b 00000000 		.4byte	0
 8719 0d0f 00000000 		.4byte	0
 8720              	.LLST18:
 8721 0d13 26000000 		.4byte	.LVL57
 8722 0d17 32000000 		.4byte	.LVL59
 8723 0d1b 0700     		.2byte	0x7
 8724 0d1d 74       		.byte	0x74
 8725 0d1e 00       		.sleb128 0
 8726 0d1f F3       		.byte	0xf3
 8727 0d20 01       		.uleb128 0x1
 8728 0d21 52       		.byte	0x52
 8729 0d22 1C       		.byte	0x1c
 8730 0d23 9F       		.byte	0x9f
 8731 0d24 32000000 		.4byte	.LVL59
 8732 0d28 34000000 		.4byte	.LVL60
 8733 0d2c 0900     		.2byte	0x9
 8734 0d2e 74       		.byte	0x74
 8735 0d2f 00       		.sleb128 0
 8736 0d30 F3       		.byte	0xf3
 8737 0d31 01       		.uleb128 0x1
 8738 0d32 52       		.byte	0x52
 8739 0d33 1C       		.byte	0x1c
 8740 0d34 23       		.byte	0x23
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 171


 8741 0d35 01       		.uleb128 0x1
 8742 0d36 9F       		.byte	0x9f
 8743 0d37 36000000 		.4byte	.LVL61
 8744 0d3b 40000000 		.4byte	.LVL63
 8745 0d3f 0700     		.2byte	0x7
 8746 0d41 74       		.byte	0x74
 8747 0d42 00       		.sleb128 0
 8748 0d43 F3       		.byte	0xf3
 8749 0d44 01       		.uleb128 0x1
 8750 0d45 52       		.byte	0x52
 8751 0d46 1C       		.byte	0x1c
 8752 0d47 9F       		.byte	0x9f
 8753 0d48 00000000 		.4byte	0
 8754 0d4c 00000000 		.4byte	0
 8755              	.LLST9:
 8756 0d50 00000000 		.4byte	.LVL36
 8757 0d54 08000000 		.4byte	.LVL38
 8758 0d58 0100     		.2byte	0x1
 8759 0d5a 50       		.byte	0x50
 8760 0d5b 08000000 		.4byte	.LVL38
 8761 0d5f 3A000000 		.4byte	.LVL50
 8762 0d63 0100     		.2byte	0x1
 8763 0d65 55       		.byte	0x55
 8764 0d66 3A000000 		.4byte	.LVL50
 8765 0d6a 3C000000 		.4byte	.LFE11
 8766 0d6e 0400     		.2byte	0x4
 8767 0d70 F3       		.byte	0xf3
 8768 0d71 01       		.uleb128 0x1
 8769 0d72 50       		.byte	0x50
 8770 0d73 9F       		.byte	0x9f
 8771 0d74 00000000 		.4byte	0
 8772 0d78 00000000 		.4byte	0
 8773              	.LLST10:
 8774 0d7c 00000000 		.4byte	.LVL36
 8775 0d80 06000000 		.4byte	.LVL37
 8776 0d84 0100     		.2byte	0x1
 8777 0d86 51       		.byte	0x51
 8778 0d87 06000000 		.4byte	.LVL37
 8779 0d8b 3A000000 		.4byte	.LVL51
 8780 0d8f 0100     		.2byte	0x1
 8781 0d91 57       		.byte	0x57
 8782 0d92 00000000 		.4byte	0
 8783 0d96 00000000 		.4byte	0
 8784              	.LLST11:
 8785 0d9a 00000000 		.4byte	.LVL36
 8786 0d9e 13000000 		.4byte	.LVL40-1
 8787 0da2 0100     		.2byte	0x1
 8788 0da4 52       		.byte	0x52
 8789 0da5 13000000 		.4byte	.LVL40-1
 8790 0da9 22000000 		.4byte	.LVL43
 8791 0dad 0100     		.2byte	0x1
 8792 0daf 54       		.byte	0x54
 8793 0db0 22000000 		.4byte	.LVL43
 8794 0db4 2E000000 		.4byte	.LVL46
 8795 0db8 0300     		.2byte	0x3
 8796 0dba 74       		.byte	0x74
 8797 0dbb 01       		.sleb128 1
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 172


 8798 0dbc 9F       		.byte	0x9f
 8799 0dbd 2E000000 		.4byte	.LVL46
 8800 0dc1 3A000000 		.4byte	.LVL49
 8801 0dc5 0100     		.2byte	0x1
 8802 0dc7 54       		.byte	0x54
 8803 0dc8 00000000 		.4byte	0
 8804 0dcc 00000000 		.4byte	0
 8805              	.LLST12:
 8806 0dd0 00000000 		.4byte	.LVL36
 8807 0dd4 0C000000 		.4byte	.LVL39
 8808 0dd8 0100     		.2byte	0x1
 8809 0dda 53       		.byte	0x53
 8810 0ddb 0C000000 		.4byte	.LVL39
 8811 0ddf 3C000000 		.4byte	.LFE11
 8812 0de3 0400     		.2byte	0x4
 8813 0de5 F3       		.byte	0xf3
 8814 0de6 01       		.uleb128 0x1
 8815 0de7 53       		.byte	0x53
 8816 0de8 9F       		.byte	0x9f
 8817 0de9 00000000 		.4byte	0
 8818 0ded 00000000 		.4byte	0
 8819              	.LLST13:
 8820 0df1 1C000000 		.4byte	.LVL41
 8821 0df5 1E000000 		.4byte	.LVL42
 8822 0df9 0200     		.2byte	0x2
 8823 0dfb 30       		.byte	0x30
 8824 0dfc 9F       		.byte	0x9f
 8825 0dfd 1E000000 		.4byte	.LVL42
 8826 0e01 2C000000 		.4byte	.LVL45
 8827 0e05 0700     		.2byte	0x7
 8828 0e07 74       		.byte	0x74
 8829 0e08 00       		.sleb128 0
 8830 0e09 F3       		.byte	0xf3
 8831 0e0a 01       		.uleb128 0x1
 8832 0e0b 52       		.byte	0x52
 8833 0e0c 1C       		.byte	0x1c
 8834 0e0d 9F       		.byte	0x9f
 8835 0e0e 2C000000 		.4byte	.LVL45
 8836 0e12 2E000000 		.4byte	.LVL46
 8837 0e16 0900     		.2byte	0x9
 8838 0e18 74       		.byte	0x74
 8839 0e19 00       		.sleb128 0
 8840 0e1a F3       		.byte	0xf3
 8841 0e1b 01       		.uleb128 0x1
 8842 0e1c 52       		.byte	0x52
 8843 0e1d 1C       		.byte	0x1c
 8844 0e1e 23       		.byte	0x23
 8845 0e1f 01       		.uleb128 0x1
 8846 0e20 9F       		.byte	0x9f
 8847 0e21 30000000 		.4byte	.LVL47
 8848 0e25 3A000000 		.4byte	.LVL49
 8849 0e29 0700     		.2byte	0x7
 8850 0e2b 74       		.byte	0x74
 8851 0e2c 00       		.sleb128 0
 8852 0e2d F3       		.byte	0xf3
 8853 0e2e 01       		.uleb128 0x1
 8854 0e2f 52       		.byte	0x52
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 173


 8855 0e30 1C       		.byte	0x1c
 8856 0e31 9F       		.byte	0x9f
 8857 0e32 00000000 		.4byte	0
 8858 0e36 00000000 		.4byte	0
 8859              	.LLST6:
 8860 0e3a 00000000 		.4byte	.LVL26
 8861 0e3e 08000000 		.4byte	.LVL28
 8862 0e42 0100     		.2byte	0x1
 8863 0e44 50       		.byte	0x50
 8864 0e45 08000000 		.4byte	.LVL28
 8865 0e49 2E000000 		.4byte	.LVL34
 8866 0e4d 0100     		.2byte	0x1
 8867 0e4f 54       		.byte	0x54
 8868 0e50 2E000000 		.4byte	.LVL34
 8869 0e54 30000000 		.4byte	.LFE10
 8870 0e58 0400     		.2byte	0x4
 8871 0e5a F3       		.byte	0xf3
 8872 0e5b 01       		.uleb128 0x1
 8873 0e5c 50       		.byte	0x50
 8874 0e5d 9F       		.byte	0x9f
 8875 0e5e 00000000 		.4byte	0
 8876 0e62 00000000 		.4byte	0
 8877              	.LLST7:
 8878 0e66 00000000 		.4byte	.LVL26
 8879 0e6a 06000000 		.4byte	.LVL27
 8880 0e6e 0100     		.2byte	0x1
 8881 0e70 51       		.byte	0x51
 8882 0e71 06000000 		.4byte	.LVL27
 8883 0e75 22000000 		.4byte	.LVL32
 8884 0e79 0100     		.2byte	0x1
 8885 0e7b 55       		.byte	0x55
 8886 0e7c 00000000 		.4byte	0
 8887 0e80 00000000 		.4byte	0
 8888              	.LLST8:
 8889 0e84 22000000 		.4byte	.LVL32
 8890 0e88 2E000000 		.4byte	.LVL35
 8891 0e8c 0100     		.2byte	0x1
 8892 0e8e 55       		.byte	0x55
 8893 0e8f 00000000 		.4byte	0
 8894 0e93 00000000 		.4byte	0
 8895              	.LLST3:
 8896 0e97 00000000 		.4byte	.LVL17
 8897 0e9b 12000000 		.4byte	.LVL19
 8898 0e9f 0100     		.2byte	0x1
 8899 0ea1 50       		.byte	0x50
 8900 0ea2 12000000 		.4byte	.LVL19
 8901 0ea6 34000000 		.4byte	.LVL24
 8902 0eaa 0100     		.2byte	0x1
 8903 0eac 54       		.byte	0x54
 8904 0ead 34000000 		.4byte	.LVL24
 8905 0eb1 36000000 		.4byte	.LFE9
 8906 0eb5 0400     		.2byte	0x4
 8907 0eb7 F3       		.byte	0xf3
 8908 0eb8 01       		.uleb128 0x1
 8909 0eb9 50       		.byte	0x50
 8910 0eba 9F       		.byte	0x9f
 8911 0ebb 00000000 		.4byte	0
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 174


 8912 0ebf 00000000 		.4byte	0
 8913              	.LLST4:
 8914 0ec3 00000000 		.4byte	.LVL17
 8915 0ec7 10000000 		.4byte	.LVL18
 8916 0ecb 0100     		.2byte	0x1
 8917 0ecd 51       		.byte	0x51
 8918 0ece 10000000 		.4byte	.LVL18
 8919 0ed2 34000000 		.4byte	.LVL25
 8920 0ed6 0100     		.2byte	0x1
 8921 0ed8 55       		.byte	0x55
 8922 0ed9 00000000 		.4byte	0
 8923 0edd 00000000 		.4byte	0
 8924              	.LLST5:
 8925 0ee1 00000000 		.4byte	.LVL17
 8926 0ee5 19000000 		.4byte	.LVL20-1
 8927 0ee9 0100     		.2byte	0x1
 8928 0eeb 52       		.byte	0x52
 8929 0eec 19000000 		.4byte	.LVL20-1
 8930 0ef0 36000000 		.4byte	.LFE9
 8931 0ef4 0400     		.2byte	0x4
 8932 0ef6 F3       		.byte	0xf3
 8933 0ef7 01       		.uleb128 0x1
 8934 0ef8 52       		.byte	0x52
 8935 0ef9 9F       		.byte	0x9f
 8936 0efa 00000000 		.4byte	0
 8937 0efe 00000000 		.4byte	0
 8938              	.LLST0:
 8939 0f02 00000000 		.4byte	.LVL0
 8940 0f06 0A000000 		.4byte	.LVL1
 8941 0f0a 0100     		.2byte	0x1
 8942 0f0c 50       		.byte	0x50
 8943 0f0d 0A000000 		.4byte	.LVL1
 8944 0f11 5A000000 		.4byte	.LVL16
 8945 0f15 0100     		.2byte	0x1
 8946 0f17 55       		.byte	0x55
 8947 0f18 5A000000 		.4byte	.LVL16
 8948 0f1c 5C000000 		.4byte	.LFE8
 8949 0f20 0400     		.2byte	0x4
 8950 0f22 F3       		.byte	0xf3
 8951 0f23 01       		.uleb128 0x1
 8952 0f24 50       		.byte	0x50
 8953 0f25 9F       		.byte	0x9f
 8954 0f26 00000000 		.4byte	0
 8955 0f2a 00000000 		.4byte	0
 8956              	.LLST1:
 8957 0f2e 00000000 		.4byte	.LVL0
 8958 0f32 00000000 		.4byte	.LVL0
 8959 0f36 0100     		.2byte	0x1
 8960 0f38 51       		.byte	0x51
 8961 0f39 0A000000 		.4byte	.LVL1
 8962 0f3d 18000000 		.4byte	.LVL3
 8963 0f41 0100     		.2byte	0x1
 8964 0f43 54       		.byte	0x54
 8965 0f44 2A000000 		.4byte	.LVL6
 8966 0f48 3E000000 		.4byte	.LVL10
 8967 0f4c 0100     		.2byte	0x1
 8968 0f4e 54       		.byte	0x54
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 175


 8969 0f4f 4A000000 		.4byte	.LVL12
 8970 0f53 5A000000 		.4byte	.LVL15
 8971 0f57 0100     		.2byte	0x1
 8972 0f59 54       		.byte	0x54
 8973 0f5a 5A000000 		.4byte	.LVL15
 8974 0f5e 5C000000 		.4byte	.LFE8
 8975 0f62 0100     		.2byte	0x1
 8976 0f64 50       		.byte	0x50
 8977 0f65 00000000 		.4byte	0
 8978 0f69 00000000 		.4byte	0
 8979              	.LLST2:
 8980 0f6d 00000000 		.4byte	.LVL0
 8981 0f71 0A000000 		.4byte	.LVL1
 8982 0f75 0200     		.2byte	0x2
 8983 0f77 30       		.byte	0x30
 8984 0f78 9F       		.byte	0x9f
 8985 0f79 0A000000 		.4byte	.LVL1
 8986 0f7d 32000000 		.4byte	.LVL8
 8987 0f81 0500     		.2byte	0x5
 8988 0f83 38       		.byte	0x38
 8989 0f84 76       		.byte	0x76
 8990 0f85 00       		.sleb128 0
 8991 0f86 1C       		.byte	0x1c
 8992 0f87 9F       		.byte	0x9f
 8993 0f88 00000000 		.4byte	0
 8994 0f8c 00000000 		.4byte	0
 8995              	.LLST19:
 8996 0f90 00000000 		.4byte	.LVL66
 8997 0f94 0B000000 		.4byte	.LVL68-1
 8998 0f98 0100     		.2byte	0x1
 8999 0f9a 50       		.byte	0x50
 9000 0f9b 0B000000 		.4byte	.LVL68-1
 9001 0f9f 14000000 		.4byte	.LVL70
 9002 0fa3 0100     		.2byte	0x1
 9003 0fa5 54       		.byte	0x54
 9004 0fa6 14000000 		.4byte	.LVL70
 9005 0faa 16000000 		.4byte	.LVL71
 9006 0fae 0400     		.2byte	0x4
 9007 0fb0 F3       		.byte	0xf3
 9008 0fb1 01       		.uleb128 0x1
 9009 0fb2 50       		.byte	0x50
 9010 0fb3 9F       		.byte	0x9f
 9011 0fb4 16000000 		.4byte	.LVL71
 9012 0fb8 26000000 		.4byte	.LFE13
 9013 0fbc 0100     		.2byte	0x1
 9014 0fbe 54       		.byte	0x54
 9015 0fbf 00000000 		.4byte	0
 9016 0fc3 00000000 		.4byte	0
 9017              	.LLST20:
 9018 0fc7 00000000 		.4byte	.LVL66
 9019 0fcb 06000000 		.4byte	.LVL67
 9020 0fcf 0100     		.2byte	0x1
 9021 0fd1 51       		.byte	0x51
 9022 0fd2 06000000 		.4byte	.LVL67
 9023 0fd6 26000000 		.4byte	.LFE13
 9024 0fda 0400     		.2byte	0x4
 9025 0fdc F3       		.byte	0xf3
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 176


 9026 0fdd 01       		.uleb128 0x1
 9027 0fde 51       		.byte	0x51
 9028 0fdf 9F       		.byte	0x9f
 9029 0fe0 00000000 		.4byte	0
 9030 0fe4 00000000 		.4byte	0
 9031              	.LLST21:
 9032 0fe8 0C000000 		.4byte	.LVL68
 9033 0fec 14000000 		.4byte	.LVL69
 9034 0ff0 0600     		.2byte	0x6
 9035 0ff2 70       		.byte	0x70
 9036 0ff3 00       		.sleb128 0
 9037 0ff4 09       		.byte	0x9
 9038 0ff5 80       		.byte	0x80
 9039 0ff6 1A       		.byte	0x1a
 9040 0ff7 9F       		.byte	0x9f
 9041 0ff8 16000000 		.4byte	.LVL71
 9042 0ffc 20000000 		.4byte	.LVL73
 9043 1000 0600     		.2byte	0x6
 9044 1002 70       		.byte	0x70
 9045 1003 00       		.sleb128 0
 9046 1004 09       		.byte	0x9
 9047 1005 80       		.byte	0x80
 9048 1006 1A       		.byte	0x1a
 9049 1007 9F       		.byte	0x9f
 9050 1008 00000000 		.4byte	0
 9051 100c 00000000 		.4byte	0
 9052              		.section	.debug_aranges,"",%progbits
 9053 0000 44010000 		.4byte	0x144
 9054 0004 0200     		.2byte	0x2
 9055 0006 00000000 		.4byte	.Ldebug_info0
 9056 000a 04       		.byte	0x4
 9057 000b 00       		.byte	0
 9058 000c 0000     		.2byte	0
 9059 000e 0000     		.2byte	0
 9060 0010 00000000 		.4byte	.LFB8
 9061 0014 5C000000 		.4byte	.LFE8-.LFB8
 9062 0018 00000000 		.4byte	.LFB9
 9063 001c 36000000 		.4byte	.LFE9-.LFB9
 9064 0020 00000000 		.4byte	.LFB10
 9065 0024 30000000 		.4byte	.LFE10-.LFB10
 9066 0028 00000000 		.4byte	.LFB11
 9067 002c 3C000000 		.4byte	.LFE11-.LFB11
 9068 0030 00000000 		.4byte	.LFB12
 9069 0034 42000000 		.4byte	.LFE12-.LFB12
 9070 0038 00000000 		.4byte	.LFB13
 9071 003c 26000000 		.4byte	.LFE13-.LFB13
 9072 0040 00000000 		.4byte	.LFB14
 9073 0044 A4000000 		.4byte	.LFE14-.LFB14
 9074 0048 00000000 		.4byte	.LFB15
 9075 004c 38000000 		.4byte	.LFE15-.LFB15
 9076 0050 00000000 		.4byte	.LFB16
 9077 0054 4A000000 		.4byte	.LFE16-.LFB16
 9078 0058 00000000 		.4byte	.LFB17
 9079 005c 4E000000 		.4byte	.LFE17-.LFB17
 9080 0060 00000000 		.4byte	.LFB18
 9081 0064 26000000 		.4byte	.LFE18-.LFB18
 9082 0068 00000000 		.4byte	.LFB19
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 177


 9083 006c 24000000 		.4byte	.LFE19-.LFB19
 9084 0070 00000000 		.4byte	.LFB20
 9085 0074 0E000000 		.4byte	.LFE20-.LFB20
 9086 0078 00000000 		.4byte	.LFB21
 9087 007c 38000000 		.4byte	.LFE21-.LFB21
 9088 0080 00000000 		.4byte	.LFB22
 9089 0084 40000000 		.4byte	.LFE22-.LFB22
 9090 0088 00000000 		.4byte	.LFB23
 9091 008c 1E000000 		.4byte	.LFE23-.LFB23
 9092 0090 00000000 		.4byte	.LFB24
 9093 0094 0E000000 		.4byte	.LFE24-.LFB24
 9094 0098 00000000 		.4byte	.LFB25
 9095 009c 0E000000 		.4byte	.LFE25-.LFB25
 9096 00a0 00000000 		.4byte	.LFB26
 9097 00a4 0E000000 		.4byte	.LFE26-.LFB26
 9098 00a8 00000000 		.4byte	.LFB27
 9099 00ac 0E000000 		.4byte	.LFE27-.LFB27
 9100 00b0 00000000 		.4byte	.LFB28
 9101 00b4 0C000000 		.4byte	.LFE28-.LFB28
 9102 00b8 00000000 		.4byte	.LFB29
 9103 00bc 0E000000 		.4byte	.LFE29-.LFB29
 9104 00c0 00000000 		.4byte	.LFB30
 9105 00c4 0E000000 		.4byte	.LFE30-.LFB30
 9106 00c8 00000000 		.4byte	.LFB31
 9107 00cc 0E000000 		.4byte	.LFE31-.LFB31
 9108 00d0 00000000 		.4byte	.LFB32
 9109 00d4 36000000 		.4byte	.LFE32-.LFB32
 9110 00d8 00000000 		.4byte	.LFB33
 9111 00dc 36000000 		.4byte	.LFE33-.LFB33
 9112 00e0 00000000 		.4byte	.LFB34
 9113 00e4 16000000 		.4byte	.LFE34-.LFB34
 9114 00e8 00000000 		.4byte	.LFB35
 9115 00ec 14000000 		.4byte	.LFE35-.LFB35
 9116 00f0 00000000 		.4byte	.LFB36
 9117 00f4 1A000000 		.4byte	.LFE36-.LFB36
 9118 00f8 00000000 		.4byte	.LFB37
 9119 00fc 18000000 		.4byte	.LFE37-.LFB37
 9120 0100 00000000 		.4byte	.LFB38
 9121 0104 44000000 		.4byte	.LFE38-.LFB38
 9122 0108 00000000 		.4byte	.LFB39
 9123 010c 44000000 		.4byte	.LFE39-.LFB39
 9124 0110 00000000 		.4byte	.LFB40
 9125 0114 16000000 		.4byte	.LFE40-.LFB40
 9126 0118 00000000 		.4byte	.LFB41
 9127 011c 16000000 		.4byte	.LFE41-.LFB41
 9128 0120 00000000 		.4byte	.LFB42
 9129 0124 0E000000 		.4byte	.LFE42-.LFB42
 9130 0128 00000000 		.4byte	.LFB43
 9131 012c 0A000000 		.4byte	.LFE43-.LFB43
 9132 0130 00000000 		.4byte	.LFB44
 9133 0134 30000000 		.4byte	.LFE44-.LFB44
 9134 0138 00000000 		.4byte	.LFB45
 9135 013c EC000000 		.4byte	.LFE45-.LFB45
 9136 0140 00000000 		.4byte	0
 9137 0144 00000000 		.4byte	0
 9138              		.section	.debug_ranges,"",%progbits
 9139              	.Ldebug_ranges0:
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 178


 9140 0000 00000000 		.4byte	.LFB8
 9141 0004 5C000000 		.4byte	.LFE8
 9142 0008 00000000 		.4byte	.LFB9
 9143 000c 36000000 		.4byte	.LFE9
 9144 0010 00000000 		.4byte	.LFB10
 9145 0014 30000000 		.4byte	.LFE10
 9146 0018 00000000 		.4byte	.LFB11
 9147 001c 3C000000 		.4byte	.LFE11
 9148 0020 00000000 		.4byte	.LFB12
 9149 0024 42000000 		.4byte	.LFE12
 9150 0028 00000000 		.4byte	.LFB13
 9151 002c 26000000 		.4byte	.LFE13
 9152 0030 00000000 		.4byte	.LFB14
 9153 0034 A4000000 		.4byte	.LFE14
 9154 0038 00000000 		.4byte	.LFB15
 9155 003c 38000000 		.4byte	.LFE15
 9156 0040 00000000 		.4byte	.LFB16
 9157 0044 4A000000 		.4byte	.LFE16
 9158 0048 00000000 		.4byte	.LFB17
 9159 004c 4E000000 		.4byte	.LFE17
 9160 0050 00000000 		.4byte	.LFB18
 9161 0054 26000000 		.4byte	.LFE18
 9162 0058 00000000 		.4byte	.LFB19
 9163 005c 24000000 		.4byte	.LFE19
 9164 0060 00000000 		.4byte	.LFB20
 9165 0064 0E000000 		.4byte	.LFE20
 9166 0068 00000000 		.4byte	.LFB21
 9167 006c 38000000 		.4byte	.LFE21
 9168 0070 00000000 		.4byte	.LFB22
 9169 0074 40000000 		.4byte	.LFE22
 9170 0078 00000000 		.4byte	.LFB23
 9171 007c 1E000000 		.4byte	.LFE23
 9172 0080 00000000 		.4byte	.LFB24
 9173 0084 0E000000 		.4byte	.LFE24
 9174 0088 00000000 		.4byte	.LFB25
 9175 008c 0E000000 		.4byte	.LFE25
 9176 0090 00000000 		.4byte	.LFB26
 9177 0094 0E000000 		.4byte	.LFE26
 9178 0098 00000000 		.4byte	.LFB27
 9179 009c 0E000000 		.4byte	.LFE27
 9180 00a0 00000000 		.4byte	.LFB28
 9181 00a4 0C000000 		.4byte	.LFE28
 9182 00a8 00000000 		.4byte	.LFB29
 9183 00ac 0E000000 		.4byte	.LFE29
 9184 00b0 00000000 		.4byte	.LFB30
 9185 00b4 0E000000 		.4byte	.LFE30
 9186 00b8 00000000 		.4byte	.LFB31
 9187 00bc 0E000000 		.4byte	.LFE31
 9188 00c0 00000000 		.4byte	.LFB32
 9189 00c4 36000000 		.4byte	.LFE32
 9190 00c8 00000000 		.4byte	.LFB33
 9191 00cc 36000000 		.4byte	.LFE33
 9192 00d0 00000000 		.4byte	.LFB34
 9193 00d4 16000000 		.4byte	.LFE34
 9194 00d8 00000000 		.4byte	.LFB35
 9195 00dc 14000000 		.4byte	.LFE35
 9196 00e0 00000000 		.4byte	.LFB36
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 179


 9197 00e4 1A000000 		.4byte	.LFE36
 9198 00e8 00000000 		.4byte	.LFB37
 9199 00ec 18000000 		.4byte	.LFE37
 9200 00f0 00000000 		.4byte	.LFB38
 9201 00f4 44000000 		.4byte	.LFE38
 9202 00f8 00000000 		.4byte	.LFB39
 9203 00fc 44000000 		.4byte	.LFE39
 9204 0100 00000000 		.4byte	.LFB40
 9205 0104 16000000 		.4byte	.LFE40
 9206 0108 00000000 		.4byte	.LFB41
 9207 010c 16000000 		.4byte	.LFE41
 9208 0110 00000000 		.4byte	.LFB42
 9209 0114 0E000000 		.4byte	.LFE42
 9210 0118 00000000 		.4byte	.LFB43
 9211 011c 0A000000 		.4byte	.LFE43
 9212 0120 00000000 		.4byte	.LFB44
 9213 0124 30000000 		.4byte	.LFE44
 9214 0128 00000000 		.4byte	.LFB45
 9215 012c EC000000 		.4byte	.LFE45
 9216 0130 00000000 		.4byte	0
 9217 0134 00000000 		.4byte	0
 9218              		.section	.debug_macro,"",%progbits
 9219              	.Ldebug_macro0:
 9220 0000 0400     		.2byte	0x4
 9221 0002 02       		.byte	0x2
 9222 0003 00000000 		.4byte	.Ldebug_line0
 9223 0007 07       		.byte	0x7
 9224 0008 00000000 		.4byte	.Ldebug_macro1
 9225 000c 03       		.byte	0x3
 9226 000d 00       		.uleb128 0
 9227 000e 01       		.uleb128 0x1
 9228 000f 03       		.byte	0x3
 9229 0010 DE02     		.uleb128 0x15e
 9230 0012 03       		.uleb128 0x3
 9231 0013 07       		.byte	0x7
 9232 0014 00000000 		.4byte	.Ldebug_macro2
 9233 0018 03       		.byte	0x3
 9234 0019 F702     		.uleb128 0x177
 9235 001b 02       		.uleb128 0x2
 9236 001c 05       		.byte	0x5
 9237 001d 08       		.uleb128 0x8
 9238 001e A32C0000 		.4byte	.LASF479
 9239 0022 04       		.byte	0x4
 9240 0023 04       		.byte	0x4
 9241 0024 05       		.byte	0x5
 9242 0025 E202     		.uleb128 0x162
 9243 0027 B0340000 		.4byte	.LASF480
 9244 002b 05       		.byte	0x5
 9245 002c E302     		.uleb128 0x163
 9246 002e 79100000 		.4byte	.LASF481
 9247 0032 05       		.byte	0x5
 9248 0033 E602     		.uleb128 0x166
 9249 0035 031C0000 		.4byte	.LASF482
 9250 0039 05       		.byte	0x5
 9251 003a E702     		.uleb128 0x167
 9252 003c 781F0000 		.4byte	.LASF483
 9253 0040 05       		.byte	0x5
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 180


 9254 0041 E802     		.uleb128 0x168
 9255 0043 98240000 		.4byte	.LASF484
 9256 0047 05       		.byte	0x5
 9257 0048 EA02     		.uleb128 0x16a
 9258 004a 882E0000 		.4byte	.LASF485
 9259 004e 05       		.byte	0x5
 9260 004f ED02     		.uleb128 0x16d
 9261 0051 602D0000 		.4byte	.LASF486
 9262 0055 05       		.byte	0x5
 9263 0056 EE02     		.uleb128 0x16e
 9264 0058 6B380000 		.4byte	.LASF487
 9265 005c 05       		.byte	0x5
 9266 005d EF02     		.uleb128 0x16f
 9267 005f BA200000 		.4byte	.LASF488
 9268 0063 05       		.byte	0x5
 9269 0064 F102     		.uleb128 0x171
 9270 0066 B9120000 		.4byte	.LASF489
 9271 006a 05       		.byte	0x5
 9272 006b F202     		.uleb128 0x172
 9273 006d 41320000 		.4byte	.LASF490
 9274 0071 05       		.byte	0x5
 9275 0072 F702     		.uleb128 0x177
 9276 0074 97180000 		.4byte	.LASF491
 9277 0078 05       		.byte	0x5
 9278 0079 F802     		.uleb128 0x178
 9279 007b FC370000 		.4byte	.LASF492
 9280 007f 05       		.byte	0x5
 9281 0080 F902     		.uleb128 0x179
 9282 0082 CA070000 		.4byte	.LASF493
 9283 0086 05       		.byte	0x5
 9284 0087 FA02     		.uleb128 0x17a
 9285 0089 AD100000 		.4byte	.LASF494
 9286 008d 05       		.byte	0x5
 9287 008e FB02     		.uleb128 0x17b
 9288 0090 6C1C0000 		.4byte	.LASF495
 9289 0094 05       		.byte	0x5
 9290 0095 8003     		.uleb128 0x180
 9291 0097 62130000 		.4byte	.LASF496
 9292 009b 04       		.byte	0x4
 9293 009c 00       		.byte	0
 9294              		.section	.debug_macro,"G",%progbits,wm4.0.c78eeed12c58b02cb443484f13096dde,comdat
 9295              	.Ldebug_macro1:
 9296 0000 0400     		.2byte	0x4
 9297 0002 00       		.byte	0
 9298 0003 05       		.byte	0x5
 9299 0004 00       		.uleb128 0
 9300 0005 EF350000 		.4byte	.LASF0
 9301 0009 05       		.byte	0x5
 9302 000a 00       		.uleb128 0
 9303 000b 511B0000 		.4byte	.LASF1
 9304 000f 05       		.byte	0x5
 9305 0010 00       		.uleb128 0
 9306 0011 B72E0000 		.4byte	.LASF2
 9307 0015 05       		.byte	0x5
 9308 0016 00       		.uleb128 0
 9309 0017 AD050000 		.4byte	.LASF3
 9310 001b 05       		.byte	0x5
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 181


 9311 001c 00       		.uleb128 0
 9312 001d CE040000 		.4byte	.LASF4
 9313 0021 05       		.byte	0x5
 9314 0022 00       		.uleb128 0
 9315 0023 86200000 		.4byte	.LASF5
 9316 0027 05       		.byte	0x5
 9317 0028 00       		.uleb128 0
 9318 0029 D3240000 		.4byte	.LASF6
 9319 002d 05       		.byte	0x5
 9320 002e 00       		.uleb128 0
 9321 002f CB090000 		.4byte	.LASF7
 9322 0033 05       		.byte	0x5
 9323 0034 00       		.uleb128 0
 9324 0035 48070000 		.4byte	.LASF8
 9325 0039 05       		.byte	0x5
 9326 003a 00       		.uleb128 0
 9327 003b D9230000 		.4byte	.LASF9
 9328 003f 05       		.byte	0x5
 9329 0040 00       		.uleb128 0
 9330 0041 2C060000 		.4byte	.LASF10
 9331 0045 05       		.byte	0x5
 9332 0046 00       		.uleb128 0
 9333 0047 0C300000 		.4byte	.LASF11
 9334 004b 05       		.byte	0x5
 9335 004c 00       		.uleb128 0
 9336 004d CC1D0000 		.4byte	.LASF12
 9337 0051 05       		.byte	0x5
 9338 0052 00       		.uleb128 0
 9339 0053 50330000 		.4byte	.LASF13
 9340 0057 05       		.byte	0x5
 9341 0058 00       		.uleb128 0
 9342 0059 F7060000 		.4byte	.LASF14
 9343 005d 05       		.byte	0x5
 9344 005e 00       		.uleb128 0
 9345 005f 521D0000 		.4byte	.LASF15
 9346 0063 05       		.byte	0x5
 9347 0064 00       		.uleb128 0
 9348 0065 6B340000 		.4byte	.LASF16
 9349 0069 05       		.byte	0x5
 9350 006a 00       		.uleb128 0
 9351 006b 661F0000 		.4byte	.LASF17
 9352 006f 05       		.byte	0x5
 9353 0070 00       		.uleb128 0
 9354 0071 5E2A0000 		.4byte	.LASF18
 9355 0075 05       		.byte	0x5
 9356 0076 00       		.uleb128 0
 9357 0077 7D070000 		.4byte	.LASF19
 9358 007b 05       		.byte	0x5
 9359 007c 00       		.uleb128 0
 9360 007d 8A350000 		.4byte	.LASF20
 9361 0081 05       		.byte	0x5
 9362 0082 00       		.uleb128 0
 9363 0083 72200000 		.4byte	.LASF21
 9364 0087 05       		.byte	0x5
 9365 0088 00       		.uleb128 0
 9366 0089 48050000 		.4byte	.LASF22
 9367 008d 05       		.byte	0x5
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 182


 9368 008e 00       		.uleb128 0
 9369 008f 11050000 		.4byte	.LASF23
 9370 0093 05       		.byte	0x5
 9371 0094 00       		.uleb128 0
 9372 0095 DD1C0000 		.4byte	.LASF24
 9373 0099 05       		.byte	0x5
 9374 009a 00       		.uleb128 0
 9375 009b CE130000 		.4byte	.LASF25
 9376 009f 05       		.byte	0x5
 9377 00a0 00       		.uleb128 0
 9378 00a1 F7110000 		.4byte	.LASF26
 9379 00a5 05       		.byte	0x5
 9380 00a6 00       		.uleb128 0
 9381 00a7 93050000 		.4byte	.LASF27
 9382 00ab 05       		.byte	0x5
 9383 00ac 00       		.uleb128 0
 9384 00ad AD250000 		.4byte	.LASF28
 9385 00b1 05       		.byte	0x5
 9386 00b2 00       		.uleb128 0
 9387 00b3 AD2C0000 		.4byte	.LASF29
 9388 00b7 05       		.byte	0x5
 9389 00b8 00       		.uleb128 0
 9390 00b9 13230000 		.4byte	.LASF30
 9391 00bd 05       		.byte	0x5
 9392 00be 00       		.uleb128 0
 9393 00bf 9E2B0000 		.4byte	.LASF31
 9394 00c3 05       		.byte	0x5
 9395 00c4 00       		.uleb128 0
 9396 00c5 6D280000 		.4byte	.LASF32
 9397 00c9 05       		.byte	0x5
 9398 00ca 00       		.uleb128 0
 9399 00cb C5320000 		.4byte	.LASF33
 9400 00cf 05       		.byte	0x5
 9401 00d0 00       		.uleb128 0
 9402 00d1 3F060000 		.4byte	.LASF34
 9403 00d5 05       		.byte	0x5
 9404 00d6 00       		.uleb128 0
 9405 00d7 691D0000 		.4byte	.LASF35
 9406 00db 05       		.byte	0x5
 9407 00dc 00       		.uleb128 0
 9408 00dd CF1F0000 		.4byte	.LASF36
 9409 00e1 05       		.byte	0x5
 9410 00e2 00       		.uleb128 0
 9411 00e3 7C340000 		.4byte	.LASF37
 9412 00e7 05       		.byte	0x5
 9413 00e8 00       		.uleb128 0
 9414 00e9 F6240000 		.4byte	.LASF38
 9415 00ed 05       		.byte	0x5
 9416 00ee 00       		.uleb128 0
 9417 00ef 25050000 		.4byte	.LASF39
 9418 00f3 05       		.byte	0x5
 9419 00f4 00       		.uleb128 0
 9420 00f5 EC230000 		.4byte	.LASF40
 9421 00f9 05       		.byte	0x5
 9422 00fa 00       		.uleb128 0
 9423 00fb AA380000 		.4byte	.LASF41
 9424 00ff 05       		.byte	0x5
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 183


 9425 0100 00       		.uleb128 0
 9426 0101 DA280000 		.4byte	.LASF42
 9427 0105 05       		.byte	0x5
 9428 0106 00       		.uleb128 0
 9429 0107 A1060000 		.4byte	.LASF43
 9430 010b 05       		.byte	0x5
 9431 010c 00       		.uleb128 0
 9432 010d 17270000 		.4byte	.LASF44
 9433 0111 05       		.byte	0x5
 9434 0112 00       		.uleb128 0
 9435 0113 DB150000 		.4byte	.LASF45
 9436 0117 05       		.byte	0x5
 9437 0118 00       		.uleb128 0
 9438 0119 842A0000 		.4byte	.LASF46
 9439 011d 05       		.byte	0x5
 9440 011e 00       		.uleb128 0
 9441 011f 25150000 		.4byte	.LASF47
 9442 0123 05       		.byte	0x5
 9443 0124 00       		.uleb128 0
 9444 0125 5C2B0000 		.4byte	.LASF48
 9445 0129 05       		.byte	0x5
 9446 012a 00       		.uleb128 0
 9447 012b 0A350000 		.4byte	.LASF49
 9448 012f 05       		.byte	0x5
 9449 0130 00       		.uleb128 0
 9450 0131 E7070000 		.4byte	.LASF50
 9451 0135 05       		.byte	0x5
 9452 0136 00       		.uleb128 0
 9453 0137 C91A0000 		.4byte	.LASF51
 9454 013b 05       		.byte	0x5
 9455 013c 00       		.uleb128 0
 9456 013d 8B0E0000 		.4byte	.LASF52
 9457 0141 05       		.byte	0x5
 9458 0142 00       		.uleb128 0
 9459 0143 392B0000 		.4byte	.LASF53
 9460 0147 05       		.byte	0x5
 9461 0148 00       		.uleb128 0
 9462 0149 091D0000 		.4byte	.LASF54
 9463 014d 05       		.byte	0x5
 9464 014e 00       		.uleb128 0
 9465 014f C7250000 		.4byte	.LASF55
 9466 0153 05       		.byte	0x5
 9467 0154 00       		.uleb128 0
 9468 0155 AB240000 		.4byte	.LASF56
 9469 0159 05       		.byte	0x5
 9470 015a 00       		.uleb128 0
 9471 015b E8050000 		.4byte	.LASF57
 9472 015f 05       		.byte	0x5
 9473 0160 00       		.uleb128 0
 9474 0161 B70F0000 		.4byte	.LASF58
 9475 0165 05       		.byte	0x5
 9476 0166 00       		.uleb128 0
 9477 0167 0D150000 		.4byte	.LASF59
 9478 016b 05       		.byte	0x5
 9479 016c 00       		.uleb128 0
 9480 016d 27340000 		.4byte	.LASF60
 9481 0171 05       		.byte	0x5
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 184


 9482 0172 00       		.uleb128 0
 9483 0173 E00A0000 		.4byte	.LASF61
 9484 0177 05       		.byte	0x5
 9485 0178 00       		.uleb128 0
 9486 0179 B1000000 		.4byte	.LASF62
 9487 017d 05       		.byte	0x5
 9488 017e 00       		.uleb128 0
 9489 017f 91170000 		.4byte	.LASF63
 9490 0183 05       		.byte	0x5
 9491 0184 00       		.uleb128 0
 9492 0185 F5310000 		.4byte	.LASF64
 9493 0189 05       		.byte	0x5
 9494 018a 00       		.uleb128 0
 9495 018b 1F300000 		.4byte	.LASF65
 9496 018f 05       		.byte	0x5
 9497 0190 00       		.uleb128 0
 9498 0191 31310000 		.4byte	.LASF66
 9499 0195 05       		.byte	0x5
 9500 0196 00       		.uleb128 0
 9501 0197 4D380000 		.4byte	.LASF67
 9502 019b 05       		.byte	0x5
 9503 019c 00       		.uleb128 0
 9504 019d B32A0000 		.4byte	.LASF68
 9505 01a1 05       		.byte	0x5
 9506 01a2 00       		.uleb128 0
 9507 01a3 BD030000 		.4byte	.LASF69
 9508 01a7 05       		.byte	0x5
 9509 01a8 00       		.uleb128 0
 9510 01a9 B0130000 		.4byte	.LASF70
 9511 01ad 05       		.byte	0x5
 9512 01ae 00       		.uleb128 0
 9513 01af 5D1C0000 		.4byte	.LASF71
 9514 01b3 05       		.byte	0x5
 9515 01b4 00       		.uleb128 0
 9516 01b5 7A2D0000 		.4byte	.LASF72
 9517 01b9 05       		.byte	0x5
 9518 01ba 00       		.uleb128 0
 9519 01bb 4C270000 		.4byte	.LASF73
 9520 01bf 05       		.byte	0x5
 9521 01c0 00       		.uleb128 0
 9522 01c1 29170000 		.4byte	.LASF74
 9523 01c5 05       		.byte	0x5
 9524 01c6 00       		.uleb128 0
 9525 01c7 5F260000 		.4byte	.LASF75
 9526 01cb 05       		.byte	0x5
 9527 01cc 00       		.uleb128 0
 9528 01cd 46090000 		.4byte	.LASF76
 9529 01d1 05       		.byte	0x5
 9530 01d2 00       		.uleb128 0
 9531 01d3 7A250000 		.4byte	.LASF77
 9532 01d7 05       		.byte	0x5
 9533 01d8 00       		.uleb128 0
 9534 01d9 15060000 		.4byte	.LASF78
 9535 01dd 05       		.byte	0x5
 9536 01de 00       		.uleb128 0
 9537 01df EA1F0000 		.4byte	.LASF79
 9538 01e3 05       		.byte	0x5
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 185


 9539 01e4 00       		.uleb128 0
 9540 01e5 B4150000 		.4byte	.LASF80
 9541 01e9 05       		.byte	0x5
 9542 01ea 00       		.uleb128 0
 9543 01eb 312A0000 		.4byte	.LASF81
 9544 01ef 05       		.byte	0x5
 9545 01f0 00       		.uleb128 0
 9546 01f1 8C110000 		.4byte	.LASF82
 9547 01f5 05       		.byte	0x5
 9548 01f6 00       		.uleb128 0
 9549 01f7 F4280000 		.4byte	.LASF83
 9550 01fb 05       		.byte	0x5
 9551 01fc 00       		.uleb128 0
 9552 01fd 17210000 		.4byte	.LASF84
 9553 0201 05       		.byte	0x5
 9554 0202 00       		.uleb128 0
 9555 0203 760D0000 		.4byte	.LASF85
 9556 0207 05       		.byte	0x5
 9557 0208 00       		.uleb128 0
 9558 0209 F9090000 		.4byte	.LASF86
 9559 020d 05       		.byte	0x5
 9560 020e 00       		.uleb128 0
 9561 020f 0D290000 		.4byte	.LASF87
 9562 0213 05       		.byte	0x5
 9563 0214 00       		.uleb128 0
 9564 0215 A12A0000 		.4byte	.LASF88
 9565 0219 05       		.byte	0x5
 9566 021a 00       		.uleb128 0
 9567 021b D42C0000 		.4byte	.LASF89
 9568 021f 05       		.byte	0x5
 9569 0220 00       		.uleb128 0
 9570 0221 C7230000 		.4byte	.LASF90
 9571 0225 05       		.byte	0x5
 9572 0226 00       		.uleb128 0
 9573 0227 84030000 		.4byte	.LASF91
 9574 022b 05       		.byte	0x5
 9575 022c 00       		.uleb128 0
 9576 022d 72150000 		.4byte	.LASF92
 9577 0231 05       		.byte	0x5
 9578 0232 00       		.uleb128 0
 9579 0233 32260000 		.4byte	.LASF93
 9580 0237 05       		.byte	0x5
 9581 0238 00       		.uleb128 0
 9582 0239 5F2C0000 		.4byte	.LASF94
 9583 023d 05       		.byte	0x5
 9584 023e 00       		.uleb128 0
 9585 023f 4B230000 		.4byte	.LASF95
 9586 0243 05       		.byte	0x5
 9587 0244 00       		.uleb128 0
 9588 0245 68110000 		.4byte	.LASF96
 9589 0249 05       		.byte	0x5
 9590 024a 00       		.uleb128 0
 9591 024b 9A340000 		.4byte	.LASF97
 9592 024f 05       		.byte	0x5
 9593 0250 00       		.uleb128 0
 9594 0251 84380000 		.4byte	.LASF98
 9595 0255 05       		.byte	0x5
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 186


 9596 0256 00       		.uleb128 0
 9597 0257 0C080000 		.4byte	.LASF99
 9598 025b 05       		.byte	0x5
 9599 025c 00       		.uleb128 0
 9600 025d 701A0000 		.4byte	.LASF100
 9601 0261 05       		.byte	0x5
 9602 0262 00       		.uleb128 0
 9603 0263 F9130000 		.4byte	.LASF101
 9604 0267 05       		.byte	0x5
 9605 0268 00       		.uleb128 0
 9606 0269 E6220000 		.4byte	.LASF102
 9607 026d 05       		.byte	0x5
 9608 026e 00       		.uleb128 0
 9609 026f 40250000 		.4byte	.LASF103
 9610 0273 05       		.byte	0x5
 9611 0274 00       		.uleb128 0
 9612 0275 5A0E0000 		.4byte	.LASF104
 9613 0279 05       		.byte	0x5
 9614 027a 00       		.uleb128 0
 9615 027b 03200000 		.4byte	.LASF105
 9616 027f 05       		.byte	0x5
 9617 0280 00       		.uleb128 0
 9618 0281 06260000 		.4byte	.LASF106
 9619 0285 05       		.byte	0x5
 9620 0286 00       		.uleb128 0
 9621 0287 370E0000 		.4byte	.LASF107
 9622 028b 05       		.byte	0x5
 9623 028c 00       		.uleb128 0
 9624 028d C4190000 		.4byte	.LASF108
 9625 0291 05       		.byte	0x5
 9626 0292 00       		.uleb128 0
 9627 0293 F0190000 		.4byte	.LASF109
 9628 0297 05       		.byte	0x5
 9629 0298 00       		.uleb128 0
 9630 0299 FD210000 		.4byte	.LASF110
 9631 029d 05       		.byte	0x5
 9632 029e 00       		.uleb128 0
 9633 029f 321E0000 		.4byte	.LASF111
 9634 02a3 05       		.byte	0x5
 9635 02a4 00       		.uleb128 0
 9636 02a5 B2070000 		.4byte	.LASF112
 9637 02a9 05       		.byte	0x5
 9638 02aa 00       		.uleb128 0
 9639 02ab 020B0000 		.4byte	.LASF113
 9640 02af 05       		.byte	0x5
 9641 02b0 00       		.uleb128 0
 9642 02b1 8B190000 		.4byte	.LASF114
 9643 02b5 05       		.byte	0x5
 9644 02b6 00       		.uleb128 0
 9645 02b7 0A090000 		.4byte	.LASF115
 9646 02bb 05       		.byte	0x5
 9647 02bc 00       		.uleb128 0
 9648 02bd 071E0000 		.4byte	.LASF116
 9649 02c1 05       		.byte	0x5
 9650 02c2 00       		.uleb128 0
 9651 02c3 1C0B0000 		.4byte	.LASF117
 9652 02c7 05       		.byte	0x5
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 187


 9653 02c8 00       		.uleb128 0
 9654 02c9 DC370000 		.4byte	.LASF118
 9655 02cd 05       		.byte	0x5
 9656 02ce 00       		.uleb128 0
 9657 02cf 85360000 		.4byte	.LASF119
 9658 02d3 05       		.byte	0x5
 9659 02d4 00       		.uleb128 0
 9660 02d5 CA310000 		.4byte	.LASF120
 9661 02d9 05       		.byte	0x5
 9662 02da 00       		.uleb128 0
 9663 02db DD180000 		.4byte	.LASF121
 9664 02df 05       		.byte	0x5
 9665 02e0 00       		.uleb128 0
 9666 02e1 ED290000 		.4byte	.LASF122
 9667 02e5 05       		.byte	0x5
 9668 02e6 00       		.uleb128 0
 9669 02e7 8B040000 		.4byte	.LASF123
 9670 02eb 05       		.byte	0x5
 9671 02ec 00       		.uleb128 0
 9672 02ed 1E0E0000 		.4byte	.LASF124
 9673 02f1 05       		.byte	0x5
 9674 02f2 00       		.uleb128 0
 9675 02f3 9C200000 		.4byte	.LASF125
 9676 02f7 05       		.byte	0x5
 9677 02f8 00       		.uleb128 0
 9678 02f9 AB0D0000 		.4byte	.LASF126
 9679 02fd 05       		.byte	0x5
 9680 02fe 00       		.uleb128 0
 9681 02ff 01050000 		.4byte	.LASF127
 9682 0303 05       		.byte	0x5
 9683 0304 00       		.uleb128 0
 9684 0305 78280000 		.4byte	.LASF128
 9685 0309 05       		.byte	0x5
 9686 030a 00       		.uleb128 0
 9687 030b EF120000 		.4byte	.LASF129
 9688 030f 05       		.byte	0x5
 9689 0310 00       		.uleb128 0
 9690 0311 FC0E0000 		.4byte	.LASF130
 9691 0315 05       		.byte	0x5
 9692 0316 00       		.uleb128 0
 9693 0317 282D0000 		.4byte	.LASF131
 9694 031b 05       		.byte	0x5
 9695 031c 00       		.uleb128 0
 9696 031d 23250000 		.4byte	.LASF132
 9697 0321 05       		.byte	0x5
 9698 0322 00       		.uleb128 0
 9699 0323 B7350000 		.4byte	.LASF133
 9700 0327 05       		.byte	0x5
 9701 0328 00       		.uleb128 0
 9702 0329 980C0000 		.4byte	.LASF134
 9703 032d 05       		.byte	0x5
 9704 032e 00       		.uleb128 0
 9705 032f 33010000 		.4byte	.LASF135
 9706 0333 05       		.byte	0x5
 9707 0334 00       		.uleb128 0
 9708 0335 7F1E0000 		.4byte	.LASF136
 9709 0339 05       		.byte	0x5
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 188


 9710 033a 00       		.uleb128 0
 9711 033b B71F0000 		.4byte	.LASF137
 9712 033f 05       		.byte	0x5
 9713 0340 00       		.uleb128 0
 9714 0341 330C0000 		.4byte	.LASF138
 9715 0345 05       		.byte	0x5
 9716 0346 00       		.uleb128 0
 9717 0347 FD390000 		.4byte	.LASF139
 9718 034b 05       		.byte	0x5
 9719 034c 00       		.uleb128 0
 9720 034d 17140000 		.4byte	.LASF140
 9721 0351 05       		.byte	0x5
 9722 0352 00       		.uleb128 0
 9723 0353 71170000 		.4byte	.LASF141
 9724 0357 05       		.byte	0x5
 9725 0358 00       		.uleb128 0
 9726 0359 B6290000 		.4byte	.LASF142
 9727 035d 05       		.byte	0x5
 9728 035e 00       		.uleb128 0
 9729 035f 8C290000 		.4byte	.LASF143
 9730 0363 05       		.byte	0x5
 9731 0364 00       		.uleb128 0
 9732 0365 E12E0000 		.4byte	.LASF144
 9733 0369 05       		.byte	0x5
 9734 036a 00       		.uleb128 0
 9735 036b F51C0000 		.4byte	.LASF145
 9736 036f 05       		.byte	0x5
 9737 0370 00       		.uleb128 0
 9738 0371 E9360000 		.4byte	.LASF146
 9739 0375 05       		.byte	0x5
 9740 0376 00       		.uleb128 0
 9741 0377 2A0D0000 		.4byte	.LASF147
 9742 037b 05       		.byte	0x5
 9743 037c 00       		.uleb128 0
 9744 037d 9F1F0000 		.4byte	.LASF148
 9745 0381 05       		.byte	0x5
 9746 0382 00       		.uleb128 0
 9747 0383 81180000 		.4byte	.LASF149
 9748 0387 05       		.byte	0x5
 9749 0388 00       		.uleb128 0
 9750 0389 D9330000 		.4byte	.LASF150
 9751 038d 05       		.byte	0x5
 9752 038e 00       		.uleb128 0
 9753 038f 5C310000 		.4byte	.LASF151
 9754 0393 05       		.byte	0x5
 9755 0394 00       		.uleb128 0
 9756 0395 270F0000 		.4byte	.LASF152
 9757 0399 05       		.byte	0x5
 9758 039a 00       		.uleb128 0
 9759 039b DE160000 		.4byte	.LASF153
 9760 039f 05       		.byte	0x5
 9761 03a0 00       		.uleb128 0
 9762 03a1 8A0C0000 		.4byte	.LASF154
 9763 03a5 05       		.byte	0x5
 9764 03a6 00       		.uleb128 0
 9765 03a7 7E0B0000 		.4byte	.LASF155
 9766 03ab 05       		.byte	0x5
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 189


 9767 03ac 00       		.uleb128 0
 9768 03ad 80330000 		.4byte	.LASF156
 9769 03b1 05       		.byte	0x5
 9770 03b2 00       		.uleb128 0
 9771 03b3 F82F0000 		.4byte	.LASF157
 9772 03b7 05       		.byte	0x5
 9773 03b8 00       		.uleb128 0
 9774 03b9 F8150000 		.4byte	.LASF158
 9775 03bd 05       		.byte	0x5
 9776 03be 00       		.uleb128 0
 9777 03bf F0250000 		.4byte	.LASF159
 9778 03c3 05       		.byte	0x5
 9779 03c4 00       		.uleb128 0
 9780 03c5 48030000 		.4byte	.LASF160
 9781 03c9 05       		.byte	0x5
 9782 03ca 00       		.uleb128 0
 9783 03cb A81B0000 		.4byte	.LASF161
 9784 03cf 05       		.byte	0x5
 9785 03d0 00       		.uleb128 0
 9786 03d1 F22A0000 		.4byte	.LASF162
 9787 03d5 05       		.byte	0x5
 9788 03d6 00       		.uleb128 0
 9789 03d7 6D240000 		.4byte	.LASF163
 9790 03db 05       		.byte	0x5
 9791 03dc 00       		.uleb128 0
 9792 03dd E8390000 		.4byte	.LASF164
 9793 03e1 05       		.byte	0x5
 9794 03e2 00       		.uleb128 0
 9795 03e3 A81E0000 		.4byte	.LASF165
 9796 03e7 05       		.byte	0x5
 9797 03e8 00       		.uleb128 0
 9798 03e9 8F120000 		.4byte	.LASF166
 9799 03ed 05       		.byte	0x5
 9800 03ee 00       		.uleb128 0
 9801 03ef D4050000 		.4byte	.LASF167
 9802 03f3 05       		.byte	0x5
 9803 03f4 00       		.uleb128 0
 9804 03f5 361B0000 		.4byte	.LASF168
 9805 03f9 05       		.byte	0x5
 9806 03fa 00       		.uleb128 0
 9807 03fb 6C030000 		.4byte	.LASF169
 9808 03ff 05       		.byte	0x5
 9809 0400 00       		.uleb128 0
 9810 0401 B3170000 		.4byte	.LASF170
 9811 0405 05       		.byte	0x5
 9812 0406 00       		.uleb128 0
 9813 0407 8A1F0000 		.4byte	.LASF171
 9814 040b 05       		.byte	0x5
 9815 040c 00       		.uleb128 0
 9816 040d D6290000 		.4byte	.LASF172
 9817 0411 05       		.byte	0x5
 9818 0412 00       		.uleb128 0
 9819 0413 153A0000 		.4byte	.LASF173
 9820 0417 05       		.byte	0x5
 9821 0418 00       		.uleb128 0
 9822 0419 191A0000 		.4byte	.LASF174
 9823 041d 05       		.byte	0x5
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 190


 9824 041e 00       		.uleb128 0
 9825 041f 19220000 		.4byte	.LASF175
 9826 0423 05       		.byte	0x5
 9827 0424 00       		.uleb128 0
 9828 0425 5E080000 		.4byte	.LASF176
 9829 0429 05       		.byte	0x5
 9830 042a 00       		.uleb128 0
 9831 042b 69320000 		.4byte	.LASF177
 9832 042f 05       		.byte	0x5
 9833 0430 00       		.uleb128 0
 9834 0431 05370000 		.4byte	.LASF178
 9835 0435 05       		.byte	0x5
 9836 0436 00       		.uleb128 0
 9837 0437 FA330000 		.4byte	.LASF179
 9838 043b 05       		.byte	0x5
 9839 043c 00       		.uleb128 0
 9840 043d 680F0000 		.4byte	.LASF180
 9841 0441 05       		.byte	0x5
 9842 0442 00       		.uleb128 0
 9843 0443 9A1D0000 		.4byte	.LASF181
 9844 0447 05       		.byte	0x5
 9845 0448 00       		.uleb128 0
 9846 0449 E7060000 		.4byte	.LASF182
 9847 044d 05       		.byte	0x5
 9848 044e 00       		.uleb128 0
 9849 044f 79220000 		.4byte	.LASF183
 9850 0453 05       		.byte	0x5
 9851 0454 00       		.uleb128 0
 9852 0455 7E2B0000 		.4byte	.LASF184
 9853 0459 05       		.byte	0x5
 9854 045a 00       		.uleb128 0
 9855 045b CE350000 		.4byte	.LASF185
 9856 045f 05       		.byte	0x5
 9857 0460 00       		.uleb128 0
 9858 0461 B7360000 		.4byte	.LASF186
 9859 0465 05       		.byte	0x5
 9860 0466 00       		.uleb128 0
 9861 0467 5C360000 		.4byte	.LASF187
 9862 046b 05       		.byte	0x5
 9863 046c 00       		.uleb128 0
 9864 046d 65290000 		.4byte	.LASF188
 9865 0471 05       		.byte	0x5
 9866 0472 00       		.uleb128 0
 9867 0473 2C1D0000 		.4byte	.LASF189
 9868 0477 05       		.byte	0x5
 9869 0478 00       		.uleb128 0
 9870 0479 7A210000 		.4byte	.LASF190
 9871 047d 05       		.byte	0x5
 9872 047e 00       		.uleb128 0
 9873 047f 08310000 		.4byte	.LASF191
 9874 0483 05       		.byte	0x5
 9875 0484 00       		.uleb128 0
 9876 0485 B1110000 		.4byte	.LASF192
 9877 0489 05       		.byte	0x5
 9878 048a 00       		.uleb128 0
 9879 048b 3B390000 		.4byte	.LASF193
 9880 048f 05       		.byte	0x5
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 191


 9881 0490 00       		.uleb128 0
 9882 0491 D4210000 		.4byte	.LASF194
 9883 0495 05       		.byte	0x5
 9884 0496 00       		.uleb128 0
 9885 0497 C1280000 		.4byte	.LASF195
 9886 049b 05       		.byte	0x5
 9887 049c 00       		.uleb128 0
 9888 049d 02020000 		.4byte	.LASF196
 9889 04a1 05       		.byte	0x5
 9890 04a2 00       		.uleb128 0
 9891 04a3 40180000 		.4byte	.LASF197
 9892 04a7 05       		.byte	0x5
 9893 04a8 00       		.uleb128 0
 9894 04a9 45170000 		.4byte	.LASF198
 9895 04ad 05       		.byte	0x5
 9896 04ae 00       		.uleb128 0
 9897 04af B5080000 		.4byte	.LASF199
 9898 04b3 05       		.byte	0x5
 9899 04b4 00       		.uleb128 0
 9900 04b5 E81A0000 		.4byte	.LASF200
 9901 04b9 05       		.byte	0x5
 9902 04ba 00       		.uleb128 0
 9903 04bb 612F0000 		.4byte	.LASF201
 9904 04bf 05       		.byte	0x5
 9905 04c0 00       		.uleb128 0
 9906 04c1 C70D0000 		.4byte	.LASF202
 9907 04c5 05       		.byte	0x5
 9908 04c6 00       		.uleb128 0
 9909 04c7 06070000 		.4byte	.LASF203
 9910 04cb 05       		.byte	0x5
 9911 04cc 00       		.uleb128 0
 9912 04cd 9D320000 		.4byte	.LASF204
 9913 04d1 05       		.byte	0x5
 9914 04d2 00       		.uleb128 0
 9915 04d3 8D0A0000 		.4byte	.LASF205
 9916 04d7 05       		.byte	0x5
 9917 04d8 00       		.uleb128 0
 9918 04d9 742C0000 		.4byte	.LASF206
 9919 04dd 05       		.byte	0x5
 9920 04de 00       		.uleb128 0
 9921 04df 950B0000 		.4byte	.LASF207
 9922 04e3 05       		.byte	0x5
 9923 04e4 00       		.uleb128 0
 9924 04e5 81000000 		.4byte	.LASF208
 9925 04e9 05       		.byte	0x5
 9926 04ea 00       		.uleb128 0
 9927 04eb 910D0000 		.4byte	.LASF209
 9928 04ef 05       		.byte	0x5
 9929 04f0 00       		.uleb128 0
 9930 04f1 A2390000 		.4byte	.LASF210
 9931 04f5 05       		.byte	0x5
 9932 04f6 00       		.uleb128 0
 9933 04f7 BA090000 		.4byte	.LASF211
 9934 04fb 05       		.byte	0x5
 9935 04fc 00       		.uleb128 0
 9936 04fd 51340000 		.4byte	.LASF212
 9937 0501 05       		.byte	0x5
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 192


 9938 0502 00       		.uleb128 0
 9939 0503 9B140000 		.4byte	.LASF213
 9940 0507 05       		.byte	0x5
 9941 0508 00       		.uleb128 0
 9942 0509 D2000000 		.4byte	.LASF214
 9943 050d 05       		.byte	0x5
 9944 050e 00       		.uleb128 0
 9945 050f DE110000 		.4byte	.LASF215
 9946 0513 05       		.byte	0x5
 9947 0514 00       		.uleb128 0
 9948 0515 FB160000 		.4byte	.LASF216
 9949 0519 05       		.byte	0x5
 9950 051a 00       		.uleb128 0
 9951 051b 44280000 		.4byte	.LASF217
 9952 051f 05       		.byte	0x5
 9953 0520 00       		.uleb128 0
 9954 0521 E1100000 		.4byte	.LASF218
 9955 0525 05       		.byte	0x5
 9956 0526 00       		.uleb128 0
 9957 0527 812F0000 		.4byte	.LASF219
 9958 052b 05       		.byte	0x5
 9959 052c 00       		.uleb128 0
 9960 052d B8390000 		.4byte	.LASF220
 9961 0531 05       		.byte	0x5
 9962 0532 00       		.uleb128 0
 9963 0533 6A180000 		.4byte	.LASF221
 9964 0537 05       		.byte	0x5
 9965 0538 00       		.uleb128 0
 9966 0539 DD0F0000 		.4byte	.LASF222
 9967 053d 05       		.byte	0x5
 9968 053e 00       		.uleb128 0
 9969 053f 0A000000 		.4byte	.LASF223
 9970 0543 05       		.byte	0x5
 9971 0544 00       		.uleb128 0
 9972 0545 251C0000 		.4byte	.LASF224
 9973 0549 05       		.byte	0x5
 9974 054a 00       		.uleb128 0
 9975 054b D61B0000 		.4byte	.LASF225
 9976 054f 05       		.byte	0x5
 9977 0550 00       		.uleb128 0
 9978 0551 29280000 		.4byte	.LASF226
 9979 0555 05       		.byte	0x5
 9980 0556 00       		.uleb128 0
 9981 0557 2F270000 		.4byte	.LASF227
 9982 055b 05       		.byte	0x5
 9983 055c 00       		.uleb128 0
 9984 055d 1B010000 		.4byte	.LASF228
 9985 0561 05       		.byte	0x5
 9986 0562 00       		.uleb128 0
 9987 0563 CF360000 		.4byte	.LASF229
 9988 0567 05       		.byte	0x5
 9989 0568 00       		.uleb128 0
 9990 0569 24000000 		.4byte	.LASF230
 9991 056d 05       		.byte	0x5
 9992 056e 00       		.uleb128 0
 9993 056f 972D0000 		.4byte	.LASF231
 9994 0573 05       		.byte	0x5
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 193


 9995 0574 00       		.uleb128 0
 9996 0575 BF270000 		.4byte	.LASF232
 9997 0579 05       		.byte	0x5
 9998 057a 00       		.uleb128 0
 9999 057b 99330000 		.4byte	.LASF233
 10000 057f 05       		.byte	0x5
 10001 0580 00       		.uleb128 0
 10002 0581 16100000 		.4byte	.LASF234
 10003 0585 05       		.byte	0x5
 10004 0586 00       		.uleb128 0
 10005 0587 B1180000 		.4byte	.LASF235
 10006 058b 05       		.byte	0x5
 10007 058c 00       		.uleb128 0
 10008 058d 9D350000 		.4byte	.LASF236
 10009 0591 05       		.byte	0x5
 10010 0592 00       		.uleb128 0
 10011 0593 31350000 		.4byte	.LASF237
 10012 0597 05       		.byte	0x5
 10013 0598 00       		.uleb128 0
 10014 0599 5D230000 		.4byte	.LASF238
 10015 059d 05       		.byte	0x5
 10016 059e 00       		.uleb128 0
 10017 059f 75300000 		.4byte	.LASF239
 10018 05a3 05       		.byte	0x5
 10019 05a4 00       		.uleb128 0
 10020 05a5 05130000 		.4byte	.LASF240
 10021 05a9 05       		.byte	0x5
 10022 05aa 00       		.uleb128 0
 10023 05ab 140D0000 		.4byte	.LASF241
 10024 05af 05       		.byte	0x5
 10025 05b0 00       		.uleb128 0
 10026 05b1 841A0000 		.4byte	.LASF242
 10027 05b5 05       		.byte	0x5
 10028 05b6 00       		.uleb128 0
 10029 05b7 CE060000 		.4byte	.LASF243
 10030 05bb 05       		.byte	0x5
 10031 05bc 00       		.uleb128 0
 10032 05bd 8E080000 		.4byte	.LASF244
 10033 05c1 05       		.byte	0x5
 10034 05c2 00       		.uleb128 0
 10035 05c3 11340000 		.4byte	.LASF245
 10036 05c7 05       		.byte	0x5
 10037 05c8 00       		.uleb128 0
 10038 05c9 4A190000 		.4byte	.LASF246
 10039 05cd 05       		.byte	0x5
 10040 05ce 00       		.uleb128 0
 10041 05cf DF260000 		.4byte	.LASF247
 10042 05d3 05       		.byte	0x5
 10043 05d4 00       		.uleb128 0
 10044 05d5 18380000 		.4byte	.LASF248
 10045 05d9 05       		.byte	0x5
 10046 05da 00       		.uleb128 0
 10047 05db 0A110000 		.4byte	.LASF249
 10048 05df 05       		.byte	0x5
 10049 05e0 00       		.uleb128 0
 10050 05e1 48100000 		.4byte	.LASF250
 10051 05e5 05       		.byte	0x5
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 194


 10052 05e6 00       		.uleb128 0
 10053 05e7 3E000000 		.4byte	.LASF251
 10054 05eb 05       		.byte	0x5
 10055 05ec 00       		.uleb128 0
 10056 05ed 2A320000 		.4byte	.LASF252
 10057 05f1 05       		.byte	0x5
 10058 05f2 00       		.uleb128 0
 10059 05f3 99160000 		.4byte	.LASF253
 10060 05f7 05       		.byte	0x5
 10061 05f8 00       		.uleb128 0
 10062 05f9 11280000 		.4byte	.LASF254
 10063 05fd 05       		.byte	0x5
 10064 05fe 00       		.uleb128 0
 10065 05ff AA1C0000 		.4byte	.LASF255
 10066 0603 05       		.byte	0x5
 10067 0604 00       		.uleb128 0
 10068 0605 18360000 		.4byte	.LASF256
 10069 0609 05       		.byte	0x5
 10070 060a 00       		.uleb128 0
 10071 060b 44260000 		.4byte	.LASF257
 10072 060f 05       		.byte	0x5
 10073 0610 00       		.uleb128 0
 10074 0611 D2170000 		.4byte	.LASF258
 10075 0615 05       		.byte	0x5
 10076 0616 00       		.uleb128 0
 10077 0617 3E140000 		.4byte	.LASF259
 10078 061b 05       		.byte	0x5
 10079 061c 00       		.uleb128 0
 10080 061d 0E240000 		.4byte	.LASF260
 10081 0621 05       		.byte	0x5
 10082 0622 00       		.uleb128 0
 10083 0623 47120000 		.4byte	.LASF261
 10084 0627 05       		.byte	0x5
 10085 0628 00       		.uleb128 0
 10086 0629 DF0D0000 		.4byte	.LASF262
 10087 062d 05       		.byte	0x5
 10088 062e 00       		.uleb128 0
 10089 062f 442D0000 		.4byte	.LASF263
 10090 0633 05       		.byte	0x5
 10091 0634 00       		.uleb128 0
 10092 0635 1A370000 		.4byte	.LASF264
 10093 0639 05       		.byte	0x5
 10094 063a 00       		.uleb128 0
 10095 063b B7310000 		.4byte	.LASF265
 10096 063f 05       		.byte	0x5
 10097 0640 00       		.uleb128 0
 10098 0641 A4040000 		.4byte	.LASF266
 10099 0645 05       		.byte	0x5
 10100 0646 00       		.uleb128 0
 10101 0647 2D030000 		.4byte	.LASF267
 10102 064b 05       		.byte	0x5
 10103 064c 00       		.uleb128 0
 10104 064d 2F290000 		.4byte	.LASF268
 10105 0651 05       		.byte	0x5
 10106 0652 00       		.uleb128 0
 10107 0653 3E330000 		.4byte	.LASF269
 10108 0657 05       		.byte	0x5
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 195


 10109 0658 00       		.uleb128 0
 10110 0659 69210000 		.4byte	.LASF270
 10111 065d 05       		.byte	0x5
 10112 065e 00       		.uleb128 0
 10113 065f 30110000 		.4byte	.LASF271
 10114 0663 05       		.byte	0x5
 10115 0664 00       		.uleb128 0
 10116 0665 C8340000 		.4byte	.LASF272
 10117 0669 05       		.byte	0x5
 10118 066a 00       		.uleb128 0
 10119 066b 9C2E0000 		.4byte	.LASF273
 10120 066f 05       		.byte	0x5
 10121 0670 00       		.uleb128 0
 10122 0671 94150000 		.4byte	.LASF274
 10123 0675 05       		.byte	0x5
 10124 0676 00       		.uleb128 0
 10125 0677 6F000000 		.4byte	.LASF275
 10126 067b 05       		.byte	0x5
 10127 067c 00       		.uleb128 0
 10128 067d 34210000 		.4byte	.LASF276
 10129 0681 05       		.byte	0x5
 10130 0682 00       		.uleb128 0
 10131 0683 D32B0000 		.4byte	.LASF277
 10132 0687 05       		.byte	0x5
 10133 0688 00       		.uleb128 0
 10134 0689 741B0000 		.4byte	.LASF278
 10135 068d 05       		.byte	0x5
 10136 068e 00       		.uleb128 0
 10137 068f A01A0000 		.4byte	.LASF279
 10138 0693 05       		.byte	0x5
 10139 0694 00       		.uleb128 0
 10140 0695 D0080000 		.4byte	.LASF280
 10141 0699 05       		.byte	0x5
 10142 069a 00       		.uleb128 0
 10143 069b FE030000 		.4byte	.LASF281
 10144 069f 05       		.byte	0x5
 10145 06a0 00       		.uleb128 0
 10146 06a1 82370000 		.4byte	.LASF282
 10147 06a5 05       		.byte	0x5
 10148 06a6 00       		.uleb128 0
 10149 06a7 9A0F0000 		.4byte	.LASF283
 10150 06ab 05       		.byte	0x5
 10151 06ac 00       		.uleb128 0
 10152 06ad 18200000 		.4byte	.LASF284
 10153 06b1 05       		.byte	0x5
 10154 06b2 00       		.uleb128 0
 10155 06b3 A90E0000 		.4byte	.LASF285
 10156 06b7 05       		.byte	0x5
 10157 06b8 00       		.uleb128 0
 10158 06b9 C7160000 		.4byte	.LASF286
 10159 06bd 05       		.byte	0x5
 10160 06be 00       		.uleb128 0
 10161 06bf 2F2C0000 		.4byte	.LASF287
 10162 06c3 05       		.byte	0x5
 10163 06c4 00       		.uleb128 0
 10164 06c5 6C0E0000 		.4byte	.LASF288
 10165 06c9 05       		.byte	0x5
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 196


 10166 06ca 00       		.uleb128 0
 10167 06cb 77190000 		.4byte	.LASF289
 10168 06cf 05       		.byte	0x5
 10169 06d0 00       		.uleb128 0
 10170 06d1 57040000 		.4byte	.LASF290
 10171 06d5 05       		.byte	0x5
 10172 06d6 00       		.uleb128 0
 10173 06d7 DE380000 		.4byte	.LASF291
 10174 06db 05       		.byte	0x5
 10175 06dc 00       		.uleb128 0
 10176 06dd E00B0000 		.4byte	.LASF292
 10177 06e1 05       		.byte	0x5
 10178 06e2 00       		.uleb128 0
 10179 06e3 92230000 		.4byte	.LASF293
 10180 06e7 05       		.byte	0x5
 10181 06e8 00       		.uleb128 0
 10182 06e9 A2220000 		.4byte	.LASF294
 10183 06ed 05       		.byte	0x5
 10184 06ee 00       		.uleb128 0
 10185 06ef 83090000 		.4byte	.LASF295
 10186 06f3 05       		.byte	0x5
 10187 06f4 00       		.uleb128 0
 10188 06f5 4F0F0000 		.4byte	.LASF296
 10189 06f9 05       		.byte	0x5
 10190 06fa 00       		.uleb128 0
 10191 06fb D00E0000 		.4byte	.LASF297
 10192 06ff 05       		.byte	0x5
 10193 0700 00       		.uleb128 0
 10194 0701 1A390000 		.4byte	.LASF298
 10195 0705 05       		.byte	0x5
 10196 0706 00       		.uleb128 0
 10197 0707 67100000 		.4byte	.LASF299
 10198 070b 05       		.byte	0x5
 10199 070c 00       		.uleb128 0
 10200 070d 3F340000 		.4byte	.LASF300
 10201 0711 05       		.byte	0x5
 10202 0712 00       		.uleb128 0
 10203 0713 350B0000 		.4byte	.LASF301
 10204 0717 05       		.byte	0x5
 10205 0718 00       		.uleb128 0
 10206 0719 18020000 		.4byte	.LASF302
 10207 071d 05       		.byte	0x5
 10208 071e 00       		.uleb128 0
 10209 071f F1140000 		.4byte	.LASF303
 10210 0723 05       		.byte	0x5
 10211 0724 00       		.uleb128 0
 10212 0725 D3220000 		.4byte	.LASF304
 10213 0729 05       		.byte	0x5
 10214 072a 00       		.uleb128 0
 10215 072b B4160000 		.4byte	.LASF305
 10216 072f 05       		.byte	0x5
 10217 0730 00       		.uleb128 0
 10218 0731 88310000 		.4byte	.LASF306
 10219 0735 05       		.byte	0x5
 10220 0736 00       		.uleb128 0
 10221 0737 D2120000 		.4byte	.LASF307
 10222 073b 05       		.byte	0x5
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 197


 10223 073c 00       		.uleb128 0
 10224 073d 3A0D0000 		.4byte	.LASF308
 10225 0741 05       		.byte	0x5
 10226 0742 00       		.uleb128 0
 10227 0743 D4200000 		.4byte	.LASF309
 10228 0747 05       		.byte	0x5
 10229 0748 00       		.uleb128 0
 10230 0749 48150000 		.4byte	.LASF310
 10231 074d 05       		.byte	0x5
 10232 074e 00       		.uleb128 0
 10233 074f 51200000 		.4byte	.LASF311
 10234 0753 05       		.byte	0x5
 10235 0754 00       		.uleb128 0
 10236 0755 F72D0000 		.4byte	.LASF312
 10237 0759 05       		.byte	0x5
 10238 075a 00       		.uleb128 0
 10239 075b E81B0000 		.4byte	.LASF313
 10240 075f 05       		.byte	0x5
 10241 0760 00       		.uleb128 0
 10242 0761 461A0000 		.4byte	.LASF314
 10243 0765 05       		.byte	0x5
 10244 0766 00       		.uleb128 0
 10245 0767 5E170000 		.4byte	.LASF315
 10246 076b 05       		.byte	0x5
 10247 076c 00       		.uleb128 0
 10248 076d 800F0000 		.4byte	.LASF316
 10249 0771 05       		.byte	0x5
 10250 0772 00       		.uleb128 0
 10251 0773 B32B0000 		.4byte	.LASF317
 10252 0777 05       		.byte	0x5
 10253 0778 00       		.uleb128 0
 10254 0779 A4280000 		.4byte	.LASF318
 10255 077d 05       		.byte	0x5
 10256 077e 00       		.uleb128 0
 10257 077f 80050000 		.4byte	.LASF319
 10258 0783 05       		.byte	0x5
 10259 0784 00       		.uleb128 0
 10260 0785 E6130000 		.4byte	.LASF320
 10261 0789 05       		.byte	0x5
 10262 078a 00       		.uleb128 0
 10263 078b 642E0000 		.4byte	.LASF321
 10264 078f 05       		.byte	0x5
 10265 0790 00       		.uleb128 0
 10266 0791 571E0000 		.4byte	.LASF322
 10267 0795 05       		.byte	0x5
 10268 0796 00       		.uleb128 0
 10269 0797 C2260000 		.4byte	.LASF323
 10270 079b 05       		.byte	0x5
 10271 079c 00       		.uleb128 0
 10272 079d F31D0000 		.4byte	.LASF324
 10273 07a1 05       		.byte	0x5
 10274 07a2 00       		.uleb128 0
 10275 07a3 63190000 		.4byte	.LASF325
 10276 07a7 05       		.byte	0x5
 10277 07a8 00       		.uleb128 0
 10278 07a9 670A0000 		.4byte	.LASF326
 10279 07ad 05       		.byte	0x5
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 198


 10280 07ae 00       		.uleb128 0
 10281 07af 372F0000 		.4byte	.LASF327
 10282 07b3 05       		.byte	0x5
 10283 07b4 00       		.uleb128 0
 10284 07b5 B6010000 		.4byte	.LASF328
 10285 07b9 05       		.byte	0x5
 10286 07ba 00       		.uleb128 0
 10287 07bb BC0E0000 		.4byte	.LASF329
 10288 07bf 05       		.byte	0x5
 10289 07c0 00       		.uleb128 0
 10290 07c1 2E070000 		.4byte	.LASF330
 10291 07c5 05       		.byte	0x5
 10292 07c6 00       		.uleb128 0
 10293 07c7 50140000 		.4byte	.LASF331
 10294 07cb 05       		.byte	0x5
 10295 07cc 00       		.uleb128 0
 10296 07cd B2370000 		.4byte	.LASF332
 10297 07d1 05       		.byte	0x5
 10298 07d2 00       		.uleb128 0
 10299 07d3 4D160000 		.4byte	.LASF333
 10300 07d7 05       		.byte	0x5
 10301 07d8 00       		.uleb128 0
 10302 07d9 C22D0000 		.4byte	.LASF334
 10303 07dd 05       		.byte	0x5
 10304 07de 00       		.uleb128 0
 10305 07df 59090000 		.4byte	.LASF335
 10306 07e3 05       		.byte	0x5
 10307 07e4 00       		.uleb128 0
 10308 07e5 D7190000 		.4byte	.LASF336
 10309 07e9 05       		.byte	0x5
 10310 07ea 00       		.uleb128 0
 10311 07eb 3B0A0000 		.4byte	.LASF337
 10312 07ef 05       		.byte	0x5
 10313 07f0 00       		.uleb128 0
 10314 07f1 E9000000 		.4byte	.LASF338
 10315 07f5 05       		.byte	0x5
 10316 07f6 00       		.uleb128 0
 10317 07f7 74370000 		.4byte	.LASF339
 10318 07fb 05       		.byte	0x5
 10319 07fc 00       		.uleb128 0
 10320 07fd 100E0000 		.4byte	.LASF340
 10321 0801 05       		.byte	0x5
 10322 0802 00       		.uleb128 0
 10323 0803 022A0000 		.4byte	.LASF341
 10324 0807 05       		.byte	0x5
 10325 0808 00       		.uleb128 0
 10326 0809 32240000 		.4byte	.LASF342
 10327 080d 05       		.byte	0x5
 10328 080e 00       		.uleb128 0
 10329 080f EA270000 		.4byte	.LASF343
 10330 0813 05       		.byte	0x5
 10331 0814 00       		.uleb128 0
 10332 0815 9D110000 		.4byte	.LASF344
 10333 0819 05       		.byte	0x5
 10334 081a 00       		.uleb128 0
 10335 081b E7240000 		.4byte	.LASF345
 10336 081f 05       		.byte	0x5
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 199


 10337 0820 00       		.uleb128 0
 10338 0821 5B320000 		.4byte	.LASF346
 10339 0825 05       		.byte	0x5
 10340 0826 00       		.uleb128 0
 10341 0827 1F290000 		.4byte	.LASF347
 10342 082b 05       		.byte	0x5
 10343 082c 00       		.uleb128 0
 10344 082d AF1D0000 		.4byte	.LASF348
 10345 0831 05       		.byte	0x5
 10346 0832 00       		.uleb128 0
 10347 0833 76260000 		.4byte	.LASF349
 10348 0837 05       		.byte	0x5
 10349 0838 00       		.uleb128 0
 10350 0839 752A0000 		.4byte	.LASF350
 10351 083d 05       		.byte	0x5
 10352 083e 00       		.uleb128 0
 10353 083f 92220000 		.4byte	.LASF351
 10354 0843 05       		.byte	0x5
 10355 0844 00       		.uleb128 0
 10356 0845 85150000 		.4byte	.LASF352
 10357 0849 05       		.byte	0x5
 10358 084a 00       		.uleb128 0
 10359 084b 6A040000 		.4byte	.LASF353
 10360 084f 05       		.byte	0x5
 10361 0850 00       		.uleb128 0
 10362 0851 85260000 		.4byte	.LASF354
 10363 0855 05       		.byte	0x5
 10364 0856 00       		.uleb128 0
 10365 0857 151C0000 		.4byte	.LASF355
 10366 085b 05       		.byte	0x5
 10367 085c 00       		.uleb128 0
 10368 085d 68020000 		.4byte	.LASF356
 10369 0861 05       		.byte	0x5
 10370 0862 00       		.uleb128 0
 10371 0863 991C0000 		.4byte	.LASF357
 10372 0867 05       		.byte	0x5
 10373 0868 00       		.uleb128 0
 10374 0869 651B0000 		.4byte	.LASF358
 10375 086d 05       		.byte	0x5
 10376 086e 00       		.uleb128 0
 10377 086f 512C0000 		.4byte	.LASF359
 10378 0873 05       		.byte	0x5
 10379 0874 00       		.uleb128 0
 10380 0875 D72D0000 		.4byte	.LASF360
 10381 0879 05       		.byte	0x5
 10382 087a 00       		.uleb128 0
 10383 087b 7D290000 		.4byte	.LASF361
 10384 087f 05       		.byte	0x5
 10385 0880 00       		.uleb128 0
 10386 0881 EF030000 		.4byte	.LASF362
 10387 0885 05       		.byte	0x5
 10388 0886 00       		.uleb128 0
 10389 0887 AB200000 		.4byte	.LASF363
 10390 088b 05       		.byte	0x5
 10391 088c 00       		.uleb128 0
 10392 088d BF130000 		.4byte	.LASF364
 10393 0891 05       		.byte	0x5
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 200


 10394 0892 00       		.uleb128 0
 10395 0893 7E0A0000 		.4byte	.LASF365
 10396 0897 05       		.byte	0x5
 10397 0898 00       		.uleb128 0
 10398 0899 7B350000 		.4byte	.LASF366
 10399 089d 05       		.byte	0x5
 10400 089e 00       		.uleb128 0
 10401 089f BD1D0000 		.4byte	.LASF367
 10402 08a3 05       		.byte	0x5
 10403 08a4 00       		.uleb128 0
 10404 08a5 A7010000 		.4byte	.LASF368
 10405 08a9 05       		.byte	0x5
 10406 08aa 00       		.uleb128 0
 10407 08ab B4190000 		.4byte	.LASF369
 10408 08af 05       		.byte	0x5
 10409 08b0 00       		.uleb128 0
 10410 08b1 65120000 		.4byte	.LASF370
 10411 08b5 05       		.byte	0x5
 10412 08b6 00       		.uleb128 0
 10413 08b7 A2370000 		.4byte	.LASF371
 10414 08bb 05       		.byte	0x5
 10415 08bc 00       		.uleb128 0
 10416 08bd 2B180000 		.4byte	.LASF372
 10417 08c1 05       		.byte	0x5
 10418 08c2 00       		.uleb128 0
 10419 08c3 601A0000 		.4byte	.LASF373
 10420 08c7 05       		.byte	0x5
 10421 08c8 00       		.uleb128 0
 10422 08c9 70330000 		.4byte	.LASF374
 10423 08cd 05       		.byte	0x5
 10424 08ce 00       		.uleb128 0
 10425 08cf 14170000 		.4byte	.LASF375
 10426 08d3 05       		.byte	0x5
 10427 08d4 00       		.uleb128 0
 10428 08d5 56240000 		.4byte	.LASF376
 10429 08d9 05       		.byte	0x5
 10430 08da 00       		.uleb128 0
 10431 08db 72310000 		.4byte	.LASF377
 10432 08df 05       		.byte	0x5
 10433 08e0 00       		.uleb128 0
 10434 08e1 54060000 		.4byte	.LASF378
 10435 08e5 05       		.byte	0x5
 10436 08e6 00       		.uleb128 0
 10437 08e7 CB0A0000 		.4byte	.LASF379
 10438 08eb 05       		.byte	0x5
 10439 08ec 00       		.uleb128 0
 10440 08ed FA350000 		.4byte	.LASF380
 10441 08f1 05       		.byte	0x5
 10442 08f2 00       		.uleb128 0
 10443 08f3 FE1A0000 		.4byte	.LASF381
 10444 08f7 05       		.byte	0x5
 10445 08f8 00       		.uleb128 0
 10446 08f9 9B030000 		.4byte	.LASF382
 10447 08fd 05       		.byte	0x5
 10448 08fe 00       		.uleb128 0
 10449 08ff 0D2C0000 		.4byte	.LASF383
 10450 0903 05       		.byte	0x5
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 201


 10451 0904 00       		.uleb128 0
 10452 0905 29190000 		.4byte	.LASF384
 10453 0909 05       		.byte	0x5
 10454 090a 00       		.uleb128 0
 10455 090b 61050000 		.4byte	.LASF385
 10456 090f 05       		.byte	0x5
 10457 0910 00       		.uleb128 0
 10458 0911 4B110000 		.4byte	.LASF386
 10459 0915 05       		.byte	0x5
 10460 0916 00       		.uleb128 0
 10461 0917 2F380000 		.4byte	.LASF387
 10462 091b 05       		.byte	0x5
 10463 091c 00       		.uleb128 0
 10464 091d D92F0000 		.4byte	.LASF388
 10465 0921 05       		.byte	0x5
 10466 0922 00       		.uleb128 0
 10467 0923 4B010000 		.4byte	.LASF389
 10468 0927 05       		.byte	0x5
 10469 0928 00       		.uleb128 0
 10470 0929 E52C0000 		.4byte	.LASF390
 10471 092d 05       		.byte	0x5
 10472 092e 00       		.uleb128 0
 10473 092f 161E0000 		.4byte	.LASF391
 10474 0933 05       		.byte	0x5
 10475 0934 00       		.uleb128 0
 10476 0935 2B120000 		.4byte	.LASF392
 10477 0939 05       		.byte	0x5
 10478 093a 00       		.uleb128 0
 10479 093b 120A0000 		.4byte	.LASF393
 10480 093f 05       		.byte	0x5
 10481 0940 00       		.uleb128 0
 10482 0941 40020000 		.4byte	.LASF394
 10483 0945 05       		.byte	0x5
 10484 0946 00       		.uleb128 0
 10485 0947 14120000 		.4byte	.LASF395
 10486 094b 06       		.byte	0x6
 10487 094c 00       		.uleb128 0
 10488 094d E3310000 		.4byte	.LASF396
 10489 0951 06       		.byte	0x6
 10490 0952 00       		.uleb128 0
 10491 0953 4B2A0000 		.4byte	.LASF397
 10492 0957 06       		.byte	0x6
 10493 0958 00       		.uleb128 0
 10494 0959 20240000 		.4byte	.LASF398
 10495 095d 06       		.byte	0x6
 10496 095e 00       		.uleb128 0
 10497 095f EC040000 		.4byte	.LASF399
 10498 0963 06       		.byte	0x6
 10499 0964 00       		.uleb128 0
 10500 0965 92130000 		.4byte	.LASF400
 10501 0969 06       		.byte	0x6
 10502 096a 00       		.uleb128 0
 10503 096b BA060000 		.4byte	.LASF401
 10504 096f 06       		.byte	0x6
 10505 0970 00       		.uleb128 0
 10506 0971 A2190000 		.4byte	.LASF402
 10507 0975 06       		.byte	0x6
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 202


 10508 0976 00       		.uleb128 0
 10509 0977 51390000 		.4byte	.LASF403
 10510 097b 06       		.byte	0x6
 10511 097c 00       		.uleb128 0
 10512 097d DC300000 		.4byte	.LASF404
 10513 0981 06       		.byte	0x6
 10514 0982 00       		.uleb128 0
 10515 0983 FB2E0000 		.4byte	.LASF405
 10516 0987 06       		.byte	0x6
 10517 0988 00       		.uleb128 0
 10518 0989 D5010000 		.4byte	.LASF406
 10519 098d 05       		.byte	0x5
 10520 098e 00       		.uleb128 0
 10521 098f E40C0000 		.4byte	.LASF407
 10522 0993 05       		.byte	0x5
 10523 0994 00       		.uleb128 0
 10524 0995 1C040000 		.4byte	.LASF408
 10525 0999 05       		.byte	0x5
 10526 099a 00       		.uleb128 0
 10527 099b CB100000 		.4byte	.LASF409
 10528 099f 05       		.byte	0x5
 10529 09a0 00       		.uleb128 0
 10530 09a1 851D0000 		.4byte	.LASF410
 10531 09a5 05       		.byte	0x5
 10532 09a6 00       		.uleb128 0
 10533 09a7 EF080000 		.4byte	.LASF411
 10534 09ab 05       		.byte	0x5
 10535 09ac 00       		.uleb128 0
 10536 09ad FC340000 		.4byte	.LASF412
 10537 09b1 05       		.byte	0x5
 10538 09b2 00       		.uleb128 0
 10539 09b3 77140000 		.4byte	.LASF413
 10540 09b7 06       		.byte	0x6
 10541 09b8 00       		.uleb128 0
 10542 09b9 8D270000 		.4byte	.LASF414
 10543 09bd 05       		.byte	0x5
 10544 09be 00       		.uleb128 0
 10545 09bf 6D350000 		.4byte	.LASF415
 10546 09c3 05       		.byte	0x5
 10547 09c4 00       		.uleb128 0
 10548 09c5 9A000000 		.4byte	.LASF416
 10549 09c9 05       		.byte	0x5
 10550 09ca 00       		.uleb128 0
 10551 09cb 451B0000 		.4byte	.LASF417
 10552 09cf 05       		.byte	0x5
 10553 09d0 00       		.uleb128 0
 10554 09d1 34130000 		.4byte	.LASF418
 10555 09d5 05       		.byte	0x5
 10556 09d6 00       		.uleb128 0
 10557 09d7 A7150000 		.4byte	.LASF419
 10558 09db 06       		.byte	0x6
 10559 09dc 00       		.uleb128 0
 10560 09dd EC1C0000 		.4byte	.LASF420
 10561 09e1 06       		.byte	0x6
 10562 09e2 00       		.uleb128 0
 10563 09e3 911B0000 		.4byte	.LASF421
 10564 09e7 06       		.byte	0x6
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 203


 10565 09e8 00       		.uleb128 0
 10566 09e9 99360000 		.4byte	.LASF422
 10567 09ed 06       		.byte	0x6
 10568 09ee 00       		.uleb128 0
 10569 09ef 9D250000 		.4byte	.LASF423
 10570 09f3 06       		.byte	0x6
 10571 09f4 00       		.uleb128 0
 10572 09f5 650C0000 		.4byte	.LASF424
 10573 09f9 06       		.byte	0x6
 10574 09fa 00       		.uleb128 0
 10575 09fb B7140000 		.4byte	.LASF425
 10576 09ff 06       		.byte	0x6
 10577 0a00 00       		.uleb128 0
 10578 0a01 C7330000 		.4byte	.LASF426
 10579 0a05 06       		.byte	0x6
 10580 0a06 00       		.uleb128 0
 10581 0a07 E2080000 		.4byte	.LASF427
 10582 0a0b 06       		.byte	0x6
 10583 0a0c 00       		.uleb128 0
 10584 0a0d 9D1E0000 		.4byte	.LASF428
 10585 0a11 06       		.byte	0x6
 10586 0a12 00       		.uleb128 0
 10587 0a13 49210000 		.4byte	.LASF429
 10588 0a17 05       		.byte	0x5
 10589 0a18 00       		.uleb128 0
 10590 0a19 6F360000 		.4byte	.LASF430
 10591 0a1d 05       		.byte	0x5
 10592 0a1e 00       		.uleb128 0
 10593 0a1f 57210000 		.4byte	.LASF431
 10594 0a23 05       		.byte	0x5
 10595 0a24 00       		.uleb128 0
 10596 0a25 D1180000 		.4byte	.LASF432
 10597 0a29 05       		.byte	0x5
 10598 0a2a 00       		.uleb128 0
 10599 0a2b DF1D0000 		.4byte	.LASF433
 10600 0a2f 06       		.byte	0x6
 10601 0a30 00       		.uleb128 0
 10602 0a31 E6200000 		.4byte	.LASF434
 10603 0a35 06       		.byte	0x6
 10604 0a36 00       		.uleb128 0
 10605 0a37 861C0000 		.4byte	.LASF435
 10606 0a3b 06       		.byte	0x6
 10607 0a3c 00       		.uleb128 0
 10608 0a3d 92100000 		.4byte	.LASF436
 10609 0a41 05       		.byte	0x5
 10610 0a42 00       		.uleb128 0
 10611 0a43 41130000 		.4byte	.LASF437
 10612 0a47 05       		.byte	0x5
 10613 0a48 00       		.uleb128 0
 10614 0a49 52360000 		.4byte	.LASF438
 10615 0a4d 05       		.byte	0x5
 10616 0a4e 00       		.uleb128 0
 10617 0a4f 000D0000 		.4byte	.LASF439
 10618 0a53 00       		.byte	0
 10619              		.section	.debug_macro,"G",%progbits,wm4.rfm70.h.40.8a1699fd4d2a98c61874101f853a9e36,comdat
 10620              	.Ldebug_macro2:
 10621 0000 0400     		.2byte	0x4
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 204


 10622 0002 00       		.byte	0
 10623 0003 05       		.byte	0x5
 10624 0004 28       		.uleb128 0x28
 10625 0005 06190000 		.4byte	.LASF440
 10626 0009 05       		.byte	0x5
 10627 000a 59       		.uleb128 0x59
 10628 000b 98270000 		.4byte	.LASF441
 10629 000f 05       		.byte	0x5
 10630 0010 5E       		.uleb128 0x5e
 10631 0011 370F0000 		.4byte	.LASF442
 10632 0015 05       		.byte	0x5
 10633 0016 70       		.uleb128 0x70
 10634 0017 FA320000 		.4byte	.LASF443
 10635 001b 05       		.byte	0x5
 10636 001c 73       		.uleb128 0x73
 10637 001d C2380000 		.4byte	.LASF444
 10638 0021 05       		.byte	0x5
 10639 0022 76       		.uleb128 0x76
 10640 0023 6F010000 		.4byte	.LASF445
 10641 0027 05       		.byte	0x5
 10642 0028 79       		.uleb128 0x79
 10643 0029 EF1E0000 		.4byte	.LASF446
 10644 002d 05       		.byte	0x5
 10645 002e 7C       		.uleb128 0x7c
 10646 002f 3E080000 		.4byte	.LASF447
 10647 0033 05       		.byte	0x5
 10648 0034 7F       		.uleb128 0x7f
 10649 0035 8D300000 		.4byte	.LASF448
 10650 0039 05       		.byte	0x5
 10651 003a 8201     		.uleb128 0x82
 10652 003c 491F0000 		.4byte	.LASF449
 10653 0040 05       		.byte	0x5
 10654 0041 8501     		.uleb128 0x85
 10655 0043 EA010000 		.4byte	.LASF450
 10656 0047 05       		.byte	0x5
 10657 0048 8801     		.uleb128 0x88
 10658 004a 1F160000 		.4byte	.LASF451
 10659 004e 05       		.byte	0x5
 10660 004f 8B01     		.uleb128 0x8b
 10661 0051 B80A0000 		.4byte	.LASF452
 10662 0055 05       		.byte	0x5
 10663 0056 9E01     		.uleb128 0x9e
 10664 0058 B1230000 		.4byte	.LASF453
 10665 005c 05       		.byte	0x5
 10666 005d AA01     		.uleb128 0xaa
 10667 005f 6C160000 		.4byte	.LASF454
 10668 0063 05       		.byte	0x5
 10669 0064 B601     		.uleb128 0xb6
 10670 0066 182F0000 		.4byte	.LASF455
 10671 006a 05       		.byte	0x5
 10672 006b BD01     		.uleb128 0xbd
 10673 006d F80D0000 		.4byte	.LASF456
 10674 0071 05       		.byte	0x5
 10675 0072 C401     		.uleb128 0xc4
 10676 0074 50180000 		.4byte	.LASF457
 10677 0078 05       		.byte	0x5
 10678 0079 C901     		.uleb128 0xc9
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 205


 10679 007b DC140000 		.4byte	.LASF458
 10680 007f 05       		.byte	0x5
 10681 0080 D201     		.uleb128 0xd2
 10682 0082 9F310000 		.4byte	.LASF459
 10683 0086 05       		.byte	0x5
 10684 0087 E501     		.uleb128 0xe5
 10685 0089 40240000 		.4byte	.LASF460
 10686 008d 05       		.byte	0x5
 10687 008e F201     		.uleb128 0xf2
 10688 0090 1C1B0000 		.4byte	.LASF461
 10689 0094 05       		.byte	0x5
 10690 0095 F901     		.uleb128 0xf9
 10691 0097 A7120000 		.4byte	.LASF462
 10692 009b 05       		.byte	0x5
 10693 009c 8002     		.uleb128 0x100
 10694 009e AC0B0000 		.4byte	.LASF463
 10695 00a2 05       		.byte	0x5
 10696 00a3 8702     		.uleb128 0x107
 10697 00a5 C31C0000 		.4byte	.LASF464
 10698 00a9 05       		.byte	0x5
 10699 00aa 8E02     		.uleb128 0x10e
 10700 00ac 24080000 		.4byte	.LASF465
 10701 00b0 05       		.byte	0x5
 10702 00b1 9502     		.uleb128 0x115
 10703 00b3 60250000 		.4byte	.LASF466
 10704 00b7 05       		.byte	0x5
 10705 00b8 9C02     		.uleb128 0x11c
 10706 00ba 75120000 		.4byte	.LASF467
 10707 00be 05       		.byte	0x5
 10708 00bf A302     		.uleb128 0x123
 10709 00c1 E0320000 		.4byte	.LASF468
 10710 00c5 05       		.byte	0x5
 10711 00c6 AA02     		.uleb128 0x12a
 10712 00c8 45310000 		.4byte	.LASF469
 10713 00cc 05       		.byte	0x5
 10714 00cd B002     		.uleb128 0x130
 10715 00cf 31200000 		.4byte	.LASF470
 10716 00d3 05       		.byte	0x5
 10717 00d4 B602     		.uleb128 0x136
 10718 00d6 660B0000 		.4byte	.LASF471
 10719 00da 05       		.byte	0x5
 10720 00db BC02     		.uleb128 0x13c
 10721 00dd 5A150000 		.4byte	.LASF472
 10722 00e1 05       		.byte	0x5
 10723 00e2 C202     		.uleb128 0x142
 10724 00e4 15030000 		.4byte	.LASF473
 10725 00e8 05       		.byte	0x5
 10726 00e9 C802     		.uleb128 0x148
 10727 00eb 4D290000 		.4byte	.LASF474
 10728 00ef 05       		.byte	0x5
 10729 00f0 CE02     		.uleb128 0x14e
 10730 00f2 C92E0000 		.4byte	.LASF475
 10731 00f6 05       		.byte	0x5
 10732 00f7 DA02     		.uleb128 0x15a
 10733 00f9 D41E0000 		.4byte	.LASF476
 10734 00fd 05       		.byte	0x5
 10735 00fe E802     		.uleb128 0x168
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 206


 10736 0100 4F2E0000 		.4byte	.LASF477
 10737 0104 05       		.byte	0x5
 10738 0105 F102     		.uleb128 0x171
 10739 0107 DB2A0000 		.4byte	.LASF478
 10740 010b 00       		.byte	0
 10741              		.section	.debug_line,"",%progbits
 10742              	.Ldebug_line0:
 10743 0000 68040000 		.section	.debug_str,"MS",%progbits,1
 10743      02003500 
 10743      00000201 
 10743      FB0E0D00 
 10743      01010101 
 10744              	.LASF617:
 10745 0000 64697265 		.ascii	"direction\000"
 10745      6374696F 
 10745      6E00
 10746              	.LASF223:
 10747 000a 5F5F464C 		.ascii	"__FLT64_HAS_QUIET_NAN__ 1\000"
 10747      5436345F 
 10747      4841535F 
 10747      51554945 
 10747      545F4E41 
 10748              	.LASF230:
 10749 0024 5F5F464C 		.ascii	"__FLT32X_DECIMAL_DIG__ 17\000"
 10749      54333258 
 10749      5F444543 
 10749      494D414C 
 10749      5F444947 
 10750              	.LASF251:
 10751 003e 5F5F4445 		.ascii	"__DEC64_SUBNORMAL_MIN__ 0.000000000000001E-383DD\000"
 10751      4336345F 
 10751      5355424E 
 10751      4F524D41 
 10751      4C5F4D49 
 10752              	.LASF275:
 10753 006f 5F5F5546 		.ascii	"__UFRACT_IBIT__ 0\000"
 10753      52414354 
 10753      5F494249 
 10753      545F5F20 
 10753      3000
 10754              	.LASF208:
 10755 0081 5F5F464C 		.ascii	"__FLT32_HAS_INFINITY__ 1\000"
 10755      5433325F 
 10755      4841535F 
 10755      494E4649 
 10755      4E495459 
 10756              	.LASF416:
 10757 009a 5F5F4152 		.ascii	"__ARM_ARCH_ISA_THUMB 1\000"
 10757      4D5F4152 
 10757      43485F49 
 10757      53415F54 
 10757      48554D42 
 10758              	.LASF62:
 10759 00b1 5F5F5549 		.ascii	"__UINT_FAST8_TYPE__ unsigned int\000"
 10759      4E545F46 
 10759      41535438 
 10759      5F545950 
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 207


 10759      455F5F20 
 10760              	.LASF214:
 10761 00d2 5F5F464C 		.ascii	"__FLT64_MAX_EXP__ 1024\000"
 10761      5436345F 
 10761      4D41585F 
 10761      4558505F 
 10761      5F203130 
 10762              	.LASF338:
 10763 00e9 5F5F554C 		.ascii	"__ULLACCUM_EPSILON__ 0x1P-32ULLK\000"
 10763      4C414343 
 10763      554D5F45 
 10763      5053494C 
 10763      4F4E5F5F 
 10764              	.LASF523:
 10765 010a 5F5A4E35 		.ascii	"_ZN5rfm704initEv\000"
 10765      72666D37 
 10765      3034696E 
 10765      69744576 
 10765      00
 10766              	.LASF228:
 10767 011b 5F5F464C 		.ascii	"__FLT32X_MAX_EXP__ 1024\000"
 10767      54333258 
 10767      5F4D4158 
 10767      5F455850 
 10767      5F5F2031 
 10768              	.LASF135:
 10769 0133 5F5F494E 		.ascii	"__INT_FAST16_WIDTH__ 32\000"
 10769      545F4641 
 10769      53543136 
 10769      5F574944 
 10769      54485F5F 
 10770              	.LASF389:
 10771 014b 5F5F4743 		.ascii	"__GCC_ATOMIC_TEST_AND_SET_TRUEVAL 1\000"
 10771      435F4154 
 10771      4F4D4943 
 10771      5F544553 
 10771      545F414E 
 10772              	.LASF445:
 10773 016f 52464D37 		.ascii	"RFM70_CMD_FLUSH_TX 0xE1\000"
 10773      305F434D 
 10773      445F464C 
 10773      5553485F 
 10773      54582030 
 10774              	.LASF581:
 10775 0187 5F5A4E35 		.ascii	"_ZN5rfm7018transmit_fifo_fullEv\000"
 10775      72666D37 
 10775      30313874 
 10775      72616E73 
 10775      6D69745F 
 10776              	.LASF368:
 10777 01a7 5F5F5548 		.ascii	"__UHA_IBIT__ 8\000"
 10777      415F4942 
 10777      49545F5F 
 10777      203800
 10778              	.LASF328:
 10779 01b6 5F5F554C 		.ascii	"__ULACCUM_EPSILON__ 0x1P-32ULK\000"
 10779      41434355 
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 208


 10779      4D5F4550 
 10779      53494C4F 
 10779      4E5F5F20 
 10780              	.LASF406:
 10781 01d5 5F5F4152 		.ascii	"__ARM_FEATURE_SIMD32\000"
 10781      4D5F4645 
 10781      41545552 
 10781      455F5349 
 10781      4D443332 
 10782              	.LASF450:
 10783 01ea 52464D37 		.ascii	"RFM70_CMD_ACTIVATE 0x50\000"
 10783      305F434D 
 10783      445F4143 
 10783      54495641 
 10783      54452030 
 10784              	.LASF196:
 10785 0202 5F5F464C 		.ascii	"__FLT32_MANT_DIG__ 24\000"
 10785      5433325F 
 10785      4D414E54 
 10785      5F444947 
 10785      5F5F2032 
 10786              	.LASF302:
 10787 0218 5F5F5341 		.ascii	"__SACCUM_MAX__ 0X7FFFP-7HK\000"
 10787      4343554D 
 10787      5F4D4158 
 10787      5F5F2030 
 10787      58374646 
 10788              	.LASF500:
 10789 0233 6F757470 		.ascii	"output\000"
 10789      757400
 10790              	.LASF524:
 10791 023a 72666D37 		.ascii	"rfm70\000"
 10791      3000
 10792              	.LASF394:
 10793 0240 5F5F5349 		.ascii	"__SIZEOF_WINT_T__ 4\000"
 10793      5A454F46 
 10793      5F57494E 
 10793      545F545F 
 10793      5F203400 
 10794              	.LASF545:
 10795 0254 5F5A4E35 		.ascii	"_ZN5rfm707lna_lowEv\000"
 10795      72666D37 
 10795      30376C6E 
 10795      615F6C6F 
 10795      77457600 
 10796              	.LASF356:
 10797 0268 5F5F5544 		.ascii	"__UDQ_IBIT__ 0\000"
 10797      515F4942 
 10797      49545F5F 
 10797      203000
 10798              	.LASF600:
 10799 0277 42616E6B 		.ascii	"Bank1_Reg14\000"
 10799      315F5265 
 10799      67313400 
 10800              	.LASF613:
 10801 0283 474E5520 		.ascii	"GNU C++98 7.2.0 -mcpu=cortex-m0 -mthumb -mfloat-abi"
 10801      432B2B39 
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 209


 10801      3820372E 
 10801      322E3020 
 10801      2D6D6370 
 10802 02b6 3D736F66 		.ascii	"=soft -g -ggdb3 -Os -std=gnu++98 -ffunction-section"
 10802      74202D67 
 10802      202D6767 
 10802      64623320 
 10802      2D4F7320 
 10803 02e9 73202D66 		.ascii	"s -fdata-sections -fno-rtti -fno-exceptions\000"
 10803      64617461 
 10803      2D736563 
 10803      74696F6E 
 10803      73202D66 
 10804              	.LASF473:
 10805 0315 52464D37 		.ascii	"RFM70_REG_RX_PW_P3 0x14\000"
 10805      305F5245 
 10805      475F5258 
 10805      5F50575F 
 10805      50332030 
 10806              	.LASF267:
 10807 032d 5F5F5553 		.ascii	"__USFRACT_MAX__ 0XFFP-8UHR\000"
 10807      46524143 
 10807      545F4D41 
 10807      585F5F20 
 10807      30584646 
 10808              	.LASF160:
 10809 0348 5F5F464C 		.ascii	"__FLT_MAX__ 3.4028234663852886e+38F\000"
 10809      545F4D41 
 10809      585F5F20 
 10809      332E3430 
 10809      32383233 
 10810              	.LASF169:
 10811 036c 5F5F4442 		.ascii	"__DBL_MIN_EXP__ (-1021)\000"
 10811      4C5F4D49 
 10811      4E5F4558 
 10811      505F5F20 
 10811      282D3130 
 10812              	.LASF91:
 10813 0384 5F5F4C4F 		.ascii	"__LONG_LONG_WIDTH__ 64\000"
 10813      4E475F4C 
 10813      4F4E475F 
 10813      57494454 
 10813      485F5F20 
 10814              	.LASF382:
 10815 039b 5F5F4743 		.ascii	"__GCC_ATOMIC_CHAR16_T_LOCK_FREE 1\000"
 10815      435F4154 
 10815      4F4D4943 
 10815      5F434841 
 10815      5231365F 
 10816              	.LASF69:
 10817 03bd 5F5F6861 		.ascii	"__has_include_next(STR) __has_include_next__(STR)\000"
 10817      735F696E 
 10817      636C7564 
 10817      655F6E65 
 10817      78742853 
 10818              	.LASF362:
 10819 03ef 5F5F5341 		.ascii	"__SA_IBIT__ 16\000"
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 210


 10819      5F494249 
 10819      545F5F20 
 10819      313600
 10820              	.LASF281:
 10821 03fe 5F5F4C46 		.ascii	"__LFRACT_MIN__ (-0.5LR-0.5LR)\000"
 10821      52414354 
 10821      5F4D494E 
 10821      5F5F2028 
 10821      2D302E35 
 10822              	.LASF408:
 10823 041c 5F5F4152 		.ascii	"__ARM_SIZEOF_WCHAR_T 4\000"
 10823      4D5F5349 
 10823      5A454F46 
 10823      5F574348 
 10823      41525F54 
 10824              	.LASF560:
 10825 0433 72657472 		.ascii	"retransmit_count\000"
 10825      616E736D 
 10825      69745F63 
 10825      6F756E74 
 10825      00
 10826              	.LASF564:
 10827 0444 6C6F7374 		.ascii	"lost_packets_reset\000"
 10827      5F706163 
 10827      6B657473 
 10827      5F726573 
 10827      657400
 10828              	.LASF290:
 10829 0457 5F5F4C4C 		.ascii	"__LLFRACT_IBIT__ 0\000"
 10829      46524143 
 10829      545F4942 
 10829      49545F5F 
 10829      203000
 10830              	.LASF353:
 10831 046a 5F5F5553 		.ascii	"__USQ_FBIT__ 32\000"
 10831      515F4642 
 10831      49545F5F 
 10831      20333200 
 10832              	.LASF578:
 10833 047a 7472616E 		.ascii	"transmit_address\000"
 10833      736D6974 
 10833      5F616464 
 10833      72657373 
 10833      00
 10834              	.LASF123:
 10835 048b 5F5F494E 		.ascii	"__INT_LEAST64_WIDTH__ 64\000"
 10835      545F4C45 
 10835      41535436 
 10835      345F5749 
 10835      4454485F 
 10836              	.LASF266:
 10837 04a4 5F5F5553 		.ascii	"__USFRACT_MIN__ 0.0UHR\000"
 10837      46524143 
 10837      545F4D49 
 10837      4E5F5F20 
 10837      302E3055 
 10838              	.LASF562:
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 211


 10839 04bb 6C6F7374 		.ascii	"lost_packets_count\000"
 10839      5F706163 
 10839      6B657473 
 10839      5F636F75 
 10839      6E7400
 10840              	.LASF4:
 10841 04ce 5F5F474E 		.ascii	"__GNUC_MINOR__ 2\000"
 10841      55435F4D 
 10841      494E4F52 
 10841      5F5F2032 
 10841      00
 10842              	.LASF497:
 10843 04df 756E7369 		.ascii	"unsigned int\000"
 10843      676E6564 
 10843      20696E74 
 10843      00
 10844              	.LASF399:
 10845 04ec 5F5F4152 		.ascii	"__ARM_FEATURE_CRYPTO\000"
 10845      4D5F4645 
 10845      41545552 
 10845      455F4352 
 10845      5950544F 
 10846              	.LASF127:
 10847 0501 5F5F5549 		.ascii	"__UINT16_C(c) c\000"
 10847      4E543136 
 10847      5F432863 
 10847      29206300 
 10848              	.LASF23:
 10849 0511 5F5F5349 		.ascii	"__SIZEOF_SIZE_T__ 4\000"
 10849      5A454F46 
 10849      5F53495A 
 10849      455F545F 
 10849      5F203400 
 10850              	.LASF39:
 10851 0525 5F5F4348 		.ascii	"__CHAR16_TYPE__ short unsigned int\000"
 10851      41523136 
 10851      5F545950 
 10851      455F5F20 
 10851      73686F72 
 10852              	.LASF22:
 10853 0548 5F5F5349 		.ascii	"__SIZEOF_LONG_DOUBLE__ 8\000"
 10853      5A454F46 
 10853      5F4C4F4E 
 10853      475F444F 
 10853      55424C45 
 10854              	.LASF385:
 10855 0561 5F5F4743 		.ascii	"__GCC_ATOMIC_SHORT_LOCK_FREE 1\000"
 10855      435F4154 
 10855      4F4D4943 
 10855      5F53484F 
 10855      52545F4C 
 10856              	.LASF319:
 10857 0580 5F5F4C41 		.ascii	"__LACCUM_FBIT__ 31\000"
 10857      4343554D 
 10857      5F464249 
 10857      545F5F20 
 10857      333100
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 212


 10858              	.LASF27:
 10859 0593 5F5F4F52 		.ascii	"__ORDER_BIG_ENDIAN__ 4321\000"
 10859      4445525F 
 10859      4249475F 
 10859      454E4449 
 10859      414E5F5F 
 10860              	.LASF3:
 10861 05ad 5F5F474E 		.ascii	"__GNUC__ 7\000"
 10861      55435F5F 
 10861      203700
 10862              	.LASF546:
 10863 05b8 6C6E615F 		.ascii	"lna_high\000"
 10863      68696768 
 10863      00
 10864              	.LASF570:
 10865 05c1 72656365 		.ascii	"receive_address_p0\000"
 10865      6976655F 
 10865      61646472 
 10865      6573735F 
 10865      703000
 10866              	.LASF167:
 10867 05d4 5F5F4442 		.ascii	"__DBL_MANT_DIG__ 53\000"
 10867      4C5F4D41 
 10867      4E545F44 
 10867      49475F5F 
 10867      20353300 
 10868              	.LASF57:
 10869 05e8 5F5F5549 		.ascii	"__UINT_LEAST64_TYPE__ long long unsigned int\000"
 10869      4E545F4C 
 10869      45415354 
 10869      36345F54 
 10869      5950455F 
 10870              	.LASF78:
 10871 0615 5F5F494E 		.ascii	"__INT_MAX__ 0x7fffffff\000"
 10871      545F4D41 
 10871      585F5F20 
 10871      30783766 
 10871      66666666 
 10872              	.LASF10:
 10873 062c 5F5F4154 		.ascii	"__ATOMIC_RELEASE 3\000"
 10873      4F4D4943 
 10873      5F52454C 
 10873      45415345 
 10873      203300
 10874              	.LASF34:
 10875 063f 5F5F5054 		.ascii	"__PTRDIFF_TYPE__ int\000"
 10875      52444946 
 10875      465F5459 
 10875      50455F5F 
 10875      20696E74 
 10876              	.LASF378:
 10877 0654 5F5F4348 		.ascii	"__CHAR_UNSIGNED__ 1\000"
 10877      41525F55 
 10877      4E534947 
 10877      4E45445F 
 10877      5F203100 
 10878              	.LASF510:
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 213


 10879 0668 5F5A4E34 		.ascii	"_ZN4pins16input_output_pin13direction_setENS_9direc"
 10879      70696E73 
 10879      3136696E 
 10879      7075745F 
 10879      6F757470 
 10880 069b 74696F6E 		.ascii	"tionE\000"
 10880      4500
 10881              	.LASF43:
 10882 06a1 5F5F494E 		.ascii	"__INT16_TYPE__ short int\000"
 10882      5431365F 
 10882      54595045 
 10882      5F5F2073 
 10882      686F7274 
 10883              	.LASF401:
 10884 06ba 5F5F4152 		.ascii	"__ARM_FEATURE_QRDMX\000"
 10884      4D5F4645 
 10884      41545552 
 10884      455F5152 
 10884      444D5800 
 10885              	.LASF243:
 10886 06ce 5F5F4445 		.ascii	"__DEC32_EPSILON__ 1E-6DF\000"
 10886      4333325F 
 10886      45505349 
 10886      4C4F4E5F 
 10886      5F203145 
 10887              	.LASF182:
 10888 06e7 5F5F4C44 		.ascii	"__LDBL_DIG__ 15\000"
 10888      424C5F44 
 10888      49475F5F 
 10888      20313500 
 10889              	.LASF14:
 10890 06f7 5F5F4F50 		.ascii	"__OPTIMIZE__ 1\000"
 10890      54494D49 
 10890      5A455F5F 
 10890      203100
 10891              	.LASF203:
 10892 0706 5F5F464C 		.ascii	"__FLT32_MAX__ 3.4028234663852886e+38F32\000"
 10892      5433325F 
 10892      4D41585F 
 10892      5F20332E 
 10892      34303238 
 10893              	.LASF330:
 10894 072e 5F5F4C4C 		.ascii	"__LLACCUM_IBIT__ 32\000"
 10894      41434355 
 10894      4D5F4942 
 10894      49545F5F 
 10894      20333200 
 10895              	.LASF606:
 10896 0742 6C657665 		.ascii	"level\000"
 10896      6C00
 10897              	.LASF8:
 10898 0748 5F5F4154 		.ascii	"__ATOMIC_SEQ_CST 5\000"
 10898      4F4D4943 
 10898      5F534551 
 10898      5F435354 
 10898      203500
 10899              	.LASF532:
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 214


 10900 075b 62756666 		.ascii	"buffer_write\000"
 10900      65725F77 
 10900      72697465 
 10900      00
 10901              	.LASF503:
 10902 0768 64697265 		.ascii	"direction_set_output\000"
 10902      6374696F 
 10902      6E5F7365 
 10902      745F6F75 
 10902      74707574 
 10903              	.LASF19:
 10904 077d 5F5F5349 		.ascii	"__SIZEOF_SHORT__ 2\000"
 10904      5A454F46 
 10904      5F53484F 
 10904      52545F5F 
 10904      203200
 10905              	.LASF571:
 10906 0790 5F5A4E35 		.ascii	"_ZN5rfm7018receive_address_p0EPKh\000"
 10906      72666D37 
 10906      30313872 
 10906      65636569 
 10906      76655F61 
 10907              	.LASF112:
 10908 07b2 5F5F494E 		.ascii	"__INT_LEAST8_MAX__ 0x7f\000"
 10908      545F4C45 
 10908      41535438 
 10908      5F4D4158 
 10908      5F5F2030 
 10909              	.LASF493:
 10910 07ca 52464D37 		.ascii	"RFM70_SCK(x) sclk.set( (x) )\000"
 10910      305F5343 
 10910      4B287829 
 10910      2073636C 
 10910      6B2E7365 
 10911              	.LASF50:
 10912 07e7 5F5F494E 		.ascii	"__INT_LEAST8_TYPE__ signed char\000"
 10912      545F4C45 
 10912      41535438 
 10912      5F545950 
 10912      455F5F20 
 10913              	.LASF512:
 10914 0807 6D6F7369 		.ascii	"mosi\000"
 10914      00
 10915              	.LASF99:
 10916 080c 5F5F5549 		.ascii	"__UINTMAX_C(c) c ## ULL\000"
 10916      4E544D41 
 10916      585F4328 
 10916      63292063 
 10916      20232320 
 10917              	.LASF465:
 10918 0824 52464D37 		.ascii	"RFM70_REG_RX_ADDR_P2 0x0C\000"
 10918      305F5245 
 10918      475F5258 
 10918      5F414444 
 10918      525F5032 
 10919              	.LASF447:
 10920 083e 52464D37 		.ascii	"RFM70_CMD_REUSE_TX_PL 0xE3\000"
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 215


 10920      305F434D 
 10920      445F5245 
 10920      5553455F 
 10920      54585F50 
 10921              	.LASF612:
 10922 0859 70427566 		.ascii	"pBuf\000"
 10922      00
 10923              	.LASF176:
 10924 085e 5F5F4442 		.ascii	"__DBL_EPSILON__ double(2.2204460492503131e-16L)\000"
 10924      4C5F4550 
 10924      53494C4F 
 10924      4E5F5F20 
 10924      646F7562 
 10925              	.LASF244:
 10926 088e 5F5F4445 		.ascii	"__DEC32_SUBNORMAL_MIN__ 0.000001E-95DF\000"
 10926      4333325F 
 10926      5355424E 
 10926      4F524D41 
 10926      4C5F4D49 
 10927              	.LASF199:
 10928 08b5 5F5F464C 		.ascii	"__FLT32_MIN_10_EXP__ (-37)\000"
 10928      5433325F 
 10928      4D494E5F 
 10928      31305F45 
 10928      58505F5F 
 10929              	.LASF280:
 10930 08d0 5F5F4C46 		.ascii	"__LFRACT_IBIT__ 0\000"
 10930      52414354 
 10930      5F494249 
 10930      545F5F20 
 10930      3000
 10931              	.LASF427:
 10932 08e2 5F5F4152 		.ascii	"__ARM_NEON__\000"
 10932      4D5F4E45 
 10932      4F4E5F5F 
 10932      00
 10933              	.LASF411:
 10934 08ef 5F5F4152 		.ascii	"__ARM_ARCH 6\000"
 10934      4D5F4152 
 10934      43482036 
 10934      00
 10935              	.LASF550:
 10936 08fc 6169725F 		.ascii	"air_data_rate\000"
 10936      64617461 
 10936      5F726174 
 10936      6500
 10937              	.LASF115:
 10938 090a 5F5F494E 		.ascii	"__INT_LEAST16_MAX__ 0x7fff\000"
 10938      545F4C45 
 10938      41535431 
 10938      365F4D41 
 10938      585F5F20 
 10939              	.LASF575:
 10940 0925 5F5A4E35 		.ascii	"_ZN5rfm7018receive_address_pnEhh\000"
 10940      72666D37 
 10940      30313872 
 10940      65636569 
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 216


 10940      76655F61 
 10941              	.LASF76:
 10942 0946 5F5F5343 		.ascii	"__SCHAR_MAX__ 0x7f\000"
 10942      4841525F 
 10942      4D41585F 
 10942      5F203078 
 10942      376600
 10943              	.LASF335:
 10944 0959 5F5F554C 		.ascii	"__ULLACCUM_IBIT__ 32\000"
 10944      4C414343 
 10944      554D5F49 
 10944      4249545F 
 10944      5F203332 
 10945              	.LASF576:
 10946 096e 6368616E 		.ascii	"channel_payload_size\000"
 10946      6E656C5F 
 10946      7061796C 
 10946      6F61645F 
 10946      73697A65 
 10947              	.LASF295:
 10948 0983 5F5F554C 		.ascii	"__ULLFRACT_IBIT__ 0\000"
 10948      4C465241 
 10948      43545F49 
 10948      4249545F 
 10948      5F203000 
 10949              	.LASF577:
 10950 0997 5F5A4E35 		.ascii	"_ZN5rfm7020channel_payload_sizeEhh\000"
 10950      72666D37 
 10950      30323063 
 10950      68616E6E 
 10950      656C5F70 
 10951              	.LASF211:
 10952 09ba 5F5F464C 		.ascii	"__FLT64_DIG__ 15\000"
 10952      5436345F 
 10952      4449475F 
 10952      5F203135 
 10952      00
 10953              	.LASF7:
 10954 09cb 5F5F4154 		.ascii	"__ATOMIC_RELAXED 0\000"
 10954      4F4D4943 
 10954      5F52454C 
 10954      41584544 
 10954      203000
 10955              	.LASF527:
 10956 09de 5F5A4E35 		.ascii	"_ZN5rfm7013register_readEh\000"
 10956      72666D37 
 10956      30313372 
 10956      65676973 
 10956      7465725F 
 10957              	.LASF86:
 10958 09f9 5F5F5349 		.ascii	"__SIZE_MAX__ 0xffffffffU\000"
 10958      5A455F4D 
 10958      41585F5F 
 10958      20307866 
 10958      66666666 
 10959              	.LASF393:
 10960 0a12 5F5F5349 		.ascii	"__SIZEOF_WCHAR_T__ 4\000"
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 217


 10960      5A454F46 
 10960      5F574348 
 10960      41525F54 
 10960      5F5F2034 
 10961              	.LASF504:
 10962 0a27 64697265 		.ascii	"direction_set_input\000"
 10962      6374696F 
 10962      6E5F7365 
 10962      745F696E 
 10962      70757400 
 10963              	.LASF337:
 10964 0a3b 5F5F554C 		.ascii	"__ULLACCUM_MAX__ 0XFFFFFFFFFFFFFFFFP-32ULLK\000"
 10964      4C414343 
 10964      554D5F4D 
 10964      41585F5F 
 10964      20305846 
 10965              	.LASF326:
 10966 0a67 5F5F554C 		.ascii	"__ULACCUM_MIN__ 0.0ULK\000"
 10966      41434355 
 10966      4D5F4D49 
 10966      4E5F5F20 
 10966      302E3055 
 10967              	.LASF365:
 10968 0a7e 5F5F5441 		.ascii	"__TA_FBIT__ 63\000"
 10968      5F464249 
 10968      545F5F20 
 10968      363300
 10969              	.LASF205:
 10970 0a8d 5F5F464C 		.ascii	"__FLT32_EPSILON__ 1.1920928955078125e-7F32\000"
 10970      5433325F 
 10970      45505349 
 10970      4C4F4E5F 
 10970      5F20312E 
 10971              	.LASF452:
 10972 0ab8 52464D37 		.ascii	"RFM70_CMD_NOP 0xFF\000"
 10972      305F434D 
 10972      445F4E4F 
 10972      50203078 
 10972      464600
 10973              	.LASF379:
 10974 0acb 5F5F5743 		.ascii	"__WCHAR_UNSIGNED__ 1\000"
 10974      4841525F 
 10974      554E5349 
 10974      474E4544 
 10974      5F5F2031 
 10975              	.LASF61:
 10976 0ae0 5F5F494E 		.ascii	"__INT_FAST64_TYPE__ long long int\000"
 10976      545F4641 
 10976      53543634 
 10976      5F545950 
 10976      455F5F20 
 10977              	.LASF113:
 10978 0b02 5F5F494E 		.ascii	"__INT8_C(c) c\000"
 10978      54385F43 
 10978      28632920 
 10978      6300
 10979              	.LASF597:
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 218


 10980 0b10 5258305F 		.ascii	"RX0_Address\000"
 10980      41646472 
 10980      65737300 
 10981              	.LASF117:
 10982 0b1c 5F5F494E 		.ascii	"__INT_LEAST16_WIDTH__ 16\000"
 10982      545F4C45 
 10982      41535431 
 10982      365F5749 
 10982      4454485F 
 10983              	.LASF301:
 10984 0b35 5F5F5341 		.ascii	"__SACCUM_MIN__ (-0X1P7HK-0X1P7HK)\000"
 10984      4343554D 
 10984      5F4D494E 
 10984      5F5F2028 
 10984      2D305831 
 10985              	.LASF530:
 10986 0b57 72656769 		.ascii	"register_write\000"
 10986      73746572 
 10986      5F777269 
 10986      746500
 10987              	.LASF471:
 10988 0b66 52464D37 		.ascii	"RFM70_REG_RX_PW_P1 0x12\000"
 10988      305F5245 
 10988      475F5258 
 10988      5F50575F 
 10988      50312030 
 10989              	.LASF155:
 10990 0b7e 5F5F464C 		.ascii	"__FLT_MIN_EXP__ (-125)\000"
 10990      545F4D49 
 10990      4E5F4558 
 10990      505F5F20 
 10990      282D3132 
 10991              	.LASF207:
 10992 0b95 5F5F464C 		.ascii	"__FLT32_HAS_DENORM__ 1\000"
 10992      5433325F 
 10992      4841535F 
 10992      44454E4F 
 10992      524D5F5F 
 10993              	.LASF463:
 10994 0bac 52464D37 		.ascii	"RFM70_REG_RX_ADDR_P0 0x0A\000"
 10994      305F5245 
 10994      475F5258 
 10994      5F414444 
 10994      525F5030 
 10995              	.LASF569:
 10996 0bc6 5F5A4E35 		.ascii	"_ZN5rfm7011pipe_enableEhb\000"
 10996      72666D37 
 10996      30313170 
 10996      6970655F 
 10996      656E6162 
 10997              	.LASF292:
 10998 0be0 5F5F4C4C 		.ascii	"__LLFRACT_MAX__ 0X7FFFFFFFFFFFFFFFP-63LLR\000"
 10998      46524143 
 10998      545F4D41 
 10998      585F5F20 
 10998      30583746 
 10999              	.LASF615:
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 219


 11000 0c0a 433A5C74 		.ascii	"C:\\ti-software\\hwcpp\\attic\\rfm70-lpc1114\000"
 11000      692D736F 
 11000      66747761 
 11000      72655C68 
 11000      77637070 
 11001              	.LASF138:
 11002 0c33 5F5F494E 		.ascii	"__INT_FAST64_MAX__ 0x7fffffffffffffffLL\000"
 11002      545F4641 
 11002      53543634 
 11002      5F4D4158 
 11002      5F5F2030 
 11003              	.LASF502:
 11004 0c5b 696E7075 		.ascii	"input_pin\000"
 11004      745F7069 
 11004      6E00
 11005              	.LASF424:
 11006 0c65 5F5F4152 		.ascii	"__ARM_FEATURE_FP16_SCALAR_ARITHMETIC\000"
 11006      4D5F4645 
 11006      41545552 
 11006      455F4650 
 11006      31365F53 
 11007              	.LASF154:
 11008 0c8a 5F5F464C 		.ascii	"__FLT_DIG__ 6\000"
 11008      545F4449 
 11008      475F5F20 
 11008      3600
 11009              	.LASF134:
 11010 0c98 5F5F494E 		.ascii	"__INT_FAST16_MAX__ 0x7fffffff\000"
 11010      545F4641 
 11010      53543136 
 11010      5F4D4158 
 11010      5F5F2030 
 11011              	.LASF580:
 11012 0cb6 7472616E 		.ascii	"transmit_fifo_full\000"
 11012      736D6974 
 11012      5F666966 
 11012      6F5F6675 
 11012      6C6C00
 11013              	.LASF567:
 11014 0cc9 5F5A4E35 		.ascii	"_ZN5rfm7012pipe_autoackEhb\000"
 11014      72666D37 
 11014      30313270 
 11014      6970655F 
 11014      6175746F 
 11015              	.LASF407:
 11016 0ce4 5F5F4152 		.ascii	"__ARM_SIZEOF_MINIMAL_ENUM 1\000"
 11016      4D5F5349 
 11016      5A454F46 
 11016      5F4D494E 
 11016      494D414C 
 11017              	.LASF439:
 11018 0d00 5F5F5553 		.ascii	"__USES_INITFINI__ 1\000"
 11018      45535F49 
 11018      4E495446 
 11018      494E495F 
 11018      5F203100 
 11019              	.LASF241:
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 220


 11020 0d14 5F5F4445 		.ascii	"__DEC32_MIN__ 1E-95DF\000"
 11020      4333325F 
 11020      4D494E5F 
 11020      5F203145 
 11020      2D393544 
 11021              	.LASF147:
 11022 0d2a 5F5F4743 		.ascii	"__GCC_IEC_559 0\000"
 11022      435F4945 
 11022      435F3535 
 11022      39203000 
 11023              	.LASF308:
 11024 0d3a 5F5F5553 		.ascii	"__USACCUM_EPSILON__ 0x1P-8UHK\000"
 11024      41434355 
 11024      4D5F4550 
 11024      53494C4F 
 11024      4E5F5F20 
 11025              	.LASF561:
 11026 0d58 5F5A4E35 		.ascii	"_ZN5rfm7016retransmit_countEv\000"
 11026      72666D37 
 11026      30313672 
 11026      65747261 
 11026      6E736D69 
 11027              	.LASF85:
 11028 0d76 5F5F5054 		.ascii	"__PTRDIFF_MAX__ 0x7fffffff\000"
 11028      52444946 
 11028      465F4D41 
 11028      585F5F20 
 11028      30783766 
 11029              	.LASF209:
 11030 0d91 5F5F464C 		.ascii	"__FLT32_HAS_QUIET_NAN__ 1\000"
 11030      5433325F 
 11030      4841535F 
 11030      51554945 
 11030      545F4E41 
 11031              	.LASF126:
 11032 0dab 5F5F5549 		.ascii	"__UINT_LEAST16_MAX__ 0xffff\000"
 11032      4E545F4C 
 11032      45415354 
 11032      31365F4D 
 11032      41585F5F 
 11033              	.LASF202:
 11034 0dc7 5F5F464C 		.ascii	"__FLT32_DECIMAL_DIG__ 9\000"
 11034      5433325F 
 11034      44454349 
 11034      4D414C5F 
 11034      4449475F 
 11035              	.LASF262:
 11036 0ddf 5F5F5346 		.ascii	"__SFRACT_MAX__ 0X7FP-7HR\000"
 11036      52414354 
 11036      5F4D4158 
 11036      5F5F2030 
 11036      58374650 
 11037              	.LASF456:
 11038 0df8 52464D37 		.ascii	"RFM70_REG_SETUP_AW 0x03\000"
 11038      305F5245 
 11038      475F5345 
 11038      5455505F 
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 221


 11038      41572030 
 11039              	.LASF340:
 11040 0e10 5F5F5151 		.ascii	"__QQ_IBIT__ 0\000"
 11040      5F494249 
 11040      545F5F20 
 11040      3000
 11041              	.LASF124:
 11042 0e1e 5F5F5549 		.ascii	"__UINT_LEAST8_MAX__ 0xff\000"
 11042      4E545F4C 
 11042      45415354 
 11042      385F4D41 
 11042      585F5F20 
 11043              	.LASF107:
 11044 0e37 5F5F494E 		.ascii	"__INT64_MAX__ 0x7fffffffffffffffLL\000"
 11044      5436345F 
 11044      4D41585F 
 11044      5F203078 
 11044      37666666 
 11045              	.LASF104:
 11046 0e5a 5F5F494E 		.ascii	"__INT8_MAX__ 0x7f\000"
 11046      54385F4D 
 11046      41585F5F 
 11046      20307837 
 11046      6600
 11047              	.LASF288:
 11048 0e6c 5F5F554C 		.ascii	"__ULFRACT_EPSILON__ 0x1P-32ULR\000"
 11048      46524143 
 11048      545F4550 
 11048      53494C4F 
 11048      4E5F5F20 
 11049              	.LASF52:
 11050 0e8b 5F5F494E 		.ascii	"__INT_LEAST32_TYPE__ long int\000"
 11050      545F4C45 
 11050      41535433 
 11050      325F5459 
 11050      50455F5F 
 11051              	.LASF285:
 11052 0ea9 5F5F554C 		.ascii	"__ULFRACT_IBIT__ 0\000"
 11052      46524143 
 11052      545F4942 
 11052      49545F5F 
 11052      203000
 11053              	.LASF329:
 11054 0ebc 5F5F4C4C 		.ascii	"__LLACCUM_FBIT__ 31\000"
 11054      41434355 
 11054      4D5F4642 
 11054      49545F5F 
 11054      20333100 
 11055              	.LASF297:
 11056 0ed0 5F5F554C 		.ascii	"__ULLFRACT_MAX__ 0XFFFFFFFFFFFFFFFFP-64ULLR\000"
 11056      4C465241 
 11056      43545F4D 
 11056      41585F5F 
 11056      20305846 
 11057              	.LASF130:
 11058 0efc 5F5F5549 		.ascii	"__UINT_LEAST64_MAX__ 0xffffffffffffffffULL\000"
 11058      4E545F4C 
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 222


 11058      45415354 
 11058      36345F4D 
 11058      41585F5F 
 11059              	.LASF152:
 11060 0f27 5F5F464C 		.ascii	"__FLT_RADIX__ 2\000"
 11060      545F5241 
 11060      4449585F 
 11060      5F203200 
 11061              	.LASF442:
 11062 0f37 52464D37 		.ascii	"RFM70_MAX_PACKET_LEN 32\000"
 11062      305F4D41 
 11062      585F5041 
 11062      434B4554 
 11062      5F4C454E 
 11063              	.LASF296:
 11064 0f4f 5F5F554C 		.ascii	"__ULLFRACT_MIN__ 0.0ULLR\000"
 11064      4C465241 
 11064      43545F4D 
 11064      494E5F5F 
 11064      20302E30 
 11065              	.LASF180:
 11066 0f68 5F5F4442 		.ascii	"__DBL_HAS_QUIET_NAN__ 1\000"
 11066      4C5F4841 
 11066      535F5155 
 11066      4945545F 
 11066      4E414E5F 
 11067              	.LASF316:
 11068 0f80 5F5F5541 		.ascii	"__UACCUM_MIN__ 0.0UK\000"
 11068      4343554D 
 11068      5F4D494E 
 11068      5F5F2030 
 11068      2E30554B 
 11069              	.LASF511:
 11070 0f95 73636C6B 		.ascii	"sclk\000"
 11070      00
 11071              	.LASF283:
 11072 0f9a 5F5F4C46 		.ascii	"__LFRACT_EPSILON__ 0x1P-31LR\000"
 11072      52414354 
 11072      5F455053 
 11072      494C4F4E 
 11072      5F5F2030 
 11073              	.LASF58:
 11074 0fb7 5F5F494E 		.ascii	"__INT_FAST8_TYPE__ int\000"
 11074      545F4641 
 11074      5354385F 
 11074      54595045 
 11074      5F5F2069 
 11075              	.LASF542:
 11076 0fce 6D6F6465 		.ascii	"mode_powerdown\000"
 11076      5F706F77 
 11076      6572646F 
 11076      776E00
 11077              	.LASF222:
 11078 0fdd 5F5F464C 		.ascii	"__FLT64_HAS_INFINITY__ 1\000"
 11078      5436345F 
 11078      4841535F 
 11078      494E4649 
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 223


 11078      4E495459 
 11079              	.LASF563:
 11080 0ff6 5F5A4E35 		.ascii	"_ZN5rfm7018lost_packets_countEv\000"
 11080      72666D37 
 11080      3031386C 
 11080      6F73745F 
 11080      7061636B 
 11081              	.LASF234:
 11082 1016 5F5F464C 		.ascii	"__FLT32X_DENORM_MIN__ 4.9406564584124654e-324F32x\000"
 11082      54333258 
 11082      5F44454E 
 11082      4F524D5F 
 11082      4D494E5F 
 11083              	.LASF250:
 11084 1048 5F5F4445 		.ascii	"__DEC64_EPSILON__ 1E-15DD\000"
 11084      4336345F 
 11084      45505349 
 11084      4C4F4E5F 
 11084      5F203145 
 11085              	.LASF602:
 11086 1062 70697065 		.ascii	"pipe\000"
 11086      00
 11087              	.LASF299:
 11088 1067 5F5F5341 		.ascii	"__SACCUM_FBIT__ 7\000"
 11088      4343554D 
 11088      5F464249 
 11088      545F5F20 
 11088      3700
 11089              	.LASF481:
 11090 1079 52464D37 		.ascii	"RFM70_CMD_WRITE_REG 0x20\000"
 11090      305F434D 
 11090      445F5752 
 11090      4954455F 
 11090      52454720 
 11091              	.LASF436:
 11092 1092 5F5F4152 		.ascii	"__ARM_ASM_SYNTAX_UNIFIED__\000"
 11092      4D5F4153 
 11092      4D5F5359 
 11092      4E544158 
 11092      5F554E49 
 11093              	.LASF494:
 11094 10ad 52464D37 		.ascii	"RFM70_MOSI(x) mosi.set( (x) )\000"
 11094      305F4D4F 
 11094      53492878 
 11094      29206D6F 
 11094      73692E73 
 11095              	.LASF409:
 11096 10cb 5F5F4152 		.ascii	"__ARM_ARCH_PROFILE 77\000"
 11096      4D5F4152 
 11096      43485F50 
 11096      524F4649 
 11096      4C452037 
 11097              	.LASF218:
 11098 10e1 5F5F464C 		.ascii	"__FLT64_MIN__ 2.2250738585072014e-308F64\000"
 11098      5436345F 
 11098      4D494E5F 
 11098      5F20322E 
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 224


 11098      32323530 
 11099              	.LASF249:
 11100 110a 5F5F4445 		.ascii	"__DEC64_MAX__ 9.999999999999999E384DD\000"
 11100      4336345F 
 11100      4D41585F 
 11100      5F20392E 
 11100      39393939 
 11101              	.LASF271:
 11102 1130 5F5F4652 		.ascii	"__FRACT_MIN__ (-0.5R-0.5R)\000"
 11102      4143545F 
 11102      4D494E5F 
 11102      5F20282D 
 11102      302E3552 
 11103              	.LASF386:
 11104 114b 5F5F4743 		.ascii	"__GCC_ATOMIC_INT_LOCK_FREE 1\000"
 11104      435F4154 
 11104      4F4D4943 
 11104      5F494E54 
 11104      5F4C4F43 
 11105              	.LASF96:
 11106 1168 5F5F494E 		.ascii	"__INTMAX_MAX__ 0x7fffffffffffffffLL\000"
 11106      544D4158 
 11106      5F4D4158 
 11106      5F5F2030 
 11106      78376666 
 11107              	.LASF82:
 11108 118c 5F5F5743 		.ascii	"__WCHAR_MIN__ 0U\000"
 11108      4841525F 
 11108      4D494E5F 
 11108      5F203055 
 11108      00
 11109              	.LASF344:
 11110 119d 5F5F5351 		.ascii	"__SQ_IBIT__ 0\000"
 11110      5F494249 
 11110      545F5F20 
 11110      3000
 11111              	.LASF610:
 11112 11ab 76616C75 		.ascii	"value\000"
 11112      6500
 11113              	.LASF192:
 11114 11b1 5F5F4C44 		.ascii	"__LDBL_DENORM_MIN__ 4.9406564584124654e-324L\000"
 11114      424C5F44 
 11114      454E4F52 
 11114      4D5F4D49 
 11114      4E5F5F20 
 11115              	.LASF215:
 11116 11de 5F5F464C 		.ascii	"__FLT64_MAX_10_EXP__ 308\000"
 11116      5436345F 
 11116      4D41585F 
 11116      31305F45 
 11116      58505F5F 
 11117              	.LASF26:
 11118 11f7 5F5F4F52 		.ascii	"__ORDER_LITTLE_ENDIAN__ 1234\000"
 11118      4445525F 
 11118      4C495454 
 11118      4C455F45 
 11118      4E444941 
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 225


 11119              	.LASF395:
 11120 1214 5F5F5349 		.ascii	"__SIZEOF_PTRDIFF_T__ 4\000"
 11120      5A454F46 
 11120      5F505452 
 11120      44494646 
 11120      5F545F5F 
 11121              	.LASF392:
 11122 122b 5F5F5052 		.ascii	"__PRAGMA_REDEFINE_EXTNAME 1\000"
 11122      41474D41 
 11122      5F524544 
 11122      4546494E 
 11122      455F4558 
 11123              	.LASF261:
 11124 1247 5F5F5346 		.ascii	"__SFRACT_MIN__ (-0.5HR-0.5HR)\000"
 11124      52414354 
 11124      5F4D494E 
 11124      5F5F2028 
 11124      2D302E35 
 11125              	.LASF370:
 11126 1265 5F5F5553 		.ascii	"__USA_IBIT__ 16\000"
 11126      415F4942 
 11126      49545F5F 
 11126      20313600 
 11127              	.LASF467:
 11128 1275 52464D37 		.ascii	"RFM70_REG_RX_ADDR_P4 0x0E\000"
 11128      305F5245 
 11128      475F5258 
 11128      5F414444 
 11128      525F5034 
 11129              	.LASF166:
 11130 128f 5F5F464C 		.ascii	"__FLT_HAS_QUIET_NAN__ 1\000"
 11130      545F4841 
 11130      535F5155 
 11130      4945545F 
 11130      4E414E5F 
 11131              	.LASF462:
 11132 12a7 52464D37 		.ascii	"RFM70_REG_CD 0x09\000"
 11132      305F5245 
 11132      475F4344 
 11132      20307830 
 11132      3900
 11133              	.LASF489:
 11134 12b9 4649464F 		.ascii	"FIFO_STATUS_RX_FULL 0x02\000"
 11134      5F535441 
 11134      5455535F 
 11134      52585F46 
 11134      554C4C20 
 11135              	.LASF307:
 11136 12d2 5F5F5553 		.ascii	"__USACCUM_MAX__ 0XFFFFP-8UHK\000"
 11136      41434355 
 11136      4D5F4D41 
 11136      585F5F20 
 11136      30584646 
 11137              	.LASF129:
 11138 12ef 5F5F5549 		.ascii	"__UINT32_C(c) c ## UL\000"
 11138      4E543332 
 11138      5F432863 
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 226


 11138      29206320 
 11138      23232055 
 11139              	.LASF240:
 11140 1305 5F5F4445 		.ascii	"__DEC32_MAX_EXP__ 97\000"
 11140      4333325F 
 11140      4D41585F 
 11140      4558505F 
 11140      5F203937 
 11141              	.LASF558:
 11142 131a 72657472 		.ascii	"retransmit_delay_attempts\000"
 11142      616E736D 
 11142      69745F64 
 11142      656C6179 
 11142      5F617474 
 11143              	.LASF418:
 11144 1334 5F5F534F 		.ascii	"__SOFTFP__ 1\000"
 11144      46544650 
 11144      5F5F2031 
 11144      00
 11145              	.LASF437:
 11146 1341 5F5F4758 		.ascii	"__GXX_TYPEINFO_EQUALITY_INLINE 0\000"
 11146      585F5459 
 11146      5045494E 
 11146      464F5F45 
 11146      5155414C 
 11147              	.LASF496:
 11148 1362 42414E4B 		.ascii	"BANK0_ENTRIES 10\000"
 11148      305F454E 
 11148      54524945 
 11148      53203130 
 11148      00
 11149              	.LASF584:
 11150 1373 7472616E 		.ascii	"transmit_message\000"
 11150      736D6974 
 11150      5F6D6573 
 11150      73616765 
 11150      00
 11151              	.LASF525:
 11152 1384 72656769 		.ascii	"register_read\000"
 11152      73746572 
 11152      5F726561 
 11152      6400
 11153              	.LASF400:
 11154 1392 5F5F4152 		.ascii	"__ARM_FEATURE_UNALIGNED\000"
 11154      4D5F4645 
 11154      41545552 
 11154      455F554E 
 11154      414C4947 
 11155              	.LASF556:
 11156 13aa 706F7765 		.ascii	"power\000"
 11156      7200
 11157              	.LASF70:
 11158 13b0 5F5F4758 		.ascii	"__GXX_WEAK__ 1\000"
 11158      585F5745 
 11158      414B5F5F 
 11158      203100
 11159              	.LASF364:
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 227


 11160 13bf 5F5F4441 		.ascii	"__DA_IBIT__ 32\000"
 11160      5F494249 
 11160      545F5F20 
 11160      333200
 11161              	.LASF25:
 11162 13ce 5F5F4249 		.ascii	"__BIGGEST_ALIGNMENT__ 8\000"
 11162      47474553 
 11162      545F414C 
 11162      49474E4D 
 11162      454E545F 
 11163              	.LASF320:
 11164 13e6 5F5F4C41 		.ascii	"__LACCUM_IBIT__ 32\000"
 11164      4343554D 
 11164      5F494249 
 11164      545F5F20 
 11164      333200
 11165              	.LASF101:
 11166 13f9 5F5F5349 		.ascii	"__SIG_ATOMIC_MAX__ 0x7fffffff\000"
 11166      475F4154 
 11166      4F4D4943 
 11166      5F4D4158 
 11166      5F5F2030 
 11167              	.LASF140:
 11168 1417 5F5F5549 		.ascii	"__UINT_FAST8_MAX__ 0xffffffffU\000"
 11168      4E545F46 
 11168      41535438 
 11168      5F4D4158 
 11168      5F5F2030 
 11169              	.LASF515:
 11170 1436 77616974 		.ascii	"wait_us\000"
 11170      5F757300 
 11171              	.LASF259:
 11172 143e 5F5F5346 		.ascii	"__SFRACT_FBIT__ 7\000"
 11172      52414354 
 11172      5F464249 
 11172      545F5F20 
 11172      3700
 11173              	.LASF331:
 11174 1450 5F5F4C4C 		.ascii	"__LLACCUM_MIN__ (-0X1P31LLK-0X1P31LLK)\000"
 11174      41434355 
 11174      4D5F4D49 
 11174      4E5F5F20 
 11174      282D3058 
 11175              	.LASF413:
 11176 1477 5F5F7468 		.ascii	"__thumb__ 1\000"
 11176      756D625F 
 11176      5F203100 
 11177              	.LASF538:
 11178 1483 6D6F6465 		.ascii	"mode_receive\000"
 11178      5F726563 
 11178      65697665 
 11178      00
 11179              	.LASF501:
 11180 1490 6F757470 		.ascii	"output_pin\000"
 11180      75745F70 
 11180      696E00
 11181              	.LASF213:
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 228


 11182 149b 5F5F464C 		.ascii	"__FLT64_MIN_10_EXP__ (-307)\000"
 11182      5436345F 
 11182      4D494E5F 
 11182      31305F45 
 11182      58505F5F 
 11183              	.LASF425:
 11184 14b7 5F5F4152 		.ascii	"__ARM_FEATURE_FP16_VECTOR_ARITHMETIC\000"
 11184      4D5F4645 
 11184      41545552 
 11184      455F4650 
 11184      31365F56 
 11185              	.LASF458:
 11186 14dc 52464D37 		.ascii	"RFM70_REG_RF_CH 0x05\000"
 11186      305F5245 
 11186      475F5246 
 11186      5F434820 
 11186      30783035 
 11187              	.LASF303:
 11188 14f1 5F5F5341 		.ascii	"__SACCUM_EPSILON__ 0x1P-7HK\000"
 11188      4343554D 
 11188      5F455053 
 11188      494C4F4E 
 11188      5F5F2030 
 11189              	.LASF59:
 11190 150d 5F5F494E 		.ascii	"__INT_FAST16_TYPE__ int\000"
 11190      545F4641 
 11190      53543136 
 11190      5F545950 
 11190      455F5F20 
 11191              	.LASF47:
 11192 1525 5F5F5549 		.ascii	"__UINT16_TYPE__ short unsigned int\000"
 11192      4E543136 
 11192      5F545950 
 11192      455F5F20 
 11192      73686F72 
 11193              	.LASF310:
 11194 1548 5F5F4143 		.ascii	"__ACCUM_IBIT__ 16\000"
 11194      43554D5F 
 11194      49424954 
 11194      5F5F2031 
 11194      3600
 11195              	.LASF472:
 11196 155a 52464D37 		.ascii	"RFM70_REG_RX_PW_P2 0x13\000"
 11196      305F5245 
 11196      475F5258 
 11196      5F50575F 
 11196      50322030 
 11197              	.LASF92:
 11198 1572 5F5F5743 		.ascii	"__WCHAR_WIDTH__ 32\000"
 11198      4841525F 
 11198      57494454 
 11198      485F5F20 
 11198      333200
 11199              	.LASF352:
 11200 1585 5F5F5548 		.ascii	"__UHQ_IBIT__ 0\000"
 11200      515F4942 
 11200      49545F5F 
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 229


 11200      203000
 11201              	.LASF274:
 11202 1594 5F5F5546 		.ascii	"__UFRACT_FBIT__ 16\000"
 11202      52414354 
 11202      5F464249 
 11202      545F5F20 
 11202      313600
 11203              	.LASF419:
 11204 15a7 5F5F5646 		.ascii	"__VFP_FP__ 1\000"
 11204      505F4650 
 11204      5F5F2031 
 11204      00
 11205              	.LASF80:
 11206 15b4 5F5F4C4F 		.ascii	"__LONG_LONG_MAX__ 0x7fffffffffffffffLL\000"
 11206      4E475F4C 
 11206      4F4E475F 
 11206      4D41585F 
 11206      5F203078 
 11207              	.LASF45:
 11208 15db 5F5F494E 		.ascii	"__INT64_TYPE__ long long int\000"
 11208      5436345F 
 11208      54595045 
 11208      5F5F206C 
 11208      6F6E6720 
 11209              	.LASF158:
 11210 15f8 5F5F464C 		.ascii	"__FLT_MAX_10_EXP__ 38\000"
 11210      545F4D41 
 11210      585F3130 
 11210      5F455850 
 11210      5F5F2033 
 11211              	.LASF516:
 11212 160e 62616E6B 		.ascii	"bank\000"
 11212      00
 11213              	.LASF528:
 11214 1613 62756666 		.ascii	"buffer_read\000"
 11214      65725F72 
 11214      65616400 
 11215              	.LASF451:
 11216 161f 52464D37 		.ascii	"RFM70_CMD_R_RX_PL_WID 0x60\000"
 11216      305F434D 
 11216      445F525F 
 11216      52585F50 
 11216      4C5F5749 
 11217              	.LASF522:
 11218 163a 5F5A4E35 		.ascii	"_ZN5rfm706SPI_RWEh\000"
 11218      72666D37 
 11218      30365350 
 11218      495F5257 
 11218      456800
 11219              	.LASF333:
 11220 164d 5F5F4C4C 		.ascii	"__LLACCUM_EPSILON__ 0x1P-31LLK\000"
 11220      41434355 
 11220      4D5F4550 
 11220      53494C4F 
 11220      4E5F5F20 
 11221              	.LASF454:
 11222 166c 52464D37 		.ascii	"RFM70_REG_EN_AA 0x01\000"
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 230


 11222      305F5245 
 11222      475F454E 
 11222      5F414120 
 11222      30783031 
 11223              	.LASF553:
 11224 1681 5F5A4E35 		.ascii	"_ZN5rfm7010crc_lengthEh\000"
 11224      72666D37 
 11224      30313063 
 11224      72635F6C 
 11224      656E6774 
 11225              	.LASF253:
 11226 1699 5F5F4445 		.ascii	"__DEC128_MIN_EXP__ (-6142)\000"
 11226      43313238 
 11226      5F4D494E 
 11226      5F455850 
 11226      5F5F2028 
 11227              	.LASF305:
 11228 16b4 5F5F5553 		.ascii	"__USACCUM_IBIT__ 8\000"
 11228      41434355 
 11228      4D5F4942 
 11228      49545F5F 
 11228      203800
 11229              	.LASF286:
 11230 16c7 5F5F554C 		.ascii	"__ULFRACT_MIN__ 0.0ULR\000"
 11230      46524143 
 11230      545F4D49 
 11230      4E5F5F20 
 11230      302E3055 
 11231              	.LASF153:
 11232 16de 5F5F464C 		.ascii	"__FLT_MANT_DIG__ 24\000"
 11232      545F4D41 
 11232      4E545F44 
 11232      49475F5F 
 11232      20323400 
 11233              	.LASF611:
 11234 16f2 57726974 		.ascii	"WriteArr\000"
 11234      65417272 
 11234      00
 11235              	.LASF216:
 11236 16fb 5F5F464C 		.ascii	"__FLT64_DECIMAL_DIG__ 17\000"
 11236      5436345F 
 11236      44454349 
 11236      4D414C5F 
 11236      4449475F 
 11237              	.LASF375:
 11238 1714 5F5F5245 		.ascii	"__REGISTER_PREFIX__ \000"
 11238      47495354 
 11238      45525F50 
 11238      52454649 
 11238      585F5F20 
 11239              	.LASF74:
 11240 1729 5F5F6370 		.ascii	"__cpp_runtime_arrays 198712\000"
 11240      705F7275 
 11240      6E74696D 
 11240      655F6172 
 11240      72617973 
 11241              	.LASF198:
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 231


 11242 1745 5F5F464C 		.ascii	"__FLT32_MIN_EXP__ (-125)\000"
 11242      5433325F 
 11242      4D494E5F 
 11242      4558505F 
 11242      5F20282D 
 11243              	.LASF315:
 11244 175e 5F5F5541 		.ascii	"__UACCUM_IBIT__ 16\000"
 11244      4343554D 
 11244      5F494249 
 11244      545F5F20 
 11244      313600
 11245              	.LASF141:
 11246 1771 5F5F5549 		.ascii	"__UINT_FAST16_MAX__ 0xffffffffU\000"
 11246      4E545F46 
 11246      41535431 
 11246      365F4D41 
 11246      585F5F20 
 11247              	.LASF63:
 11248 1791 5F5F5549 		.ascii	"__UINT_FAST16_TYPE__ unsigned int\000"
 11248      4E545F46 
 11248      41535431 
 11248      365F5459 
 11248      50455F5F 
 11249              	.LASF170:
 11250 17b3 5F5F4442 		.ascii	"__DBL_MIN_10_EXP__ (-307)\000"
 11250      4C5F4D49 
 11250      4E5F3130 
 11250      5F455850 
 11250      5F5F2028 
 11251              	.LASF594:
 11252 17cd 63686172 		.ascii	"char\000"
 11252      00
 11253              	.LASF258:
 11254 17d2 5F5F4445 		.ascii	"__DEC128_SUBNORMAL_MIN__ 0.000000000000000000000000"
 11254      43313238 
 11254      5F535542 
 11254      4E4F524D 
 11254      414C5F4D 
 11255 1805 30303030 		.ascii	"000000001E-6143DL\000"
 11255      30303030 
 11255      31452D36 
 11255      31343344 
 11255      4C00
 11256              	.LASF549:
 11257 1817 5F5A4E35 		.ascii	"_ZN5rfm707channelEh\000"
 11257      72666D37 
 11257      30376368 
 11257      616E6E65 
 11257      6C456800 
 11258              	.LASF372:
 11259 182b 5F5F5544 		.ascii	"__UDA_IBIT__ 32\000"
 11259      415F4942 
 11259      49545F5F 
 11259      20333200 
 11260              	.LASF609:
 11261 183b 72617465 		.ascii	"rate\000"
 11261      00
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 232


 11262              	.LASF197:
 11263 1840 5F5F464C 		.ascii	"__FLT32_DIG__ 6\000"
 11263      5433325F 
 11263      4449475F 
 11263      5F203600 
 11264              	.LASF457:
 11265 1850 52464D37 		.ascii	"RFM70_REG_SETUP_RETR 0x04\000"
 11265      305F5245 
 11265      475F5345 
 11265      5455505F 
 11265      52455452 
 11266              	.LASF221:
 11267 186a 5F5F464C 		.ascii	"__FLT64_HAS_DENORM__ 1\000"
 11267      5436345F 
 11267      4841535F 
 11267      44454E4F 
 11267      524D5F5F 
 11268              	.LASF149:
 11269 1881 5F5F464C 		.ascii	"__FLT_EVAL_METHOD__ 0\000"
 11269      545F4556 
 11269      414C5F4D 
 11269      4554484F 
 11269      445F5F20 
 11270              	.LASF491:
 11271 1897 52464D37 		.ascii	"RFM70_CE(x) ce.set( (x) )\000"
 11271      305F4345 
 11271      28782920 
 11271      63652E73 
 11271      65742820 
 11272              	.LASF235:
 11273 18b1 5F5F464C 		.ascii	"__FLT32X_HAS_DENORM__ 1\000"
 11273      54333258 
 11273      5F484153 
 11273      5F44454E 
 11273      4F524D5F 
 11274              	.LASF592:
 11275 18c9 72656365 		.ascii	"receive\000"
 11275      69766500 
 11276              	.LASF432:
 11277 18d1 5F5F4152 		.ascii	"__ARM_PCS 1\000"
 11277      4D5F5043 
 11277      53203100 
 11278              	.LASF121:
 11279 18dd 5F5F494E 		.ascii	"__INT_LEAST64_MAX__ 0x7fffffffffffffffLL\000"
 11279      545F4C45 
 11279      41535436 
 11279      345F4D41 
 11279      585F5F20 
 11280              	.LASF440:
 11281 1906 5F52464D 		.ascii	"_RFM70_H_ \000"
 11281      37305F48 
 11281      5F2000
 11282              	.LASF535:
 11283 1911 5F5A4E35 		.ascii	"_ZN5rfm7010is_presentEv\000"
 11283      72666D37 
 11283      30313069 
 11283      735F7072 
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 233


 11283      6573656E 
 11284              	.LASF384:
 11285 1929 5F5F4743 		.ascii	"__GCC_ATOMIC_WCHAR_T_LOCK_FREE 1\000"
 11285      435F4154 
 11285      4F4D4943 
 11285      5F574348 
 11285      41525F54 
 11286              	.LASF246:
 11287 194a 5F5F4445 		.ascii	"__DEC64_MIN_EXP__ (-382)\000"
 11287      4336345F 
 11287      4D494E5F 
 11287      4558505F 
 11287      5F20282D 
 11288              	.LASF325:
 11289 1963 5F5F554C 		.ascii	"__ULACCUM_IBIT__ 32\000"
 11289      41434355 
 11289      4D5F4942 
 11289      49545F5F 
 11289      20333200 
 11290              	.LASF289:
 11291 1977 5F5F4C4C 		.ascii	"__LLFRACT_FBIT__ 63\000"
 11291      46524143 
 11291      545F4642 
 11291      49545F5F 
 11291      20363300 
 11292              	.LASF114:
 11293 198b 5F5F494E 		.ascii	"__INT_LEAST8_WIDTH__ 8\000"
 11293      545F4C45 
 11293      41535438 
 11293      5F574944 
 11293      54485F5F 
 11294              	.LASF402:
 11295 19a2 5F5F4152 		.ascii	"__ARM_32BIT_STATE\000"
 11295      4D5F3332 
 11295      4249545F 
 11295      53544154 
 11295      4500
 11296              	.LASF369:
 11297 19b4 5F5F5553 		.ascii	"__USA_FBIT__ 16\000"
 11297      415F4642 
 11297      49545F5F 
 11297      20313600 
 11298              	.LASF108:
 11299 19c4 5F5F5549 		.ascii	"__UINT8_MAX__ 0xff\000"
 11299      4E54385F 
 11299      4D41585F 
 11299      5F203078 
 11299      666600
 11300              	.LASF336:
 11301 19d7 5F5F554C 		.ascii	"__ULLACCUM_MIN__ 0.0ULLK\000"
 11301      4C414343 
 11301      554D5F4D 
 11301      494E5F5F 
 11301      20302E30 
 11302              	.LASF109:
 11303 19f0 5F5F5549 		.ascii	"__UINT16_MAX__ 0xffff\000"
 11303      4E543136 
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 234


 11303      5F4D4158 
 11303      5F5F2030 
 11303      78666666 
 11304              	.LASF582:
 11305 1a06 72656365 		.ascii	"receive_fifo_empty\000"
 11305      6976655F 
 11305      6669666F 
 11305      5F656D70 
 11305      747900
 11306              	.LASF174:
 11307 1a19 5F5F4442 		.ascii	"__DBL_MAX__ double(1.7976931348623157e+308L)\000"
 11307      4C5F4D41 
 11307      585F5F20 
 11307      646F7562 
 11307      6C652831 
 11308              	.LASF314:
 11309 1a46 5F5F5541 		.ascii	"__UACCUM_FBIT__ 16\000"
 11309      4343554D 
 11309      5F464249 
 11309      545F5F20 
 11309      313600
 11310              	.LASF604:
 11311 1a59 73746174 		.ascii	"status\000"
 11311      757300
 11312              	.LASF373:
 11313 1a60 5F5F5554 		.ascii	"__UTA_FBIT__ 64\000"
 11313      415F4642 
 11313      49545F5F 
 11313      20363400 
 11314              	.LASF100:
 11315 1a70 5F5F494E 		.ascii	"__INTMAX_WIDTH__ 64\000"
 11315      544D4158 
 11315      5F574944 
 11315      54485F5F 
 11315      20363400 
 11316              	.LASF242:
 11317 1a84 5F5F4445 		.ascii	"__DEC32_MAX__ 9.999999E96DF\000"
 11317      4333325F 
 11317      4D41585F 
 11317      5F20392E 
 11317      39393939 
 11318              	.LASF279:
 11319 1aa0 5F5F4C46 		.ascii	"__LFRACT_FBIT__ 31\000"
 11319      52414354 
 11319      5F464249 
 11319      545F5F20 
 11319      333100
 11320              	.LASF586:
 11321 1ab3 7472616E 		.ascii	"transmit_message_once\000"
 11321      736D6974 
 11321      5F6D6573 
 11321      73616765 
 11321      5F6F6E63 
 11322              	.LASF51:
 11323 1ac9 5F5F494E 		.ascii	"__INT_LEAST16_TYPE__ short int\000"
 11323      545F4C45 
 11323      41535431 
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 235


 11323      365F5459 
 11323      50455F5F 
 11324              	.LASF200:
 11325 1ae8 5F5F464C 		.ascii	"__FLT32_MAX_EXP__ 128\000"
 11325      5433325F 
 11325      4D41585F 
 11325      4558505F 
 11325      5F203132 
 11326              	.LASF381:
 11327 1afe 5F5F4743 		.ascii	"__GCC_ATOMIC_CHAR_LOCK_FREE 1\000"
 11327      435F4154 
 11327      4F4D4943 
 11327      5F434841 
 11327      525F4C4F 
 11328              	.LASF461:
 11329 1b1c 52464D37 		.ascii	"RFM70_REG_OBSERVE_TX 0x08\000"
 11329      305F5245 
 11329      475F4F42 
 11329      53455256 
 11329      455F5458 
 11330              	.LASF168:
 11331 1b36 5F5F4442 		.ascii	"__DBL_DIG__ 15\000"
 11331      4C5F4449 
 11331      475F5F20 
 11331      313500
 11332              	.LASF417:
 11333 1b45 5F5F4152 		.ascii	"__ARMEL__ 1\000"
 11333      4D454C5F 
 11333      5F203100 
 11334              	.LASF1:
 11335 1b51 5F5F6370 		.ascii	"__cplusplus 199711L\000"
 11335      6C757370 
 11335      6C757320 
 11335      31393937 
 11335      31314C00 
 11336              	.LASF358:
 11337 1b65 5F5F5554 		.ascii	"__UTQ_IBIT__ 0\000"
 11337      515F4942 
 11337      49545F5F 
 11337      203000
 11338              	.LASF278:
 11339 1b74 5F5F5546 		.ascii	"__UFRACT_EPSILON__ 0x1P-16UR\000"
 11339      52414354 
 11339      5F455053 
 11339      494C4F4E 
 11339      5F5F2030 
 11340              	.LASF421:
 11341 1b91 5F5F4152 		.ascii	"__ARM_FP16_FORMAT_IEEE\000"
 11341      4D5F4650 
 11341      31365F46 
 11341      4F524D41 
 11341      545F4945 
 11342              	.LASF161:
 11343 1ba8 5F5F464C 		.ascii	"__FLT_MIN__ 1.1754943508222875e-38F\000"
 11343      545F4D49 
 11343      4E5F5F20 
 11343      312E3137 
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 236


 11343      35343934 
 11344              	.LASF614:
 11345 1bcc 72666D37 		.ascii	"rfm70.cpp\000"
 11345      302E6370 
 11345      7000
 11346              	.LASF225:
 11347 1bd6 5F5F464C 		.ascii	"__FLT32X_DIG__ 15\000"
 11347      54333258 
 11347      5F444947 
 11347      5F5F2031 
 11347      3500
 11348              	.LASF313:
 11349 1be8 5F5F4143 		.ascii	"__ACCUM_EPSILON__ 0x1P-15K\000"
 11349      43554D5F 
 11349      45505349 
 11349      4C4F4E5F 
 11349      5F203078 
 11350              	.LASF482:
 11351 1c03 53544154 		.ascii	"STATUS_RX_DR 0x40\000"
 11351      55535F52 
 11351      585F4452 
 11351      20307834 
 11351      3000
 11352              	.LASF355:
 11353 1c15 5F5F5544 		.ascii	"__UDQ_FBIT__ 64\000"
 11353      515F4642 
 11353      49545F5F 
 11353      20363400 
 11354              	.LASF224:
 11355 1c25 5F5F464C 		.ascii	"__FLT32X_MANT_DIG__ 53\000"
 11355      54333258 
 11355      5F4D414E 
 11355      545F4449 
 11355      475F5F20 
 11356              	.LASF591:
 11357 1c3c 5F5A4E35 		.ascii	"_ZN5rfm7019receive_next_lengthEv\000"
 11357      72666D37 
 11357      30313972 
 11357      65636569 
 11357      76655F6E 
 11358              	.LASF71:
 11359 1c5d 5F5F4445 		.ascii	"__DEPRECATED 1\000"
 11359      50524543 
 11359      41544544 
 11359      203100
 11360              	.LASF495:
 11361 1c6c 52464D37 		.ascii	"RFM70_MISO ( miso.get() )\000"
 11361      305F4D49 
 11361      534F2028 
 11361      206D6973 
 11361      6F2E6765 
 11362              	.LASF435:
 11363 1c86 5F5F4152 		.ascii	"__ARM_FEATURE_IDIV\000"
 11363      4D5F4645 
 11363      41545552 
 11363      455F4944 
 11363      495600
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 237


 11364              	.LASF357:
 11365 1c99 5F5F5554 		.ascii	"__UTQ_FBIT__ 128\000"
 11365      515F4642 
 11365      49545F5F 
 11365      20313238 
 11365      00
 11366              	.LASF255:
 11367 1caa 5F5F4445 		.ascii	"__DEC128_MIN__ 1E-6143DL\000"
 11367      43313238 
 11367      5F4D494E 
 11367      5F5F2031 
 11367      452D3631 
 11368              	.LASF464:
 11369 1cc3 52464D37 		.ascii	"RFM70_REG_RX_ADDR_P1 0x0B\000"
 11369      305F5245 
 11369      475F5258 
 11369      5F414444 
 11369      525F5031 
 11370              	.LASF24:
 11371 1cdd 5F5F4348 		.ascii	"__CHAR_BIT__ 8\000"
 11371      41525F42 
 11371      49545F5F 
 11371      203800
 11372              	.LASF420:
 11373 1cec 5F5F4152 		.ascii	"__ARM_FP\000"
 11373      4D5F4650 
 11373      00
 11374              	.LASF145:
 11375 1cf5 5F5F494E 		.ascii	"__INTPTR_WIDTH__ 32\000"
 11375      54505452 
 11375      5F574944 
 11375      54485F5F 
 11375      20333200 
 11376              	.LASF54:
 11377 1d09 5F5F5549 		.ascii	"__UINT_LEAST8_TYPE__ unsigned char\000"
 11377      4E545F4C 
 11377      45415354 
 11377      385F5459 
 11377      50455F5F 
 11378              	.LASF189:
 11379 1d2c 5F5F4C44 		.ascii	"__LDBL_MAX__ 1.7976931348623157e+308L\000"
 11379      424C5F4D 
 11379      41585F5F 
 11379      20312E37 
 11379      39373639 
 11380              	.LASF15:
 11381 1d52 5F5F4649 		.ascii	"__FINITE_MATH_ONLY__ 0\000"
 11381      4E495445 
 11381      5F4D4154 
 11381      485F4F4E 
 11381      4C595F5F 
 11382              	.LASF35:
 11383 1d69 5F5F5743 		.ascii	"__WCHAR_TYPE__ unsigned int\000"
 11383      4841525F 
 11383      54595045 
 11383      5F5F2075 
 11383      6E736967 
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 238


 11384              	.LASF410:
 11385 1d85 5F5F6172 		.ascii	"__arm__ 1\000"
 11385      6D5F5F20 
 11385      3100
 11386              	.LASF517:
 11387 1d8f 696E6974 		.ascii	"init_bank1\000"
 11387      5F62616E 
 11387      6B3100
 11388              	.LASF181:
 11389 1d9a 5F5F4C44 		.ascii	"__LDBL_MANT_DIG__ 53\000"
 11389      424C5F4D 
 11389      414E545F 
 11389      4449475F 
 11389      5F203533 
 11390              	.LASF348:
 11391 1daf 5F5F5451 		.ascii	"__TQ_IBIT__ 0\000"
 11391      5F494249 
 11391      545F5F20 
 11391      3000
 11392              	.LASF367:
 11393 1dbd 5F5F5548 		.ascii	"__UHA_FBIT__ 8\000"
 11393      415F4642 
 11393      49545F5F 
 11393      203800
 11394              	.LASF12:
 11395 1dcc 5F5F4154 		.ascii	"__ATOMIC_CONSUME 1\000"
 11395      4F4D4943 
 11395      5F434F4E 
 11395      53554D45 
 11395      203100
 11396              	.LASF433:
 11397 1ddf 5F5F4152 		.ascii	"__ARM_EABI__ 1\000"
 11397      4D5F4541 
 11397      42495F5F 
 11397      203100
 11398              	.LASF595:
 11399 1dee 626F6F6C 		.ascii	"bool\000"
 11399      00
 11400              	.LASF324:
 11401 1df3 5F5F554C 		.ascii	"__ULACCUM_FBIT__ 32\000"
 11401      41434355 
 11401      4D5F4642 
 11401      49545F5F 
 11401      20333200 
 11402              	.LASF116:
 11403 1e07 5F5F494E 		.ascii	"__INT16_C(c) c\000"
 11403      5431365F 
 11403      43286329 
 11403      206300
 11404              	.LASF391:
 11405 1e16 5F5F4743 		.ascii	"__GCC_HAVE_DWARF2_CFI_ASM 1\000"
 11405      435F4841 
 11405      56455F44 
 11405      57415246 
 11405      325F4346 
 11406              	.LASF111:
 11407 1e32 5F5F5549 		.ascii	"__UINT64_MAX__ 0xffffffffffffffffULL\000"
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 239


 11407      4E543634 
 11407      5F4D4158 
 11407      5F5F2030 
 11407      78666666 
 11408              	.LASF322:
 11409 1e57 5F5F4C41 		.ascii	"__LACCUM_MAX__ 0X7FFFFFFFFFFFFFFFP-31LK\000"
 11409      4343554D 
 11409      5F4D4158 
 11409      5F5F2030 
 11409      58374646 
 11410              	.LASF136:
 11411 1e7f 5F5F494E 		.ascii	"__INT_FAST32_MAX__ 0x7fffffff\000"
 11411      545F4641 
 11411      53543332 
 11411      5F4D4158 
 11411      5F5F2030 
 11412              	.LASF428:
 11413 1e9d 5F5F4152 		.ascii	"__ARM_NEON\000"
 11413      4D5F4E45 
 11413      4F4E00
 11414              	.LASF165:
 11415 1ea8 5F5F464C 		.ascii	"__FLT_HAS_INFINITY__ 1\000"
 11415      545F4841 
 11415      535F494E 
 11415      46494E49 
 11415      54595F5F 
 11416              	.LASF520:
 11417 1ebf 5350495F 		.ascii	"SPI_RW\000"
 11417      525700
 11418              	.LASF599:
 11419 1ec6 42616E6B 		.ascii	"Bank1_Reg0_13\000"
 11419      315F5265 
 11419      67305F31 
 11419      3300
 11420              	.LASF476:
 11421 1ed4 52464D37 		.ascii	"RFM70_REG_FIFO_STATUS 0x17\000"
 11421      305F5245 
 11421      475F4649 
 11421      464F5F53 
 11421      54415455 
 11422              	.LASF446:
 11423 1eef 52464D37 		.ascii	"RFM70_CMD_FLUSH_RX 0xE2\000"
 11423      305F434D 
 11423      445F464C 
 11423      5553485F 
 11423      52582030 
 11424              	.LASF526:
 11425 1f07 5F5A4E35 		.ascii	"_ZN5rfm70C4ERN4pins10output_pinES2_RNS0_9input_pinE"
 11425      72666D37 
 11425      30433445 
 11425      524E3470 
 11425      696E7331 
 11426 1f3a 53325F53 		.ascii	"S2_S2_PFvjES6_\000"
 11426      325F5046 
 11426      766A4553 
 11426      365F00
 11427              	.LASF449:
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 240


 11428 1f49 52464D37 		.ascii	"RFM70_CMD_W_ACK_PAYLOAD 0xA8\000"
 11428      305F434D 
 11428      445F575F 
 11428      41434B5F 
 11428      5041594C 
 11429              	.LASF17:
 11430 1f66 5F5F5349 		.ascii	"__SIZEOF_LONG__ 4\000"
 11430      5A454F46 
 11430      5F4C4F4E 
 11430      475F5F20 
 11430      3400
 11431              	.LASF483:
 11432 1f78 53544154 		.ascii	"STATUS_TX_DS 0x20\000"
 11432      55535F54 
 11432      585F4453 
 11432      20307832 
 11432      3000
 11433              	.LASF171:
 11434 1f8a 5F5F4442 		.ascii	"__DBL_MAX_EXP__ 1024\000"
 11434      4C5F4D41 
 11434      585F4558 
 11434      505F5F20 
 11434      31303234 
 11435              	.LASF148:
 11436 1f9f 5F5F4743 		.ascii	"__GCC_IEC_559_COMPLEX 0\000"
 11436      435F4945 
 11436      435F3535 
 11436      395F434F 
 11436      4D504C45 
 11437              	.LASF137:
 11438 1fb7 5F5F494E 		.ascii	"__INT_FAST32_WIDTH__ 32\000"
 11438      545F4641 
 11438      53543332 
 11438      5F574944 
 11438      54485F5F 
 11439              	.LASF36:
 11440 1fcf 5F5F5749 		.ascii	"__WINT_TYPE__ unsigned int\000"
 11440      4E545F54 
 11440      5950455F 
 11440      5F20756E 
 11440      7369676E 
 11441              	.LASF79:
 11442 1fea 5F5F4C4F 		.ascii	"__LONG_MAX__ 0x7fffffffL\000"
 11442      4E475F4D 
 11442      41585F5F 
 11442      20307837 
 11442      66666666 
 11443              	.LASF105:
 11444 2003 5F5F494E 		.ascii	"__INT16_MAX__ 0x7fff\000"
 11444      5431365F 
 11444      4D41585F 
 11444      5F203078 
 11444      37666666 
 11445              	.LASF284:
 11446 2018 5F5F554C 		.ascii	"__ULFRACT_FBIT__ 32\000"
 11446      46524143 
 11446      545F4642 
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 241


 11446      49545F5F 
 11446      20333200 
 11447              	.LASF605:
 11448 202c 73697A65 		.ascii	"size\000"
 11448      00
 11449              	.LASF470:
 11450 2031 52464D37 		.ascii	"RFM70_REG_RX_PW_P0 0x11\000"
 11450      305F5245 
 11450      475F5258 
 11450      5F50575F 
 11450      50302030 
 11451              	.LASF544:
 11452 2049 6C6E615F 		.ascii	"lna_low\000"
 11452      6C6F7700 
 11453              	.LASF311:
 11454 2051 5F5F4143 		.ascii	"__ACCUM_MIN__ (-0X1P15K-0X1P15K)\000"
 11454      43554D5F 
 11454      4D494E5F 
 11454      5F20282D 
 11454      30583150 
 11455              	.LASF21:
 11456 2072 5F5F5349 		.ascii	"__SIZEOF_DOUBLE__ 8\000"
 11456      5A454F46 
 11456      5F444F55 
 11456      424C455F 
 11456      5F203800 
 11457              	.LASF5:
 11458 2086 5F5F474E 		.ascii	"__GNUC_PATCHLEVEL__ 0\000"
 11458      55435F50 
 11458      41544348 
 11458      4C455645 
 11458      4C5F5F20 
 11459              	.LASF125:
 11460 209c 5F5F5549 		.ascii	"__UINT8_C(c) c\000"
 11460      4E54385F 
 11460      43286329 
 11460      206300
 11461              	.LASF363:
 11462 20ab 5F5F4441 		.ascii	"__DA_FBIT__ 31\000"
 11462      5F464249 
 11462      545F5F20 
 11462      333100
 11463              	.LASF488:
 11464 20ba 4649464F 		.ascii	"FIFO_STATUS_TX_EMPTY 0x10\000"
 11464      5F535441 
 11464      5455535F 
 11464      54585F45 
 11464      4D505459 
 11465              	.LASF309:
 11466 20d4 5F5F4143 		.ascii	"__ACCUM_FBIT__ 15\000"
 11466      43554D5F 
 11466      46424954 
 11466      5F5F2031 
 11466      3500
 11467              	.LASF434:
 11468 20e6 5F5F4152 		.ascii	"__ARM_ARCH_EXT_IDIV__\000"
 11468      4D5F4152 
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 242


 11468      43485F45 
 11468      58545F49 
 11468      4449565F 
 11469              	.LASF537:
 11470 20fc 5F5A4E35 		.ascii	"_ZN5rfm7013mode_transmitEv\000"
 11470      72666D37 
 11470      3031336D 
 11470      6F64655F 
 11470      7472616E 
 11471              	.LASF84:
 11472 2117 5F5F5749 		.ascii	"__WINT_MIN__ 0U\000"
 11472      4E545F4D 
 11472      494E5F5F 
 11472      20305500 
 11473              	.LASF540:
 11474 2127 6D6F6465 		.ascii	"mode_standby\000"
 11474      5F737461 
 11474      6E646279 
 11474      00
 11475              	.LASF276:
 11476 2134 5F5F5546 		.ascii	"__UFRACT_MIN__ 0.0UR\000"
 11476      52414354 
 11476      5F4D494E 
 11476      5F5F2030 
 11476      2E305552 
 11477              	.LASF429:
 11478 2149 5F5F4152 		.ascii	"__ARM_NEON_FP\000"
 11478      4D5F4E45 
 11478      4F4E5F46 
 11478      5000
 11479              	.LASF431:
 11480 2157 5F5F4152 		.ascii	"__ARM_ARCH_6M__ 1\000"
 11480      4D5F4152 
 11480      43485F36 
 11480      4D5F5F20 
 11480      3100
 11481              	.LASF270:
 11482 2169 5F5F4652 		.ascii	"__FRACT_IBIT__ 0\000"
 11482      4143545F 
 11482      49424954 
 11482      5F5F2030 
 11482      00
 11483              	.LASF190:
 11484 217a 5F5F4C44 		.ascii	"__LDBL_MIN__ 2.2250738585072014e-308L\000"
 11484      424C5F4D 
 11484      494E5F5F 
 11484      20322E32 
 11484      32353037 
 11485              	.LASF547:
 11486 21a0 5F5A4E35 		.ascii	"_ZN5rfm708lna_highEv\000"
 11486      72666D37 
 11486      30386C6E 
 11486      615F6869 
 11486      67684576 
 11487              	.LASF589:
 11488 21b5 5F5A4E35 		.ascii	"_ZN5rfm7017receive_next_pipeEv\000"
 11488      72666D37 
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 243


 11488      30313772 
 11488      65636569 
 11488      76655F6E 
 11489              	.LASF194:
 11490 21d4 5F5F4C44 		.ascii	"__LDBL_HAS_INFINITY__ 1\000"
 11490      424C5F48 
 11490      41535F49 
 11490      4E46494E 
 11490      4954595F 
 11491              	.LASF518:
 11492 21ec 5F5A4E35 		.ascii	"_ZN5rfm704bankEh\000"
 11492      72666D37 
 11492      30346261 
 11492      6E6B4568 
 11492      00
 11493              	.LASF110:
 11494 21fd 5F5F5549 		.ascii	"__UINT32_MAX__ 0xffffffffUL\000"
 11494      4E543332 
 11494      5F4D4158 
 11494      5F5F2030 
 11494      78666666 
 11495              	.LASF175:
 11496 2219 5F5F4442 		.ascii	"__DBL_MIN__ double(2.2250738585072014e-308L)\000"
 11496      4C5F4D49 
 11496      4E5F5F20 
 11496      646F7562 
 11496      6C652832 
 11497              	.LASF507:
 11498 2246 5F5A4E34 		.ascii	"_ZN4pins16input_output_pin20direction_set_outputEv\000"
 11498      70696E73 
 11498      3136696E 
 11498      7075745F 
 11498      6F757470 
 11499              	.LASF183:
 11500 2279 5F5F4C44 		.ascii	"__LDBL_MIN_EXP__ (-1021)\000"
 11500      424C5F4D 
 11500      494E5F45 
 11500      58505F5F 
 11500      20282D31 
 11501              	.LASF351:
 11502 2292 5F5F5548 		.ascii	"__UHQ_FBIT__ 16\000"
 11502      515F4642 
 11502      49545F5F 
 11502      20313600 
 11503              	.LASF294:
 11504 22a2 5F5F554C 		.ascii	"__ULLFRACT_FBIT__ 64\000"
 11504      4C465241 
 11504      43545F46 
 11504      4249545F 
 11504      5F203634 
 11505              	.LASF555:
 11506 22b7 5F5A4E35 		.ascii	"_ZN5rfm7014address_lengthEh\000"
 11506      72666D37 
 11506      30313461 
 11506      64647265 
 11506      73735F6C 
 11507              	.LASF304:
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 244


 11508 22d3 5F5F5553 		.ascii	"__USACCUM_FBIT__ 8\000"
 11508      41434355 
 11508      4D5F4642 
 11508      49545F5F 
 11508      203800
 11509              	.LASF102:
 11510 22e6 5F5F5349 		.ascii	"__SIG_ATOMIC_MIN__ (-__SIG_ATOMIC_MAX__ - 1)\000"
 11510      475F4154 
 11510      4F4D4943 
 11510      5F4D494E 
 11510      5F5F2028 
 11511              	.LASF30:
 11512 2313 5F5F464C 		.ascii	"__FLOAT_WORD_ORDER__ __ORDER_LITTLE_ENDIAN__\000"
 11512      4F41545F 
 11512      574F5244 
 11512      5F4F5244 
 11512      45525F5F 
 11513              	.LASF552:
 11514 2340 6372635F 		.ascii	"crc_length\000"
 11514      6C656E67 
 11514      746800
 11515              	.LASF95:
 11516 234b 5F5F5349 		.ascii	"__SIZE_WIDTH__ 32\000"
 11516      5A455F57 
 11516      49445448 
 11516      5F5F2033 
 11516      3200
 11517              	.LASF238:
 11518 235d 5F5F4445 		.ascii	"__DEC32_MANT_DIG__ 7\000"
 11518      4333325F 
 11518      4D414E54 
 11518      5F444947 
 11518      5F5F2037 
 11519              	.LASF579:
 11520 2372 5F5A4E35 		.ascii	"_ZN5rfm7016transmit_addressEPKh\000"
 11520      72666D37 
 11520      30313674 
 11520      72616E73 
 11520      6D69745F 
 11521              	.LASF293:
 11522 2392 5F5F4C4C 		.ascii	"__LLFRACT_EPSILON__ 0x1P-63LLR\000"
 11522      46524143 
 11522      545F4550 
 11522      53494C4F 
 11522      4E5F5F20 
 11523              	.LASF453:
 11524 23b1 52464D37 		.ascii	"RFM70_REG_CONFIG 0x00\000"
 11524      305F5245 
 11524      475F434F 
 11524      4E464947 
 11524      20307830 
 11525              	.LASF90:
 11526 23c7 5F5F4C4F 		.ascii	"__LONG_WIDTH__ 32\000"
 11526      4E475F57 
 11526      49445448 
 11526      5F5F2033 
 11526      3200
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 245


 11527              	.LASF9:
 11528 23d9 5F5F4154 		.ascii	"__ATOMIC_ACQUIRE 2\000"
 11528      4F4D4943 
 11528      5F414351 
 11528      55495245 
 11528      203200
 11529              	.LASF40:
 11530 23ec 5F5F4348 		.ascii	"__CHAR32_TYPE__ long unsigned int\000"
 11530      41523332 
 11530      5F545950 
 11530      455F5F20 
 11530      6C6F6E67 
 11531              	.LASF260:
 11532 240e 5F5F5346 		.ascii	"__SFRACT_IBIT__ 0\000"
 11532      52414354 
 11532      5F494249 
 11532      545F5F20 
 11532      3000
 11533              	.LASF398:
 11534 2420 5F5F4152 		.ascii	"__ARM_FEATURE_SAT\000"
 11534      4D5F4645 
 11534      41545552 
 11534      455F5341 
 11534      5400
 11535              	.LASF342:
 11536 2432 5F5F4851 		.ascii	"__HQ_IBIT__ 0\000"
 11536      5F494249 
 11536      545F5F20 
 11536      3000
 11537              	.LASF460:
 11538 2440 52464D37 		.ascii	"RFM70_REG_STATUS 0x07\000"
 11538      305F5245 
 11538      475F5354 
 11538      41545553 
 11538      20307830 
 11539              	.LASF376:
 11540 2456 5F5F5553 		.ascii	"__USER_LABEL_PREFIX__ \000"
 11540      45525F4C 
 11540      4142454C 
 11540      5F505245 
 11540      4649585F 
 11541              	.LASF163:
 11542 246d 5F5F464C 		.ascii	"__FLT_DENORM_MIN__ 1.4012984643248171e-45F\000"
 11542      545F4445 
 11542      4E4F524D 
 11542      5F4D494E 
 11542      5F5F2031 
 11543              	.LASF484:
 11544 2498 53544154 		.ascii	"STATUS_MAX_RT 0x10\000"
 11544      55535F4D 
 11544      41585F52 
 11544      54203078 
 11544      313000
 11545              	.LASF56:
 11546 24ab 5F5F5549 		.ascii	"__UINT_LEAST32_TYPE__ long unsigned int\000"
 11546      4E545F4C 
 11546      45415354 
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 246


 11546      33325F54 
 11546      5950455F 
 11547              	.LASF6:
 11548 24d3 5F5F5645 		.ascii	"__VERSION__ \"7.2.0\"\000"
 11548      5253494F 
 11548      4E5F5F20 
 11548      22372E32 
 11548      2E302200 
 11549              	.LASF345:
 11550 24e7 5F5F4451 		.ascii	"__DQ_FBIT__ 63\000"
 11550      5F464249 
 11550      545F5F20 
 11550      363300
 11551              	.LASF38:
 11552 24f6 5F5F5549 		.ascii	"__UINTMAX_TYPE__ long long unsigned int\000"
 11552      4E544D41 
 11552      585F5459 
 11552      50455F5F 
 11552      206C6F6E 
 11553              	.LASF601:
 11554 251e 74686973 		.ascii	"this\000"
 11554      00
 11555              	.LASF132:
 11556 2523 5F5F494E 		.ascii	"__INT_FAST8_MAX__ 0x7fffffff\000"
 11556      545F4641 
 11556      5354385F 
 11556      4D41585F 
 11556      5F203078 
 11557              	.LASF103:
 11558 2540 5F5F5349 		.ascii	"__SIG_ATOMIC_WIDTH__ 32\000"
 11558      475F4154 
 11558      4F4D4943 
 11558      5F574944 
 11558      54485F5F 
 11559              	.LASF548:
 11560 2558 6368616E 		.ascii	"channel\000"
 11560      6E656C00 
 11561              	.LASF466:
 11562 2560 52464D37 		.ascii	"RFM70_REG_RX_ADDR_P3 0x0D\000"
 11562      305F5245 
 11562      475F5258 
 11562      5F414444 
 11562      525F5033 
 11563              	.LASF77:
 11564 257a 5F5F5348 		.ascii	"__SHRT_MAX__ 0x7fff\000"
 11564      52545F4D 
 11564      41585F5F 
 11564      20307837 
 11564      66666600 
 11565              	.LASF554:
 11566 258e 61646472 		.ascii	"address_length\000"
 11566      6573735F 
 11566      6C656E67 
 11566      746800
 11567              	.LASF423:
 11568 259d 5F5F4152 		.ascii	"__ARM_FP16_ARGS\000"
 11568      4D5F4650 
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 247


 11568      31365F41 
 11568      52475300 
 11569              	.LASF28:
 11570 25ad 5F5F4F52 		.ascii	"__ORDER_PDP_ENDIAN__ 3412\000"
 11570      4445525F 
 11570      5044505F 
 11570      454E4449 
 11570      414E5F5F 
 11571              	.LASF55:
 11572 25c7 5F5F5549 		.ascii	"__UINT_LEAST16_TYPE__ short unsigned int\000"
 11572      4E545F4C 
 11572      45415354 
 11572      31365F54 
 11572      5950455F 
 11573              	.LASF159:
 11574 25f0 5F5F464C 		.ascii	"__FLT_DECIMAL_DIG__ 9\000"
 11574      545F4445 
 11574      43494D41 
 11574      4C5F4449 
 11574      475F5F20 
 11575              	.LASF106:
 11576 2606 5F5F494E 		.ascii	"__INT32_MAX__ 0x7fffffffL\000"
 11576      5433325F 
 11576      4D41585F 
 11576      5F203078 
 11576      37666666 
 11577              	.LASF588:
 11578 2620 72656365 		.ascii	"receive_next_pipe\000"
 11578      6976655F 
 11578      6E657874 
 11578      5F706970 
 11578      6500
 11579              	.LASF93:
 11580 2632 5F5F5749 		.ascii	"__WINT_WIDTH__ 32\000"
 11580      4E545F57 
 11580      49445448 
 11580      5F5F2033 
 11580      3200
 11581              	.LASF257:
 11582 2644 5F5F4445 		.ascii	"__DEC128_EPSILON__ 1E-33DL\000"
 11582      43313238 
 11582      5F455053 
 11582      494C4F4E 
 11582      5F5F2031 
 11583              	.LASF75:
 11584 265f 5F5F4758 		.ascii	"__GXX_ABI_VERSION 1011\000"
 11584      585F4142 
 11584      495F5645 
 11584      5253494F 
 11584      4E203130 
 11585              	.LASF349:
 11586 2676 5F5F5551 		.ascii	"__UQQ_FBIT__ 8\000"
 11586      515F4642 
 11586      49545F5F 
 11586      203800
 11587              	.LASF354:
 11588 2685 5F5F5553 		.ascii	"__USQ_IBIT__ 0\000"
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 248


 11588      515F4942 
 11588      49545F5F 
 11588      203000
 11589              	.LASF607:
 11590 2694 656E6162 		.ascii	"enabled\000"
 11590      6C656400 
 11591              	.LASF587:
 11592 269c 5F5A4E35 		.ascii	"_ZN5rfm7021transmit_message_onceEPKhh\000"
 11592      72666D37 
 11592      30323174 
 11592      72616E73 
 11592      6D69745F 
 11593              	.LASF323:
 11594 26c2 5F5F4C41 		.ascii	"__LACCUM_EPSILON__ 0x1P-31LK\000"
 11594      4343554D 
 11594      5F455053 
 11594      494C4F4E 
 11594      5F5F2030 
 11595              	.LASF247:
 11596 26df 5F5F4445 		.ascii	"__DEC64_MAX_EXP__ 385\000"
 11596      4336345F 
 11596      4D41585F 
 11596      4558505F 
 11596      5F203338 
 11597              	.LASF536:
 11598 26f5 6D6F6465 		.ascii	"mode_transmit\000"
 11598      5F747261 
 11598      6E736D69 
 11598      7400
 11599              	.LASF590:
 11600 2703 72656365 		.ascii	"receive_next_length\000"
 11600      6976655F 
 11600      6E657874 
 11600      5F6C656E 
 11600      67746800 
 11601              	.LASF44:
 11602 2717 5F5F494E 		.ascii	"__INT32_TYPE__ long int\000"
 11602      5433325F 
 11602      54595045 
 11602      5F5F206C 
 11602      6F6E6720 
 11603              	.LASF227:
 11604 272f 5F5F464C 		.ascii	"__FLT32X_MIN_10_EXP__ (-307)\000"
 11604      54333258 
 11604      5F4D494E 
 11604      5F31305F 
 11604      4558505F 
 11605              	.LASF73:
 11606 274c 5F5F6370 		.ascii	"__cpp_hex_float 201603\000"
 11606      705F6865 
 11606      785F666C 
 11606      6F617420 
 11606      32303136 
 11607              	.LASF506:
 11608 2763 5F5A4E34 		.ascii	"_ZN4pins9input_pin19direction_set_inputEv\000"
 11608      70696E73 
 11608      39696E70 
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 249


 11608      75745F70 
 11608      696E3139 
 11609              	.LASF414:
 11610 278d 5F5F7468 		.ascii	"__thumb2__\000"
 11610      756D6232 
 11610      5F5F00
 11611              	.LASF441:
 11612 2798 52464D37 		.ascii	"RFM70_LIB_VERSION \"V1.02 (2011-12-31)\"\000"
 11612      305F4C49 
 11612      425F5645 
 11612      5253494F 
 11612      4E202256 
 11613              	.LASF232:
 11614 27bf 5F5F464C 		.ascii	"__FLT32X_MIN__ 2.2250738585072014e-308F32x\000"
 11614      54333258 
 11614      5F4D494E 
 11614      5F5F2032 
 11614      2E323235 
 11615              	.LASF343:
 11616 27ea 5F5F5351 		.ascii	"__SQ_FBIT__ 31\000"
 11616      5F464249 
 11616      545F5F20 
 11616      333100
 11617              	.LASF603:
 11618 27f9 6C656E67 		.ascii	"length\000"
 11618      746800
 11619              	.LASF618:
 11620 2800 696E7075 		.ascii	"input_output_pin\000"
 11620      745F6F75 
 11620      74707574 
 11620      5F70696E 
 11620      00
 11621              	.LASF254:
 11622 2811 5F5F4445 		.ascii	"__DEC128_MAX_EXP__ 6145\000"
 11622      43313238 
 11622      5F4D4158 
 11622      5F455850 
 11622      5F5F2036 
 11623              	.LASF226:
 11624 2829 5F5F464C 		.ascii	"__FLT32X_MIN_EXP__ (-1021)\000"
 11624      54333258 
 11624      5F4D494E 
 11624      5F455850 
 11624      5F5F2028 
 11625              	.LASF217:
 11626 2844 5F5F464C 		.ascii	"__FLT64_MAX__ 1.7976931348623157e+308F64\000"
 11626      5436345F 
 11626      4D41585F 
 11626      5F20312E 
 11626      37393736 
 11627              	.LASF32:
 11628 286d 5F5F474E 		.ascii	"__GNUG__ 7\000"
 11628      55475F5F 
 11628      203700
 11629              	.LASF128:
 11630 2878 5F5F5549 		.ascii	"__UINT_LEAST32_MAX__ 0xffffffffUL\000"
 11630      4E545F4C 
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 250


 11630      45415354 
 11630      33325F4D 
 11630      41585F5F 
 11631              	.LASF596:
 11632 289a 42616E6B 		.ascii	"Bank0_Reg\000"
 11632      305F5265 
 11632      6700
 11633              	.LASF318:
 11634 28a4 5F5F5541 		.ascii	"__UACCUM_EPSILON__ 0x1P-16UK\000"
 11634      4343554D 
 11634      5F455053 
 11634      494C4F4E 
 11634      5F5F2030 
 11635              	.LASF195:
 11636 28c1 5F5F4C44 		.ascii	"__LDBL_HAS_QUIET_NAN__ 1\000"
 11636      424C5F48 
 11636      41535F51 
 11636      55494554 
 11636      5F4E414E 
 11637              	.LASF42:
 11638 28da 5F5F494E 		.ascii	"__INT8_TYPE__ signed char\000"
 11638      54385F54 
 11638      5950455F 
 11638      5F207369 
 11638      676E6564 
 11639              	.LASF83:
 11640 28f4 5F5F5749 		.ascii	"__WINT_MAX__ 0xffffffffU\000"
 11640      4E545F4D 
 11640      41585F5F 
 11640      20307866 
 11640      66666666 
 11641              	.LASF87:
 11642 290d 5F5F5343 		.ascii	"__SCHAR_WIDTH__ 8\000"
 11642      4841525F 
 11642      57494454 
 11642      485F5F20 
 11642      3800
 11643              	.LASF347:
 11644 291f 5F5F5451 		.ascii	"__TQ_FBIT__ 127\000"
 11644      5F464249 
 11644      545F5F20 
 11644      31323700 
 11645              	.LASF268:
 11646 292f 5F5F5553 		.ascii	"__USFRACT_EPSILON__ 0x1P-8UHR\000"
 11646      46524143 
 11646      545F4550 
 11646      53494C4F 
 11646      4E5F5F20 
 11647              	.LASF474:
 11648 294d 52464D37 		.ascii	"RFM70_REG_RX_PW_P4 0x15\000"
 11648      305F5245 
 11648      475F5258 
 11648      5F50575F 
 11648      50342030 
 11649              	.LASF188:
 11650 2965 5F5F4C44 		.ascii	"__LDBL_DECIMAL_DIG__ 17\000"
 11650      424C5F44 
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 251


 11650      4543494D 
 11650      414C5F44 
 11650      49475F5F 
 11651              	.LASF361:
 11652 297d 5F5F5341 		.ascii	"__SA_FBIT__ 15\000"
 11652      5F464249 
 11652      545F5F20 
 11652      313500
 11653              	.LASF143:
 11654 298c 5F5F5549 		.ascii	"__UINT_FAST64_MAX__ 0xffffffffffffffffULL\000"
 11654      4E545F46 
 11654      41535436 
 11654      345F4D41 
 11654      585F5F20 
 11655              	.LASF142:
 11656 29b6 5F5F5549 		.ascii	"__UINT_FAST32_MAX__ 0xffffffffU\000"
 11656      4E545F46 
 11656      41535433 
 11656      325F4D41 
 11656      585F5F20 
 11657              	.LASF172:
 11658 29d6 5F5F4442 		.ascii	"__DBL_MAX_10_EXP__ 308\000"
 11658      4C5F4D41 
 11658      585F3130 
 11658      5F455850 
 11658      5F5F2033 
 11659              	.LASF122:
 11660 29ed 5F5F494E 		.ascii	"__INT64_C(c) c ## LL\000"
 11660      5436345F 
 11660      43286329 
 11660      20632023 
 11660      23204C4C 
 11661              	.LASF341:
 11662 2a02 5F5F4851 		.ascii	"__HQ_FBIT__ 15\000"
 11662      5F464249 
 11662      545F5F20 
 11662      313500
 11663              	.LASF565:
 11664 2a11 5F5A4E35 		.ascii	"_ZN5rfm7018lost_packets_resetEv\000"
 11664      72666D37 
 11664      3031386C 
 11664      6F73745F 
 11664      7061636B 
 11665              	.LASF81:
 11666 2a31 5F5F5743 		.ascii	"__WCHAR_MAX__ 0xffffffffU\000"
 11666      4841525F 
 11666      4D41585F 
 11666      5F203078 
 11666      66666666 
 11667              	.LASF397:
 11668 2a4b 5F5F4152 		.ascii	"__ARM_FEATURE_QBIT\000"
 11668      4D5F4645 
 11668      41545552 
 11668      455F5142 
 11668      495400
 11669              	.LASF18:
 11670 2a5e 5F5F5349 		.ascii	"__SIZEOF_LONG_LONG__ 8\000"
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 252


 11670      5A454F46 
 11670      5F4C4F4E 
 11670      475F4C4F 
 11670      4E475F5F 
 11671              	.LASF350:
 11672 2a75 5F5F5551 		.ascii	"__UQQ_IBIT__ 0\000"
 11672      515F4942 
 11672      49545F5F 
 11672      203000
 11673              	.LASF46:
 11674 2a84 5F5F5549 		.ascii	"__UINT8_TYPE__ unsigned char\000"
 11674      4E54385F 
 11674      54595045 
 11674      5F5F2075 
 11674      6E736967 
 11675              	.LASF88:
 11676 2aa1 5F5F5348 		.ascii	"__SHRT_WIDTH__ 16\000"
 11676      52545F57 
 11676      49445448 
 11676      5F5F2031 
 11676      3600
 11677              	.LASF68:
 11678 2ab3 5F5F6861 		.ascii	"__has_include(STR) __has_include__(STR)\000"
 11678      735F696E 
 11678      636C7564 
 11678      65285354 
 11678      5229205F 
 11679              	.LASF478:
 11680 2adb 52464D37 		.ascii	"RFM70_REG_FEATURE 0x1D\000"
 11680      305F5245 
 11680      475F4645 
 11680      41545552 
 11680      45203078 
 11681              	.LASF162:
 11682 2af2 5F5F464C 		.ascii	"__FLT_EPSILON__ 1.1920928955078125e-7F\000"
 11682      545F4550 
 11682      53494C4F 
 11682      4E5F5F20 
 11682      312E3139 
 11683              	.LASF583:
 11684 2b19 5F5A4E35 		.ascii	"_ZN5rfm7018receive_fifo_emptyEv\000"
 11684      72666D37 
 11684      30313872 
 11684      65636569 
 11684      76655F66 
 11685              	.LASF53:
 11686 2b39 5F5F494E 		.ascii	"__INT_LEAST64_TYPE__ long long int\000"
 11686      545F4C45 
 11686      41535436 
 11686      345F5459 
 11686      50455F5F 
 11687              	.LASF48:
 11688 2b5c 5F5F5549 		.ascii	"__UINT32_TYPE__ long unsigned int\000"
 11688      4E543332 
 11688      5F545950 
 11688      455F5F20 
 11688      6C6F6E67 
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 253


 11689              	.LASF184:
 11690 2b7e 5F5F4C44 		.ascii	"__LDBL_MIN_10_EXP__ (-307)\000"
 11690      424C5F4D 
 11690      494E5F31 
 11690      305F4558 
 11690      505F5F20 
 11691              	.LASF513:
 11692 2b99 6D69736F 		.ascii	"miso\000"
 11692      00
 11693              	.LASF31:
 11694 2b9e 5F5F5349 		.ascii	"__SIZEOF_POINTER__ 4\000"
 11694      5A454F46 
 11694      5F504F49 
 11694      4E544552 
 11694      5F5F2034 
 11695              	.LASF317:
 11696 2bb3 5F5F5541 		.ascii	"__UACCUM_MAX__ 0XFFFFFFFFP-16UK\000"
 11696      4343554D 
 11696      5F4D4158 
 11696      5F5F2030 
 11696      58464646 
 11697              	.LASF277:
 11698 2bd3 5F5F5546 		.ascii	"__UFRACT_MAX__ 0XFFFFP-16UR\000"
 11698      52414354 
 11698      5F4D4158 
 11698      5F5F2030 
 11698      58464646 
 11699              	.LASF533:
 11700 2bef 5F5A4E35 		.ascii	"_ZN5rfm7012buffer_writeEcPKhh\000"
 11700      72666D37 
 11700      30313262 
 11700      75666665 
 11700      725F7772 
 11701              	.LASF383:
 11702 2c0d 5F5F4743 		.ascii	"__GCC_ATOMIC_CHAR32_T_LOCK_FREE 1\000"
 11702      435F4154 
 11702      4F4D4943 
 11702      5F434841 
 11702      5233325F 
 11703              	.LASF287:
 11704 2c2f 5F5F554C 		.ascii	"__ULFRACT_MAX__ 0XFFFFFFFFP-32ULR\000"
 11704      46524143 
 11704      545F4D41 
 11704      585F5F20 
 11704      30584646 
 11705              	.LASF359:
 11706 2c51 5F5F4841 		.ascii	"__HA_FBIT__ 7\000"
 11706      5F464249 
 11706      545F5F20 
 11706      3700
 11707              	.LASF94:
 11708 2c5f 5F5F5054 		.ascii	"__PTRDIFF_WIDTH__ 32\000"
 11708      52444946 
 11708      465F5749 
 11708      4454485F 
 11708      5F203332 
 11709              	.LASF206:
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 254


 11710 2c74 5F5F464C 		.ascii	"__FLT32_DENORM_MIN__ 1.4012984643248171e-45F32\000"
 11710      5433325F 
 11710      44454E4F 
 11710      524D5F4D 
 11710      494E5F5F 
 11711              	.LASF479:
 11712 2ca3 5F50494E 		.ascii	"_PINS_H_ \000"
 11712      535F485F 
 11712      2000
 11713              	.LASF29:
 11714 2cad 5F5F4259 		.ascii	"__BYTE_ORDER__ __ORDER_LITTLE_ENDIAN__\000"
 11714      54455F4F 
 11714      52444552 
 11714      5F5F205F 
 11714      5F4F5244 
 11715              	.LASF89:
 11716 2cd4 5F5F494E 		.ascii	"__INT_WIDTH__ 32\000"
 11716      545F5749 
 11716      4454485F 
 11716      5F203332 
 11716      00
 11717              	.LASF390:
 11718 2ce5 5F5F4743 		.ascii	"__GCC_ATOMIC_POINTER_LOCK_FREE 1\000"
 11718      435F4154 
 11718      4F4D4943 
 11718      5F504F49 
 11718      4E544552 
 11719              	.LASF573:
 11720 2d06 5F5A4E35 		.ascii	"_ZN5rfm7018receive_address_p1EPKh\000"
 11720      72666D37 
 11720      30313872 
 11720      65636569 
 11720      76655F61 
 11721              	.LASF131:
 11722 2d28 5F5F5549 		.ascii	"__UINT64_C(c) c ## ULL\000"
 11722      4E543634 
 11722      5F432863 
 11722      29206320 
 11722      23232055 
 11723              	.LASF521:
 11724 2d3f 696E6974 		.ascii	"init\000"
 11724      00
 11725              	.LASF263:
 11726 2d44 5F5F5346 		.ascii	"__SFRACT_EPSILON__ 0x1P-7HR\000"
 11726      52414354 
 11726      5F455053 
 11726      494C4F4E 
 11726      5F5F2030 
 11727              	.LASF486:
 11728 2d60 4649464F 		.ascii	"FIFO_STATUS_TX_REUSE 0x40\000"
 11728      5F535441 
 11728      5455535F 
 11728      54585F52 
 11728      45555345 
 11729              	.LASF72:
 11730 2d7a 5F5F6370 		.ascii	"__cpp_binary_literals 201304\000"
 11730      705F6269 
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 255


 11730      6E617279 
 11730      5F6C6974 
 11730      6572616C 
 11731              	.LASF231:
 11732 2d97 5F5F464C 		.ascii	"__FLT32X_MAX__ 1.7976931348623157e+308F32x\000"
 11732      54333258 
 11732      5F4D4158 
 11732      5F5F2031 
 11732      2E373937 
 11733              	.LASF334:
 11734 2dc2 5F5F554C 		.ascii	"__ULLACCUM_FBIT__ 32\000"
 11734      4C414343 
 11734      554D5F46 
 11734      4249545F 
 11734      5F203332 
 11735              	.LASF360:
 11736 2dd7 5F5F4841 		.ascii	"__HA_IBIT__ 8\000"
 11736      5F494249 
 11736      545F5F20 
 11736      3800
 11737              	.LASF598:
 11738 2de5 6C6F6E67 		.ascii	"long unsigned int\000"
 11738      20756E73 
 11738      69676E65 
 11738      6420696E 
 11738      7400
 11739              	.LASF312:
 11740 2df7 5F5F4143 		.ascii	"__ACCUM_MAX__ 0X7FFFFFFFP-15K\000"
 11740      43554D5F 
 11740      4D41585F 
 11740      5F203058 
 11740      37464646 
 11741              	.LASF608:
 11742 2e15 61646472 		.ascii	"address\000"
 11742      65737300 
 11743              	.LASF508:
 11744 2e1d 5F5A4E34 		.ascii	"_ZN4pins16input_output_pin19direction_set_inputEv\000"
 11744      70696E73 
 11744      3136696E 
 11744      7075745F 
 11744      6F757470 
 11745              	.LASF477:
 11746 2e4f 52464D37 		.ascii	"RFM70_REG_DYNPD 0x1C\000"
 11746      305F5245 
 11746      475F4459 
 11746      4E504420 
 11746      30783143 
 11747              	.LASF321:
 11748 2e64 5F5F4C41 		.ascii	"__LACCUM_MIN__ (-0X1P31LK-0X1P31LK)\000"
 11748      4343554D 
 11748      5F4D494E 
 11748      5F5F2028 
 11748      2D305831 
 11749              	.LASF485:
 11750 2e88 53544154 		.ascii	"STATUS_TX_FULL 0x01\000"
 11750      55535F54 
 11750      585F4655 
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 256


 11750      4C4C2030 
 11750      78303100 
 11751              	.LASF273:
 11752 2e9c 5F5F4652 		.ascii	"__FRACT_EPSILON__ 0x1P-15R\000"
 11752      4143545F 
 11752      45505349 
 11752      4C4F4E5F 
 11752      5F203078 
 11753              	.LASF2:
 11754 2eb7 5F5F5354 		.ascii	"__STDC_HOSTED__ 1\000"
 11754      44435F48 
 11754      4F535445 
 11754      445F5F20 
 11754      3100
 11755              	.LASF475:
 11756 2ec9 52464D37 		.ascii	"RFM70_REG_RX_PW_P5 0x16\000"
 11756      305F5245 
 11756      475F5258 
 11756      5F50575F 
 11756      50352030 
 11757              	.LASF144:
 11758 2ee1 5F5F494E 		.ascii	"__INTPTR_MAX__ 0x7fffffff\000"
 11758      54505452 
 11758      5F4D4158 
 11758      5F5F2030 
 11758      78376666 
 11759              	.LASF405:
 11760 2efb 5F5F4152 		.ascii	"__ARM_FEATURE_NUMERIC_MAXMIN\000"
 11760      4D5F4645 
 11760      41545552 
 11760      455F4E55 
 11760      4D455249 
 11761              	.LASF455:
 11762 2f18 52464D37 		.ascii	"RFM70_REG_EN_RXADDR 0x02\000"
 11762      305F5245 
 11762      475F454E 
 11762      5F525841 
 11762      44445220 
 11763              	.LASF499:
 11764 2f31 696E7075 		.ascii	"input\000"
 11764      7400
 11765              	.LASF327:
 11766 2f37 5F5F554C 		.ascii	"__ULACCUM_MAX__ 0XFFFFFFFFFFFFFFFFP-32ULK\000"
 11766      41434355 
 11766      4D5F4D41 
 11766      585F5F20 
 11766      30584646 
 11767              	.LASF201:
 11768 2f61 5F5F464C 		.ascii	"__FLT32_MAX_10_EXP__ 38\000"
 11768      5433325F 
 11768      4D41585F 
 11768      31305F45 
 11768      58505F5F 
 11769              	.LASF514:
 11770 2f79 77616974 		.ascii	"wait_ms\000"
 11770      5F6D7300 
 11771              	.LASF219:
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 257


 11772 2f81 5F5F464C 		.ascii	"__FLT64_EPSILON__ 2.2204460492503131e-16F64\000"
 11772      5436345F 
 11772      45505349 
 11772      4C4F4E5F 
 11772      5F20322E 
 11773              	.LASF541:
 11774 2fad 5F5A4E35 		.ascii	"_ZN5rfm7012mode_standbyEv\000"
 11774      72666D37 
 11774      3031326D 
 11774      6F64655F 
 11774      7374616E 
 11775              	.LASF557:
 11776 2fc7 5F5A4E35 		.ascii	"_ZN5rfm705powerEh\000"
 11776      72666D37 
 11776      3035706F 
 11776      77657245 
 11776      6800
 11777              	.LASF388:
 11778 2fd9 5F5F4743 		.ascii	"__GCC_ATOMIC_LLONG_LOCK_FREE 1\000"
 11778      435F4154 
 11778      4F4D4943 
 11778      5F4C4C4F 
 11778      4E475F4C 
 11779              	.LASF157:
 11780 2ff8 5F5F464C 		.ascii	"__FLT_MAX_EXP__ 128\000"
 11780      545F4D41 
 11780      585F4558 
 11780      505F5F20 
 11780      31323800 
 11781              	.LASF11:
 11782 300c 5F5F4154 		.ascii	"__ATOMIC_ACQ_REL 4\000"
 11782      4F4D4943 
 11782      5F414351 
 11782      5F52454C 
 11782      203400
 11783              	.LASF65:
 11784 301f 5F5F5549 		.ascii	"__UINT_FAST64_TYPE__ long long unsigned int\000"
 11784      4E545F46 
 11784      41535436 
 11784      345F5459 
 11784      50455F5F 
 11785              	.LASF543:
 11786 304b 5F5A4E35 		.ascii	"_ZN5rfm7014mode_powerdownEv\000"
 11786      72666D37 
 11786      3031346D 
 11786      6F64655F 
 11786      706F7765 
 11787              	.LASF498:
 11788 3067 756E7369 		.ascii	"unsigned char\000"
 11788      676E6564 
 11788      20636861 
 11788      7200
 11789              	.LASF239:
 11790 3075 5F5F4445 		.ascii	"__DEC32_MIN_EXP__ (-94)\000"
 11790      4333325F 
 11790      4D494E5F 
 11790      4558505F 
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 258


 11790      5F20282D 
 11791              	.LASF448:
 11792 308d 52464D37 		.ascii	"RFM70_CMD_W_TX_PAYLOAD_NOACK 0xB0\000"
 11792      305F434D 
 11792      445F575F 
 11792      54585F50 
 11792      41594C4F 
 11793              	.LASF505:
 11794 30af 5F5A4E34 		.ascii	"_ZN4pins10output_pin20direction_set_outputEv\000"
 11794      70696E73 
 11794      31306F75 
 11794      74707574 
 11794      5F70696E 
 11795              	.LASF404:
 11796 30dc 5F5F4152 		.ascii	"__ARM_FEATURE_CLZ\000"
 11796      4D5F4645 
 11796      41545552 
 11796      455F434C 
 11796      5A00
 11797              	.LASF539:
 11798 30ee 5F5A4E35 		.ascii	"_ZN5rfm7012mode_receiveEv\000"
 11798      72666D37 
 11798      3031326D 
 11798      6F64655F 
 11798      72656365 
 11799              	.LASF191:
 11800 3108 5F5F4C44 		.ascii	"__LDBL_EPSILON__ 2.2204460492503131e-16L\000"
 11800      424C5F45 
 11800      5053494C 
 11800      4F4E5F5F 
 11800      20322E32 
 11801              	.LASF66:
 11802 3131 5F5F494E 		.ascii	"__INTPTR_TYPE__ int\000"
 11802      54505452 
 11802      5F545950 
 11802      455F5F20 
 11802      696E7400 
 11803              	.LASF469:
 11804 3145 52464D37 		.ascii	"RFM70_REG_TX_ADDR 0x10\000"
 11804      305F5245 
 11804      475F5458 
 11804      5F414444 
 11804      52203078 
 11805              	.LASF151:
 11806 315c 5F5F4445 		.ascii	"__DEC_EVAL_METHOD__ 2\000"
 11806      435F4556 
 11806      414C5F4D 
 11806      4554484F 
 11806      445F5F20 
 11807              	.LASF377:
 11808 3172 5F5F474E 		.ascii	"__GNUC_GNU_INLINE__ 1\000"
 11808      55435F47 
 11808      4E555F49 
 11808      4E4C494E 
 11808      455F5F20 
 11809              	.LASF306:
 11810 3188 5F5F5553 		.ascii	"__USACCUM_MIN__ 0.0UHK\000"
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 259


 11810      41434355 
 11810      4D5F4D49 
 11810      4E5F5F20 
 11810      302E3055 
 11811              	.LASF459:
 11812 319f 52464D37 		.ascii	"RFM70_REG_RF_SETUP 0x06\000"
 11812      305F5245 
 11812      475F5246 
 11812      5F534554 
 11812      55502030 
 11813              	.LASF265:
 11814 31b7 5F5F5553 		.ascii	"__USFRACT_IBIT__ 0\000"
 11814      46524143 
 11814      545F4942 
 11814      49545F5F 
 11814      203000
 11815              	.LASF120:
 11816 31ca 5F5F494E 		.ascii	"__INT_LEAST32_WIDTH__ 32\000"
 11816      545F4C45 
 11816      41535433 
 11816      325F5749 
 11816      4454485F 
 11817              	.LASF396:
 11818 31e3 5F5F4152 		.ascii	"__ARM_FEATURE_DSP\000"
 11818      4D5F4645 
 11818      41545552 
 11818      455F4453 
 11818      5000
 11819              	.LASF64:
 11820 31f5 5F5F5549 		.ascii	"__UINT_FAST32_TYPE__ unsigned int\000"
 11820      4E545F46 
 11820      41535433 
 11820      325F5459 
 11820      50455F5F 
 11821              	.LASF572:
 11822 3217 72656365 		.ascii	"receive_address_p1\000"
 11822      6976655F 
 11822      61646472 
 11822      6573735F 
 11822      703100
 11823              	.LASF252:
 11824 322a 5F5F4445 		.ascii	"__DEC128_MANT_DIG__ 34\000"
 11824      43313238 
 11824      5F4D414E 
 11824      545F4449 
 11824      475F5F20 
 11825              	.LASF490:
 11826 3241 4649464F 		.ascii	"FIFO_STATUS_RX_EMPTY 0x01\000"
 11826      5F535441 
 11826      5455535F 
 11826      52585F45 
 11826      4D505459 
 11827              	.LASF346:
 11828 325b 5F5F4451 		.ascii	"__DQ_IBIT__ 0\000"
 11828      5F494249 
 11828      545F5F20 
 11828      3000
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 260


 11829              	.LASF177:
 11830 3269 5F5F4442 		.ascii	"__DBL_DENORM_MIN__ double(4.9406564584124654e-324L)"
 11830      4C5F4445 
 11830      4E4F524D 
 11830      5F4D494E 
 11830      5F5F2064 
 11831 329c 00       		.ascii	"\000"
 11832              	.LASF204:
 11833 329d 5F5F464C 		.ascii	"__FLT32_MIN__ 1.1754943508222875e-38F32\000"
 11833      5433325F 
 11833      4D494E5F 
 11833      5F20312E 
 11833      31373534 
 11834              	.LASF33:
 11835 32c5 5F5F5349 		.ascii	"__SIZE_TYPE__ unsigned int\000"
 11835      5A455F54 
 11835      5950455F 
 11835      5F20756E 
 11835      7369676E 
 11836              	.LASF468:
 11837 32e0 52464D37 		.ascii	"RFM70_REG_RX_ADDR_P5 0x0F\000"
 11837      305F5245 
 11837      475F5258 
 11837      5F414444 
 11837      525F5035 
 11838              	.LASF443:
 11839 32fa 52464D37 		.ascii	"RFM70_CMD_R_RX_PAYLOAD 0x61\000"
 11839      305F434D 
 11839      445F525F 
 11839      52585F50 
 11839      41594C4F 
 11840              	.LASF559:
 11841 3316 5F5A4E35 		.ascii	"_ZN5rfm7025retransmit_delay_attemptsEhh\000"
 11841      72666D37 
 11841      30323572 
 11841      65747261 
 11841      6E736D69 
 11842              	.LASF269:
 11843 333e 5F5F4652 		.ascii	"__FRACT_FBIT__ 15\000"
 11843      4143545F 
 11843      46424954 
 11843      5F5F2031 
 11843      3500
 11844              	.LASF13:
 11845 3350 5F5F4F50 		.ascii	"__OPTIMIZE_SIZE__ 1\000"
 11845      54494D49 
 11845      5A455F53 
 11845      495A455F 
 11845      5F203100 
 11846              	.LASF568:
 11847 3364 70697065 		.ascii	"pipe_enable\000"
 11847      5F656E61 
 11847      626C6500 
 11848              	.LASF374:
 11849 3370 5F5F5554 		.ascii	"__UTA_IBIT__ 64\000"
 11849      415F4942 
 11849      49545F5F 
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 261


 11849      20363400 
 11850              	.LASF156:
 11851 3380 5F5F464C 		.ascii	"__FLT_MIN_10_EXP__ (-37)\000"
 11851      545F4D49 
 11851      4E5F3130 
 11851      5F455850 
 11851      5F5F2028 
 11852              	.LASF233:
 11853 3399 5F5F464C 		.ascii	"__FLT32X_EPSILON__ 2.2204460492503131e-16F32x\000"
 11853      54333258 
 11853      5F455053 
 11853      494C4F4E 
 11853      5F5F2032 
 11854              	.LASF426:
 11855 33c7 5F5F4152 		.ascii	"__ARM_FEATURE_FMA\000"
 11855      4D5F4645 
 11855      41545552 
 11855      455F464D 
 11855      4100
 11856              	.LASF150:
 11857 33d9 5F5F464C 		.ascii	"__FLT_EVAL_METHOD_TS_18661_3__ 0\000"
 11857      545F4556 
 11857      414C5F4D 
 11857      4554484F 
 11857      445F5453 
 11858              	.LASF179:
 11859 33fa 5F5F4442 		.ascii	"__DBL_HAS_INFINITY__ 1\000"
 11859      4C5F4841 
 11859      535F494E 
 11859      46494E49 
 11859      54595F5F 
 11860              	.LASF245:
 11861 3411 5F5F4445 		.ascii	"__DEC64_MANT_DIG__ 16\000"
 11861      4336345F 
 11861      4D414E54 
 11861      5F444947 
 11861      5F5F2031 
 11862              	.LASF60:
 11863 3427 5F5F494E 		.ascii	"__INT_FAST32_TYPE__ int\000"
 11863      545F4641 
 11863      53543332 
 11863      5F545950 
 11863      455F5F20 
 11864              	.LASF300:
 11865 343f 5F5F5341 		.ascii	"__SACCUM_IBIT__ 8\000"
 11865      4343554D 
 11865      5F494249 
 11865      545F5F20 
 11865      3800
 11866              	.LASF212:
 11867 3451 5F5F464C 		.ascii	"__FLT64_MIN_EXP__ (-1021)\000"
 11867      5436345F 
 11867      4D494E5F 
 11867      4558505F 
 11867      5F20282D 
 11868              	.LASF16:
 11869 346b 5F5F5349 		.ascii	"__SIZEOF_INT__ 4\000"
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 262


 11869      5A454F46 
 11869      5F494E54 
 11869      5F5F2034 
 11869      00
 11870              	.LASF37:
 11871 347c 5F5F494E 		.ascii	"__INTMAX_TYPE__ long long int\000"
 11871      544D4158 
 11871      5F545950 
 11871      455F5F20 
 11871      6C6F6E67 
 11872              	.LASF97:
 11873 349a 5F5F494E 		.ascii	"__INTMAX_C(c) c ## LL\000"
 11873      544D4158 
 11873      5F432863 
 11873      29206320 
 11873      2323204C 
 11874              	.LASF480:
 11875 34b0 52464D37 		.ascii	"RFM70_CMD_READ_REG 0x00\000"
 11875      305F434D 
 11875      445F5245 
 11875      41445F52 
 11875      45472030 
 11876              	.LASF272:
 11877 34c8 5F5F4652 		.ascii	"__FRACT_MAX__ 0X7FFFP-15R\000"
 11877      4143545F 
 11877      4D41585F 
 11877      5F203058 
 11877      37464646 
 11878              	.LASF593:
 11879 34e2 5F5A4E35 		.ascii	"_ZN5rfm707receiveERhPhS0_\000"
 11879      72666D37 
 11879      30377265 
 11879      63656976 
 11879      65455268 
 11880              	.LASF412:
 11881 34fc 5F5F4150 		.ascii	"__APCS_32__ 1\000"
 11881      43535F33 
 11881      325F5F20 
 11881      3100
 11882              	.LASF49:
 11883 350a 5F5F5549 		.ascii	"__UINT64_TYPE__ long long unsigned int\000"
 11883      4E543634 
 11883      5F545950 
 11883      455F5F20 
 11883      6C6F6E67 
 11884              	.LASF237:
 11885 3531 5F5F464C 		.ascii	"__FLT32X_HAS_QUIET_NAN__ 1\000"
 11885      54333258 
 11885      5F484153 
 11885      5F515549 
 11885      45545F4E 
 11886              	.LASF574:
 11887 354c 72656365 		.ascii	"receive_address_pn\000"
 11887      6976655F 
 11887      61646472 
 11887      6573735F 
 11887      706E00
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 263


 11888              	.LASF509:
 11889 355f 64697265 		.ascii	"direction_set\000"
 11889      6374696F 
 11889      6E5F7365 
 11889      7400
 11890              	.LASF415:
 11891 356d 5F5F5448 		.ascii	"__THUMBEL__ 1\000"
 11891      554D4245 
 11891      4C5F5F20 
 11891      3100
 11892              	.LASF366:
 11893 357b 5F5F5441 		.ascii	"__TA_IBIT__ 64\000"
 11893      5F494249 
 11893      545F5F20 
 11893      363400
 11894              	.LASF20:
 11895 358a 5F5F5349 		.ascii	"__SIZEOF_FLOAT__ 4\000"
 11895      5A454F46 
 11895      5F464C4F 
 11895      41545F5F 
 11895      203400
 11896              	.LASF236:
 11897 359d 5F5F464C 		.ascii	"__FLT32X_HAS_INFINITY__ 1\000"
 11897      54333258 
 11897      5F484153 
 11897      5F494E46 
 11897      494E4954 
 11898              	.LASF133:
 11899 35b7 5F5F494E 		.ascii	"__INT_FAST8_WIDTH__ 32\000"
 11899      545F4641 
 11899      5354385F 
 11899      57494454 
 11899      485F5F20 
 11900              	.LASF185:
 11901 35ce 5F5F4C44 		.ascii	"__LDBL_MAX_EXP__ 1024\000"
 11901      424C5F4D 
 11901      41585F45 
 11901      58505F5F 
 11901      20313032 
 11902              	.LASF534:
 11903 35e4 69735F70 		.ascii	"is_present\000"
 11903      72657365 
 11903      6E7400
 11904              	.LASF0:
 11905 35ef 5F5F5354 		.ascii	"__STDC__ 1\000"
 11905      44435F5F 
 11905      203100
 11906              	.LASF380:
 11907 35fa 5F5F4743 		.ascii	"__GCC_ATOMIC_BOOL_LOCK_FREE 1\000"
 11907      435F4154 
 11907      4F4D4943 
 11907      5F424F4F 
 11907      4C5F4C4F 
 11908              	.LASF256:
 11909 3618 5F5F4445 		.ascii	"__DEC128_MAX__ 9.999999999999999999999999999999999E"
 11909      43313238 
 11909      5F4D4158 
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 264


 11909      5F5F2039 
 11909      2E393939 
 11910 364b 36313434 		.ascii	"6144DL\000"
 11910      444C00
 11911              	.LASF438:
 11912 3652 5F5F454C 		.ascii	"__ELF__ 1\000"
 11912      465F5F20 
 11912      3100
 11913              	.LASF187:
 11914 365c 5F5F4445 		.ascii	"__DECIMAL_DIG__ 17\000"
 11914      43494D41 
 11914      4C5F4449 
 11914      475F5F20 
 11914      313700
 11915              	.LASF430:
 11916 366f 5F5F5448 		.ascii	"__THUMB_INTERWORK__ 1\000"
 11916      554D425F 
 11916      494E5445 
 11916      52574F52 
 11916      4B5F5F20 
 11917              	.LASF119:
 11918 3685 5F5F494E 		.ascii	"__INT32_C(c) c ## L\000"
 11918      5433325F 
 11918      43286329 
 11918      20632023 
 11918      23204C00 
 11919              	.LASF422:
 11920 3699 5F5F4152 		.ascii	"__ARM_FP16_FORMAT_ALTERNATIVE\000"
 11920      4D5F4650 
 11920      31365F46 
 11920      4F524D41 
 11920      545F414C 
 11921              	.LASF186:
 11922 36b7 5F5F4C44 		.ascii	"__LDBL_MAX_10_EXP__ 308\000"
 11922      424C5F4D 
 11922      41585F31 
 11922      305F4558 
 11922      505F5F20 
 11923              	.LASF229:
 11924 36cf 5F5F464C 		.ascii	"__FLT32X_MAX_10_EXP__ 308\000"
 11924      54333258 
 11924      5F4D4158 
 11924      5F31305F 
 11924      4558505F 
 11925              	.LASF146:
 11926 36e9 5F5F5549 		.ascii	"__UINTPTR_MAX__ 0xffffffffU\000"
 11926      4E545054 
 11926      525F4D41 
 11926      585F5F20 
 11926      30786666 
 11927              	.LASF178:
 11928 3705 5F5F4442 		.ascii	"__DBL_HAS_DENORM__ 1\000"
 11928      4C5F4841 
 11928      535F4445 
 11928      4E4F524D 
 11928      5F5F2031 
 11929              	.LASF264:
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 265


 11930 371a 5F5F5553 		.ascii	"__USFRACT_FBIT__ 8\000"
 11930      46524143 
 11930      545F4642 
 11930      49545F5F 
 11930      203800
 11931              	.LASF616:
 11932 372d 70696E73 		.ascii	"pins\000"
 11932      00
 11933              	.LASF531:
 11934 3732 5F5A4E35 		.ascii	"_ZN5rfm7014register_writeEhh\000"
 11934      72666D37 
 11934      30313472 
 11934      65676973 
 11934      7465725F 
 11935              	.LASF519:
 11936 374f 5F5A4E35 		.ascii	"_ZN5rfm7010init_bank1Ev\000"
 11936      72666D37 
 11936      30313069 
 11936      6E69745F 
 11936      62616E6B 
 11937              	.LASF566:
 11938 3767 70697065 		.ascii	"pipe_autoack\000"
 11938      5F617574 
 11938      6F61636B 
 11938      00
 11939              	.LASF339:
 11940 3774 5F5F5151 		.ascii	"__QQ_FBIT__ 7\000"
 11940      5F464249 
 11940      545F5F20 
 11940      3700
 11941              	.LASF282:
 11942 3782 5F5F4C46 		.ascii	"__LFRACT_MAX__ 0X7FFFFFFFP-31LR\000"
 11942      52414354 
 11942      5F4D4158 
 11942      5F5F2030 
 11942      58374646 
 11943              	.LASF371:
 11944 37a2 5F5F5544 		.ascii	"__UDA_FBIT__ 32\000"
 11944      415F4642 
 11944      49545F5F 
 11944      20333200 
 11945              	.LASF332:
 11946 37b2 5F5F4C4C 		.ascii	"__LLACCUM_MAX__ 0X7FFFFFFFFFFFFFFFP-31LLK\000"
 11946      41434355 
 11946      4D5F4D41 
 11946      585F5F20 
 11946      30583746 
 11947              	.LASF118:
 11948 37dc 5F5F494E 		.ascii	"__INT_LEAST32_MAX__ 0x7fffffffL\000"
 11948      545F4C45 
 11948      41535433 
 11948      325F4D41 
 11948      585F5F20 
 11949              	.LASF492:
 11950 37fc 52464D37 		.ascii	"RFM70_CSN(x) csn.set( (x) )\000"
 11950      305F4353 
 11950      4E287829 
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 266


 11950      2063736E 
 11950      2E736574 
 11951              	.LASF248:
 11952 3818 5F5F4445 		.ascii	"__DEC64_MIN__ 1E-383DD\000"
 11952      4336345F 
 11952      4D494E5F 
 11952      5F203145 
 11952      2D333833 
 11953              	.LASF387:
 11954 382f 5F5F4743 		.ascii	"__GCC_ATOMIC_LONG_LOCK_FREE 1\000"
 11954      435F4154 
 11954      4F4D4943 
 11954      5F4C4F4E 
 11954      475F4C4F 
 11955              	.LASF67:
 11956 384d 5F5F5549 		.ascii	"__UINTPTR_TYPE__ unsigned int\000"
 11956      4E545054 
 11956      525F5459 
 11956      50455F5F 
 11956      20756E73 
 11957              	.LASF487:
 11958 386b 4649464F 		.ascii	"FIFO_STATUS_TX_FULL 0x20\000"
 11958      5F535441 
 11958      5455535F 
 11958      54585F46 
 11958      554C4C20 
 11959              	.LASF98:
 11960 3884 5F5F5549 		.ascii	"__UINTMAX_MAX__ 0xffffffffffffffffULL\000"
 11960      4E544D41 
 11960      585F4D41 
 11960      585F5F20 
 11960      30786666 
 11961              	.LASF41:
 11962 38aa 5F5F5349 		.ascii	"__SIG_ATOMIC_TYPE__ int\000"
 11962      475F4154 
 11962      4F4D4943 
 11962      5F545950 
 11962      455F5F20 
 11963              	.LASF444:
 11964 38c2 52464D37 		.ascii	"RFM70_CMD_W_TX_PAYLOAD 0xA0\000"
 11964      305F434D 
 11964      445F575F 
 11964      54585F50 
 11964      41594C4F 
 11965              	.LASF291:
 11966 38de 5F5F4C4C 		.ascii	"__LLFRACT_MIN__ (-0.5LLR-0.5LLR)\000"
 11966      46524143 
 11966      545F4D49 
 11966      4E5F5F20 
 11966      282D302E 
 11967              	.LASF551:
 11968 38ff 5F5A4E35 		.ascii	"_ZN5rfm7013air_data_rateEh\000"
 11968      72666D37 
 11968      30313361 
 11968      69725F64 
 11968      6174615F 
 11969              	.LASF298:
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 267


 11970 391a 5F5F554C 		.ascii	"__ULLFRACT_EPSILON__ 0x1P-64ULLR\000"
 11970      4C465241 
 11970      43545F45 
 11970      5053494C 
 11970      4F4E5F5F 
 11971              	.LASF193:
 11972 393b 5F5F4C44 		.ascii	"__LDBL_HAS_DENORM__ 1\000"
 11972      424C5F48 
 11972      41535F44 
 11972      454E4F52 
 11972      4D5F5F20 
 11973              	.LASF403:
 11974 3951 5F5F4152 		.ascii	"__ARM_FEATURE_LDREX\000"
 11974      4D5F4645 
 11974      41545552 
 11974      455F4C44 
 11974      52455800 
 11975              	.LASF585:
 11976 3965 5F5A4E35 		.ascii	"_ZN5rfm7016transmit_messageEPKhh\000"
 11976      72666D37 
 11976      30313674 
 11976      72616E73 
 11976      6D69745F 
 11977              	.LASF529:
 11978 3986 5F5A4E35 		.ascii	"_ZN5rfm7011buffer_readEhPhh\000"
 11978      72666D37 
 11978      30313162 
 11978      75666665 
 11978      725F7265 
 11979              	.LASF210:
 11980 39a2 5F5F464C 		.ascii	"__FLT64_MANT_DIG__ 53\000"
 11980      5436345F 
 11980      4D414E54 
 11980      5F444947 
 11980      5F5F2035 
 11981              	.LASF220:
 11982 39b8 5F5F464C 		.ascii	"__FLT64_DENORM_MIN__ 4.9406564584124654e-324F64\000"
 11982      5436345F 
 11982      44454E4F 
 11982      524D5F4D 
 11982      494E5F5F 
 11983              	.LASF164:
 11984 39e8 5F5F464C 		.ascii	"__FLT_HAS_DENORM__ 1\000"
 11984      545F4841 
 11984      535F4445 
 11984      4E4F524D 
 11984      5F5F2031 
 11985              	.LASF139:
 11986 39fd 5F5F494E 		.ascii	"__INT_FAST64_WIDTH__ 64\000"
 11986      545F4641 
 11986      53543634 
 11986      5F574944 
 11986      54485F5F 
 11987              	.LASF173:
 11988 3a15 5F5F4442 		.ascii	"__DBL_DECIMAL_DIG__ 17\000"
 11988      4C5F4445 
 11988      43494D41 
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 268


 11988      4C5F4449 
 11988      475F5F20 
 11989              		.ident	"GCC: (GNU) 7.2.0"
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 269


DEFINED SYMBOLS
                            *ABS*:00000000 rfm70.cpp
C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s:72     .text._ZN5rfm706SPI_RWEh:00000000 $t
C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s:79     .text._ZN5rfm706SPI_RWEh:00000000 _ZN5rfm706SPI_RWEh
C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s:202    .text._ZN5rfm7014register_writeEhh:00000000 $t
C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s:209    .text._ZN5rfm7014register_writeEhh:00000000 _ZN5rfm7014register_writeEhh
C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s:280    .text._ZN5rfm7013register_readEh:00000000 $t
C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s:287    .text._ZN5rfm7013register_readEh:00000000 _ZN5rfm7013register_readEh
C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s:351    .text._ZN5rfm7011buffer_readEhPhh:00000000 $t
C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s:358    .text._ZN5rfm7011buffer_readEhPhh:00000000 _ZN5rfm7011buffer_readEhPhh
C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s:450    .text._ZN5rfm7012buffer_writeEcPKhh:00000000 $t
C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s:457    .text._ZN5rfm7012buffer_writeEcPKhh:00000000 _ZN5rfm7012buffer_writeEcPKhh
C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s:547    .text._ZN5rfm704bankEh:00000000 $t
C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s:554    .text._ZN5rfm704bankEh:00000000 _ZN5rfm704bankEh
C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s:623    .text._ZN5rfm7010init_bank1Ev:00000000 $t
C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s:630    .text._ZN5rfm7010init_bank1Ev:00000000 _ZN5rfm7010init_bank1Ev
C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s:783    .text._ZN5rfm7010init_bank1Ev:00000098 $d
C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s:790    .text._ZN5rfm7010is_presentEv:00000000 $t
C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s:797    .text._ZN5rfm7010is_presentEv:00000000 _ZN5rfm7010is_presentEv
C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s:875    .text._ZN5rfm7012mode_receiveEv:00000000 $t
C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s:882    .text._ZN5rfm7012mode_receiveEv:00000000 _ZN5rfm7012mode_receiveEv
C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s:967    .text._ZN5rfm7013mode_transmitEv:00000000 $t
C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s:974    .text._ZN5rfm7013mode_transmitEv:00000000 _ZN5rfm7013mode_transmitEv
C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s:1069   .text._ZN5rfm7012mode_standbyEv:00000000 $t
C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s:1076   .text._ZN5rfm7012mode_standbyEv:00000000 _ZN5rfm7012mode_standbyEv
C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s:1130   .text._ZN5rfm7014mode_powerdownEv:00000000 $t
C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s:1137   .text._ZN5rfm7014mode_powerdownEv:00000000 _ZN5rfm7014mode_powerdownEv
C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s:1190   .text._ZN5rfm707channelEh:00000000 $t
C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s:1197   .text._ZN5rfm707channelEh:00000000 _ZN5rfm707channelEh
C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s:1228   .text._ZN5rfm7013air_data_rateEh:00000000 $t
C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s:1235   .text._ZN5rfm7013air_data_rateEh:00000000 _ZN5rfm7013air_data_rateEh
C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s:1315   .text._ZN5rfm7010crc_lengthEh:00000000 $t
C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s:1322   .text._ZN5rfm7010crc_lengthEh:00000000 _ZN5rfm7010crc_lengthEh
C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s:1410   .text._ZN5rfm7014address_lengthEh:00000000 $t
C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s:1417   .text._ZN5rfm7014address_lengthEh:00000000 _ZN5rfm7014address_lengthEh
C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s:1455   .text._ZN5rfm7018transmit_fifo_fullEv:00000000 $t
C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s:1462   .text._ZN5rfm7018transmit_fifo_fullEv:00000000 _ZN5rfm7018transmit_fifo_fullEv
C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s:1491   .text._ZN5rfm7018receive_fifo_emptyEv:00000000 $t
C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s:1498   .text._ZN5rfm7018receive_fifo_emptyEv:00000000 _ZN5rfm7018receive_fifo_emptyEv
C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s:1531   .text._ZN5rfm7018receive_address_p0EPKh:00000000 $t
C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s:1538   .text._ZN5rfm7018receive_address_p0EPKh:00000000 _ZN5rfm7018receive_address_p0EPKh
C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s:1567   .text._ZN5rfm7018receive_address_p1EPKh:00000000 $t
C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s:1574   .text._ZN5rfm7018receive_address_p1EPKh:00000000 _ZN5rfm7018receive_address_p1EPKh
C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s:1603   .text._ZN5rfm7018receive_address_pnEhh:00000000 $t
C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s:1610   .text._ZN5rfm7018receive_address_pnEhh:00000000 _ZN5rfm7018receive_address_pnEhh
C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s:1636   .text._ZN5rfm7016transmit_addressEPKh:00000000 $t
C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s:1643   .text._ZN5rfm7016transmit_addressEPKh:00000000 _ZN5rfm7016transmit_addressEPKh
C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s:1672   .text._ZN5rfm7016retransmit_countEv:00000000 $t
C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s:1679   .text._ZN5rfm7016retransmit_countEv:00000000 _ZN5rfm7016retransmit_countEv
C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s:1709   .text._ZN5rfm7018lost_packets_countEv:00000000 $t
C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s:1716   .text._ZN5rfm7018lost_packets_countEv:00000000 _ZN5rfm7018lost_packets_countEv
C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s:1742   .text._ZN5rfm7012pipe_autoackEhb:00000000 $t
C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s:1749   .text._ZN5rfm7012pipe_autoackEhb:00000000 _ZN5rfm7012pipe_autoackEhb
C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s:1817   .text._ZN5rfm7011pipe_enableEhb:00000000 $t
C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s:1824   .text._ZN5rfm7011pipe_enableEhb:00000000 _ZN5rfm7011pipe_enableEhb
C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s:1892   .text._ZN5rfm7018lost_packets_resetEv:00000000 $t
C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s:1899   .text._ZN5rfm7018lost_packets_resetEv:00000000 _ZN5rfm7018lost_packets_resetEv
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s 			page 270


C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s:1941   .text._ZN5rfm7025retransmit_delay_attemptsEhh:00000000 $t
C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s:1948   .text._ZN5rfm7025retransmit_delay_attemptsEhh:00000000 _ZN5rfm7025retransmit_delay_attemptsEhh
C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s:1985   .text._ZN5rfm708lna_highEv:00000000 $t
C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s:1992   .text._ZN5rfm708lna_highEv:00000000 _ZN5rfm708lna_highEv
C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s:2034   .text._ZN5rfm707lna_lowEv:00000000 $t
C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s:2041   .text._ZN5rfm707lna_lowEv:00000000 _ZN5rfm707lna_lowEv
C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s:2082   .text._ZN5rfm705powerEh:00000000 $t
C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s:2089   .text._ZN5rfm705powerEh:00000000 _ZN5rfm705powerEh
C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s:2185   .text._ZN5rfm7020channel_payload_sizeEhh:00000000 $t
C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s:2192   .text._ZN5rfm7020channel_payload_sizeEhh:00000000 _ZN5rfm7020channel_payload_sizeEhh
C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s:2272   .text._ZN5rfm7016transmit_messageEPKhh:00000000 $t
C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s:2279   .text._ZN5rfm7016transmit_messageEPKhh:00000000 _ZN5rfm7016transmit_messageEPKhh
C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s:2312   .text._ZN5rfm7021transmit_message_onceEPKhh:00000000 $t
C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s:2319   .text._ZN5rfm7021transmit_message_onceEPKhh:00000000 _ZN5rfm7021transmit_message_onceEPKhh
C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s:2352   .text._ZN5rfm7017receive_next_pipeEv:00000000 $t
C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s:2359   .text._ZN5rfm7017receive_next_pipeEv:00000000 _ZN5rfm7017receive_next_pipeEv
C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s:2388   .text._ZN5rfm7019receive_next_lengthEv:00000000 $t
C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s:2395   .text._ZN5rfm7019receive_next_lengthEv:00000000 _ZN5rfm7019receive_next_lengthEv
C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s:2419   .text._ZN5rfm707receiveERhPhS0_:00000000 $t
C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s:2426   .text._ZN5rfm707receiveERhPhS0_:00000000 _ZN5rfm707receiveERhPhS0_
C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s:2497   .text._ZN5rfm704initEv:00000000 $t
C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s:2504   .text._ZN5rfm704initEv:00000000 _ZN5rfm704initEv
C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s:2710   .text._ZN5rfm704initEv:000000e4 $d
C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s:2719   .rodata._ZL11Bank1_Reg14:00000000 _ZL11Bank1_Reg14
C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s:2735   .rodata._ZL11RX0_Address:00000000 _ZL11RX0_Address
C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s:2742   .rodata._ZL13Bank1_Reg0_13:00000000 $d
C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s:2746   .rodata._ZL13Bank1_Reg0_13:00000000 _ZL13Bank1_Reg0_13
C:\Users\Wouter\AppData\Local\Temp\ccdWSfDp.s:2765   .rodata._ZL9Bank0_Reg:00000000 _ZL9Bank0_Reg
                     .debug_frame:00000010 $d
                           .group:00000000 wm4.0.c78eeed12c58b02cb443484f13096dde
                           .group:00000000 wm4.rfm70.h.40.8a1699fd4d2a98c61874101f853a9e36

NO UNDEFINED SYMBOLS
