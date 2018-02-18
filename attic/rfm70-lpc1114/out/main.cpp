ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 1


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
  11              		.file	"main.cpp"
  12              	@ GNU C++98 (GCC) version 7.2.0 (arm-eabi)
  13              	@	compiled by GNU C version 5.4.0, GMP version 4.3.2, MPFR version 3.1.6, MPC version 1.0.3, isl ve
  14              	@ GGC heuristics: --param ggc-min-expand=100 --param ggc-min-heapsize=131072
  15              	@ options passed:  -I . -imultilib thumb/cortex_m0
  16              	@ -iprefix c:\sysgcc\arm-eabi\bin\../lib/gcc/arm-eabi/7.2.0/ -MD out/main.d
  17              	@ -MF out/main.d -MP -MQ out/main.o -D__USES_INITFINI__ main.cpp
  18              	@ -mcpu=cortex-m0 -mthumb -mfloat-abi=soft -auxbase-strip out/main.o -g
  19              	@ -ggdb3 -Os -Wall -Wextra -std=gnu++98 -ffunction-sections -fdata-sections
  20              	@ -fno-rtti -fno-exceptions -fverbose-asm
  21              	@ options enabled:  -faggressive-loop-optimizations -falign-jumps
  22              	@ -falign-labels -falign-loops -fauto-inc-dec -fbranch-count-reg
  23              	@ -fcaller-saves -fchkp-check-incomplete-type -fchkp-check-read
  24              	@ -fchkp-check-write -fchkp-instrument-calls -fchkp-narrow-bounds
  25              	@ -fchkp-optimize -fchkp-store-bounds -fchkp-use-static-bounds
  26              	@ -fchkp-use-static-const-bounds -fchkp-use-wrappers -fcode-hoisting
  27              	@ -fcombine-stack-adjustments -fcommon -fcompare-elim -fcprop-registers
  28              	@ -fcrossjumping -fcse-follow-jumps -fdata-sections -fdefer-pop
  29              	@ -fdelete-null-pointer-checks -fdevirtualize -fdevirtualize-speculatively
  30              	@ -fdwarf2-cfi-asm -fearly-inlining -feliminate-unused-debug-types
  31              	@ -fexpensive-optimizations -fforward-propagate -ffp-int-builtin-inexact
  32              	@ -ffunction-cse -ffunction-sections -fgcse -fgcse-lm -fgnu-runtime
  33              	@ -fgnu-unique -fguess-branch-probability -fhoist-adjacent-loads -fident
  34              	@ -fif-conversion -fif-conversion2 -findirect-inlining -finline
  35              	@ -finline-atomics -finline-functions -finline-functions-called-once
  36              	@ -finline-small-functions -fipa-bit-cp -fipa-cp -fipa-icf
  37              	@ -fipa-icf-functions -fipa-icf-variables -fipa-profile -fipa-pure-const
  38              	@ -fipa-reference -fipa-sra -fipa-vrp -fira-hoist-pressure
  39              	@ -fira-share-save-slots -fira-share-spill-slots
  40              	@ -fisolate-erroneous-paths-dereference -fivopts -fkeep-static-consts
  41              	@ -fleading-underscore -flifetime-dse -flra-remat -flto-odr-type-merging
  42              	@ -fmath-errno -fmerge-constants -fmerge-debug-strings
  43              	@ -fmove-loop-invariants -fomit-frame-pointer -foptimize-sibling-calls
  44              	@ -fpartial-inlining -fpeephole -fpeephole2 -fplt -fprefetch-loop-arrays
  45              	@ -freg-struct-return -freorder-blocks -freorder-functions
  46              	@ -frerun-cse-after-loop -fsched-critical-path-heuristic
  47              	@ -fsched-dep-count-heuristic -fsched-group-heuristic -fsched-interblock
  48              	@ -fsched-last-insn-heuristic -fsched-pressure -fsched-rank-heuristic
  49              	@ -fsched-spec -fsched-spec-insn-heuristic -fsched-stalled-insns-dep
  50              	@ -fschedule-insns2 -fsection-anchors -fsemantic-interposition
  51              	@ -fshow-column -fshrink-wrap -fshrink-wrap-separate -fsigned-zeros
  52              	@ -fsplit-ivs-in-unroller -fsplit-wide-types -fssa-backprop -fssa-phiopt
  53              	@ -fstdarg-opt -fstore-merging -fstrict-aliasing -fstrict-overflow
  54              	@ -fstrict-volatile-bitfields -fsync-libcalls -fthread-jumps
  55              	@ -ftoplevel-reorder -ftrapping-math -ftree-bit-ccp -ftree-builtin-call-dce
  56              	@ -ftree-ccp -ftree-ch -ftree-coalesce-vars -ftree-copy-prop -ftree-cselim
  57              	@ -ftree-dce -ftree-dominator-opts -ftree-dse -ftree-forwprop -ftree-fre
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 2


  58              	@ -ftree-loop-if-convert -ftree-loop-im -ftree-loop-ivcanon
  59              	@ -ftree-loop-optimize -ftree-parallelize-loops= -ftree-phiprop -ftree-pre
  60              	@ -ftree-pta -ftree-reassoc -ftree-scev-cprop -ftree-sink -ftree-slsr
  61              	@ -ftree-sra -ftree-switch-conversion -ftree-tail-merge -ftree-ter
  62              	@ -ftree-vrp -funit-at-a-time -fvar-tracking -fvar-tracking-assignments
  63              	@ -fverbose-asm -fzero-initialized-in-bss -mlittle-endian
  64              	@ -mpic-data-is-text-relative -msched-prolog -mthumb
  65              	@ -mvectorize-with-neon-quad
  66              	
  67              		.text
  68              	.Ltext0:
  69              		.cfi_sections	.debug_frame
  70              		.section	.text._ZN4pins16input_output_pin13direction_setENS_9directionE,"axG",%progbits,_ZN4pins16
  71              		.align	1
  72              		.weak	_ZN4pins16input_output_pin13direction_setENS_9directionE
  73              		.syntax unified
  74              		.code	16
  75              		.thumb_func
  76              		.fpu softvfp
  77              		.type	_ZN4pins16input_output_pin13direction_setENS_9directionE, %function
  78              	_ZN4pins16input_output_pin13direction_setENS_9directionE:
  79              	.LFB22:
  80              		.file 1 "pins.h"
   1:pins.h        **** //===========================================================================
   2:pins.h        **** // Very simple pins interface 
   3:pins.h        **** // Wouter van Ooijen - wouter@voti.nl
   4:pins.h        **** // license: zlib
   5:pins.h        **** //===========================================================================
   6:pins.h        **** 
   7:pins.h        **** #ifndef _PINS_H_
   8:pins.h        **** #define _PINS_H_
   9:pins.h        **** 
  10:pins.h        **** namespace pins {
  11:pins.h        **** 
  12:pins.h        **** class output_pin {
  13:pins.h        **** public:
  14:pins.h        ****    virtual void set( bool x )=0;
  15:pins.h        ****    virtual void direction_set_output(){}
  16:pins.h        **** };
  17:pins.h        **** 
  18:pins.h        **** class input_pin {
  19:pins.h        **** public:
  20:pins.h        ****    virtual bool get()=0;
  21:pins.h        ****    virtual void direction_set_input(){}
  22:pins.h        **** };
  23:pins.h        **** 
  24:pins.h        **** enum direction { input, output };
  25:pins.h        **** 
  26:pins.h        **** class input_output_pin : public output_pin, public input_pin {
  27:pins.h        **** public:
  28:pins.h        ****    virtual void direction_set( direction d ){
  81              		.loc 1 28 0
  82              		.cfi_startproc
  83              		@ args = 0, pretend = 0, frame = 0
  84              		@ frame_needed = 0, uses_anonymous_args = 0
  85              	.LVL0:
  86 0000 10B5     		push	{r4, lr}	@
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 3


  87              		.cfi_def_cfa_offset 8
  88              		.cfi_offset 4, -8
  89              		.cfi_offset 14, -4
  90 0002 0368     		ldr	r3, [r0]	@ pretmp_12, this_8(D)->D.5107._vptr.output_pin
  91              	@ pins.h:29:       if( d == input ){
  29:pins.h        ****       if( d == input ){
  92              		.loc 1 29 0
  93 0004 0029     		cmp	r1, #0	@ d,
  94 0006 02D1     		bne	.L2	@,
  95              	@ pins.h:30:          direction_set_input();
  30:pins.h        ****          direction_set_input();
  96              		.loc 1 30 0
  97 0008 DB68     		ldr	r3, [r3, #12]	@ MEM[(int (*__vtbl_ptr_type) () *)pretmp_12 + 12B], MEM[(int (*__vtbl_ptr_type)
  98              	.L4:
  99              	@ pins.h:32:          direction_set_output();
  31:pins.h        ****       } else {
  32:pins.h        ****          direction_set_output();
 100              		.loc 1 32 0
 101 000a 9847     		blx	r3	@ MEM[(int (*__vtbl_ptr_type) () *)pretmp_12 + 4B]
 102              	.LVL1:
 103              	@ pins.h:34:    }
  33:pins.h        ****       }
  34:pins.h        ****    }
 104              		.loc 1 34 0
 105              		@ sp needed	@
 106 000c 10BD     		pop	{r4, pc}
 107              	.LVL2:
 108              	.L2:
 109              	@ pins.h:32:          direction_set_output();
  32:pins.h        ****       }
 110              		.loc 1 32 0
 111 000e 5B68     		ldr	r3, [r3, #4]	@ MEM[(int (*__vtbl_ptr_type) () *)pretmp_12 + 4B], MEM[(int (*__vtbl_ptr_type) (
 112 0010 FBE7     		b	.L4	@
 113              		.cfi_endproc
 114              	.LFE22:
 115              		.size	_ZN4pins16input_output_pin13direction_setENS_9directionE, .-_ZN4pins16input_output_pin13dire
 116              		.section	.text._ZN21input_output_pin_lpc119direction_set_inputEv,"axG",%progbits,_ZN21input_output
 117              		.align	1
 118              		.weak	_ZN21input_output_pin_lpc119direction_set_inputEv
 119              		.syntax unified
 120              		.code	16
 121              		.thumb_func
 122              		.fpu softvfp
 123              		.type	_ZN21input_output_pin_lpc119direction_set_inputEv, %function
 124              	_ZN21input_output_pin_lpc119direction_set_inputEv:
 125              	.LFB42:
 126              		.file 2 "main.cpp"
   1:main.cpp      **** //===========================================================================
   2:main.cpp      **** // GNU C++ for LPC1114 + base board 
   3:main.cpp      **** // show rotary encoder switches on 7-segment display
   4:main.cpp      **** // Wouter van Ooijen - wouter@voti.nl
   5:main.cpp      **** // license: zlib
   6:main.cpp      **** //===========================================================================
   7:main.cpp      **** 
   8:main.cpp      **** #include "LPC11xx.h"
   9:main.cpp      **** #include "pins.h"
  10:main.cpp      **** #include "rfm70.h"
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 4


  11:main.cpp      **** 
  12:main.cpp      **** void wait( unsigned int t ){
  13:main.cpp      ****    while( t > 1000 ){
  14:main.cpp      ****       wait( 1000 ); 
  15:main.cpp      ****       t -= 1000;
  16:main.cpp      ****    }  
  17:main.cpp      ****    SysTick->CTRL = 0;      // stop the timer
  18:main.cpp      ****    SysTick->LOAD = t * 6;  // CPU clock / ( 2 * 6 ) => 1 MHz
  19:main.cpp      ****    SysTick->VAL = 0;       // clear the timer
  20:main.cpp      ****    SysTick->CTRL = 1;      // start the timer
  21:main.cpp      ****    while( ( SysTick->CTRL & ( 1 << 16 ) ) == 0){} // wait for timeout
  22:main.cpp      **** 
  23:main.cpp      **** }
  24:main.cpp      **** 
  25:main.cpp      **** class input_output_pin_lpc1: public pins::input_output_pin {
  26:main.cpp      **** private:
  27:main.cpp      ****    volatile int *data_pointer;
  28:main.cpp      ****    volatile int *direction_pointer;
  29:main.cpp      ****    unsigned int mask;
  30:main.cpp      ****    
  31:main.cpp      ****    static volatile int *gpioreg( unsigned int port, unsigned int offset = 0 ){
  32:main.cpp      ****       return (volatile int *)( 0x50000000 + port * 0x10000 + offset );
  33:main.cpp      ****    }  
  34:main.cpp      ****    
  35:main.cpp      **** public: 
  36:main.cpp      ****    input_output_pin_lpc1( unsigned int port, unsigned int pin ):
  37:main.cpp      ****       data_pointer( gpioreg( port, 0x04 << pin )),
  38:main.cpp      ****       direction_pointer( gpioreg( port, 0x8000 )),
  39:main.cpp      ****       mask( 1 << pin ){}
  40:main.cpp      ****    
  41:main.cpp      ****    void direction_set_input(){
 127              		.loc 2 41 0
 128              		.cfi_startproc
 129              		@ args = 0, pretend = 0, frame = 0
 130              		@ frame_needed = 0, uses_anonymous_args = 0
 131              		@ link register save eliminated.
 132              	.LVL3:
 133              	@ main.cpp:42:       *direction_pointer &= ~ mask;
  42:main.cpp      ****       *direction_pointer &= ~ mask;
 134              		.loc 2 42 0
 135 0000 C268     		ldr	r2, [r0, #12]	@ _1, this_9(D)->direction_pointer
 136 0002 0169     		ldr	r1, [r0, #16]	@ this_9(D)->mask, this_9(D)->mask
 137 0004 1368     		ldr	r3, [r2]	@ _2, *_1
 138              	@ main.cpp:43:    }
  43:main.cpp      ****    }
 139              		.loc 2 43 0
 140              		@ sp needed	@
 141              	@ main.cpp:42:       *direction_pointer &= ~ mask;
  42:main.cpp      ****       *direction_pointer &= ~ mask;
 142              		.loc 2 42 0
 143 0006 8B43     		bics	r3, r1	@ _7, this_9(D)->mask
 144 0008 1360     		str	r3, [r2]	@ _7, *_1
 145              	@ main.cpp:43:    }
 146              		.loc 2 43 0
 147 000a 7047     		bx	lr
 148              		.cfi_endproc
 149              	.LFE42:
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 5


 150              		.size	_ZN21input_output_pin_lpc119direction_set_inputEv, .-_ZN21input_output_pin_lpc119direction_s
 151              		.thumb_set .LTHUNK1,_ZN21input_output_pin_lpc119direction_set_inputEv
 152              		.align	1
 153              		.weak	_ZThn4_N21input_output_pin_lpc119direction_set_inputEv
 154              		.syntax unified
 155              		.code	16
 156              		.thumb_func
 157              		.fpu softvfp
 158              		.type	_ZThn4_N21input_output_pin_lpc119direction_set_inputEv, %function
 159              	_ZThn4_N21input_output_pin_lpc119direction_set_inputEv:
 160              	.LFB67:
  41:main.cpp      ****       *direction_pointer &= ~ mask;
 161              		.loc 2 41 0
 162              		.cfi_startproc
 163              		@ args = 0, pretend = 0, frame = 0
 164              		@ frame_needed = 0, uses_anonymous_args = 0
 165 000c 08B4     		push {r3}
 166 000e 024B     		ldr	r3, .LTHUMBFUNC0
 167 0010 9C46     		mov r12, r3
 168 0012 0438     		subs	r0, r0, #4
 169 0014 08BC     		pop	{r3}
 170 0016 6047     		bx	r12
 171              		.align	2
 172              	.LTHUMBFUNC0:
 173 0018 00000000 		.word	.LTHUNK1
 174              		.cfi_endproc
 175              	.LFE67:
 176              		.size	_ZThn4_N21input_output_pin_lpc119direction_set_inputEv, .-_ZThn4_N21input_output_pin_lpc119d
 177              		.section	.text._ZN21input_output_pin_lpc120direction_set_outputEv,"axG",%progbits,_ZN21input_outpu
 178              		.align	1
 179              		.weak	_ZN21input_output_pin_lpc120direction_set_outputEv
 180              		.syntax unified
 181              		.code	16
 182              		.thumb_func
 183              		.fpu softvfp
 184              		.type	_ZN21input_output_pin_lpc120direction_set_outputEv, %function
 185              	_ZN21input_output_pin_lpc120direction_set_outputEv:
 186              	.LFB43:
  44:main.cpp      ****    
  45:main.cpp      ****    void direction_set_output(){
 187              		.loc 2 45 0
 188              		.cfi_startproc
 189              		@ args = 0, pretend = 0, frame = 0
 190              		@ frame_needed = 0, uses_anonymous_args = 0
 191              		@ link register save eliminated.
 192              	.LVL4:
 193              	@ main.cpp:46:       *direction_pointer |= mask;  
  46:main.cpp      ****       *direction_pointer |= mask;  
 194              		.loc 2 46 0
 195 0000 C268     		ldr	r2, [r0, #12]	@ _1, this_8(D)->direction_pointer
 196 0002 0169     		ldr	r1, [r0, #16]	@ this_8(D)->mask, this_8(D)->mask
 197 0004 1368     		ldr	r3, [r2]	@ _2, *_1
 198              	@ main.cpp:47:    }
  47:main.cpp      ****    }
 199              		.loc 2 47 0
 200              		@ sp needed	@
 201              	@ main.cpp:46:       *direction_pointer |= mask;  
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 6


  46:main.cpp      ****       *direction_pointer |= mask;  
 202              		.loc 2 46 0
 203 0006 0B43     		orrs	r3, r1	@ _6, this_8(D)->mask
 204 0008 1360     		str	r3, [r2]	@ _6, *_1
 205              	@ main.cpp:47:    }
 206              		.loc 2 47 0
 207 000a 7047     		bx	lr
 208              		.cfi_endproc
 209              	.LFE43:
 210              		.size	_ZN21input_output_pin_lpc120direction_set_outputEv, .-_ZN21input_output_pin_lpc120direction_
 211              		.section	.text._ZN21input_output_pin_lpc13setEb,"axG",%progbits,_ZN21input_output_pin_lpc13setEb,c
 212              		.align	1
 213              		.weak	_ZN21input_output_pin_lpc13setEb
 214              		.syntax unified
 215              		.code	16
 216              		.thumb_func
 217              		.fpu softvfp
 218              		.type	_ZN21input_output_pin_lpc13setEb, %function
 219              	_ZN21input_output_pin_lpc13setEb:
 220              	.LFB44:
  48:main.cpp      ****    
  49:main.cpp      ****    void set( bool x ){
 221              		.loc 2 49 0
 222              		.cfi_startproc
 223              		@ args = 0, pretend = 0, frame = 0
 224              		@ frame_needed = 0, uses_anonymous_args = 0
 225              		@ link register save eliminated.
 226              	.LVL5:
 227              	@ main.cpp:50:       *data_pointer = x ? -1 : 0;        
  50:main.cpp      ****       *data_pointer = x ? -1 : 0;        
 228              		.loc 2 50 0
 229 0000 8368     		ldr	r3, [r0, #8]	@ _1, this_5(D)->data_pointer
 230 0002 4942     		rsbs	r1, r1, #0	@ _8, x
 231              	.LVL6:
 232 0004 1960     		str	r1, [r3]	@ _8, *_1
 233              	@ main.cpp:51:    }
  51:main.cpp      ****    }
 234              		.loc 2 51 0
 235              		@ sp needed	@
 236 0006 7047     		bx	lr
 237              		.cfi_endproc
 238              	.LFE44:
 239              		.size	_ZN21input_output_pin_lpc13setEb, .-_ZN21input_output_pin_lpc13setEb
 240              		.section	.text._ZN21input_output_pin_lpc13getEv,"axG",%progbits,_ZN21input_output_pin_lpc13getEv,c
 241              		.align	1
 242              		.weak	_ZN21input_output_pin_lpc13getEv
 243              		.syntax unified
 244              		.code	16
 245              		.thumb_func
 246              		.fpu softvfp
 247              		.type	_ZN21input_output_pin_lpc13getEv, %function
 248              	_ZN21input_output_pin_lpc13getEv:
 249              	.LFB45:
  52:main.cpp      ****    
  53:main.cpp      ****    bool get(){ 
 250              		.loc 2 53 0
 251              		.cfi_startproc
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 7


 252              		@ args = 0, pretend = 0, frame = 0
 253              		@ frame_needed = 0, uses_anonymous_args = 0
 254              		@ link register save eliminated.
 255              	.LVL7:
 256              	@ main.cpp:54:       return *data_pointer != 0;
  54:main.cpp      ****       return *data_pointer != 0;
 257              		.loc 2 54 0
 258 0000 8368     		ldr	r3, [r0, #8]	@ _1, this_4(D)->data_pointer
 259              	@ main.cpp:55:    }
  55:main.cpp      ****    }
 260              		.loc 2 55 0
 261              		@ sp needed	@
 262              	@ main.cpp:54:       return *data_pointer != 0;
  54:main.cpp      ****       return *data_pointer != 0;
 263              		.loc 2 54 0
 264 0002 1868     		ldr	r0, [r3]	@ _2, *_1
 265              	.LVL8:
 266 0004 431E     		subs	r3, r0, #1	@ tmp116, _2
 267 0006 9841     		sbcs	r0, r0, r3	@ tmp115, _2, tmp116
 268 0008 C0B2     		uxtb	r0, r0	@ tmp117, tmp115
 269              	@ main.cpp:55:    }
 270              		.loc 2 55 0
 271 000a 7047     		bx	lr
 272              		.cfi_endproc
 273              	.LFE45:
 274              		.size	_ZN21input_output_pin_lpc13getEv, .-_ZN21input_output_pin_lpc13getEv
 275              		.thumb_set .LTHUNK2,_ZN21input_output_pin_lpc13getEv
 276              		.align	1
 277              		.weak	_ZThn4_N21input_output_pin_lpc13getEv
 278              		.syntax unified
 279              		.code	16
 280              		.thumb_func
 281              		.fpu softvfp
 282              		.type	_ZThn4_N21input_output_pin_lpc13getEv, %function
 283              	_ZThn4_N21input_output_pin_lpc13getEv:
 284              	.LFB68:
  53:main.cpp      ****       return *data_pointer != 0;
 285              		.loc 2 53 0
 286              		.cfi_startproc
 287              		@ args = 0, pretend = 0, frame = 0
 288              		@ frame_needed = 0, uses_anonymous_args = 0
 289 000c 08B4     		push {r3}
 290 000e 024B     		ldr	r3, .LTHUMBFUNC1
 291 0010 9C46     		mov r12, r3
 292 0012 0438     		subs	r0, r0, #4
 293 0014 08BC     		pop	{r3}
 294 0016 6047     		bx	r12
 295              		.align	2
 296              	.LTHUMBFUNC1:
 297 0018 00000000 		.word	.LTHUNK2
 298              		.cfi_endproc
 299              	.LFE68:
 300              		.size	_ZThn4_N21input_output_pin_lpc13getEv, .-_ZThn4_N21input_output_pin_lpc13getEv
 301              		.section	.text._Z4waitj,"ax",%progbits
 302              		.align	1
 303              		.global	_Z4waitj
 304              		.syntax unified
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 8


 305              		.code	16
 306              		.thumb_func
 307              		.fpu softvfp
 308              		.type	_Z4waitj, %function
 309              	_Z4waitj:
 310              	.LFB28:
  12:main.cpp      ****    while( t > 1000 ){
 311              		.loc 2 12 0
 312              		.cfi_startproc
 313              		@ args = 0, pretend = 0, frame = 0
 314              		@ frame_needed = 0, uses_anonymous_args = 0
 315              	.LVL9:
 316 0000 70B5     		push	{r4, r5, r6, lr}	@
 317              		.cfi_def_cfa_offset 16
 318              		.cfi_offset 4, -16
 319              		.cfi_offset 5, -12
 320              		.cfi_offset 6, -8
 321              		.cfi_offset 14, -4
 322              	@ main.cpp:13:    while( t > 1000 ){
  13:main.cpp      ****       wait( 1000 ); 
 323              		.loc 2 13 0
 324 0002 FA25     		movs	r5, #250	@ tmp114,
 325              	@ main.cpp:12: void wait( unsigned int t ){
  12:main.cpp      ****    while( t > 1000 ){
 326              		.loc 2 12 0
 327 0004 0400     		movs	r4, r0	@ t, t
 328              	@ main.cpp:13:    while( t > 1000 ){
  13:main.cpp      ****       wait( 1000 ); 
 329              		.loc 2 13 0
 330 0006 AD00     		lsls	r5, r5, #2	@ tmp114, tmp114,
 331              	.LVL10:
 332              	.L11:
 333 0008 AC42     		cmp	r4, r5	@ t, tmp114
 334 000a 05D9     		bls	.L10	@,
 335              	@ main.cpp:14:       wait( 1000 ); 
  14:main.cpp      ****       t -= 1000;
 336              		.loc 2 14 0
 337 000c 2800     		movs	r0, r5	@, tmp114
 338 000e FFF7FEFF 		bl	_Z4waitj	@
 339              	.LVL11:
 340              	@ main.cpp:15:       t -= 1000;
  15:main.cpp      ****    }  
 341              		.loc 2 15 0
 342 0012 094B     		ldr	r3, .L15	@ tmp130,
 343 0014 E418     		adds	r4, r4, r3	@ t, t, tmp130
 344              	.LVL12:
 345              	@ main.cpp:13:    while( t > 1000 ){
  13:main.cpp      ****       wait( 1000 ); 
 346              		.loc 2 13 0
 347 0016 F7E7     		b	.L11	@
 348              	.L10:
 349              	@ main.cpp:18:    SysTick->LOAD = t * 6;  // CPU clock / ( 2 * 6 ) => 1 MHz
  18:main.cpp      ****    SysTick->VAL = 0;       // clear the timer
 350              		.loc 2 18 0
 351 0018 0622     		movs	r2, #6	@ tmp118,
 352              	@ main.cpp:17:    SysTick->CTRL = 0;      // stop the timer
  17:main.cpp      ****    SysTick->LOAD = t * 6;  // CPU clock / ( 2 * 6 ) => 1 MHz
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 9


 353              		.loc 2 17 0
 354 001a 0021     		movs	r1, #0	@ tmp117,
 355              	@ main.cpp:18:    SysTick->LOAD = t * 6;  // CPU clock / ( 2 * 6 ) => 1 MHz
  18:main.cpp      ****    SysTick->VAL = 0;       // clear the timer
 356              		.loc 2 18 0
 357 001c 5443     		muls	r4, r2	@ _1, tmp118
 358              	.LVL13:
 359              	@ main.cpp:17:    SysTick->CTRL = 0;      // stop the timer
  17:main.cpp      ****    SysTick->LOAD = t * 6;  // CPU clock / ( 2 * 6 ) => 1 MHz
 360              		.loc 2 17 0
 361 001e 074B     		ldr	r3, .L15+4	@ tmp116,
 362              	@ main.cpp:20:    SysTick->CTRL = 1;      // start the timer
  20:main.cpp      ****    while( ( SysTick->CTRL & ( 1 << 16 ) ) == 0){} // wait for timeout
 363              		.loc 2 20 0
 364 0020 053A     		subs	r2, r2, #5	@ tmp123,
 365              	@ main.cpp:17:    SysTick->CTRL = 0;      // stop the timer
  17:main.cpp      ****    SysTick->LOAD = t * 6;  // CPU clock / ( 2 * 6 ) => 1 MHz
 366              		.loc 2 17 0
 367 0022 1960     		str	r1, [r3]	@ tmp117, MEM[(struct SysTick_Type *)3758153744B].CTRL
 368              	@ main.cpp:18:    SysTick->LOAD = t * 6;  // CPU clock / ( 2 * 6 ) => 1 MHz
  18:main.cpp      ****    SysTick->VAL = 0;       // clear the timer
 369              		.loc 2 18 0
 370 0024 5C60     		str	r4, [r3, #4]	@ _1, MEM[(struct SysTick_Type *)3758153744B].LOAD
 371              	@ main.cpp:19:    SysTick->VAL = 0;       // clear the timer
  19:main.cpp      ****    SysTick->CTRL = 1;      // start the timer
 372              		.loc 2 19 0
 373 0026 9960     		str	r1, [r3, #8]	@ tmp117, MEM[(struct SysTick_Type *)3758153744B].VAL
 374              	@ main.cpp:20:    SysTick->CTRL = 1;      // start the timer
  20:main.cpp      ****    while( ( SysTick->CTRL & ( 1 << 16 ) ) == 0){} // wait for timeout
 375              		.loc 2 20 0
 376 0028 1A60     		str	r2, [r3]	@ tmp123, MEM[(struct SysTick_Type *)3758153744B].CTRL
 377              	@ main.cpp:21:    while( ( SysTick->CTRL & ( 1 << 16 ) ) == 0){} // wait for timeout
  21:main.cpp      **** 
 378              		.loc 2 21 0
 379 002a 8022     		movs	r2, #128	@ tmp126,
 380 002c 5202     		lsls	r2, r2, #9	@ tmp126, tmp126,
 381              	.L12:
 382 002e 1968     		ldr	r1, [r3]	@ _2, MEM[(struct SysTick_Type *)3758153744B].CTRL
 383 0030 1142     		tst	r1, r2	@ _2, tmp126
 384 0032 FCD0     		beq	.L12	@,
 385              	@ main.cpp:23: }
  23:main.cpp      **** 
 386              		.loc 2 23 0
 387              		@ sp needed	@
 388 0034 70BD     		pop	{r4, r5, r6, pc}
 389              	.L16:
 390 0036 C046     		.align	2
 391              	.L15:
 392 0038 18FCFFFF 		.word	-1000
 393 003c 10E000E0 		.word	-536813552
 394              		.cfi_endproc
 395              	.LFE28:
 396              		.size	_Z4waitj, .-_Z4waitj
 397              		.section	.text._Z7wait_msj,"ax",%progbits
 398              		.align	1
 399              		.global	_Z7wait_msj
 400              		.syntax unified
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 10


 401              		.code	16
 402              		.thumb_func
 403              		.fpu softvfp
 404              		.type	_Z7wait_msj, %function
 405              	_Z7wait_msj:
 406              	.LFB61:
  56:main.cpp      **** };
  57:main.cpp      **** 
  58:main.cpp      **** class lpc1114 {
  59:main.cpp      **** public:
  60:main.cpp      ****    input_output_pin_lpc1 pin( unsigned int port, unsigned int pin ){
  61:main.cpp      ****       return input_output_pin_lpc1( port, pin );
  62:main.cpp      ****    }
  63:main.cpp      **** };  
  64:main.cpp      **** 
  65:main.cpp      **** void Receive_Packet( rfm70 &radio, pins::output_pin &led){
  66:main.cpp      **** 	unsigned char len,i,chksum;
  67:main.cpp      **** 	unsigned char rx_buf[ RFM70_MAX_PACKET_LEN ];
  68:main.cpp      **** 
  69:main.cpp      **** 	if( ! radio.receive_fifo_empty() ){
  70:main.cpp      **** 		do {
  71:main.cpp      **** 			len=radio.register_read( RFM70_CMD_R_RX_PL_WID );
  72:main.cpp      **** 
  73:main.cpp      **** 			if( len <= RFM70_MAX_PACKET_LEN ){
  74:main.cpp      **** 				radio.buffer_read( RFM70_CMD_R_RX_PAYLOAD,rx_buf,len );
  75:main.cpp      **** 			} else {
  76:main.cpp      **** 				radio.register_write( RFM70_CMD_FLUSH_RX,0 );
  77:main.cpp      **** 			}
  78:main.cpp      **** 							
  79:main.cpp      **** 		} while( ! radio.receive_fifo_empty());
  80:main.cpp      **** 		
  81:main.cpp      **** 		chksum = 0;
  82:main.cpp      **** 		for(i=0;i<16;i++){
  83:main.cpp      **** 			chksum +=rx_buf[i]; 
  84:main.cpp      **** 		}
  85:main.cpp      **** 
  86:main.cpp      **** 		//if(chksum==rx_buf[16]&&rx_buf[0]==0x30){
  87:main.cpp      **** 			led.set( 0 );
  88:main.cpp      **** 		  wait( 50 * 1000 );
  89:main.cpp      **** 			led.set( 1 );
  90:main.cpp      **** 		//}	
  91:main.cpp      **** 	}
  92:main.cpp      **** }
  93:main.cpp      **** 
  94:main.cpp      **** void blink( pins::output_pin &led, unsigned int delay = 200 * 1000 ){
  95:main.cpp      ****     for(;;){
  96:main.cpp      ****        led.set( 1 );
  97:main.cpp      ****        wait( delay );
  98:main.cpp      ****        led.set( 0 );
  99:main.cpp      ****        wait( delay );
 100:main.cpp      ****    }      
 101:main.cpp      **** };
 102:main.cpp      **** 
 103:main.cpp      **** void wait_ms( unsigned int n ){ wait( n * 1000 ); }
 407              		.loc 2 103 0
 408              		.cfi_startproc
 409              		@ args = 0, pretend = 0, frame = 0
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 11


 410              		@ frame_needed = 0, uses_anonymous_args = 0
 411              	.LVL14:
 412 0000 FA23     		movs	r3, #250	@ tmp113,
 413 0002 10B5     		push	{r4, lr}	@
 414              		.cfi_def_cfa_offset 8
 415              		.cfi_offset 4, -8
 416              		.cfi_offset 14, -4
 417              	@ main.cpp:103: void wait_ms( unsigned int n ){ wait( n * 1000 ); }
 418              		.loc 2 103 0
 419 0004 9B00     		lsls	r3, r3, #2	@ tmp113, tmp113,
 420 0006 5843     		muls	r0, r3	@ tmp112, tmp113
 421              	.LVL15:
 422 0008 FFF7FEFF 		bl	_Z4waitj	@
 423              	.LVL16:
 424              		@ sp needed	@
 425 000c 10BD     		pop	{r4, pc}
 426              		.cfi_endproc
 427              	.LFE61:
 428              		.size	_Z7wait_msj, .-_Z7wait_msj
 429              		.section	.text._Z7wait_usj,"ax",%progbits
 430              		.align	1
 431              		.global	_Z7wait_usj
 432              		.syntax unified
 433              		.code	16
 434              		.thumb_func
 435              		.fpu softvfp
 436              		.type	_Z7wait_usj, %function
 437              	_Z7wait_usj:
 438              	.LFB62:
 104:main.cpp      **** void wait_us( unsigned int n ){ wait( n ); }
 439              		.loc 2 104 0
 440              		.cfi_startproc
 441              		@ args = 0, pretend = 0, frame = 0
 442              		@ frame_needed = 0, uses_anonymous_args = 0
 443              	.LVL17:
 444 0000 10B5     		push	{r4, lr}	@
 445              		.cfi_def_cfa_offset 8
 446              		.cfi_offset 4, -8
 447              		.cfi_offset 14, -4
 448              	@ main.cpp:104: void wait_us( unsigned int n ){ wait( n ); }
 449              		.loc 2 104 0
 450 0002 FFF7FEFF 		bl	_Z4waitj	@
 451              	.LVL18:
 452              		@ sp needed	@
 453 0006 10BD     		pop	{r4, pc}
 454              		.cfi_endproc
 455              	.LFE62:
 456              		.size	_Z7wait_usj, .-_Z7wait_usj
 457              		.section	.text._Z14Receive_PacketR5rfm70RN4pins10output_pinE,"ax",%progbits
 458              		.align	1
 459              		.global	_Z14Receive_PacketR5rfm70RN4pins10output_pinE
 460              		.syntax unified
 461              		.code	16
 462              		.thumb_func
 463              		.fpu softvfp
 464              		.type	_Z14Receive_PacketR5rfm70RN4pins10output_pinE, %function
 465              	_Z14Receive_PacketR5rfm70RN4pins10output_pinE:
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 12


 466              	.LFB59:
  65:main.cpp      **** 	unsigned char len,i,chksum;
 467              		.loc 2 65 0
 468              		.cfi_startproc
 469              		@ args = 0, pretend = 0, frame = 32
 470              		@ frame_needed = 0, uses_anonymous_args = 0
 471              	.LVL19:
 472 0000 30B5     		push	{r4, r5, lr}	@
 473              		.cfi_def_cfa_offset 12
 474              		.cfi_offset 4, -12
 475              		.cfi_offset 5, -8
 476              		.cfi_offset 14, -4
 477 0002 89B0     		sub	sp, sp, #36	@,,
 478              		.cfi_def_cfa_offset 48
 479              	@ main.cpp:65: void Receive_Packet( rfm70 &radio, pins::output_pin &led){
  65:main.cpp      **** 	unsigned char len,i,chksum;
 480              		.loc 2 65 0
 481 0004 0400     		movs	r4, r0	@ radio, radio
 482 0006 0D00     		movs	r5, r1	@ led, led
 483              	@ main.cpp:69: 	if( ! radio.receive_fifo_empty() ){
  69:main.cpp      **** 		do {
 484              		.loc 2 69 0
 485 0008 FFF7FEFF 		bl	_ZN5rfm7018receive_fifo_emptyEv	@
 486              	.LVL20:
 487 000c 0028     		cmp	r0, #0	@ tmp119,
 488 000e 1DD1     		bne	.L19	@,
 489              	.L23:
 490              	@ main.cpp:71: 			len=radio.register_read( RFM70_CMD_R_RX_PL_WID );
  71:main.cpp      **** 
 491              		.loc 2 71 0
 492 0010 6021     		movs	r1, #96	@,
 493 0012 2000     		movs	r0, r4	@, radio
 494 0014 FFF7FEFF 		bl	_ZN5rfm7013register_readEh	@
 495              	.LVL21:
 496 0018 0300     		movs	r3, r0	@ tmp121,
 497              	.LVL22:
 498              	@ main.cpp:73: 			if( len <= RFM70_MAX_PACKET_LEN ){
  73:main.cpp      **** 				radio.buffer_read( RFM70_CMD_R_RX_PAYLOAD,rx_buf,len );
 499              		.loc 2 73 0
 500 001a 2028     		cmp	r0, #32	@ tmp121,
 501 001c 18D8     		bhi	.L21	@,
 502              	@ main.cpp:74: 				radio.buffer_read( RFM70_CMD_R_RX_PAYLOAD,rx_buf,len );
  74:main.cpp      **** 			} else {
 503              		.loc 2 74 0
 504 001e 6A46     		mov	r2, sp	@,
 505 0020 6121     		movs	r1, #97	@,
 506 0022 2000     		movs	r0, r4	@, radio
 507              	.LVL23:
 508 0024 FFF7FEFF 		bl	_ZN5rfm7011buffer_readEhPhh	@
 509              	.LVL24:
 510              	.L22:
 511              	@ main.cpp:79: 		} while( ! radio.receive_fifo_empty());
  79:main.cpp      **** 		
 512              		.loc 2 79 0
 513 0028 2000     		movs	r0, r4	@, radio
 514 002a FFF7FEFF 		bl	_ZN5rfm7018receive_fifo_emptyEv	@
 515              	.LVL25:
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 13


 516 002e 0028     		cmp	r0, #0	@ tmp124,
 517 0030 EED0     		beq	.L23	@,
 518              	.LVL26:
 519              	@ main.cpp:87: 			led.set( 0 );
  87:main.cpp      **** 		  wait( 50 * 1000 );
 520              		.loc 2 87 0
 521 0032 2B68     		ldr	r3, [r5]	@ led_18(D)->_vptr.output_pin, led_18(D)->_vptr.output_pin
 522 0034 0021     		movs	r1, #0	@,
 523 0036 1B68     		ldr	r3, [r3]	@ *_3, *_3
 524 0038 2800     		movs	r0, r5	@, led
 525 003a 9847     		blx	r3	@ *_3
 526              	.LVL27:
 527              	@ main.cpp:88: 		  wait( 50 * 1000 );
  88:main.cpp      **** 			led.set( 1 );
 528              		.loc 2 88 0
 529 003c 0748     		ldr	r0, .L26	@,
 530 003e FFF7FEFF 		bl	_Z4waitj	@
 531              	.LVL28:
 532              	@ main.cpp:89: 			led.set( 1 );
  89:main.cpp      **** 		//}	
 533              		.loc 2 89 0
 534 0042 2B68     		ldr	r3, [r5]	@ led_18(D)->_vptr.output_pin, led_18(D)->_vptr.output_pin
 535 0044 0121     		movs	r1, #1	@,
 536 0046 1B68     		ldr	r3, [r3]	@ *_5, *_5
 537 0048 2800     		movs	r0, r5	@, led
 538 004a 9847     		blx	r3	@ *_5
 539              	.LVL29:
 540              	.L19:
 541              	@ main.cpp:92: }
  92:main.cpp      **** 
 542              		.loc 2 92 0
 543 004c 09B0     		add	sp, sp, #36	@,,
 544              		@ sp needed	@
 545              	.LVL30:
 546              	.LVL31:
 547 004e 30BD     		pop	{r4, r5, pc}
 548              	.LVL32:
 549              	.L21:
 550              	@ main.cpp:76: 				radio.register_write( RFM70_CMD_FLUSH_RX,0 );
  76:main.cpp      **** 			}
 551              		.loc 2 76 0
 552 0050 0022     		movs	r2, #0	@,
 553 0052 E221     		movs	r1, #226	@,
 554 0054 2000     		movs	r0, r4	@, radio
 555              	.LVL33:
 556 0056 FFF7FEFF 		bl	_ZN5rfm7014register_writeEhh	@
 557              	.LVL34:
 558 005a E5E7     		b	.L22	@
 559              	.L27:
 560              		.align	2
 561              	.L26:
 562 005c 50C30000 		.word	50000
 563              		.cfi_endproc
 564              	.LFE59:
 565              		.size	_Z14Receive_PacketR5rfm70RN4pins10output_pinE, .-_Z14Receive_PacketR5rfm70RN4pins10output_pi
 566              		.section	.text._Z5blinkRN4pins10output_pinEj,"ax",%progbits
 567              		.align	1
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 14


 568              		.global	_Z5blinkRN4pins10output_pinEj
 569              		.syntax unified
 570              		.code	16
 571              		.thumb_func
 572              		.fpu softvfp
 573              		.type	_Z5blinkRN4pins10output_pinEj, %function
 574              	_Z5blinkRN4pins10output_pinEj:
 575              	.LFB60:
  94:main.cpp      ****     for(;;){
 576              		.loc 2 94 0
 577              		.cfi_startproc
 578              		@ Volatile: function does not return.
 579              		@ args = 0, pretend = 0, frame = 0
 580              		@ frame_needed = 0, uses_anonymous_args = 0
 581              	.LVL35:
 582 0000 70B5     		push	{r4, r5, r6, lr}	@
 583              		.cfi_def_cfa_offset 16
 584              		.cfi_offset 4, -16
 585              		.cfi_offset 5, -12
 586              		.cfi_offset 6, -8
 587              		.cfi_offset 14, -4
 588 0002 0400     		movs	r4, r0	@ led, led
 589 0004 0D00     		movs	r5, r1	@ delay, delay
 590              	.LVL36:
 591              	.L29:
 592              	@ main.cpp:96:        led.set( 1 );
  96:main.cpp      ****        wait( delay );
 593              		.loc 2 96 0 discriminator 1
 594 0006 2368     		ldr	r3, [r4]	@ led_7(D)->_vptr.output_pin, led_7(D)->_vptr.output_pin
 595 0008 0121     		movs	r1, #1	@,
 596 000a 1B68     		ldr	r3, [r3]	@ *_1, *_1
 597 000c 2000     		movs	r0, r4	@, led
 598 000e 9847     		blx	r3	@ *_1
 599              	.LVL37:
 600              	@ main.cpp:97:        wait( delay );
  97:main.cpp      ****        led.set( 0 );
 601              		.loc 2 97 0 discriminator 1
 602 0010 2800     		movs	r0, r5	@, delay
 603 0012 FFF7FEFF 		bl	_Z4waitj	@
 604              	.LVL38:
 605              	@ main.cpp:98:        led.set( 0 );
  98:main.cpp      ****        wait( delay );
 606              		.loc 2 98 0 discriminator 1
 607 0016 2368     		ldr	r3, [r4]	@ led_7(D)->_vptr.output_pin, led_7(D)->_vptr.output_pin
 608 0018 2000     		movs	r0, r4	@, led
 609 001a 1B68     		ldr	r3, [r3]	@ *_3, *_3
 610 001c 0021     		movs	r1, #0	@,
 611 001e 9847     		blx	r3	@ *_3
 612              	.LVL39:
 613              	@ main.cpp:99:        wait( delay );
  99:main.cpp      ****    }      
 614              		.loc 2 99 0 discriminator 1
 615 0020 2800     		movs	r0, r5	@, delay
 616 0022 FFF7FEFF 		bl	_Z4waitj	@
 617              	.LVL40:
 618 0026 EEE7     		b	.L29	@
 619              		.cfi_endproc
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 15


 620              	.LFE60:
 621              		.size	_Z5blinkRN4pins10output_pinEj, .-_Z5blinkRN4pins10output_pinEj
 622              		.section	.text._Z11Send_PacketR5rfm70hPKhh,"ax",%progbits
 623              		.align	1
 624              		.global	_Z11Send_PacketR5rfm70hPKhh
 625              		.syntax unified
 626              		.code	16
 627              		.thumb_func
 628              		.fpu softvfp
 629              		.type	_Z11Send_PacketR5rfm70hPKhh, %function
 630              	_Z11Send_PacketR5rfm70hPKhh:
 631              	.LFB63:
 105:main.cpp      **** 
 106:main.cpp      **** unsigned char transmit_led = 0, receive_led = 0;
 107:main.cpp      **** 
 108:main.cpp      **** const unsigned char tx_buf[17]={
 109:main.cpp      ****     0x30,0x31,0x32,0x33,0x34,0x35,0x36,0x37,0x38,0x39,0x3a,0x3b,0x3c,0x3d,0x3e,0x3f,0x78};
 110:main.cpp      ****     
 111:main.cpp      **** void Send_Packet( 
 112:main.cpp      ****    rfm70 &radio, unsigned char type, 
 113:main.cpp      ****    const unsigned char* pbuf, unsigned char len 
 114:main.cpp      **** ){
 632              		.loc 2 114 0
 633              		.cfi_startproc
 634              		@ args = 0, pretend = 0, frame = 0
 635              		@ frame_needed = 0, uses_anonymous_args = 0
 636              	.LVL41:
 637 0000 F8B5     		push	{r3, r4, r5, r6, r7, lr}	@
 638              		.cfi_def_cfa_offset 24
 639              		.cfi_offset 3, -24
 640              		.cfi_offset 4, -20
 641              		.cfi_offset 5, -16
 642              		.cfi_offset 6, -12
 643              		.cfi_offset 7, -8
 644              		.cfi_offset 14, -4
 645              	@ main.cpp:114: ){
 646              		.loc 2 114 0
 647 0002 1600     		movs	r6, r2	@ pbuf, pbuf
 648 0004 1F00     		movs	r7, r3	@ len, len
 649 0006 0400     		movs	r4, r0	@ radio, radio
 650 0008 0D00     		movs	r5, r1	@ type, type
 651              	@ main.cpp:115: 	radio.mode_transmit();
 115:main.cpp      **** 	radio.mode_transmit();
 652              		.loc 2 115 0
 653 000a FFF7FEFF 		bl	_ZN5rfm7013mode_transmitEv	@
 654              	.LVL42:
 655              	@ main.cpp:116: 	transmit_led = 20;	
 116:main.cpp      **** 	transmit_led = 20;	
 656              		.loc 2 116 0
 657 000e 1422     		movs	r2, #20	@ tmp115,
 658 0010 084B     		ldr	r3, .L31	@ tmp114,
 659              	@ main.cpp:117: 	radio.buffer_write( type, pbuf, len); 
 117:main.cpp      **** 	radio.buffer_write( type, pbuf, len); 
 660              		.loc 2 117 0
 661 0012 2900     		movs	r1, r5	@, type
 662              	@ main.cpp:116: 	transmit_led = 20;	
 116:main.cpp      **** 	transmit_led = 20;	
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 16


 663              		.loc 2 116 0
 664 0014 1A70     		strb	r2, [r3]	@ tmp115, transmit_led
 665              	@ main.cpp:117: 	radio.buffer_write( type, pbuf, len); 
 666              		.loc 2 117 0
 667 0016 2000     		movs	r0, r4	@, radio
 668 0018 3B00     		movs	r3, r7	@, len
 669 001a 3200     		movs	r2, r6	@, pbuf
 670 001c FFF7FEFF 		bl	_ZN5rfm7012buffer_writeEcPKhh	@
 671              	.LVL43:
 672              	.LBB46:
 673              	.LBB47:
 674              	@ main.cpp:104: void wait_us( unsigned int n ){ wait( n ); }
 104:main.cpp      **** 
 675              		.loc 2 104 0
 676 0020 6420     		movs	r0, #100	@,
 677 0022 FFF7FEFF 		bl	_Z4waitj	@
 678              	.LVL44:
 679              	.LBE47:
 680              	.LBE46:
 681              	.LBB48:
 682              	.LBB49:
 683 0026 0448     		ldr	r0, .L31+4	@,
 684 0028 FFF7FEFF 		bl	_Z4waitj	@
 685              	.LVL45:
 686              	.LBE49:
 687              	.LBE48:
 688              	@ main.cpp:120:     radio.mode_receive(); 
 118:main.cpp      ****     wait_us( 100 );
 119:main.cpp      ****     wait_us( 10 * 1000 );	 	
 120:main.cpp      ****     radio.mode_receive(); 
 689              		.loc 2 120 0
 690 002c 2000     		movs	r0, r4	@, radio
 691 002e FFF7FEFF 		bl	_ZN5rfm7012mode_receiveEv	@
 692              	.LVL46:
 693              	@ main.cpp:121: }    
 121:main.cpp      **** }    
 694              		.loc 2 121 0
 695              		@ sp needed	@
 696              	.LVL47:
 697              	.LVL48:
 698 0032 F8BD     		pop	{r3, r4, r5, r6, r7, pc}
 699              	.L32:
 700              		.align	2
 701              	.L31:
 702 0034 00000000 		.word	.LANCHOR0
 703 0038 10270000 		.word	10000
 704              		.cfi_endproc
 705              	.LFE63:
 706              		.size	_Z11Send_PacketR5rfm70hPKhh, .-_Z11Send_PacketR5rfm70hPKhh
 707              		.section	.text.startup.main,"ax",%progbits
 708              		.align	1
 709              		.global	main
 710              		.syntax unified
 711              		.code	16
 712              		.thumb_func
 713              		.fpu softvfp
 714              		.type	main, %function
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 17


 715              	main:
 716              	.LFB64:
 122:main.cpp      ****          
 123:main.cpp      **** int main( void ){   
 717              		.loc 2 123 0
 718              		.cfi_startproc
 719              		@ args = 0, pretend = 0, frame = 200
 720              		@ frame_needed = 0, uses_anonymous_args = 0
 721              	.LVL49:
 722 0000 F0B5     		push	{r4, r5, r6, r7, lr}	@
 723              		.cfi_def_cfa_offset 20
 724              		.cfi_offset 4, -20
 725              		.cfi_offset 5, -16
 726              		.cfi_offset 6, -12
 727              		.cfi_offset 7, -8
 728              		.cfi_offset 14, -4
 729              	.LBB143:
 730              	.LBB144:
 731              	.LBB145:
 732              	.LBB146:
 733              	@ main.cpp:39:       mask( 1 << pin ){}
  39:main.cpp      ****    
 734              		.loc 2 39 0
 735 0002 554B     		ldr	r3, .L53	@ tmp172,
 736              	.LBE146:
 737              	.LBE145:
 738              	.LBE144:
 739              	.LBE143:
 740              	@ main.cpp:123: int main( void ){   
 741              		.loc 2 123 0
 742 0004 B3B0     		sub	sp, sp, #204	@,,
 743              		.cfi_def_cfa_offset 224
 744              	.LVL50:
 745              	.LBB162:
 746              	.LBB157:
 747              	.LBB152:
 748              	.LBB147:
 749              	@ main.cpp:39:       mask( 1 << pin ){}
  39:main.cpp      ****    
 750              		.loc 2 39 0
 751 0006 0293     		str	r3, [sp, #8]	@ tmp172, sck.data_pointer
 752 0008 0423     		movs	r3, #4	@ tmp176,
 753 000a 0493     		str	r3, [sp, #16]	@ tmp176, sck.mask
 754              	.LBE147:
 755              	.LBE152:
 756              	.LBE157:
 757              	.LBE162:
 758              	.LBB163:
 759              	.LBB164:
 760              	.LBB165:
 761              	.LBB166:
 762 000c 534B     		ldr	r3, .L53+4	@ tmp182,
 763              	.LBE166:
 764              	.LBE165:
 765              	.LBE164:
 766              	.LBE163:
 767              	.LBB179:
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 18


 768              	.LBB158:
 769              	.LBB153:
 770              	.LBB148:
 771 000e 5448     		ldr	r0, .L53+8	@ tmp174,
 772              	.LBE148:
 773              	.LBE153:
 774              	.LBE158:
 775              	.LBE179:
 776              	.LBB180:
 777              	.LBB175:
 778              	.LBB171:
 779              	.LBB167:
 780 0010 0793     		str	r3, [sp, #28]	@ tmp182, mosi.data_pointer
 781 0012 0823     		movs	r3, #8	@ tmp186,
 782 0014 0993     		str	r3, [sp, #36]	@ tmp186, mosi.mask
 783              	.LBE167:
 784              	.LBE171:
 785              	.LBE175:
 786              	.LBE180:
 787              	.LBB181:
 788              	.LBB182:
 789              	.LBB183:
 790              	.LBB184:
 791 0016 534B     		ldr	r3, .L53+12	@ tmp192,
 792              	.LBE184:
 793              	.LBE183:
 794              	.LBE182:
 795              	.LBE181:
 796              	.LBB197:
 797              	.LBB159:
 798              	.LBB154:
 799              	.LBB149:
 800 0018 0390     		str	r0, [sp, #12]	@ tmp174, sck.direction_pointer
 801              	.LBE149:
 802              	.LBE154:
 803              	.LBE159:
 804              	.LBE197:
 805              	.LBB198:
 806              	.LBB193:
 807              	.LBB189:
 808              	.LBB185:
 809 001a 0C93     		str	r3, [sp, #48]	@ tmp192, miso.data_pointer
 810 001c 1023     		movs	r3, #16	@ tmp196,
 811              	.LBE185:
 812              	.LBE189:
 813              	.LBE193:
 814              	.LBE198:
 815              	.LBB199:
 816              	.LBB176:
 817              	.LBB172:
 818              	.LBB168:
 819 001e 0890     		str	r0, [sp, #32]	@ tmp174, mosi.direction_pointer
 820              	.LBE168:
 821              	.LBE172:
 822              	.LBE176:
 823              	.LBE199:
 824              	.LBB200:
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 19


 825              	.LBB194:
 826              	.LBB190:
 827              	.LBB186:
 828 0020 0D90     		str	r0, [sp, #52]	@ tmp174, miso.direction_pointer
 829              	.LBE186:
 830              	.LBE190:
 831              	.LBE194:
 832              	.LBE200:
 833              	.LBB201:
 834              	.LBB202:
 835              	.LBB203:
 836              	.LBB204:
 837 0022 1290     		str	r0, [sp, #72]	@ tmp174, csn.direction_pointer
 838              	.LBE204:
 839              	.LBE203:
 840              	.LBE202:
 841              	.LBE201:
 842              	.LBB217:
 843              	.LBB218:
 844              	.LBB219:
 845              	.LBB220:
 846 0024 1790     		str	r0, [sp, #92]	@ tmp174, ce.direction_pointer
 847 0026 4020     		movs	r0, #64	@ tmp216,
 848              	.LBE220:
 849              	.LBE219:
 850              	.LBE218:
 851              	.LBE217:
 852              	.LBB233:
 853              	.LBB195:
 854              	.LBB191:
 855              	.LBB187:
 856 0028 0E93     		str	r3, [sp, #56]	@ tmp196, miso.mask
 857              	.LBE187:
 858              	.LBE191:
 859              	.LBE195:
 860              	.LBE233:
 861              	.LBB234:
 862              	.LBB213:
 863              	.LBB209:
 864              	.LBB205:
 865 002a 4F4B     		ldr	r3, .L53+16	@ tmp202,
 866              	.LBE205:
 867              	.LBE209:
 868              	.LBE213:
 869              	.LBE234:
 870              	.LBB235:
 871              	.LBB229:
 872              	.LBB225:
 873              	.LBB221:
 874 002c 1890     		str	r0, [sp, #96]	@ tmp216, ce.mask
 875              	.LBE221:
 876              	.LBE225:
 877              	.LBE229:
 878              	.LBE235:
 879              	.LBB236:
 880              	.LBB214:
 881              	.LBB210:
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 20


 882              	.LBB206:
 883 002e 1193     		str	r3, [sp, #68]	@ tmp202, csn.data_pointer
 884 0030 2023     		movs	r3, #32	@ tmp206,
 885              	.LBE206:
 886              	.LBE210:
 887              	.LBE214:
 888              	.LBE236:
 889              	.LBB237:
 890              	.LBB238:
 891              	.LBB239:
 892              	@ rfm70.h:418:        ,wait_us( wait_us )
 893              		.file 3 "rfm70.h"
   1:rfm70.h       **** 
   2:rfm70.h       **** 
   3:rfm70.h       **** 
   4:rfm70.h       **** 
   5:rfm70.h       **** 
   6:rfm70.h       **** 
   7:rfm70.h       **** 
   8:rfm70.h       **** 
   9:rfm70.h       **** 
  10:rfm70.h       **** 
  11:rfm70.h       **** 
  12:rfm70.h       **** 
  13:rfm70.h       **** //***************************************************************************//
  14:rfm70.h       **** //
  15:rfm70.h       **** // COPYRIGHT NOTICE (zlib license)
  16:rfm70.h       **** //
  17:rfm70.h       **** // Loosely based on the example application provided by HopeRF
  18:rfm70.h       **** //
  19:rfm70.h       **** // (c) Wouter van Ooijen - wouter@voti.nl
  20:rfm70.h       **** //
  21:rfm70.h       **** //  This software is provided 'as-is', without any express or implied
  22:rfm70.h       **** //  warranty.  In no event will the authors be held liable for any damages
  23:rfm70.h       **** //  arising from the use of this software.
  24:rfm70.h       **** //
  25:rfm70.h       **** //  Permission is granted to anyone to use this software for any purpose,
  26:rfm70.h       **** //  including commercial applications, and to alter it and redistribute it
  27:rfm70.h       **** //  freely, subject to the following restrictions:
  28:rfm70.h       **** //
  29:rfm70.h       **** //  1. The origin of this software must not be misrepresented; you must not
  30:rfm70.h       **** //     claim that you wrote the original software. If you use this software
  31:rfm70.h       **** //     in a product, an acknowledgment in the product documentation would be
  32:rfm70.h       **** //     appreciated but is not required.
  33:rfm70.h       **** //  2. Altered source versions must be plainly marked as such, and must not be
  34:rfm70.h       **** //     misrepresented as being the original software.
  35:rfm70.h       **** //  3. This notice may not be removed or altered from any source distribution.
  36:rfm70.h       **** //
  37:rfm70.h       **** //***************************************************************************//
  38:rfm70.h       **** 
  39:rfm70.h       **** #ifndef _RFM70_H_
  40:rfm70.h       **** #define _RFM70_H_
  41:rfm70.h       **** 
  42:rfm70.h       **** //***************************************************************************//
  43:rfm70.h       **** //
  44:rfm70.h       **** //! \defgroup lowlevel low level interface
  45:rfm70.h       **** //!
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 21


  46:rfm70.h       **** //! The low-level interface provides read and write access to the 
  47:rfm70.h       **** //! commands and registers of the RFM70.
  48:rfm70.h       **** //!
  49:rfm70.h       **** //! When a register ( < 0x20 ) is specified for a read or write command
  50:rfm70.h       **** //! the appropriate read or write command bits are added automatically.
  51:rfm70.h       **** //!
  52:rfm70.h       **** //! To use any of these methods, (except init() itself)
  53:rfm70.h       **** //! the interface and the module must have been initialized by
  54:rfm70.h       **** //! an init() call.
  55:rfm70.h       **** //!
  56:rfm70.h       **** //! Besides the registers shown here (bank 0) the rfm70 also has a
  57:rfm70.h       **** //! set of registers in bank 1. These bank 1 registers are initialized by
  58:rfm70.h       **** //! the init() call. If you want to do this yourself: the datasheet
  59:rfm70.h       **** //! shows the required values, but in a very confusing way. The HopeRF 
  60:rfm70.h       **** //! example code is a better reference. No (or very scarce) explanation 
  61:rfm70.h       **** //! is given for these values.
  62:rfm70.h       **** //!
  63:rfm70.h       **** //! For most users, especially novices, it is recommended to use the
  64:rfm70.h       **** //! high level interaface instead of this low level interface.
  65:rfm70.h       **** //
  66:rfm70.h       **** //***************************************************************************//
  67:rfm70.h       **** 
  68:rfm70.h       **** //***************************************************************************//
  69:rfm70.h       **** //
  70:rfm70.h       **** //! \defgroup highlevel high level interface
  71:rfm70.h       **** //!
  72:rfm70.h       **** //! The high-level interface provides methods for using the rfm70 module.
  73:rfm70.h       **** //! These methods are implemneted by calling the appropriate low level
  74:rfm70.h       **** //! methods. 
  75:rfm70.h       **** //! When possible, it is recommended to use only these high level methods.
  76:rfm70.h       **** //! But when a functionality is needed that is missing it can be implemented
  77:rfm70.h       **** //! using the low level interface.
  78:rfm70.h       **** //!
  79:rfm70.h       **** //! To use any of these methods, (except init() itself)
  80:rfm70.h       **** //! the interface and the module must have been initialized by
  81:rfm70.h       **** //! an init() call.
  82:rfm70.h       **** //
  83:rfm70.h       **** //***************************************************************************//
  84:rfm70.h       **** 
  85:rfm70.h       **** 
  86:rfm70.h       **** //! version of this rfm70 library
  87:rfm70.h       **** //
  88:rfm70.h       **** //! \ingroup highlevel
  89:rfm70.h       **** #define RFM70_LIB_VERSION "V1.02 (2011-12-31)"
  90:rfm70.h       **** 
  91:rfm70.h       **** //! maximum number of data bytes in a (received or transmitted) rfm70 packet
  92:rfm70.h       **** //
  93:rfm70.h       **** //! \ingroup highlevel
  94:rfm70.h       **** #define RFM70_MAX_PACKET_LEN  32
  95:rfm70.h       **** 
  96:rfm70.h       **** //! type of rfm70 (transmit or receive) buffer
  97:rfm70.h       **** //
  98:rfm70.h       **** //! \ingroup highlevel
  99:rfm70.h       **** typedef unsigned char rfm70_buffer [ RFM70_MAX_PACKET_LEN ];
 100:rfm70.h       **** 
 101:rfm70.h       **** 
 102:rfm70.h       **** //***************************************************************************//
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 22


 103:rfm70.h       **** //
 104:rfm70.h       **** // RFM70 SPI commands
 105:rfm70.h       **** //
 106:rfm70.h       **** //***************************************************************************//
 107:rfm70.h       **** 
 108:rfm70.h       **** //! \addtogroup lowlevel
 109:rfm70.h       **** //! @{
 110:rfm70.h       **** 
 111:rfm70.h       **** //! SPI comamnd to read a received payload
 112:rfm70.h       **** #define RFM70_CMD_R_RX_PAYLOAD         0x61
 113:rfm70.h       **** 
 114:rfm70.h       **** //! SPI command to write a payload to be sent
 115:rfm70.h       **** #define RFM70_CMD_W_TX_PAYLOAD         0xA0
 116:rfm70.h       **** 
 117:rfm70.h       **** //! SPI command to empty the transmit queue
 118:rfm70.h       **** #define RFM70_CMD_FLUSH_TX             0xE1
 119:rfm70.h       **** 
 120:rfm70.h       **** //! SPI command to empty the receive queue
 121:rfm70.h       **** #define RFM70_CMD_FLUSH_RX             0xE2
 122:rfm70.h       **** 
 123:rfm70.h       **** //! SPI command to start continuous retransmission
 124:rfm70.h       **** #define RFM70_CMD_REUSE_TX_PL          0xE3
 125:rfm70.h       **** 
 126:rfm70.h       **** //! SPI command to write a payload to be sent without auto-acknowledgement
 127:rfm70.h       **** #define RFM70_CMD_W_TX_PAYLOAD_NOACK   0xB0
 128:rfm70.h       **** 
 129:rfm70.h       **** //! SPI command to write the payload to be transmitted with an ack
 130:rfm70.h       **** #define RFM70_CMD_W_ACK_PAYLOAD        0xA8
 131:rfm70.h       **** 
 132:rfm70.h       **** //! SPI command to toggle register bank or toggle extended functions
 133:rfm70.h       **** #define RFM70_CMD_ACTIVATE             0x50
 134:rfm70.h       **** 
 135:rfm70.h       **** //! SPI command to read the payload length for the top payload in the FIFO
 136:rfm70.h       **** #define RFM70_CMD_R_RX_PL_WID          0x60
 137:rfm70.h       **** 
 138:rfm70.h       **** //! SPI 'no peration', can be used to read the status register
 139:rfm70.h       **** #define RFM70_CMD_NOP                  0xFF
 140:rfm70.h       **** 
 141:rfm70.h       **** //***************************************************************************//
 142:rfm70.h       **** //
 143:rfm70.h       **** // RFM70 register addresses
 144:rfm70.h       **** //
 145:rfm70.h       **** //***************************************************************************//
 146:rfm70.h       **** 
 147:rfm70.h       **** //! CONFIG : rfm70 configuration register
 148:rfm70.h       **** //
 149:rfm70.h       **** //! Bits (0 = LSB):
 150:rfm70.h       **** //! - 7 : reserved, must be 0
 151:rfm70.h       **** //! - 6 : 1 masks RX_DR (see...) from IRQ pin, 0 allows
 152:rfm70.h       **** //! - 5 : 1 masks RX_DS (see...) from IRQ pin, 0 allows
 153:rfm70.h       **** //! - 4 : 1 masks MAX_RT (see...) from IRQ pin, 0 allows
 154:rfm70.h       **** //! - 3 : 1 enables CRC (forced high when EN_AA != 0)
 155:rfm70.h       **** //! - 2 : 0 = 1 byte CRC, 1 = 2 byte CRC
 156:rfm70.h       **** //! - 1 : 0 = power down, 1 = power up
 157:rfm70.h       **** //! - 0 : 0 = transmit mode, 1 = receive mode
 158:rfm70.h       **** #define RFM70_REG_CONFIG               0x00
 159:rfm70.h       **** 
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 23


 160:rfm70.h       **** //! EN_AA : enable auto ack on pipes
 161:rfm70.h       **** //
 162:rfm70.h       **** //! Bits (0 = LSB):
 163:rfm70.h       **** //! - 7, 6 : reserved, must be 00
 164:rfm70.h       **** //! - 5 : 0 disables auto ack on pipe 5, 1 enables
 165:rfm70.h       **** //! - 4 : 0 disables auto ack on pipe 4, 1 enables
 166:rfm70.h       **** //! - 3 : 0 disables auto ack on pipe 3, 1 enables
 167:rfm70.h       **** //! - 2 : 0 disables auto ack on pipe 2, 1 enables
 168:rfm70.h       **** //! - 1 : 0 disables auto ack on pipe 1, 1 enables
 169:rfm70.h       **** //! - 0 : 0 disables auto ack on pipe 0, 1 enables
 170:rfm70.h       **** #define RFM70_REG_EN_AA                0x01
 171:rfm70.h       **** 
 172:rfm70.h       **** //! EN_RXADDR : enable receive pipes
 173:rfm70.h       **** //
 174:rfm70.h       **** //! Bits (0 = LSB):
 175:rfm70.h       **** //! - 7, 6 : reserved, must be 00
 176:rfm70.h       **** //! - 5 : 0 disables receive pipe 5, 1 enables
 177:rfm70.h       **** //! - 4 : 0 disables receive pipe 4, 1 enables
 178:rfm70.h       **** //! - 3 : 0 disables receive pipe 3, 1 enables
 179:rfm70.h       **** //! - 2 : 0 disables receive pipe 2, 1 enables
 180:rfm70.h       **** //! - 1 : 0 disables receive pipe 1, 1 enables
 181:rfm70.h       **** //! - 0 : 0 disables receive pipe 0, 1 enables
 182:rfm70.h       **** #define RFM70_REG_EN_RXADDR            0x02
 183:rfm70.h       **** 
 184:rfm70.h       **** //! SETUP_AW : set address length
 185:rfm70.h       **** //
 186:rfm70.h       **** //! Bits (0 = LSB):
 187:rfm70.h       **** //! - 7 .. 2 : reserved, must be 000000
 188:rfm70.h       **** //! - 1 .. 0 : 00 = illegal, 01 = 3 bytes, 10 = 4 bytes, 11 = 5 bytes
 189:rfm70.h       **** #define RFM70_REG_SETUP_AW             0x03
 190:rfm70.h       **** 
 191:rfm70.h       **** //! SETUP_RETR : retransmission settings
 192:rfm70.h       **** //
 193:rfm70.h       **** //! Bits (0 = LSB):
 194:rfm70.h       **** //! - 7 .. 4 : delay between (re) transmissions, ( n + 1 ) * 250 us
 195:rfm70.h       **** //! - 3 .. 0 : max number of retransmissions, 0 disableles retransmissions
 196:rfm70.h       **** #define RFM70_REG_SETUP_RETR           0x04
 197:rfm70.h       **** 
 198:rfm70.h       **** //! RF_CH : RF channel (frequency)
 199:rfm70.h       **** //
 200:rfm70.h       **** //! The RF channel frequency is 2.4 MHz + n * 1 MHz.
 201:rfm70.h       **** #define RFM70_REG_RF_CH                0x05
 202:rfm70.h       **** 
 203:rfm70.h       **** //! RF_SETUP : RF setup: data rate, transmit power, LNA
 204:rfm70.h       **** //
 205:rfm70.h       **** //! Bits (0 = LSB):
 206:rfm70.h       **** //! - 7 .. 4 : reserved, must be 0011
 207:rfm70.h       **** //! - 3 : air data rate, 0 = 1 Mbps, 1 = 2 Mbps
 208:rfm70.h       **** //! - 2 .. 1 : transmit power, 00 = -10 dBm, 01 = -5 dBm, 10 = 0 dBm, 11 = 5 dBm
 209:rfm70.h       **** //! - 0 : LNA gain, 0 = - 20 dB (low gain), 1 = standard
 210:rfm70.h       **** #define RFM70_REG_RF_SETUP             0x06
 211:rfm70.h       **** 
 212:rfm70.h       **** //! STATUS : status register
 213:rfm70.h       **** //
 214:rfm70.h       **** //! The value of this register is also clocked out
 215:rfm70.h       **** //! while a SPI command is clocked in.
 216:rfm70.h       **** //!
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 24


 217:rfm70.h       **** //! Bits (0 = LSB):
 218:rfm70.h       **** //! - 7 : active register bank, 0 = bank 0, 1 = bank 1
 219:rfm70.h       **** //! - 6 : data available, 0 = RX FIFO not empty, 1 = RX FIFO empty
 220:rfm70.h       **** //! - 5 : data sent, 0 = no packet sent, 1 = packet has been sent
 221:rfm70.h       **** //! - 4 : 1 = maximum number of retransmissions reached
 222:rfm70.h       **** //! - 3 .. 1 : data pipe of the message at the RX queue head
 223:rfm70.h       **** //! - 0 : TX FIFO full: 0 = TX FIFO not full, 1 = TX FIFO full
 224:rfm70.h       **** //!
 225:rfm70.h       **** //! Bits 6,5,4 are cleared by writing a 1 (!) in that position.
 226:rfm70.h       **** //! When bit 4 is set this will block any communication.
 227:rfm70.h       **** //! When auto retransmission is enabled bit 5 will be set only
 228:rfm70.h       **** //! after the acknowledge has been received.
 229:rfm70.h       **** #define RFM70_REG_STATUS               0x07
 230:rfm70.h       **** 
 231:rfm70.h       **** //! OBSERVE_TX : lost and retransmitted packets
 232:rfm70.h       **** //
 233:rfm70.h       **** //! Bits (0 = LSB):
 234:rfm70.h       **** //! - 7 .. 4 : counts number of lost packets
 235:rfm70.h       **** //! - 3 .. 0 : counts retranmits 
 236:rfm70.h       **** //! The lost packets counter will not increment beyond 15. 
 237:rfm70.h       **** //! It is reset by writing to the channel frequency register.
 238:rfm70.h       **** //!
 239:rfm70.h       **** //! The retransmits counter can not increment beyond 15 because
 240:rfm70.h       **** //! the maximum number of transmissions is 15. This counter
 241:rfm70.h       **** //! is reset when the transmission of a new packet starts.
 242:rfm70.h       **** #define RFM70_REG_OBSERVE_TX           0x08
 243:rfm70.h       **** 
 244:rfm70.h       **** //! CD : carrier detect
 245:rfm70.h       **** //
 246:rfm70.h       **** //! Bits (0 = LSB):
 247:rfm70.h       **** //! - 7 .. 1 : reserved
 248:rfm70.h       **** //! - 1 : carrier detect
 249:rfm70.h       **** #define RFM70_REG_CD                   0x09
 250:rfm70.h       **** 
 251:rfm70.h       **** //! RX_ADDR_PO : receive address for data pipe 0, 5 bytes
 252:rfm70.h       **** //
 253:rfm70.h       **** //! This is the (up to) 5 byte receive address for data pipe 0.
 254:rfm70.h       **** //! For auto acknowledgement to work this address must be 
 255:rfm70.h       **** //! the same as the transmit address.
 256:rfm70.h       **** #define RFM70_REG_RX_ADDR_P0           0x0A
 257:rfm70.h       **** 
 258:rfm70.h       **** //! RX_ADDR_P1 : receive address for data pipe 1, 5 bytes
 259:rfm70.h       **** //
 260:rfm70.h       **** //! This is the (up to) 5 byte receive address for data pipe 1.
 261:rfm70.h       **** //! The higher bytes (all but the LSB) are also used in
 262:rfm70.h       **** //! the receive addresses of data pipes 2 .. 5.
 263:rfm70.h       **** #define RFM70_REG_RX_ADDR_P1           0x0B
 264:rfm70.h       **** 
 265:rfm70.h       **** //! RX_ADDR_P2 : receive address for data pipe 2, 1 byte
 266:rfm70.h       **** //
 267:rfm70.h       **** //! This is the LSB of the receive address for data pipe 2.
 268:rfm70.h       **** //! The higher bytes are copied from the receive address of
 269:rfm70.h       **** //! data pipe 1.
 270:rfm70.h       **** #define RFM70_REG_RX_ADDR_P2           0x0C
 271:rfm70.h       **** 
 272:rfm70.h       **** //! RX_ADDR_P3 : receive address for data pipe 3, 1 byte
 273:rfm70.h       **** //
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 25


 274:rfm70.h       **** //! This is the LSB of the receive address for data pipe 3.
 275:rfm70.h       **** //! The higher bytes are copied from the receive address of
 276:rfm70.h       **** //! data pipe 1.
 277:rfm70.h       **** #define RFM70_REG_RX_ADDR_P3           0x0D
 278:rfm70.h       **** 
 279:rfm70.h       **** //! RX_ADDR_P4 : receive address for data pipe 4, 1 byte
 280:rfm70.h       **** //
 281:rfm70.h       **** //! This is the LSB of the receive address for data pipe 4.
 282:rfm70.h       **** //! The higher bytes are copied from the receive address of
 283:rfm70.h       **** //! data pipe 1.
 284:rfm70.h       **** #define RFM70_REG_RX_ADDR_P4           0x0E
 285:rfm70.h       **** 
 286:rfm70.h       **** //! RX_ADDR_P5 : receive address for data pipe 5, 1 byte
 287:rfm70.h       **** //
 288:rfm70.h       **** //! This is the LSB of the receive address for data pipe 2.
 289:rfm70.h       **** //! The higher bytes are copied from the receive address of
 290:rfm70.h       **** //! data pipe 5.
 291:rfm70.h       **** #define RFM70_REG_RX_ADDR_P5           0x0F
 292:rfm70.h       **** 
 293:rfm70.h       **** //! TX_ADDR : tranmsit adress, 5 bytes
 294:rfm70.h       **** //
 295:rfm70.h       **** //! This is the (up to) 5 byte adress used in transmitted packets.
 296:rfm70.h       **** //! For auto acknowledgement to work this address must be 
 297:rfm70.h       **** //! the same as the pipe 0 receive address.
 298:rfm70.h       **** #define RFM70_REG_TX_ADDR              0x10
 299:rfm70.h       **** 
 300:rfm70.h       **** //! RX_PW_P0 : number of bytes in package received into pipe 0
 301:rfm70.h       **** //
 302:rfm70.h       **** //! This is the number of data bytes in the message at
 303:rfm70.h       **** //! the head of receive pipe 0.
 304:rfm70.h       **** #define RFM70_REG_RX_PW_P0             0x11
 305:rfm70.h       **** 
 306:rfm70.h       **** //! RX_PW_P1 : number of bytes in package received into pipe 1
 307:rfm70.h       **** //
 308:rfm70.h       **** //! This is the number of data bytes in the message at
 309:rfm70.h       **** //! the head of receive pipe 1.
 310:rfm70.h       **** #define RFM70_REG_RX_PW_P1             0x12
 311:rfm70.h       **** 
 312:rfm70.h       **** //! RX_PW_P2 : number of bytes in package received into pipe 2
 313:rfm70.h       **** //
 314:rfm70.h       **** //! This is the number of data bytes in the message at
 315:rfm70.h       **** //! the head of receive pipe 2.
 316:rfm70.h       **** #define RFM70_REG_RX_PW_P2             0x13
 317:rfm70.h       **** 
 318:rfm70.h       **** //! RX_PW_P3 : number of bytes in package received into pipe 3
 319:rfm70.h       **** //
 320:rfm70.h       **** //! This is the number of data bytes in the message at
 321:rfm70.h       **** //! the head of receive pipe 3.
 322:rfm70.h       **** #define RFM70_REG_RX_PW_P3             0x14
 323:rfm70.h       **** 
 324:rfm70.h       **** //! RX_PW_P4 : number of bytes in package received into pipe 4
 325:rfm70.h       **** //
 326:rfm70.h       **** //! This is the number of data bytes in the message at
 327:rfm70.h       **** //! the head of receive pipe 4.
 328:rfm70.h       **** #define RFM70_REG_RX_PW_P4             0x15
 329:rfm70.h       **** 
 330:rfm70.h       **** //! RX_PW_P5 : number of bytes in package received into pipe 5
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 26


 331:rfm70.h       **** //
 332:rfm70.h       **** //! This is the number of data bytes in the message at
 333:rfm70.h       **** //! the head of receive pipe 5.
 334:rfm70.h       **** #define RFM70_REG_RX_PW_P5             0x16
 335:rfm70.h       **** 
 336:rfm70.h       **** //! FIFO_STATUS : receive and transmit FIFO status (readonly)
 337:rfm70.h       **** //
 338:rfm70.h       **** //! Bits (0 = LSB):
 339:rfm70.h       **** //! - 7   : reserved, only 0 allowed
 340:rfm70.h       **** //! - 6   : high = re-use last transmitted packet
 341:rfm70.h       **** //! - 5   : high = transmit FIFO is full
 342:rfm70.h       **** //! - 4   : high = transmit FIFO is empty
 343:rfm70.h       **** //! - 3:2 : reserved, only 0 allowed
 344:rfm70.h       **** //! - 1   : high = receive FIFO is full
 345:rfm70.h       **** //! - 0   : high = receive FIFO is empty
 346:rfm70.h       **** #define RFM70_REG_FIFO_STATUS          0x17
 347:rfm70.h       **** 
 348:rfm70.h       **** //! DYNPD: dynamic payload flags
 349:rfm70.h       **** //
 350:rfm70.h       **** //! Bits (0 = LSB):
 351:rfm70.h       **** //! - 7:6 : reserved, only 00 allowed
 352:rfm70.h       **** //! - 5   : high = dynamic payload enabled on data pipe 5
 353:rfm70.h       **** //! - 4   : high = dynamic payload enabled on data pipe 4
 354:rfm70.h       **** //! - 3   : high = dynamic payload enabled on data pipe 3
 355:rfm70.h       **** //! - 2   : high = dynamic payload enabled on data pipe 2
 356:rfm70.h       **** //! - 1   : high = dynamic payload enabled on data pipe 1
 357:rfm70.h       **** //! - 0   : high = dynamic payload enabled on data pipe 0
 358:rfm70.h       **** //! Setting dynamic payload on pipe x requires EN_DPL 
 359:rfm70.h       **** //! (in the special features flags register) and ENAA_Px.
 360:rfm70.h       **** #define RFM70_REG_DYNPD                0x1C
 361:rfm70.h       **** 
 362:rfm70.h       **** //! FEATURE: special fature flags
 363:rfm70.h       **** //
 364:rfm70.h       **** //! Bits (0 = LSB):
 365:rfm70.h       **** //! - 7:3 : reserved, only 00000 allowed
 366:rfm70.h       **** //! - 2   : (EN_DPL) high = enable dynamic payload length
 367:rfm70.h       **** //! - 1   : (EN_ACK_PAY) high = enable payload with ack
 368:rfm70.h       **** //! - 0   : (EN_DYN_ACK) high = enables W_TX_PAYLOAD_NOACK command 
 369:rfm70.h       **** #define RFM70_REG_FEATURE              0x1D
 370:rfm70.h       **** 
 371:rfm70.h       **** //! @}
 372:rfm70.h       **** 
 373:rfm70.h       **** 
 374:rfm70.h       **** 
 375:rfm70.h       **** #include "pins.h"	
 376:rfm70.h       **** 
 377:rfm70.h       **** 
 378:rfm70.h       ****    
 379:rfm70.h       **** //! interface to an RFM70 module
 380:rfm70.h       **** class rfm70 {
 381:rfm70.h       **** 
 382:rfm70.h       **** private:
 383:rfm70.h       ****    pins::output_pin &sclk;      
 384:rfm70.h       ****    pins::output_pin &mosi;      
 385:rfm70.h       ****    pins::input_pin  &miso;      
 386:rfm70.h       ****    pins::output_pin &csn;      
 387:rfm70.h       ****    pins::output_pin &ce;     
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 27


 388:rfm70.h       ****     
 389:rfm70.h       ****     void(*wait_ms)(unsigned int);
 390:rfm70.h       ****     void(*wait_us)(unsigned int);
 391:rfm70.h       ****    
 392:rfm70.h       ****    unsigned char SPI_RW( unsigned char value );    
 393:rfm70.h       **** 
 394:rfm70.h       **** public:
 395:rfm70.h       ****    //! constructor: create and RFM70 object
 396:rfm70.h       ****    //
 397:rfm70.h       ****    //! \ingroup highlevel
 398:rfm70.h       ****    //! This constructor creates an RFM70 object from the 
 399:rfm70.h       ****    //! pins that connect to the RFM70 and a delay function.
 400:rfm70.h       ****    //! This constructor calls init().
 401:rfm70.h       ****    rfm70( 
 402:rfm70.h       ****       pins::output_pin &sclk,
 403:rfm70.h       ****       pins::output_pin &mosi,
 404:rfm70.h       ****       pins::input_pin  &miso,
 405:rfm70.h       ****       pins::output_pin &csn,
 406:rfm70.h       ****       pins::output_pin &ce
 407:rfm70.h       ****       
 408:rfm70.h       ****        ,void(*wait_ms)(unsigned int)
 409:rfm70.h       ****        ,void(*wait_us)(unsigned int)
 410:rfm70.h       ****       
 411:rfm70.h       ****    ):      
 412:rfm70.h       ****       sclk( sclk ),
 413:rfm70.h       ****       mosi( mosi ),
 414:rfm70.h       ****       miso( miso ),
 415:rfm70.h       ****       csn(  csn ),
 416:rfm70.h       ****       ce(   ce )
 417:rfm70.h       ****        ,wait_ms( wait_ms )
 418:rfm70.h       ****        ,wait_us( wait_us )
 894              		.loc 3 418 0
 895 0032 6846     		mov	r0, sp	@ tmp322,
 896              	.LBE239:
 897              	.LBE238:
 898              	.LBE237:
 899              	.LBB248:
 900              	.LBB160:
 901              	.LBB155:
 902              	.LBB150:
 903              	@ main.cpp:39:       mask( 1 << pin ){}
  39:main.cpp      ****    
 904              		.loc 2 39 0
 905 0034 4D4D     		ldr	r5, .L53+20	@ tmp168,
 906 0036 4E4C     		ldr	r4, .L53+24	@ tmp170,
 907              	.LBE150:
 908              	.LBE155:
 909              	.LBE160:
 910              	.LBE248:
 911              	.LBB249:
 912              	.LBB177:
 913              	.LBB173:
 914              	.LBB169:
 915 0038 05A9     		add	r1, sp, #20	@ tmp177,,
 916              	.LBE169:
 917              	.LBE173:
 918              	.LBE177:
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 28


 919              	.LBE249:
 920              	.LBB250:
 921              	.LBB230:
 922              	.LBB226:
 923              	.LBB222:
 924 003a 4E4F     		ldr	r7, .L53+28	@ tmp212,
 925              	.LBE222:
 926              	.LBE226:
 927              	.LBE230:
 928              	.LBE250:
 929              	.LBB251:
 930              	.LBB215:
 931              	.LBB211:
 932              	.LBB207:
 933 003c 0FAA     		add	r2, sp, #60	@ tmp197,,
 934 003e 1393     		str	r3, [sp, #76]	@ tmp206, csn.mask
 935              	.LBE207:
 936              	.LBE211:
 937              	.LBE215:
 938              	.LBE251:
 939              	.LBB252:
 940              	.LBB244:
 941              	.LBB240:
 942              	@ rfm70.h:418:        ,wait_us( wait_us )
 943              		.loc 3 418 0
 944 0040 2491     		str	r1, [sp, #144]	@ tmp177, radio.mosi
 945              	.LBE240:
 946              	.LBE244:
 947              	.LBE252:
 948              	.LBB253:
 949              	.LBB231:
 950              	.LBB227:
 951              	.LBB223:
 952              	@ main.cpp:39:       mask( 1 << pin ){}
  39:main.cpp      ****    
 953              		.loc 2 39 0
 954 0042 14AB     		add	r3, sp, #80	@ tmp207,,
 955              	.LBE223:
 956              	.LBE227:
 957              	.LBE231:
 958              	.LBE253:
 959              	.LBB254:
 960              	.LBB245:
 961              	.LBB241:
 962              	@ rfm70.h:418:        ,wait_us( wait_us )
 963              		.loc 3 418 0
 964 0044 0BA9     		add	r1, sp, #44	@ tmp223,,
 965 0046 2692     		str	r2, [sp, #152]	@ tmp197, radio.csn
 966 0048 2591     		str	r1, [sp, #148]	@ tmp223, radio.miso
 967 004a 2390     		str	r0, [sp, #140]	@ tmp322, radio.sclk
 968              	.LBE241:
 969              	.LBE245:
 970              	.LBE254:
 971              	.LBB255:
 972              	.LBB161:
 973              	.LBB156:
 974              	.LBB151:
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 29


 975              	@ main.cpp:39:       mask( 1 << pin ){}
  39:main.cpp      ****    
 976              		.loc 2 39 0
 977 004c 0095     		str	r5, [sp]	@ tmp168, sck.D.5322.D.5107._vptr.output_pin
 978 004e 0194     		str	r4, [sp, #4]	@ tmp170, sck.D.5322.D.5108._vptr.input_pin
 979              	.LVL51:
 980              	.LBE151:
 981              	.LBE156:
 982              	.LBE161:
 983              	.LBE255:
 984              	.LBB256:
 985              	.LBB178:
 986              	.LBB174:
 987              	.LBB170:
 988 0050 0595     		str	r5, [sp, #20]	@ tmp168, mosi.D.5322.D.5107._vptr.output_pin
 989 0052 0694     		str	r4, [sp, #24]	@ tmp170, mosi.D.5322.D.5108._vptr.input_pin
 990              	.LVL52:
 991              	.LBE170:
 992              	.LBE174:
 993              	.LBE178:
 994              	.LBE256:
 995              	.LBB257:
 996              	.LBB196:
 997              	.LBB192:
 998              	.LBB188:
 999 0054 0A95     		str	r5, [sp, #40]	@ tmp168, miso.D.5322.D.5107._vptr.output_pin
 1000 0056 0B94     		str	r4, [sp, #44]	@ tmp170, miso.D.5322.D.5108._vptr.input_pin
 1001              	.LVL53:
 1002              	.LBE188:
 1003              	.LBE192:
 1004              	.LBE196:
 1005              	.LBE257:
 1006              	.LBB258:
 1007              	.LBB216:
 1008              	.LBB212:
 1009              	.LBB208:
 1010 0058 0F95     		str	r5, [sp, #60]	@ tmp168, csn.D.5322.D.5107._vptr.output_pin
 1011 005a 1094     		str	r4, [sp, #64]	@ tmp170, csn.D.5322.D.5108._vptr.input_pin
 1012              	.LVL54:
 1013              	.LBE208:
 1014              	.LBE212:
 1015              	.LBE216:
 1016              	.LBE258:
 1017              	.LBB259:
 1018              	.LBB232:
 1019              	.LBB228:
 1020              	.LBB224:
 1021 005c 1495     		str	r5, [sp, #80]	@ tmp168, ce.D.5322.D.5107._vptr.output_pin
 1022 005e 1594     		str	r4, [sp, #84]	@ tmp170, ce.D.5322.D.5108._vptr.input_pin
 1023 0060 1697     		str	r7, [sp, #88]	@ tmp212, ce.data_pointer
 1024              	.LVL55:
 1025              	.LBE224:
 1026              	.LBE228:
 1027              	.LBE232:
 1028              	.LBE259:
 1029              	.LBB260:
 1030              	.LBB246:
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 30


 1031              	.LBB242:
 1032              	@ rfm70.h:418:        ,wait_us( wait_us )
 1033              		.loc 3 418 0
 1034 0062 2793     		str	r3, [sp, #156]	@ tmp207, radio.ce
 1035 0064 444B     		ldr	r3, .L53+32	@ tmp229,
 1036              	.LVL56:
 1037              	.LBE242:
 1038              	.LBE246:
 1039              	.LBE260:
 1040              	@ main.cpp:141:    radio.init();
 124:main.cpp      ****    lpc1114 target;
 125:main.cpp      ****    
 126:main.cpp      **** 
 127:main.cpp      ****    input_output_pin_lpc1  sck  = target.pin( 0,  2 );
 128:main.cpp      ****    input_output_pin_lpc1  mosi = target.pin( 0,  3 );
 129:main.cpp      ****    input_output_pin_lpc1  miso = target.pin( 0,  4 );
 130:main.cpp      ****    input_output_pin_lpc1  csn  = target.pin( 0,  5 );
 131:main.cpp      ****    input_output_pin_lpc1  ce   = target.pin( 0,  6 );
 132:main.cpp      **** 
 133:main.cpp      **** /*
 134:main.cpp      ****    input_output_pin_lpc1  sck  = target.pin( 3,  0 );
 135:main.cpp      ****    input_output_pin_lpc1  mosi = target.pin( 3,  1 );
 136:main.cpp      ****    input_output_pin_lpc1  miso = target.pin( 3,  2 );
 137:main.cpp      ****    input_output_pin_lpc1  csn  = target.pin( 3,  3 );
 138:main.cpp      ****    input_output_pin_lpc1  ce   = target.pin( 3,  4 );
 139:main.cpp      **** */   
 140:main.cpp      ****    rfm70 radio( sck, mosi, miso, csn, ce, wait_ms, wait_us );
 141:main.cpp      ****    radio.init();
 1041              		.loc 2 141 0
 1042 0066 23A8     		add	r0, sp, #140	@ tmp323,,
 1043              	.LVL57:
 1044              	.LBB261:
 1045              	.LBB247:
 1046              	.LBB243:
 1047              	@ rfm70.h:418:        ,wait_us( wait_us )
 1048              		.loc 3 418 0
 1049 0068 2893     		str	r3, [sp, #160]	@ tmp229, radio.wait_ms
 1050 006a 444B     		ldr	r3, .L53+36	@ tmp231,
 1051 006c 2993     		str	r3, [sp, #164]	@ tmp231, radio.wait_us
 1052              	.LVL58:
 1053              	.LBE243:
 1054              	.LBE247:
 1055              	.LBE261:
 1056              	@ main.cpp:141:    radio.init();
 1057              		.loc 2 141 0
 1058 006e FFF7FEFF 		bl	_ZN5rfm704initEv	@
 1059              	.LVL59:
 1060              	@ main.cpp:143:    radio.channel( 10 );
 142:main.cpp      ****    
 143:main.cpp      ****    radio.channel( 10 );
 1061              		.loc 2 143 0
 1062 0072 0A21     		movs	r1, #10	@,
 1063 0074 23A8     		add	r0, sp, #140	@ tmp324,,
 1064 0076 FFF7FEFF 		bl	_ZN5rfm707channelEh	@
 1065              	.LVL60:
 1066              	.LBB262:
 1067              	.LBB263:
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 31


 1068              	.LBB264:
 1069              	.LBB265:
 1070              	@ main.cpp:39:       mask( 1 << pin ){}
  39:main.cpp      ****    
 1071              		.loc 2 39 0
 1072 007a 414B     		ldr	r3, .L53+40	@ tmp239,
 1073 007c 0122     		movs	r2, #1	@ tmp243,
 1074 007e 1B93     		str	r3, [sp, #108]	@ tmp239, led_tx.data_pointer
 1075 0080 404B     		ldr	r3, .L53+44	@ tmp241,
 1076 0082 1D92     		str	r2, [sp, #116]	@ tmp243, led_tx.mask
 1077 0084 1C93     		str	r3, [sp, #112]	@ tmp241, led_tx.direction_pointer
 1078              	.LBE265:
 1079              	.LBE264:
 1080              	.LBE263:
 1081              	.LBE262:
 1082              	.LBB269:
 1083              	.LBB270:
 1084              	.LBB271:
 1085              	.LBB272:
 1086 0086 2193     		str	r3, [sp, #132]	@ tmp241, led_rx.direction_pointer
 1087 0088 0223     		movs	r3, #2	@ tmp253,
 1088 008a 3F4A     		ldr	r2, .L53+48	@ tmp249,
 1089              	.LBE272:
 1090              	.LBE271:
 1091              	.LBE270:
 1092              	.LBE269:
 1093              	@ main.cpp:148:    led_tx.direction_set_output();
 144:main.cpp      ****    // blink( csn );
 145:main.cpp      ****    
 146:main.cpp      ****    input_output_pin_lpc1  led_tx   = target.pin( 2,  0 );
 147:main.cpp      ****    input_output_pin_lpc1  led_rx   = target.pin( 2,  1 );   
 148:main.cpp      ****    led_tx.direction_set_output();
 1094              		.loc 2 148 0
 1095 008c 19A8     		add	r0, sp, #100	@ tmp325,,
 1096              	.LVL61:
 1097              	.LBB279:
 1098              	.LBB277:
 1099              	.LBB275:
 1100              	.LBB273:
 1101              	@ main.cpp:39:       mask( 1 << pin ){}
  39:main.cpp      ****    
 1102              		.loc 2 39 0
 1103 008e 2092     		str	r2, [sp, #128]	@ tmp249, led_rx.data_pointer
 1104 0090 2293     		str	r3, [sp, #136]	@ tmp253, led_rx.mask
 1105              	.LBE273:
 1106              	.LBE275:
 1107              	.LBE277:
 1108              	.LBE279:
 1109              	.LBB280:
 1110              	.LBB268:
 1111              	.LBB267:
 1112              	.LBB266:
 1113 0092 1995     		str	r5, [sp, #100]	@ tmp168, led_tx.D.5322.D.5107._vptr.output_pin
 1114 0094 1A94     		str	r4, [sp, #104]	@ tmp170, led_tx.D.5322.D.5108._vptr.input_pin
 1115              	.LVL62:
 1116              	.LBE266:
 1117              	.LBE267:
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 32


 1118              	.LBE268:
 1119              	.LBE280:
 1120              	.LBB281:
 1121              	.LBB278:
 1122              	.LBB276:
 1123              	.LBB274:
 1124 0096 1E95     		str	r5, [sp, #120]	@ tmp168, led_rx.D.5322.D.5107._vptr.output_pin
 1125 0098 1F94     		str	r4, [sp, #124]	@ tmp170, led_rx.D.5322.D.5108._vptr.input_pin
 1126              	.LVL63:
 1127              	.LBE274:
 1128              	.LBE276:
 1129              	.LBE278:
 1130              	.LBE281:
 1131              	@ main.cpp:148:    led_tx.direction_set_output();
 1132              		.loc 2 148 0
 1133 009a FFF7FEFF 		bl	_ZN21input_output_pin_lpc120direction_set_outputEv	@
 1134              	.LVL64:
 1135              	@ main.cpp:149:    led_rx.direction_set_output();
 149:main.cpp      ****    led_rx.direction_set_output();
 1136              		.loc 2 149 0
 1137 009e 1EA8     		add	r0, sp, #120	@ tmp326,,
 1138 00a0 FFF7FEFF 		bl	_ZN21input_output_pin_lpc120direction_set_outputEv	@
 1139              	.LVL65:
 1140              	@ main.cpp:151:    if( ! radio.is_present() ){
 150:main.cpp      ****    
 151:main.cpp      ****    if( ! radio.is_present() ){
 1141              		.loc 2 151 0
 1142 00a4 23A8     		add	r0, sp, #140	@ tmp327,,
 1143 00a6 FFF7FEFF 		bl	_ZN5rfm7010is_presentEv	@
 1144              	.LVL66:
 1145 00aa 0028     		cmp	r0, #0	@ tmp257,
 1146 00ac 04D1     		bne	.L34	@,
 1147              	.LVL67:
 1148              	.LBB282:
 1149              	.LBB283:
 1150              	@ main.cpp:50:       *data_pointer = x ? -1 : 0;        
  50:main.cpp      ****    }
 1151              		.loc 2 50 0
 1152 00ae 1B9B     		ldr	r3, [sp, #108]	@ _49, led_tx.data_pointer
 1153 00b0 1860     		str	r0, [r3]	@ tmp257, *_49
 1154              	.LVL68:
 1155              	.LBE283:
 1156              	.LBE282:
 1157              	.LBB284:
 1158              	.LBB285:
 1159 00b2 209B     		ldr	r3, [sp, #128]	@ _48, led_rx.data_pointer
 1160 00b4 1860     		str	r0, [r3]	@ tmp257, *_48
 1161              	.L35:
 1162 00b6 FEE7     		b	.L35	@
 1163              	.LVL69:
 1164              	.L34:
 1165              	.LBE285:
 1166              	.LBE284:
 1167              	.LBB286:
 1168              	.LBB287:
 1169              	@ main.cpp:104: void wait_us( unsigned int n ){ wait( n ); }
 104:main.cpp      **** 
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 33


 1170              		.loc 2 104 0
 1171 00b8 FA20     		movs	r0, #250	@,
 1172 00ba C000     		lsls	r0, r0, #3	@,,
 1173 00bc FFF7FEFF 		bl	_Z4waitj	@
 1174              	.LVL70:
 1175              	.LBE287:
 1176              	.LBE286:
 1177              	@ main.cpp:162:         led_tx.set( transmit_led == 0 );
 152:main.cpp      ****       led_tx.set( 0 );
 153:main.cpp      ****       led_rx.set( 0 );
 154:main.cpp      ****       for(;;);	
 155:main.cpp      ****    }
 156:main.cpp      ****       
 157:main.cpp      **** 	unsigned char len,i,chksum, n;
 158:main.cpp      **** 	unsigned char rx_buf[ RFM70_MAX_PACKET_LEN ];
 159:main.cpp      **** 	while(1){
 160:main.cpp      ****         wait_us( 2 * 1000 );
 161:main.cpp      **** 
 162:main.cpp      ****         led_tx.set( transmit_led == 0 );
 1178              		.loc 2 162 0
 1179 00c0 324C     		ldr	r4, .L53+52	@ tmp264,
 1180 00c2 19A8     		add	r0, sp, #100	@ tmp328,,
 1181 00c4 2178     		ldrb	r1, [r4]	@ transmit_led, transmit_led
 1182 00c6 4B42     		rsbs	r3, r1, #0	@ tmp268, transmit_led
 1183 00c8 5941     		adcs	r1, r1, r3	@ tmp267, transmit_led, tmp268
 1184 00ca C9B2     		uxtb	r1, r1	@ tmp269, tmp267
 1185 00cc FFF7FEFF 		bl	_ZN21input_output_pin_lpc13setEb	@
 1186              	.LVL71:
 1187              	@ main.cpp:163:         if( transmit_led > 0 ){ transmit_led--; }
 163:main.cpp      ****         if( transmit_led > 0 ){ transmit_led--; }
 1188              		.loc 2 163 0
 1189 00d0 2378     		ldrb	r3, [r4]	@ transmit_led.7_4, transmit_led
 1190 00d2 002B     		cmp	r3, #0	@ transmit_led.7_4,
 1191 00d4 01D0     		beq	.L36	@,
 1192              	@ main.cpp:163:         if( transmit_led > 0 ){ transmit_led--; }
 1193              		.loc 2 163 0 is_stmt 0 discriminator 1
 1194 00d6 013B     		subs	r3, r3, #1	@ tmp273,
 1195 00d8 2370     		strb	r3, [r4]	@ tmp273, transmit_led
 1196              	.L36:
 1197              	@ main.cpp:165:         led_rx.set( receive_led == 0 );
 164:main.cpp      **** 
 165:main.cpp      ****         led_rx.set( receive_led == 0 );
 1198              		.loc 2 165 0 is_stmt 1
 1199 00da 2D4F     		ldr	r7, .L53+56	@ tmp275,
 1200 00dc 1EA8     		add	r0, sp, #120	@ tmp329,,
 1201 00de 3978     		ldrb	r1, [r7]	@ receive_led, receive_led
 1202 00e0 4B42     		rsbs	r3, r1, #0	@ tmp279, receive_led
 1203 00e2 5941     		adcs	r1, r1, r3	@ tmp278, receive_led, tmp279
 1204 00e4 C9B2     		uxtb	r1, r1	@ tmp280, tmp278
 1205 00e6 FFF7FEFF 		bl	_ZN21input_output_pin_lpc13setEb	@
 1206              	.LVL72:
 1207              	@ main.cpp:166:         if( receive_led > 0 ){ receive_led--; }       
 166:main.cpp      ****         if( receive_led > 0 ){ receive_led--; }       
 1208              		.loc 2 166 0
 1209 00ea 3B78     		ldrb	r3, [r7]	@ receive_led.11_9, receive_led
 1210 00ec 002B     		cmp	r3, #0	@ receive_led.11_9,
 1211 00ee 01D0     		beq	.L37	@,
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 34


 1212              	@ main.cpp:166:         if( receive_led > 0 ){ receive_led--; }       
 1213              		.loc 2 166 0 is_stmt 0 discriminator 1
 1214 00f0 013B     		subs	r3, r3, #1	@ tmp284,
 1215 00f2 3B70     		strb	r3, [r7]	@ tmp284, receive_led
 1216              	.L37:
 1217              	@ main.cpp:167:         if( ++n > 250 ){
 167:main.cpp      ****         if( ++n > 250 ){
 1218              		.loc 2 167 0 is_stmt 1
 1219 00f4 0136     		adds	r6, r6, #1	@ tmp286,
 1220              	.LVL73:
 1221 00f6 F6B2     		uxtb	r6, r6	@ n, tmp286
 1222              	.LVL74:
 1223 00f8 FB2E     		cmp	r6, #251	@ n,
 1224 00fa 06D1     		bne	.L38	@,
 1225              	@ main.cpp:168: 	       Send_Packet( radio, RFM70_CMD_W_TX_PAYLOAD_NOACK, tx_buf, 17);
 168:main.cpp      **** 	       Send_Packet( radio, RFM70_CMD_W_TX_PAYLOAD_NOACK, tx_buf, 17);
 1226              		.loc 2 168 0
 1227 00fc 1123     		movs	r3, #17	@,
 1228 00fe 254A     		ldr	r2, .L53+60	@,
 1229 0100 B021     		movs	r1, #176	@,
 1230 0102 23A8     		add	r0, sp, #140	@ tmp330,,
 1231 0104 FFF7FEFF 		bl	_Z11Send_PacketR5rfm70hPKhh	@
 1232              	.LVL75:
 1233              	@ main.cpp:169:            n = 0; 	
 169:main.cpp      ****            n = 0; 	
 1234              		.loc 2 169 0
 1235 0108 0026     		movs	r6, #0	@ n,
 1236              	.LVL76:
 1237              	.L38:
 1238              	@ main.cpp:172:    	    if( ! radio.receive_fifo_empty() ){
 170:main.cpp      ****         }
 171:main.cpp      **** 
 172:main.cpp      ****    	    if( ! radio.receive_fifo_empty() ){
 1239              		.loc 2 172 0
 1240 010a 23A8     		add	r0, sp, #140	@ tmp331,,
 1241 010c FFF7FEFF 		bl	_ZN5rfm7018receive_fifo_emptyEv	@
 1242              	.LVL77:
 1243 0110 041E     		subs	r4, r0, #0	@ tmp290,,
 1244 0112 D1D1     		bne	.L34	@,
 1245              	@ main.cpp:174: 		    len=radio.register_read( RFM70_CMD_R_RX_PL_WID );
 173:main.cpp      **** 
 174:main.cpp      **** 		    len=radio.register_read( RFM70_CMD_R_RX_PL_WID );
 1246              		.loc 2 174 0
 1247 0114 6021     		movs	r1, #96	@,
 1248 0116 23A8     		add	r0, sp, #140	@ tmp332,,
 1249 0118 FFF7FEFF 		bl	_ZN5rfm7013register_readEh	@
 1250              	.LVL78:
 1251 011c 0300     		movs	r3, r0	@ tmp293,
 1252              	.LVL79:
 1253              	@ main.cpp:175: 			if( len <= RFM70_MAX_PACKET_LEN ){
 175:main.cpp      **** 			if( len <= RFM70_MAX_PACKET_LEN ){
 1254              		.loc 2 175 0
 1255 011e 2028     		cmp	r0, #32	@ tmp293,
 1256 0120 14D8     		bhi	.L41	@,
 1257              	@ main.cpp:176: 				radio.buffer_read( RFM70_CMD_R_RX_PAYLOAD,rx_buf,len );
 176:main.cpp      **** 				radio.buffer_read( RFM70_CMD_R_RX_PAYLOAD,rx_buf,len );
 1258              		.loc 2 176 0
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 35


 1259 0122 2AAD     		add	r5, sp, #168	@ tmp295,,
 1260 0124 2A00     		movs	r2, r5	@, tmp295
 1261 0126 6121     		movs	r1, #97	@,
 1262 0128 23A8     		add	r0, sp, #140	@ tmp333,,
 1263              	.LVL80:
 1264 012a FFF7FEFF 		bl	_ZN5rfm7011buffer_readEhPhh	@
 1265              	.LVL81:
 1266              	@ main.cpp:178: 	   	       chksum = 0;
 177:main.cpp      **** 
 178:main.cpp      **** 	   	       chksum = 0;
 1267              		.loc 2 178 0
 1268 012e 2300     		movs	r3, r4	@ chksum, ivtmp.74
 1269              	.LVL82:
 1270              	.L42:
 1271              	@ main.cpp:180: 			      chksum +=rx_buf[i]; 
 179:main.cpp      **** 		       for(i=0;i<16;i++){
 180:main.cpp      **** 			      chksum +=rx_buf[i]; 
 1272              		.loc 2 180 0 discriminator 2
 1273 0130 625D     		ldrb	r2, [r4, r5]	@ MEM[symbol: rx_buf, index: ivtmp.74_128, offset: 0B], MEM[symbol: rx_buf, inde
 1274 0132 0134     		adds	r4, r4, #1	@ ivtmp.74,
 1275              	.LVL83:
 1276 0134 9B18     		adds	r3, r3, r2	@ tmp300, chksum, MEM[symbol: rx_buf, index: ivtmp.74_128, offset: 0B]
 1277              	.LVL84:
 1278 0136 DBB2     		uxtb	r3, r3	@ chksum, tmp300
 1279              	.LVL85:
 1280              	@ main.cpp:179: 		       for(i=0;i<16;i++){
 179:main.cpp      **** 		       for(i=0;i<16;i++){
 1281              		.loc 2 179 0 discriminator 2
 1282 0138 102C     		cmp	r4, #16	@ ivtmp.74,
 1283 013a F9D1     		bne	.L42	@,
 1284              	@ main.cpp:183: 		       if(chksum==rx_buf[16]&&rx_buf[0]==0x30){
 181:main.cpp      **** 		       }
 182:main.cpp      **** 
 183:main.cpp      **** 		       if(chksum==rx_buf[16]&&rx_buf[0]==0x30){
 1285              		.loc 2 183 0
 1286 013c 2A7C     		ldrb	r2, [r5, #16]	@ tmp302,
 1287 013e 9A42     		cmp	r2, r3	@ tmp302, chksum
 1288 0140 04D1     		bne	.L41	@,
 1289              	@ main.cpp:183: 		       if(chksum==rx_buf[16]&&rx_buf[0]==0x30){
 1290              		.loc 2 183 0 is_stmt 0 discriminator 1
 1291 0142 2B78     		ldrb	r3, [r5]	@ rx_buf, rx_buf
 1292              	.LVL86:
 1293 0144 302B     		cmp	r3, #48	@ rx_buf,
 1294 0146 01D1     		bne	.L41	@,
 1295              	@ main.cpp:184: 		          receive_led = 20;
 184:main.cpp      **** 		          receive_led = 20;
 1296              		.loc 2 184 0 is_stmt 1
 1297 0148 1C3B     		subs	r3, r3, #28	@ tmp335,
 1298 014a 3B70     		strb	r3, [r7]	@ tmp334, receive_led
 1299              	.L41:
 1300              	@ main.cpp:188: 			radio.register_write( RFM70_CMD_FLUSH_RX,0 );
 185:main.cpp      **** 			      // Send_Packet( radio, RFM70_CMD_W_TX_PAYLOAD_NOACK,rx_buf,17);
 186:main.cpp      **** 		       }	
 187:main.cpp      **** 			}
 188:main.cpp      **** 			radio.register_write( RFM70_CMD_FLUSH_RX,0 );
 1301              		.loc 2 188 0
 1302 014c 0022     		movs	r2, #0	@,
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 36


 1303 014e E221     		movs	r1, #226	@,
 1304 0150 23A8     		add	r0, sp, #140	@ tmp336,,
 1305 0152 FFF7FEFF 		bl	_ZN5rfm7014register_writeEhh	@
 1306              	.LVL87:
 1307 0156 AFE7     		b	.L34	@
 1308              	.L54:
 1309              		.align	2
 1310              	.L53:
 1311 0158 10000050 		.word	1342177296
 1312 015c 20000050 		.word	1342177312
 1313 0160 00800050 		.word	1342210048
 1314 0164 40000050 		.word	1342177344
 1315 0168 80000050 		.word	1342177408
 1316 016c 08000000 		.word	_ZTV21input_output_pin_lpc1+8
 1317 0170 24000000 		.word	_ZTV21input_output_pin_lpc1+36
 1318 0174 00010050 		.word	1342177536
 1319 0178 00000000 		.word	_Z7wait_msj
 1320 017c 00000000 		.word	_Z7wait_usj
 1321 0180 04000250 		.word	1342308356
 1322 0184 00800250 		.word	1342341120
 1323 0188 08000250 		.word	1342308360
 1324 018c 00000000 		.word	.LANCHOR0
 1325 0190 00000000 		.word	.LANCHOR1
 1326 0194 00000000 		.word	.LANCHOR2
 1327              		.cfi_endproc
 1328              	.LFE64:
 1329              		.size	main, .-main
 1330              		.weak	_ZTV21input_output_pin_lpc1
 1331              		.section	.rodata._ZTV21input_output_pin_lpc1,"aG",%progbits,_ZTV21input_output_pin_lpc1,comdat
 1332              		.align	2
 1333              		.type	_ZTV21input_output_pin_lpc1, %object
 1334              		.size	_ZTV21input_output_pin_lpc1, 44
 1335              	_ZTV21input_output_pin_lpc1:
 1336 0000 00000000 		.word	0
 1337 0004 00000000 		.word	0
 1338 0008 00000000 		.word	_ZN21input_output_pin_lpc13setEb
 1339 000c 00000000 		.word	_ZN21input_output_pin_lpc120direction_set_outputEv
 1340 0010 00000000 		.word	_ZN4pins16input_output_pin13direction_setENS_9directionE
 1341 0014 00000000 		.word	_ZN21input_output_pin_lpc119direction_set_inputEv
 1342 0018 00000000 		.word	_ZN21input_output_pin_lpc13getEv
 1343 001c FCFFFFFF 		.word	-4
 1344 0020 00000000 		.word	0
 1345 0024 00000000 		.word	_ZThn4_N21input_output_pin_lpc13getEv
 1346 0028 00000000 		.word	_ZThn4_N21input_output_pin_lpc119direction_set_inputEv
 1347              		.global	receive_led
 1348              		.global	transmit_led
 1349              		.section	.bss.receive_led,"aw",%nobits
 1350              		.set	.LANCHOR1,. + 0
 1351              		.type	receive_led, %object
 1352              		.size	receive_led, 1
 1353              	receive_led:
 1354 0000 00       		.space	1
 1355              		.section	.bss.transmit_led,"aw",%nobits
 1356              		.set	.LANCHOR0,. + 0
 1357              		.type	transmit_led, %object
 1358              		.size	transmit_led, 1
 1359              	transmit_led:
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 37


 1360 0000 00       		.space	1
 1361              		.section	.rodata._ZL6tx_buf,"a",%progbits
 1362              		.set	.LANCHOR2,. + 0
 1363              		.type	_ZL6tx_buf, %object
 1364              		.size	_ZL6tx_buf, 17
 1365              	_ZL6tx_buf:
 1366 0000 30       		.byte	48
 1367 0001 31       		.byte	49
 1368 0002 32       		.byte	50
 1369 0003 33       		.byte	51
 1370 0004 34       		.byte	52
 1371 0005 35       		.byte	53
 1372 0006 36       		.byte	54
 1373 0007 37       		.byte	55
 1374 0008 38       		.byte	56
 1375 0009 39       		.byte	57
 1376 000a 3A       		.byte	58
 1377 000b 3B       		.byte	59
 1378 000c 3C       		.byte	60
 1379 000d 3D       		.byte	61
 1380 000e 3E       		.byte	62
 1381 000f 3F       		.byte	63
 1382 0010 78       		.byte	120
 1383              		.text
 1384              	.Letext0:
 1385              		.file 4 "c:\\sysgcc\\arm-eabi\\arm-eabi\\sys-include\\machine\\_default_types.h"
 1386              		.file 5 "c:\\sysgcc\\arm-eabi\\arm-eabi\\sys-include\\sys\\_stdint.h"
 1387              		.file 6 "core_cm0.h"
 1388              		.file 7 "system_LPC11xx.h"
 1389              		.section	.debug_info,"",%progbits
 1390              	.Ldebug_info0:
 1391 0000 A1170000 		.4byte	0x17a1
 1392 0004 0400     		.2byte	0x4
 1393 0006 00000000 		.4byte	.Ldebug_abbrev0
 1394 000a 04       		.byte	0x4
 1395 000b 01       		.uleb128 0x1
 1396 000c 3E240000 		.4byte	.LASF981
 1397 0010 04       		.byte	0x4
 1398 0011 01050000 		.4byte	.LASF982
 1399 0015 DA160000 		.4byte	.LASF983
 1400 0019 60010000 		.4byte	.Ldebug_ranges0+0x160
 1401 001d 00000000 		.4byte	0
 1402 0021 00000000 		.4byte	.Ldebug_line0
 1403 0025 00000000 		.4byte	.Ldebug_macro0
 1404 0029 02       		.uleb128 0x2
 1405 002a 01       		.byte	0x1
 1406 002b 06       		.byte	0x6
 1407 002c 4B040000 		.4byte	.LASF810
 1408 0030 02       		.uleb128 0x2
 1409 0031 01       		.byte	0x1
 1410 0032 08       		.byte	0x8
 1411 0033 D1190000 		.4byte	.LASF811
 1412 0037 03       		.uleb128 0x3
 1413 0038 30000000 		.4byte	0x30
 1414 003c 02       		.uleb128 0x2
 1415 003d 02       		.byte	0x2
 1416 003e 05       		.byte	0x5
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 38


 1417 003f E0560000 		.4byte	.LASF812
 1418 0043 02       		.uleb128 0x2
 1419 0044 02       		.byte	0x2
 1420 0045 07       		.byte	0x7
 1421 0046 8D620000 		.4byte	.LASF813
 1422 004a 02       		.uleb128 0x2
 1423 004b 04       		.byte	0x4
 1424 004c 05       		.byte	0x5
 1425 004d 13410000 		.4byte	.LASF814
 1426 0051 04       		.uleb128 0x4
 1427 0052 9B340000 		.4byte	.LASF819
 1428 0056 04       		.byte	0x4
 1429 0057 4F       		.byte	0x4f
 1430 0058 5C000000 		.4byte	0x5c
 1431 005c 02       		.uleb128 0x2
 1432 005d 04       		.byte	0x4
 1433 005e 07       		.byte	0x7
 1434 005f B22C0000 		.4byte	.LASF815
 1435 0063 02       		.uleb128 0x2
 1436 0064 08       		.byte	0x8
 1437 0065 05       		.byte	0x5
 1438 0066 C3340000 		.4byte	.LASF816
 1439 006a 02       		.uleb128 0x2
 1440 006b 08       		.byte	0x8
 1441 006c 07       		.byte	0x7
 1442 006d AF490000 		.4byte	.LASF817
 1443 0071 05       		.uleb128 0x5
 1444 0072 04       		.byte	0x4
 1445 0073 05       		.byte	0x5
 1446 0074 696E7400 		.ascii	"int\000"
 1447 0078 06       		.uleb128 0x6
 1448 0079 71000000 		.4byte	0x71
 1449 007d 02       		.uleb128 0x2
 1450 007e 04       		.byte	0x4
 1451 007f 07       		.byte	0x7
 1452 0080 E93B0000 		.4byte	.LASF818
 1453 0084 04       		.uleb128 0x4
 1454 0085 625F0000 		.4byte	.LASF820
 1455 0089 05       		.byte	0x5
 1456 008a 30       		.byte	0x30
 1457 008b 51000000 		.4byte	0x51
 1458 008f 06       		.uleb128 0x6
 1459 0090 84000000 		.4byte	0x84
 1460 0094 07       		.uleb128 0x7
 1461 0095 10       		.byte	0x10
 1462 0096 06       		.byte	0x6
 1463 0097 EC       		.byte	0xec
 1464 0098 96660000 		.4byte	.LASF984
 1465 009c D1000000 		.4byte	0xd1
 1466 00a0 08       		.uleb128 0x8
 1467 00a1 37350000 		.4byte	.LASF821
 1468 00a5 06       		.byte	0x6
 1469 00a6 ED       		.byte	0xed
 1470 00a7 8F000000 		.4byte	0x8f
 1471 00ab 00       		.byte	0
 1472 00ac 08       		.uleb128 0x8
 1473 00ad F3380000 		.4byte	.LASF822
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 39


 1474 00b1 06       		.byte	0x6
 1475 00b2 EE       		.byte	0xee
 1476 00b3 8F000000 		.4byte	0x8f
 1477 00b7 04       		.byte	0x4
 1478 00b8 09       		.uleb128 0x9
 1479 00b9 56414C00 		.ascii	"VAL\000"
 1480 00bd 06       		.byte	0x6
 1481 00be EF       		.byte	0xef
 1482 00bf 8F000000 		.4byte	0x8f
 1483 00c3 08       		.byte	0x8
 1484 00c4 08       		.uleb128 0x8
 1485 00c5 54510000 		.4byte	.LASF823
 1486 00c9 06       		.byte	0x6
 1487 00ca F0       		.byte	0xf0
 1488 00cb 8F000000 		.4byte	0x8f
 1489 00cf 0C       		.byte	0xc
 1490 00d0 00       		.byte	0
 1491 00d1 04       		.uleb128 0x4
 1492 00d2 B1420000 		.4byte	.LASF824
 1493 00d6 06       		.byte	0x6
 1494 00d7 F1       		.byte	0xf1
 1495 00d8 94000000 		.4byte	0x94
 1496 00dc 0A       		.uleb128 0xa
 1497 00dd DA270000 		.4byte	.LASF825
 1498 00e1 07       		.byte	0x7
 1499 00e2 1F       		.byte	0x1f
 1500 00e3 84000000 		.4byte	0x84
 1501 00e7 0A       		.uleb128 0xa
 1502 00e8 433B0000 		.4byte	.LASF826
 1503 00ec 07       		.byte	0x7
 1504 00ed 20       		.byte	0x20
 1505 00ee 84000000 		.4byte	0x84
 1506 00f2 0A       		.uleb128 0xa
 1507 00f3 6A4E0000 		.4byte	.LASF827
 1508 00f7 07       		.byte	0x7
 1509 00f8 21       		.byte	0x21
 1510 00f9 84000000 		.4byte	0x84
 1511 00fd 0B       		.uleb128 0xb
 1512 00fe 25320000 		.4byte	.LASF985
 1513 0102 01       		.byte	0x1
 1514 0103 0A       		.byte	0xa
 1515 0104 97030000 		.4byte	0x397
 1516 0108 0C       		.uleb128 0xc
 1517 0109 AD090000 		.4byte	.LASF986
 1518 010d 07       		.byte	0x7
 1519 010e 01       		.byte	0x1
 1520 010f 30000000 		.4byte	0x30
 1521 0113 01       		.byte	0x1
 1522 0114 18       		.byte	0x18
 1523 0115 26010000 		.4byte	0x126
 1524 0119 0D       		.uleb128 0xd
 1525 011a 38240000 		.4byte	.LASF828
 1526 011e 00       		.byte	0
 1527 011f 0D       		.uleb128 0xd
 1528 0120 074A0000 		.4byte	.LASF829
 1529 0124 01       		.byte	0x1
 1530 0125 00       		.byte	0
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 40


 1531 0126 0E       		.uleb128 0xe
 1532 0127 E65B0000 		.4byte	.LASF832
 1533 012b 04       		.byte	0x4
 1534 012c 01       		.byte	0x1
 1535 012d 0C       		.byte	0xc
 1536 012e 26010000 		.4byte	0x126
 1537 0132 E5010000 		.4byte	0x1e5
 1538 0136 0F       		.uleb128 0xf
 1539 0137 65000000 		.4byte	.LASF830
 1540 013b 5E0B0000 		.4byte	0xb5e
 1541 013f 00       		.byte	0
 1542 0140 01       		.byte	0x1
 1543 0141 10       		.uleb128 0x10
 1544 0142 085F0000 		.4byte	.LASF831
 1545 0146 77060000 		.4byte	.LASF833
 1546 014a 400B0000 		.4byte	0xb40
 1547 014e 01       		.byte	0x1
 1548 014f 57010000 		.4byte	0x157
 1549 0153 62010000 		.4byte	0x162
 1550 0157 11       		.uleb128 0x11
 1551 0158 7F0B0000 		.4byte	0xb7f
 1552 015c 11       		.uleb128 0x11
 1553 015d 71000000 		.4byte	0x71
 1554 0161 00       		.byte	0
 1555 0162 10       		.uleb128 0x10
 1556 0163 E65B0000 		.4byte	.LASF832
 1557 0167 86630000 		.4byte	.LASF834
 1558 016b 7F0B0000 		.4byte	0xb7f
 1559 016f 01       		.byte	0x1
 1560 0170 78010000 		.4byte	0x178
 1561 0174 83010000 		.4byte	0x183
 1562 0178 11       		.uleb128 0x11
 1563 0179 7F0B0000 		.4byte	0xb7f
 1564 017d 12       		.uleb128 0x12
 1565 017e 8A0B0000 		.4byte	0xb8a
 1566 0182 00       		.byte	0
 1567 0183 10       		.uleb128 0x10
 1568 0184 E65B0000 		.4byte	.LASF832
 1569 0188 C63A0000 		.4byte	.LASF835
 1570 018c 7F0B0000 		.4byte	0xb7f
 1571 0190 01       		.byte	0x1
 1572 0191 99010000 		.4byte	0x199
 1573 0195 9F010000 		.4byte	0x19f
 1574 0199 11       		.uleb128 0x11
 1575 019a 7F0B0000 		.4byte	0xb7f
 1576 019e 00       		.byte	0
 1577 019f 13       		.uleb128 0x13
 1578 01a0 73657400 		.ascii	"set\000"
 1579 01a4 01       		.byte	0x1
 1580 01a5 0E       		.byte	0xe
 1581 01a6 37370000 		.4byte	.LASF948
 1582 01aa 01       		.byte	0x1
 1583 01ab 02       		.uleb128 0x2
 1584 01ac 10       		.byte	0x10
 1585 01ad 00       		.uleb128 0
 1586 01ae 26010000 		.4byte	0x126
 1587 01b2 01       		.byte	0x1
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 41


 1588 01b3 BB010000 		.4byte	0x1bb
 1589 01b7 C6010000 		.4byte	0x1c6
 1590 01bb 11       		.uleb128 0x11
 1591 01bc 7F0B0000 		.4byte	0xb7f
 1592 01c0 12       		.uleb128 0x12
 1593 01c1 63090000 		.4byte	0x963
 1594 01c5 00       		.byte	0
 1595 01c6 14       		.uleb128 0x14
 1596 01c7 A7170000 		.4byte	.LASF842
 1597 01cb 01       		.byte	0x1
 1598 01cc 0F       		.byte	0xf
 1599 01cd CD640000 		.4byte	.LASF844
 1600 01d1 01       		.byte	0x1
 1601 01d2 02       		.uleb128 0x2
 1602 01d3 10       		.byte	0x10
 1603 01d4 01       		.uleb128 0x1
 1604 01d5 26010000 		.4byte	0x126
 1605 01d9 01       		.byte	0x1
 1606 01da DE010000 		.4byte	0x1de
 1607 01de 11       		.uleb128 0x11
 1608 01df 7F0B0000 		.4byte	0xb7f
 1609 01e3 00       		.byte	0
 1610 01e4 00       		.byte	0
 1611 01e5 03       		.uleb128 0x3
 1612 01e6 26010000 		.4byte	0x126
 1613 01ea 0E       		.uleb128 0xe
 1614 01eb 974C0000 		.4byte	.LASF836
 1615 01ef 04       		.byte	0x4
 1616 01f0 01       		.byte	0x1
 1617 01f1 12       		.byte	0x12
 1618 01f2 EA010000 		.4byte	0x1ea
 1619 01f6 A8020000 		.4byte	0x2a8
 1620 01fa 0F       		.uleb128 0xf
 1621 01fb 9B0E0000 		.4byte	.LASF837
 1622 01ff 5E0B0000 		.4byte	0xb5e
 1623 0203 00       		.byte	0
 1624 0204 01       		.byte	0x1
 1625 0205 10       		.uleb128 0x10
 1626 0206 A9050000 		.4byte	.LASF838
 1627 020a 464A0000 		.4byte	.LASF839
 1628 020e 400B0000 		.4byte	0xb40
 1629 0212 01       		.byte	0x1
 1630 0213 1B020000 		.4byte	0x21b
 1631 0217 26020000 		.4byte	0x226
 1632 021b 11       		.uleb128 0x11
 1633 021c 6E0B0000 		.4byte	0xb6e
 1634 0220 11       		.uleb128 0x11
 1635 0221 71000000 		.4byte	0x71
 1636 0225 00       		.byte	0
 1637 0226 10       		.uleb128 0x10
 1638 0227 974C0000 		.4byte	.LASF836
 1639 022b A9310000 		.4byte	.LASF840
 1640 022f 6E0B0000 		.4byte	0xb6e
 1641 0233 01       		.byte	0x1
 1642 0234 3C020000 		.4byte	0x23c
 1643 0238 47020000 		.4byte	0x247
 1644 023c 11       		.uleb128 0x11
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 42


 1645 023d 6E0B0000 		.4byte	0xb6e
 1646 0241 12       		.uleb128 0x12
 1647 0242 790B0000 		.4byte	0xb79
 1648 0246 00       		.byte	0
 1649 0247 10       		.uleb128 0x10
 1650 0248 974C0000 		.4byte	.LASF836
 1651 024c 87160000 		.4byte	.LASF841
 1652 0250 6E0B0000 		.4byte	0xb6e
 1653 0254 01       		.byte	0x1
 1654 0255 5D020000 		.4byte	0x25d
 1655 0259 63020000 		.4byte	0x263
 1656 025d 11       		.uleb128 0x11
 1657 025e 6E0B0000 		.4byte	0xb6e
 1658 0262 00       		.byte	0
 1659 0263 15       		.uleb128 0x15
 1660 0264 67657400 		.ascii	"get\000"
 1661 0268 01       		.byte	0x1
 1662 0269 14       		.byte	0x14
 1663 026a F5460000 		.4byte	.LASF987
 1664 026e 63090000 		.4byte	0x963
 1665 0272 01       		.byte	0x1
 1666 0273 02       		.uleb128 0x2
 1667 0274 10       		.byte	0x10
 1668 0275 00       		.uleb128 0
 1669 0276 EA010000 		.4byte	0x1ea
 1670 027a 01       		.byte	0x1
 1671 027b 83020000 		.4byte	0x283
 1672 027f 89020000 		.4byte	0x289
 1673 0283 11       		.uleb128 0x11
 1674 0284 6E0B0000 		.4byte	0xb6e
 1675 0288 00       		.byte	0
 1676 0289 14       		.uleb128 0x14
 1677 028a 6F110000 		.4byte	.LASF843
 1678 028e 01       		.byte	0x1
 1679 028f 15       		.byte	0x15
 1680 0290 832E0000 		.4byte	.LASF845
 1681 0294 01       		.byte	0x1
 1682 0295 02       		.uleb128 0x2
 1683 0296 10       		.byte	0x10
 1684 0297 01       		.uleb128 0x1
 1685 0298 EA010000 		.4byte	0x1ea
 1686 029c 01       		.byte	0x1
 1687 029d A1020000 		.4byte	0x2a1
 1688 02a1 11       		.uleb128 0x11
 1689 02a2 6E0B0000 		.4byte	0xb6e
 1690 02a6 00       		.byte	0
 1691 02a7 00       		.byte	0
 1692 02a8 03       		.uleb128 0x3
 1693 02a9 EA010000 		.4byte	0x1ea
 1694 02ad 0E       		.uleb128 0xe
 1695 02ae A0010000 		.4byte	.LASF846
 1696 02b2 08       		.byte	0x8
 1697 02b3 01       		.byte	0x1
 1698 02b4 1A       		.byte	0x1a
 1699 02b5 26010000 		.4byte	0x126
 1700 02b9 91030000 		.4byte	0x391
 1701 02bd 16       		.uleb128 0x16
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 43


 1702 02be 26010000 		.4byte	0x126
 1703 02c2 00       		.byte	0
 1704 02c3 01       		.byte	0x1
 1705 02c4 16       		.uleb128 0x16
 1706 02c5 EA010000 		.4byte	0x1ea
 1707 02c9 04       		.byte	0x4
 1708 02ca 01       		.byte	0x1
 1709 02cb 10       		.uleb128 0x10
 1710 02cc 99440000 		.4byte	.LASF847
 1711 02d0 6E530000 		.4byte	.LASF848
 1712 02d4 400B0000 		.4byte	0xb40
 1713 02d8 01       		.byte	0x1
 1714 02d9 E1020000 		.4byte	0x2e1
 1715 02dd EC020000 		.4byte	0x2ec
 1716 02e1 11       		.uleb128 0x11
 1717 02e2 420B0000 		.4byte	0xb42
 1718 02e6 11       		.uleb128 0x11
 1719 02e7 71000000 		.4byte	0x71
 1720 02eb 00       		.byte	0
 1721 02ec 10       		.uleb128 0x10
 1722 02ed A0010000 		.4byte	.LASF846
 1723 02f1 A21F0000 		.4byte	.LASF849
 1724 02f5 420B0000 		.4byte	0xb42
 1725 02f9 01       		.byte	0x1
 1726 02fa 02030000 		.4byte	0x302
 1727 02fe 0D030000 		.4byte	0x30d
 1728 0302 11       		.uleb128 0x11
 1729 0303 420B0000 		.4byte	0xb42
 1730 0307 12       		.uleb128 0x12
 1731 0308 4D0B0000 		.4byte	0xb4d
 1732 030c 00       		.byte	0
 1733 030d 10       		.uleb128 0x10
 1734 030e A0010000 		.4byte	.LASF846
 1735 0312 981E0000 		.4byte	.LASF850
 1736 0316 420B0000 		.4byte	0xb42
 1737 031a 01       		.byte	0x1
 1738 031b 23030000 		.4byte	0x323
 1739 031f 29030000 		.4byte	0x329
 1740 0323 11       		.uleb128 0x11
 1741 0324 420B0000 		.4byte	0xb42
 1742 0328 00       		.byte	0
 1743 0329 17       		.uleb128 0x17
 1744 032a 5A590000 		.4byte	.LASF851
 1745 032e 01       		.byte	0x1
 1746 032f 1C       		.byte	0x1c
 1747 0330 8B610000 		.4byte	.LASF852
 1748 0334 01       		.byte	0x1
 1749 0335 02       		.uleb128 0x2
 1750 0336 10       		.byte	0x10
 1751 0337 02       		.uleb128 0x2
 1752 0338 AD020000 		.4byte	0x2ad
 1753 033c 01       		.byte	0x1
 1754 033d 45030000 		.4byte	0x345
 1755 0341 50030000 		.4byte	0x350
 1756 0345 11       		.uleb128 0x11
 1757 0346 420B0000 		.4byte	0xb42
 1758 034a 12       		.uleb128 0x12
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 44


 1759 034b 08010000 		.4byte	0x108
 1760 034f 00       		.byte	0
 1761 0350 17       		.uleb128 0x17
 1762 0351 6F110000 		.4byte	.LASF843
 1763 0355 01       		.byte	0x1
 1764 0356 23       		.byte	0x23
 1765 0357 B11B0000 		.4byte	.LASF853
 1766 035b 01       		.byte	0x1
 1767 035c 02       		.uleb128 0x2
 1768 035d 10       		.byte	0x10
 1769 035e 03       		.uleb128 0x3
 1770 035f AD020000 		.4byte	0x2ad
 1771 0363 01       		.byte	0x1
 1772 0364 6C030000 		.4byte	0x36c
 1773 0368 72030000 		.4byte	0x372
 1774 036c 11       		.uleb128 0x11
 1775 036d 420B0000 		.4byte	0xb42
 1776 0371 00       		.byte	0
 1777 0372 14       		.uleb128 0x14
 1778 0373 A7170000 		.4byte	.LASF842
 1779 0377 01       		.byte	0x1
 1780 0378 26       		.byte	0x26
 1781 0379 AD450000 		.4byte	.LASF854
 1782 037d 01       		.byte	0x1
 1783 037e 02       		.uleb128 0x2
 1784 037f 10       		.byte	0x10
 1785 0380 01       		.uleb128 0x1
 1786 0381 AD020000 		.4byte	0x2ad
 1787 0385 01       		.byte	0x1
 1788 0386 8A030000 		.4byte	0x38a
 1789 038a 11       		.uleb128 0x11
 1790 038b 420B0000 		.4byte	0xb42
 1791 038f 00       		.byte	0
 1792 0390 00       		.byte	0
 1793 0391 03       		.uleb128 0x3
 1794 0392 AD020000 		.4byte	0x2ad
 1795 0396 00       		.byte	0
 1796 0397 18       		.uleb128 0x18
 1797 0398 30000000 		.4byte	0x30
 1798 039c A7030000 		.4byte	0x3a7
 1799 03a0 19       		.uleb128 0x19
 1800 03a1 7D000000 		.4byte	0x7d
 1801 03a5 1F       		.byte	0x1f
 1802 03a6 00       		.byte	0
 1803 03a7 1A       		.uleb128 0x1a
 1804 03a8 67160000 		.4byte	.LASF868
 1805 03ac 1C       		.byte	0x1c
 1806 03ad 03       		.byte	0x3
 1807 03ae 7C01     		.2byte	0x17c
 1808 03b0 28090000 		.4byte	0x928
 1809 03b4 1B       		.uleb128 0x1b
 1810 03b5 8B020000 		.4byte	.LASF855
 1811 03b9 03       		.byte	0x3
 1812 03ba 7F01     		.2byte	0x17f
 1813 03bc 28090000 		.4byte	0x928
 1814 03c0 00       		.byte	0
 1815 03c1 1B       		.uleb128 0x1b
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 45


 1816 03c2 71220000 		.4byte	.LASF856
 1817 03c6 03       		.byte	0x3
 1818 03c7 8001     		.2byte	0x180
 1819 03c9 28090000 		.4byte	0x928
 1820 03cd 04       		.byte	0x4
 1821 03ce 1B       		.uleb128 0x1b
 1822 03cf 7F0C0000 		.4byte	.LASF857
 1823 03d3 03       		.byte	0x3
 1824 03d4 8101     		.2byte	0x181
 1825 03d6 2E090000 		.4byte	0x92e
 1826 03da 08       		.byte	0x8
 1827 03db 1C       		.uleb128 0x1c
 1828 03dc 63736E00 		.ascii	"csn\000"
 1829 03e0 03       		.byte	0x3
 1830 03e1 8201     		.2byte	0x182
 1831 03e3 28090000 		.4byte	0x928
 1832 03e7 0C       		.byte	0xc
 1833 03e8 1C       		.uleb128 0x1c
 1834 03e9 636500   		.ascii	"ce\000"
 1835 03ec 03       		.byte	0x3
 1836 03ed 8301     		.2byte	0x183
 1837 03ef 28090000 		.4byte	0x928
 1838 03f3 10       		.byte	0x10
 1839 03f4 1B       		.uleb128 0x1b
 1840 03f5 730E0000 		.4byte	.LASF858
 1841 03f9 03       		.byte	0x3
 1842 03fa 8501     		.2byte	0x185
 1843 03fc 3F090000 		.4byte	0x93f
 1844 0400 14       		.byte	0x14
 1845 0401 1B       		.uleb128 0x1b
 1846 0402 350A0000 		.4byte	.LASF859
 1847 0406 03       		.byte	0x3
 1848 0407 8601     		.2byte	0x186
 1849 0409 3F090000 		.4byte	0x93f
 1850 040d 18       		.byte	0x18
 1851 040e 1D       		.uleb128 0x1d
 1852 040f 0F3A0000 		.4byte	.LASF860
 1853 0413 03       		.byte	0x3
 1854 0414 8801     		.2byte	0x188
 1855 0416 C9180000 		.4byte	.LASF866
 1856 041a 30000000 		.4byte	0x30
 1857 041e 26040000 		.4byte	0x426
 1858 0422 31040000 		.4byte	0x431
 1859 0426 11       		.uleb128 0x11
 1860 0427 45090000 		.4byte	0x945
 1861 042b 12       		.uleb128 0x12
 1862 042c 30000000 		.4byte	0x30
 1863 0430 00       		.byte	0
 1864 0431 1E       		.uleb128 0x1e
 1865 0432 67160000 		.4byte	.LASF868
 1866 0436 03       		.byte	0x3
 1867 0437 9101     		.2byte	0x191
 1868 0439 02680000 		.4byte	.LASF870
 1869 043d 45090000 		.4byte	0x945
 1870 0441 01       		.byte	0x1
 1871 0442 4A040000 		.4byte	0x44a
 1872 0446 73040000 		.4byte	0x473
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 46


 1873 044a 11       		.uleb128 0x11
 1874 044b 45090000 		.4byte	0x945
 1875 044f 12       		.uleb128 0x12
 1876 0450 28090000 		.4byte	0x928
 1877 0454 12       		.uleb128 0x12
 1878 0455 28090000 		.4byte	0x928
 1879 0459 12       		.uleb128 0x12
 1880 045a 2E090000 		.4byte	0x92e
 1881 045e 12       		.uleb128 0x12
 1882 045f 28090000 		.4byte	0x928
 1883 0463 12       		.uleb128 0x12
 1884 0464 28090000 		.4byte	0x928
 1885 0468 12       		.uleb128 0x12
 1886 0469 3F090000 		.4byte	0x93f
 1887 046d 12       		.uleb128 0x12
 1888 046e 3F090000 		.4byte	0x93f
 1889 0472 00       		.byte	0
 1890 0473 1F       		.uleb128 0x1f
 1891 0474 96340000 		.4byte	.LASF861
 1892 0478 03       		.byte	0x3
 1893 0479 A601     		.2byte	0x1a6
 1894 047b 94250000 		.4byte	.LASF863
 1895 047f 87040000 		.4byte	0x487
 1896 0483 92040000 		.4byte	0x492
 1897 0487 11       		.uleb128 0x11
 1898 0488 45090000 		.4byte	0x945
 1899 048c 12       		.uleb128 0x12
 1900 048d 30000000 		.4byte	0x30
 1901 0491 00       		.byte	0
 1902 0492 1F       		.uleb128 0x1f
 1903 0493 29190000 		.4byte	.LASF862
 1904 0497 03       		.byte	0x3
 1905 0498 A701     		.2byte	0x1a7
 1906 049a 163A0000 		.4byte	.LASF864
 1907 049e A6040000 		.4byte	0x4a6
 1908 04a2 AC040000 		.4byte	0x4ac
 1909 04a6 11       		.uleb128 0x11
 1910 04a7 45090000 		.4byte	0x945
 1911 04ab 00       		.byte	0
 1912 04ac 20       		.uleb128 0x20
 1913 04ad 2C520000 		.4byte	.LASF865
 1914 04b1 03       		.byte	0x3
 1915 04b2 BE01     		.2byte	0x1be
 1916 04b4 F33E0000 		.4byte	.LASF867
 1917 04b8 01       		.byte	0x1
 1918 04b9 C1040000 		.4byte	0x4c1
 1919 04bd C7040000 		.4byte	0x4c7
 1920 04c1 11       		.uleb128 0x11
 1921 04c2 45090000 		.4byte	0x945
 1922 04c6 00       		.byte	0
 1923 04c7 1E       		.uleb128 0x1e
 1924 04c8 EF520000 		.4byte	.LASF869
 1925 04cc 03       		.byte	0x3
 1926 04cd C501     		.2byte	0x1c5
 1927 04cf C5120000 		.4byte	.LASF871
 1928 04d3 30000000 		.4byte	0x30
 1929 04d7 01       		.byte	0x1
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 47


 1930 04d8 E0040000 		.4byte	0x4e0
 1931 04dc EB040000 		.4byte	0x4eb
 1932 04e0 11       		.uleb128 0x11
 1933 04e1 45090000 		.4byte	0x945
 1934 04e5 12       		.uleb128 0x12
 1935 04e6 30000000 		.4byte	0x30
 1936 04ea 00       		.byte	0
 1937 04eb 20       		.uleb128 0x20
 1938 04ec 281C0000 		.4byte	.LASF872
 1939 04f0 03       		.byte	0x3
 1940 04f1 CC01     		.2byte	0x1cc
 1941 04f3 E7500000 		.4byte	.LASF873
 1942 04f7 01       		.byte	0x1
 1943 04f8 00050000 		.4byte	0x500
 1944 04fc 15050000 		.4byte	0x515
 1945 0500 11       		.uleb128 0x11
 1946 0501 45090000 		.4byte	0x945
 1947 0505 12       		.uleb128 0x12
 1948 0506 30000000 		.4byte	0x30
 1949 050a 12       		.uleb128 0x12
 1950 050b 50090000 		.4byte	0x950
 1951 050f 12       		.uleb128 0x12
 1952 0510 30000000 		.4byte	0x30
 1953 0514 00       		.byte	0
 1954 0515 20       		.uleb128 0x20
 1955 0516 9E090000 		.4byte	.LASF874
 1956 051a 03       		.byte	0x3
 1957 051b D701     		.2byte	0x1d7
 1958 051d AD460000 		.4byte	.LASF875
 1959 0521 01       		.byte	0x1
 1960 0522 2A050000 		.4byte	0x52a
 1961 0526 3A050000 		.4byte	0x53a
 1962 052a 11       		.uleb128 0x11
 1963 052b 45090000 		.4byte	0x945
 1964 052f 12       		.uleb128 0x12
 1965 0530 30000000 		.4byte	0x30
 1966 0534 12       		.uleb128 0x12
 1967 0535 30000000 		.4byte	0x30
 1968 0539 00       		.byte	0
 1969 053a 20       		.uleb128 0x20
 1970 053b 164E0000 		.4byte	.LASF876
 1971 053f 03       		.byte	0x3
 1972 0540 DF01     		.2byte	0x1df
 1973 0542 07370000 		.4byte	.LASF877
 1974 0546 01       		.byte	0x1
 1975 0547 4F050000 		.4byte	0x54f
 1976 054b 64050000 		.4byte	0x564
 1977 054f 11       		.uleb128 0x11
 1978 0550 45090000 		.4byte	0x945
 1979 0554 12       		.uleb128 0x12
 1980 0555 56090000 		.4byte	0x956
 1981 0559 12       		.uleb128 0x12
 1982 055a 5D090000 		.4byte	0x95d
 1983 055e 12       		.uleb128 0x12
 1984 055f 30000000 		.4byte	0x30
 1985 0563 00       		.byte	0
 1986 0564 1E       		.uleb128 0x1e
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 48


 1987 0565 44680000 		.4byte	.LASF878
 1988 0569 03       		.byte	0x3
 1989 056a F201     		.2byte	0x1f2
 1990 056c 234E0000 		.4byte	.LASF879
 1991 0570 63090000 		.4byte	0x963
 1992 0574 01       		.byte	0x1
 1993 0575 7D050000 		.4byte	0x57d
 1994 0579 83050000 		.4byte	0x583
 1995 057d 11       		.uleb128 0x11
 1996 057e 45090000 		.4byte	0x945
 1997 0582 00       		.byte	0
 1998 0583 20       		.uleb128 0x20
 1999 0584 60360000 		.4byte	.LASF880
 2000 0588 03       		.byte	0x3
 2001 0589 F901     		.2byte	0x1f9
 2002 058b 5B1C0000 		.4byte	.LASF881
 2003 058f 01       		.byte	0x1
 2004 0590 98050000 		.4byte	0x598
 2005 0594 9E050000 		.4byte	0x59e
 2006 0598 11       		.uleb128 0x11
 2007 0599 45090000 		.4byte	0x945
 2008 059d 00       		.byte	0
 2009 059e 20       		.uleb128 0x20
 2010 059f 871B0000 		.4byte	.LASF882
 2011 05a3 03       		.byte	0x3
 2012 05a4 0002     		.2byte	0x200
 2013 05a6 E95F0000 		.4byte	.LASF883
 2014 05aa 01       		.byte	0x1
 2015 05ab B3050000 		.4byte	0x5b3
 2016 05af B9050000 		.4byte	0x5b9
 2017 05b3 11       		.uleb128 0x11
 2018 05b4 45090000 		.4byte	0x945
 2019 05b8 00       		.byte	0
 2020 05b9 20       		.uleb128 0x20
 2021 05ba 18260000 		.4byte	.LASF884
 2022 05be 03       		.byte	0x3
 2023 05bf 0B02     		.2byte	0x20b
 2024 05c1 AD2E0000 		.4byte	.LASF885
 2025 05c5 01       		.byte	0x1
 2026 05c6 CE050000 		.4byte	0x5ce
 2027 05ca D4050000 		.4byte	0x5d4
 2028 05ce 11       		.uleb128 0x11
 2029 05cf 45090000 		.4byte	0x945
 2030 05d3 00       		.byte	0
 2031 05d4 20       		.uleb128 0x20
 2032 05d5 021D0000 		.4byte	.LASF886
 2033 05d9 03       		.byte	0x3
 2034 05da 1302     		.2byte	0x213
 2035 05dc DC1F0000 		.4byte	.LASF887
 2036 05e0 01       		.byte	0x1
 2037 05e1 E9050000 		.4byte	0x5e9
 2038 05e5 EF050000 		.4byte	0x5ef
 2039 05e9 11       		.uleb128 0x11
 2040 05ea 45090000 		.4byte	0x945
 2041 05ee 00       		.byte	0
 2042 05ef 20       		.uleb128 0x20
 2043 05f0 772D0000 		.4byte	.LASF888
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 49


 2044 05f4 03       		.byte	0x3
 2045 05f5 1A02     		.2byte	0x21a
 2046 05f7 E1460000 		.4byte	.LASF889
 2047 05fb 01       		.byte	0x1
 2048 05fc 04060000 		.4byte	0x604
 2049 0600 0A060000 		.4byte	0x60a
 2050 0604 11       		.uleb128 0x11
 2051 0605 45090000 		.4byte	0x945
 2052 0609 00       		.byte	0
 2053 060a 20       		.uleb128 0x20
 2054 060b 07150000 		.4byte	.LASF890
 2055 060f 03       		.byte	0x3
 2056 0610 2102     		.2byte	0x221
 2057 0612 984F0000 		.4byte	.LASF891
 2058 0616 01       		.byte	0x1
 2059 0617 1F060000 		.4byte	0x61f
 2060 061b 25060000 		.4byte	0x625
 2061 061f 11       		.uleb128 0x11
 2062 0620 45090000 		.4byte	0x945
 2063 0624 00       		.byte	0
 2064 0625 20       		.uleb128 0x20
 2065 0626 462E0000 		.4byte	.LASF892
 2066 062a 03       		.byte	0x3
 2067 062b 2B02     		.2byte	0x22b
 2068 062d 700D0000 		.4byte	.LASF893
 2069 0631 01       		.byte	0x1
 2070 0632 3A060000 		.4byte	0x63a
 2071 0636 45060000 		.4byte	0x645
 2072 063a 11       		.uleb128 0x11
 2073 063b 45090000 		.4byte	0x945
 2074 063f 12       		.uleb128 0x12
 2075 0640 30000000 		.4byte	0x30
 2076 0644 00       		.byte	0
 2077 0645 20       		.uleb128 0x20
 2078 0646 4D1C0000 		.4byte	.LASF894
 2079 064a 03       		.byte	0x3
 2080 064b 3902     		.2byte	0x239
 2081 064d 3A140000 		.4byte	.LASF895
 2082 0651 01       		.byte	0x1
 2083 0652 5A060000 		.4byte	0x65a
 2084 0656 65060000 		.4byte	0x665
 2085 065a 11       		.uleb128 0x11
 2086 065b 45090000 		.4byte	0x945
 2087 065f 12       		.uleb128 0x12
 2088 0660 30000000 		.4byte	0x30
 2089 0664 00       		.byte	0
 2090 0665 20       		.uleb128 0x20
 2091 0666 DF670000 		.4byte	.LASF896
 2092 066a 03       		.byte	0x3
 2093 066b 4402     		.2byte	0x244
 2094 066d 48260000 		.4byte	.LASF897
 2095 0671 01       		.byte	0x1
 2096 0672 7A060000 		.4byte	0x67a
 2097 0676 85060000 		.4byte	0x685
 2098 067a 11       		.uleb128 0x11
 2099 067b 45090000 		.4byte	0x945
 2100 067f 12       		.uleb128 0x12
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 50


 2101 0680 30000000 		.4byte	0x30
 2102 0684 00       		.byte	0
 2103 0685 20       		.uleb128 0x20
 2104 0686 6B5F0000 		.4byte	.LASF898
 2105 068a 03       		.byte	0x3
 2106 068b 4E02     		.2byte	0x24e
 2107 068d AE3E0000 		.4byte	.LASF899
 2108 0691 01       		.byte	0x1
 2109 0692 9A060000 		.4byte	0x69a
 2110 0696 A5060000 		.4byte	0x6a5
 2111 069a 11       		.uleb128 0x11
 2112 069b 45090000 		.4byte	0x945
 2113 069f 12       		.uleb128 0x12
 2114 06a0 30000000 		.4byte	0x30
 2115 06a4 00       		.byte	0
 2116 06a5 20       		.uleb128 0x20
 2117 06a6 EB2F0000 		.4byte	.LASF900
 2118 06aa 03       		.byte	0x3
 2119 06ab 5A02     		.2byte	0x25a
 2120 06ad 1C540000 		.4byte	.LASF901
 2121 06b1 01       		.byte	0x1
 2122 06b2 BA060000 		.4byte	0x6ba
 2123 06b6 C5060000 		.4byte	0x6c5
 2124 06ba 11       		.uleb128 0x11
 2125 06bb 45090000 		.4byte	0x945
 2126 06bf 12       		.uleb128 0x12
 2127 06c0 30000000 		.4byte	0x30
 2128 06c4 00       		.byte	0
 2129 06c5 20       		.uleb128 0x20
 2130 06c6 84120000 		.4byte	.LASF902
 2131 06ca 03       		.byte	0x3
 2132 06cb 6D02     		.2byte	0x26d
 2133 06cd F3580000 		.4byte	.LASF903
 2134 06d1 01       		.byte	0x1
 2135 06d2 DA060000 		.4byte	0x6da
 2136 06d6 EA060000 		.4byte	0x6ea
 2137 06da 11       		.uleb128 0x11
 2138 06db 45090000 		.4byte	0x945
 2139 06df 12       		.uleb128 0x12
 2140 06e0 30000000 		.4byte	0x30
 2141 06e4 12       		.uleb128 0x12
 2142 06e5 30000000 		.4byte	0x30
 2143 06e9 00       		.byte	0
 2144 06ea 1E       		.uleb128 0x1e
 2145 06eb 8D2A0000 		.4byte	.LASF904
 2146 06ef 03       		.byte	0x3
 2147 06f0 7502     		.2byte	0x275
 2148 06f2 3D0A0000 		.4byte	.LASF905
 2149 06f6 30000000 		.4byte	0x30
 2150 06fa 01       		.byte	0x1
 2151 06fb 03070000 		.4byte	0x703
 2152 06ff 09070000 		.4byte	0x709
 2153 0703 11       		.uleb128 0x11
 2154 0704 45090000 		.4byte	0x945
 2155 0708 00       		.byte	0
 2156 0709 1E       		.uleb128 0x1e
 2157 070a C70D0000 		.4byte	.LASF906
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 51


 2158 070e 03       		.byte	0x3
 2159 070f 8002     		.2byte	0x280
 2160 0711 51290000 		.4byte	.LASF907
 2161 0715 30000000 		.4byte	0x30
 2162 0719 01       		.byte	0x1
 2163 071a 22070000 		.4byte	0x722
 2164 071e 28070000 		.4byte	0x728
 2165 0722 11       		.uleb128 0x11
 2166 0723 45090000 		.4byte	0x945
 2167 0727 00       		.byte	0
 2168 0728 20       		.uleb128 0x20
 2169 0729 F7050000 		.4byte	.LASF908
 2170 072d 03       		.byte	0x3
 2171 072e 8702     		.2byte	0x287
 2172 0730 62170000 		.4byte	.LASF909
 2173 0734 01       		.byte	0x1
 2174 0735 3D070000 		.4byte	0x73d
 2175 0739 43070000 		.4byte	0x743
 2176 073d 11       		.uleb128 0x11
 2177 073e 45090000 		.4byte	0x945
 2178 0742 00       		.byte	0
 2179 0743 20       		.uleb128 0x20
 2180 0744 8C490000 		.4byte	.LASF910
 2181 0748 03       		.byte	0x3
 2182 0749 9102     		.2byte	0x291
 2183 074b 5A300000 		.4byte	.LASF911
 2184 074f 01       		.byte	0x1
 2185 0750 58070000 		.4byte	0x758
 2186 0754 68070000 		.4byte	0x768
 2187 0758 11       		.uleb128 0x11
 2188 0759 45090000 		.4byte	0x945
 2189 075d 12       		.uleb128 0x12
 2190 075e 30000000 		.4byte	0x30
 2191 0762 12       		.uleb128 0x12
 2192 0763 63090000 		.4byte	0x963
 2193 0767 00       		.byte	0
 2194 0768 20       		.uleb128 0x20
 2195 0769 873C0000 		.4byte	.LASF912
 2196 076d 03       		.byte	0x3
 2197 076e 9A02     		.2byte	0x29a
 2198 0770 5A430000 		.4byte	.LASF913
 2199 0774 01       		.byte	0x1
 2200 0775 7D070000 		.4byte	0x77d
 2201 0779 8D070000 		.4byte	0x78d
 2202 077d 11       		.uleb128 0x11
 2203 077e 45090000 		.4byte	0x945
 2204 0782 12       		.uleb128 0x12
 2205 0783 30000000 		.4byte	0x30
 2206 0787 12       		.uleb128 0x12
 2207 0788 63090000 		.4byte	0x963
 2208 078c 00       		.byte	0
 2209 078d 20       		.uleb128 0x20
 2210 078e F81F0000 		.4byte	.LASF914
 2211 0792 03       		.byte	0x3
 2212 0793 A602     		.2byte	0x2a6
 2213 0795 28070000 		.4byte	.LASF915
 2214 0799 01       		.byte	0x1
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 52


 2215 079a A2070000 		.4byte	0x7a2
 2216 079e AD070000 		.4byte	0x7ad
 2217 07a2 11       		.uleb128 0x11
 2218 07a3 45090000 		.4byte	0x945
 2219 07a7 12       		.uleb128 0x12
 2220 07a8 5D090000 		.4byte	0x95d
 2221 07ac 00       		.byte	0
 2222 07ad 20       		.uleb128 0x20
 2223 07ae 3C350000 		.4byte	.LASF916
 2224 07b2 03       		.byte	0x3
 2225 07b3 B202     		.2byte	0x2b2
 2226 07b5 49600000 		.4byte	.LASF917
 2227 07b9 01       		.byte	0x1
 2228 07ba C2070000 		.4byte	0x7c2
 2229 07be CD070000 		.4byte	0x7cd
 2230 07c2 11       		.uleb128 0x11
 2231 07c3 45090000 		.4byte	0x945
 2232 07c7 12       		.uleb128 0x12
 2233 07c8 5D090000 		.4byte	0x95d
 2234 07cc 00       		.byte	0
 2235 07cd 20       		.uleb128 0x20
 2236 07ce 03230000 		.4byte	.LASF918
 2237 07d2 03       		.byte	0x3
 2238 07d3 BA02     		.2byte	0x2ba
 2239 07d5 AE1D0000 		.4byte	.LASF919
 2240 07d9 01       		.byte	0x1
 2241 07da E2070000 		.4byte	0x7e2
 2242 07de F2070000 		.4byte	0x7f2
 2243 07e2 11       		.uleb128 0x11
 2244 07e3 45090000 		.4byte	0x945
 2245 07e7 12       		.uleb128 0x12
 2246 07e8 30000000 		.4byte	0x30
 2247 07ec 12       		.uleb128 0x12
 2248 07ed 30000000 		.4byte	0x30
 2249 07f1 00       		.byte	0
 2250 07f2 20       		.uleb128 0x20
 2251 07f3 CC590000 		.4byte	.LASF920
 2252 07f7 03       		.byte	0x3
 2253 07f8 C402     		.2byte	0x2c4
 2254 07fa 25260000 		.4byte	.LASF921
 2255 07fe 01       		.byte	0x1
 2256 07ff 07080000 		.4byte	0x807
 2257 0803 17080000 		.4byte	0x817
 2258 0807 11       		.uleb128 0x11
 2259 0808 45090000 		.4byte	0x945
 2260 080c 12       		.uleb128 0x12
 2261 080d 30000000 		.4byte	0x30
 2262 0811 12       		.uleb128 0x12
 2263 0812 30000000 		.4byte	0x30
 2264 0816 00       		.byte	0
 2265 0817 20       		.uleb128 0x20
 2266 0818 3F170000 		.4byte	.LASF922
 2267 081c 03       		.byte	0x3
 2268 081d CB02     		.2byte	0x2cb
 2269 081f 89290000 		.4byte	.LASF923
 2270 0823 01       		.byte	0x1
 2271 0824 2C080000 		.4byte	0x82c
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 53


 2272 0828 37080000 		.4byte	0x837
 2273 082c 11       		.uleb128 0x11
 2274 082d 45090000 		.4byte	0x945
 2275 0831 12       		.uleb128 0x12
 2276 0832 5D090000 		.4byte	0x95d
 2277 0836 00       		.byte	0
 2278 0837 1E       		.uleb128 0x1e
 2279 0838 C7270000 		.4byte	.LASF924
 2280 083c 03       		.byte	0x3
 2281 083d D102     		.2byte	0x2d1
 2282 083f 8E3E0000 		.4byte	.LASF925
 2283 0843 63090000 		.4byte	0x963
 2284 0847 01       		.byte	0x1
 2285 0848 50080000 		.4byte	0x850
 2286 084c 56080000 		.4byte	0x856
 2287 0850 11       		.uleb128 0x11
 2288 0851 45090000 		.4byte	0x945
 2289 0855 00       		.byte	0
 2290 0856 1E       		.uleb128 0x1e
 2291 0857 EA560000 		.4byte	.LASF926
 2292 085b 03       		.byte	0x3
 2293 085c D702     		.2byte	0x2d7
 2294 085e 7B0E0000 		.4byte	.LASF927
 2295 0862 63090000 		.4byte	0x963
 2296 0866 01       		.byte	0x1
 2297 0867 6F080000 		.4byte	0x86f
 2298 086b 75080000 		.4byte	0x875
 2299 086f 11       		.uleb128 0x11
 2300 0870 45090000 		.4byte	0x945
 2301 0874 00       		.byte	0
 2302 0875 20       		.uleb128 0x20
 2303 0876 C14B0000 		.4byte	.LASF928
 2304 087a 03       		.byte	0x3
 2305 087b E902     		.2byte	0x2e9
 2306 087d 694F0000 		.4byte	.LASF929
 2307 0881 01       		.byte	0x1
 2308 0882 8A080000 		.4byte	0x88a
 2309 0886 9A080000 		.4byte	0x89a
 2310 088a 11       		.uleb128 0x11
 2311 088b 45090000 		.4byte	0x945
 2312 088f 12       		.uleb128 0x12
 2313 0890 5D090000 		.4byte	0x95d
 2314 0894 12       		.uleb128 0x12
 2315 0895 30000000 		.4byte	0x30
 2316 0899 00       		.byte	0
 2317 089a 20       		.uleb128 0x20
 2318 089b 493E0000 		.4byte	.LASF930
 2319 089f 03       		.byte	0x3
 2320 08a0 FC02     		.2byte	0x2fc
 2321 08a2 EF280000 		.4byte	.LASF931
 2322 08a6 01       		.byte	0x1
 2323 08a7 AF080000 		.4byte	0x8af
 2324 08ab BF080000 		.4byte	0x8bf
 2325 08af 11       		.uleb128 0x11
 2326 08b0 45090000 		.4byte	0x945
 2327 08b4 12       		.uleb128 0x12
 2328 08b5 5D090000 		.4byte	0x95d
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 54


 2329 08b9 12       		.uleb128 0x12
 2330 08ba 30000000 		.4byte	0x30
 2331 08be 00       		.byte	0
 2332 08bf 1E       		.uleb128 0x1e
 2333 08c0 A7650000 		.4byte	.LASF932
 2334 08c4 03       		.byte	0x3
 2335 08c5 0903     		.2byte	0x309
 2336 08c7 B8060000 		.4byte	.LASF933
 2337 08cb 30000000 		.4byte	0x30
 2338 08cf 01       		.byte	0x1
 2339 08d0 D8080000 		.4byte	0x8d8
 2340 08d4 DE080000 		.4byte	0x8de
 2341 08d8 11       		.uleb128 0x11
 2342 08d9 45090000 		.4byte	0x945
 2343 08dd 00       		.byte	0
 2344 08de 1E       		.uleb128 0x1e
 2345 08df E4210000 		.4byte	.LASF934
 2346 08e3 03       		.byte	0x3
 2347 08e4 1303     		.2byte	0x313
 2348 08e6 71070000 		.4byte	.LASF935
 2349 08ea 30000000 		.4byte	0x30
 2350 08ee 01       		.byte	0x1
 2351 08ef F7080000 		.4byte	0x8f7
 2352 08f3 FD080000 		.4byte	0x8fd
 2353 08f7 11       		.uleb128 0x11
 2354 08f8 45090000 		.4byte	0x945
 2355 08fc 00       		.byte	0
 2356 08fd 21       		.uleb128 0x21
 2357 08fe E64B0000 		.4byte	.LASF936
 2358 0902 03       		.byte	0x3
 2359 0903 2503     		.2byte	0x325
 2360 0905 2D610000 		.4byte	.LASF937
 2361 0909 63090000 		.4byte	0x963
 2362 090d 01       		.byte	0x1
 2363 090e 12090000 		.4byte	0x912
 2364 0912 11       		.uleb128 0x11
 2365 0913 45090000 		.4byte	0x945
 2366 0917 12       		.uleb128 0x12
 2367 0918 6A090000 		.4byte	0x96a
 2368 091c 12       		.uleb128 0x12
 2369 091d 50090000 		.4byte	0x950
 2370 0921 12       		.uleb128 0x12
 2371 0922 6A090000 		.4byte	0x96a
 2372 0926 00       		.byte	0
 2373 0927 00       		.byte	0
 2374 0928 22       		.uleb128 0x22
 2375 0929 04       		.byte	0x4
 2376 092a 26010000 		.4byte	0x126
 2377 092e 22       		.uleb128 0x22
 2378 092f 04       		.byte	0x4
 2379 0930 EA010000 		.4byte	0x1ea
 2380 0934 23       		.uleb128 0x23
 2381 0935 3F090000 		.4byte	0x93f
 2382 0939 12       		.uleb128 0x12
 2383 093a 7D000000 		.4byte	0x7d
 2384 093e 00       		.byte	0
 2385 093f 24       		.uleb128 0x24
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 55


 2386 0940 04       		.byte	0x4
 2387 0941 34090000 		.4byte	0x934
 2388 0945 24       		.uleb128 0x24
 2389 0946 04       		.byte	0x4
 2390 0947 A7030000 		.4byte	0x3a7
 2391 094b 03       		.uleb128 0x3
 2392 094c 45090000 		.4byte	0x945
 2393 0950 24       		.uleb128 0x24
 2394 0951 04       		.byte	0x4
 2395 0952 30000000 		.4byte	0x30
 2396 0956 02       		.uleb128 0x2
 2397 0957 01       		.byte	0x1
 2398 0958 08       		.byte	0x8
 2399 0959 991D0000 		.4byte	.LASF487
 2400 095d 24       		.uleb128 0x24
 2401 095e 04       		.byte	0x4
 2402 095f 37000000 		.4byte	0x37
 2403 0963 02       		.uleb128 0x2
 2404 0964 01       		.byte	0x1
 2405 0965 02       		.byte	0x2
 2406 0966 8C1A0000 		.4byte	.LASF938
 2407 096a 22       		.uleb128 0x22
 2408 096b 04       		.byte	0x4
 2409 096c 30000000 		.4byte	0x30
 2410 0970 25       		.uleb128 0x25
 2411 0971 D6410000 		.4byte	.LASF939
 2412 0975 01       		.byte	0x1
 2413 0976 02       		.byte	0x2
 2414 0977 3A       		.byte	0x3a
 2415 0978 A1090000 		.4byte	0x9a1
 2416 097c 26       		.uleb128 0x26
 2417 097d 70696E00 		.ascii	"pin\000"
 2418 0981 02       		.byte	0x2
 2419 0982 3C       		.byte	0x3c
 2420 0983 B15D0000 		.4byte	.LASF988
 2421 0987 A1090000 		.4byte	0x9a1
 2422 098b 01       		.byte	0x1
 2423 098c 90090000 		.4byte	0x990
 2424 0990 11       		.uleb128 0x11
 2425 0991 D60A0000 		.4byte	0xad6
 2426 0995 12       		.uleb128 0x12
 2427 0996 7D000000 		.4byte	0x7d
 2428 099a 12       		.uleb128 0x12
 2429 099b 7D000000 		.4byte	0x7d
 2430 099f 00       		.byte	0
 2431 09a0 00       		.byte	0
 2432 09a1 0E       		.uleb128 0xe
 2433 09a2 FD520000 		.4byte	.LASF940
 2434 09a6 14       		.byte	0x14
 2435 09a7 02       		.byte	0x2
 2436 09a8 19       		.byte	0x19
 2437 09a9 26010000 		.4byte	0x126
 2438 09ad D10A0000 		.4byte	0xad1
 2439 09b1 16       		.uleb128 0x16
 2440 09b2 AD020000 		.4byte	0x2ad
 2441 09b6 00       		.byte	0
 2442 09b7 01       		.byte	0x1
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 56


 2443 09b8 08       		.uleb128 0x8
 2444 09b9 045E0000 		.4byte	.LASF941
 2445 09bd 02       		.byte	0x2
 2446 09be 1B       		.byte	0x1b
 2447 09bf 290B0000 		.4byte	0xb29
 2448 09c3 08       		.byte	0x8
 2449 09c4 08       		.uleb128 0x8
 2450 09c5 7E0B0000 		.4byte	.LASF942
 2451 09c9 02       		.byte	0x2
 2452 09ca 1C       		.byte	0x1c
 2453 09cb 290B0000 		.4byte	0xb29
 2454 09cf 0C       		.byte	0xc
 2455 09d0 08       		.uleb128 0x8
 2456 09d1 FD370000 		.4byte	.LASF943
 2457 09d5 02       		.byte	0x2
 2458 09d6 1D       		.byte	0x1d
 2459 09d7 7D000000 		.4byte	0x7d
 2460 09db 10       		.byte	0x10
 2461 09dc 10       		.uleb128 0x10
 2462 09dd FD520000 		.4byte	.LASF940
 2463 09e1 C1480000 		.4byte	.LASF944
 2464 09e5 2F0B0000 		.4byte	0xb2f
 2465 09e9 01       		.byte	0x1
 2466 09ea F2090000 		.4byte	0x9f2
 2467 09ee FD090000 		.4byte	0x9fd
 2468 09f2 11       		.uleb128 0x11
 2469 09f3 2F0B0000 		.4byte	0xb2f
 2470 09f7 12       		.uleb128 0x12
 2471 09f8 3A0B0000 		.4byte	0xb3a
 2472 09fc 00       		.byte	0
 2473 09fd 27       		.uleb128 0x27
 2474 09fe 2B400000 		.4byte	.LASF945
 2475 0a02 02       		.byte	0x2
 2476 0a03 1F       		.byte	0x1f
 2477 0a04 65020000 		.4byte	.LASF989
 2478 0a08 290B0000 		.4byte	0xb29
 2479 0a0c 1B0A0000 		.4byte	0xa1b
 2480 0a10 12       		.uleb128 0x12
 2481 0a11 7D000000 		.4byte	0x7d
 2482 0a15 12       		.uleb128 0x12
 2483 0a16 7D000000 		.4byte	0x7d
 2484 0a1a 00       		.byte	0
 2485 0a1b 28       		.uleb128 0x28
 2486 0a1c FD520000 		.4byte	.LASF940
 2487 0a20 02       		.byte	0x2
 2488 0a21 24       		.byte	0x24
 2489 0a22 2B570000 		.4byte	.LASF961
 2490 0a26 2F0B0000 		.4byte	0xb2f
 2491 0a2a 01       		.byte	0x1
 2492 0a2b 330A0000 		.4byte	0xa33
 2493 0a2f 430A0000 		.4byte	0xa43
 2494 0a33 11       		.uleb128 0x11
 2495 0a34 2F0B0000 		.4byte	0xb2f
 2496 0a38 12       		.uleb128 0x12
 2497 0a39 7D000000 		.4byte	0x7d
 2498 0a3d 12       		.uleb128 0x12
 2499 0a3e 7D000000 		.4byte	0x7d
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 57


 2500 0a42 00       		.byte	0
 2501 0a43 17       		.uleb128 0x17
 2502 0a44 6F110000 		.4byte	.LASF843
 2503 0a48 02       		.byte	0x2
 2504 0a49 29       		.byte	0x29
 2505 0a4a D5080000 		.4byte	.LASF946
 2506 0a4e 01       		.byte	0x1
 2507 0a4f 02       		.uleb128 0x2
 2508 0a50 10       		.byte	0x10
 2509 0a51 03       		.uleb128 0x3
 2510 0a52 A1090000 		.4byte	0x9a1
 2511 0a56 01       		.byte	0x1
 2512 0a57 5F0A0000 		.4byte	0xa5f
 2513 0a5b 650A0000 		.4byte	0xa65
 2514 0a5f 11       		.uleb128 0x11
 2515 0a60 2F0B0000 		.4byte	0xb2f
 2516 0a64 00       		.byte	0
 2517 0a65 17       		.uleb128 0x17
 2518 0a66 A7170000 		.4byte	.LASF842
 2519 0a6a 02       		.byte	0x2
 2520 0a6b 2D       		.byte	0x2d
 2521 0a6c 905A0000 		.4byte	.LASF947
 2522 0a70 01       		.byte	0x1
 2523 0a71 02       		.uleb128 0x2
 2524 0a72 10       		.byte	0x10
 2525 0a73 01       		.uleb128 0x1
 2526 0a74 A1090000 		.4byte	0x9a1
 2527 0a78 01       		.byte	0x1
 2528 0a79 810A0000 		.4byte	0xa81
 2529 0a7d 870A0000 		.4byte	0xa87
 2530 0a81 11       		.uleb128 0x11
 2531 0a82 2F0B0000 		.4byte	0xb2f
 2532 0a86 00       		.byte	0
 2533 0a87 13       		.uleb128 0x13
 2534 0a88 73657400 		.ascii	"set\000"
 2535 0a8c 02       		.byte	0x2
 2536 0a8d 31       		.byte	0x31
 2537 0a8e 223B0000 		.4byte	.LASF949
 2538 0a92 01       		.byte	0x1
 2539 0a93 02       		.uleb128 0x2
 2540 0a94 10       		.byte	0x10
 2541 0a95 00       		.uleb128 0
 2542 0a96 A1090000 		.4byte	0x9a1
 2543 0a9a 01       		.byte	0x1
 2544 0a9b A30A0000 		.4byte	0xaa3
 2545 0a9f AE0A0000 		.4byte	0xaae
 2546 0aa3 11       		.uleb128 0x11
 2547 0aa4 2F0B0000 		.4byte	0xb2f
 2548 0aa8 12       		.uleb128 0x12
 2549 0aa9 63090000 		.4byte	0x963
 2550 0aad 00       		.byte	0
 2551 0aae 29       		.uleb128 0x29
 2552 0aaf 67657400 		.ascii	"get\000"
 2553 0ab3 02       		.byte	0x2
 2554 0ab4 35       		.byte	0x35
 2555 0ab5 7C460000 		.4byte	.LASF950
 2556 0ab9 63090000 		.4byte	0x963
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 58


 2557 0abd 01       		.byte	0x1
 2558 0abe 02       		.uleb128 0x2
 2559 0abf 10       		.byte	0x10
 2560 0ac0 04       		.uleb128 0x4
 2561 0ac1 A1090000 		.4byte	0x9a1
 2562 0ac5 01       		.byte	0x1
 2563 0ac6 CA0A0000 		.4byte	0xaca
 2564 0aca 11       		.uleb128 0x11
 2565 0acb 2F0B0000 		.4byte	0xb2f
 2566 0acf 00       		.byte	0
 2567 0ad0 00       		.byte	0
 2568 0ad1 03       		.uleb128 0x3
 2569 0ad2 A1090000 		.4byte	0x9a1
 2570 0ad6 24       		.uleb128 0x24
 2571 0ad7 04       		.byte	0x4
 2572 0ad8 70090000 		.4byte	0x970
 2573 0adc 03       		.uleb128 0x3
 2574 0add D60A0000 		.4byte	0xad6
 2575 0ae1 2A       		.uleb128 0x2a
 2576 0ae2 E6030000 		.4byte	.LASF951
 2577 0ae6 02       		.byte	0x2
 2578 0ae7 6A       		.byte	0x6a
 2579 0ae8 30000000 		.4byte	0x30
 2580 0aec 05       		.uleb128 0x5
 2581 0aed 03       		.byte	0x3
 2582 0aee 00000000 		.4byte	transmit_led
 2583 0af2 2A       		.uleb128 0x2a
 2584 0af3 D0300000 		.4byte	.LASF952
 2585 0af7 02       		.byte	0x2
 2586 0af8 6A       		.byte	0x6a
 2587 0af9 30000000 		.4byte	0x30
 2588 0afd 05       		.uleb128 0x5
 2589 0afe 03       		.byte	0x3
 2590 0aff 00000000 		.4byte	receive_led
 2591 0b03 18       		.uleb128 0x18
 2592 0b04 37000000 		.4byte	0x37
 2593 0b08 130B0000 		.4byte	0xb13
 2594 0b0c 19       		.uleb128 0x19
 2595 0b0d 7D000000 		.4byte	0x7d
 2596 0b11 10       		.byte	0x10
 2597 0b12 00       		.byte	0
 2598 0b13 03       		.uleb128 0x3
 2599 0b14 030B0000 		.4byte	0xb03
 2600 0b18 2B       		.uleb128 0x2b
 2601 0b19 74430000 		.4byte	.LASF954
 2602 0b1d 02       		.byte	0x2
 2603 0b1e 6C       		.byte	0x6c
 2604 0b1f 130B0000 		.4byte	0xb13
 2605 0b23 05       		.uleb128 0x5
 2606 0b24 03       		.byte	0x3
 2607 0b25 00000000 		.4byte	_ZL6tx_buf
 2608 0b29 24       		.uleb128 0x24
 2609 0b2a 04       		.byte	0x4
 2610 0b2b 78000000 		.4byte	0x78
 2611 0b2f 24       		.uleb128 0x24
 2612 0b30 04       		.byte	0x4
 2613 0b31 A1090000 		.4byte	0x9a1
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 59


 2614 0b35 03       		.uleb128 0x3
 2615 0b36 2F0B0000 		.4byte	0xb2f
 2616 0b3a 22       		.uleb128 0x22
 2617 0b3b 04       		.byte	0x4
 2618 0b3c D10A0000 		.4byte	0xad1
 2619 0b40 2C       		.uleb128 0x2c
 2620 0b41 04       		.byte	0x4
 2621 0b42 24       		.uleb128 0x24
 2622 0b43 04       		.byte	0x4
 2623 0b44 AD020000 		.4byte	0x2ad
 2624 0b48 03       		.uleb128 0x3
 2625 0b49 420B0000 		.4byte	0xb42
 2626 0b4d 22       		.uleb128 0x22
 2627 0b4e 04       		.byte	0x4
 2628 0b4f 91030000 		.4byte	0x391
 2629 0b53 2D       		.uleb128 0x2d
 2630 0b54 71000000 		.4byte	0x71
 2631 0b58 5E0B0000 		.4byte	0xb5e
 2632 0b5c 2E       		.uleb128 0x2e
 2633 0b5d 00       		.byte	0
 2634 0b5e 24       		.uleb128 0x24
 2635 0b5f 04       		.byte	0x4
 2636 0b60 640B0000 		.4byte	0xb64
 2637 0b64 2F       		.uleb128 0x2f
 2638 0b65 04       		.byte	0x4
 2639 0b66 52060000 		.4byte	.LASF990
 2640 0b6a 530B0000 		.4byte	0xb53
 2641 0b6e 24       		.uleb128 0x24
 2642 0b6f 04       		.byte	0x4
 2643 0b70 EA010000 		.4byte	0x1ea
 2644 0b74 03       		.uleb128 0x3
 2645 0b75 6E0B0000 		.4byte	0xb6e
 2646 0b79 22       		.uleb128 0x22
 2647 0b7a 04       		.byte	0x4
 2648 0b7b A8020000 		.4byte	0x2a8
 2649 0b7f 24       		.uleb128 0x24
 2650 0b80 04       		.byte	0x4
 2651 0b81 26010000 		.4byte	0x126
 2652 0b85 03       		.uleb128 0x3
 2653 0b86 7F0B0000 		.4byte	0xb7f
 2654 0b8a 22       		.uleb128 0x22
 2655 0b8b 04       		.byte	0x4
 2656 0b8c E5010000 		.4byte	0x1e5
 2657 0b90 30       		.uleb128 0x30
 2658 0b91 55140000 		.4byte	.LASF953
 2659 0b95 02       		.byte	0x2
 2660 0b96 7B       		.byte	0x7b
 2661 0b97 71000000 		.4byte	0x71
 2662 0b9b 00000000 		.4byte	.LFB64
 2663 0b9f 98010000 		.4byte	.LFE64-.LFB64
 2664 0ba3 01       		.uleb128 0x1
 2665 0ba4 9C       		.byte	0x9c
 2666 0ba5 01110000 		.4byte	0x1101
 2667 0ba9 31       		.uleb128 0x31
 2668 0baa DC2D0000 		.4byte	.LASF991
 2669 0bae 02       		.byte	0x2
 2670 0baf 7C       		.byte	0x7c
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 60


 2671 0bb0 70090000 		.4byte	0x970
 2672 0bb4 32       		.uleb128 0x32
 2673 0bb5 73636B00 		.ascii	"sck\000"
 2674 0bb9 02       		.byte	0x2
 2675 0bba 7F       		.byte	0x7f
 2676 0bbb A1090000 		.4byte	0x9a1
 2677 0bbf 03       		.uleb128 0x3
 2678 0bc0 91       		.byte	0x91
 2679 0bc1 A07E     		.sleb128 -224
 2680 0bc3 2B       		.uleb128 0x2b
 2681 0bc4 71220000 		.4byte	.LASF856
 2682 0bc8 02       		.byte	0x2
 2683 0bc9 80       		.byte	0x80
 2684 0bca A1090000 		.4byte	0x9a1
 2685 0bce 03       		.uleb128 0x3
 2686 0bcf 91       		.byte	0x91
 2687 0bd0 B47E     		.sleb128 -204
 2688 0bd2 2B       		.uleb128 0x2b
 2689 0bd3 7F0C0000 		.4byte	.LASF857
 2690 0bd7 02       		.byte	0x2
 2691 0bd8 81       		.byte	0x81
 2692 0bd9 A1090000 		.4byte	0x9a1
 2693 0bdd 03       		.uleb128 0x3
 2694 0bde 91       		.byte	0x91
 2695 0bdf C87E     		.sleb128 -184
 2696 0be1 32       		.uleb128 0x32
 2697 0be2 63736E00 		.ascii	"csn\000"
 2698 0be6 02       		.byte	0x2
 2699 0be7 82       		.byte	0x82
 2700 0be8 A1090000 		.4byte	0x9a1
 2701 0bec 03       		.uleb128 0x3
 2702 0bed 91       		.byte	0x91
 2703 0bee DC7E     		.sleb128 -164
 2704 0bf0 32       		.uleb128 0x32
 2705 0bf1 636500   		.ascii	"ce\000"
 2706 0bf4 02       		.byte	0x2
 2707 0bf5 83       		.byte	0x83
 2708 0bf6 A1090000 		.4byte	0x9a1
 2709 0bfa 03       		.uleb128 0x3
 2710 0bfb 91       		.byte	0x91
 2711 0bfc F07E     		.sleb128 -144
 2712 0bfe 2B       		.uleb128 0x2b
 2713 0bff 135D0000 		.4byte	.LASF955
 2714 0c03 02       		.byte	0x2
 2715 0c04 8C       		.byte	0x8c
 2716 0c05 A7030000 		.4byte	0x3a7
 2717 0c09 03       		.uleb128 0x3
 2718 0c0a 91       		.byte	0x91
 2719 0c0b AC7F     		.sleb128 -84
 2720 0c0d 2B       		.uleb128 0x2b
 2721 0c0e 3E2B0000 		.4byte	.LASF956
 2722 0c12 02       		.byte	0x2
 2723 0c13 92       		.byte	0x92
 2724 0c14 A1090000 		.4byte	0x9a1
 2725 0c18 03       		.uleb128 0x3
 2726 0c19 91       		.byte	0x91
 2727 0c1a 847F     		.sleb128 -124
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 61


 2728 0c1c 2B       		.uleb128 0x2b
 2729 0c1d E91D0000 		.4byte	.LASF957
 2730 0c21 02       		.byte	0x2
 2731 0c22 93       		.byte	0x93
 2732 0c23 A1090000 		.4byte	0x9a1
 2733 0c27 03       		.uleb128 0x3
 2734 0c28 91       		.byte	0x91
 2735 0c29 987F     		.sleb128 -104
 2736 0c2b 33       		.uleb128 0x33
 2737 0c2c 6C656E00 		.ascii	"len\000"
 2738 0c30 02       		.byte	0x2
 2739 0c31 9D       		.byte	0x9d
 2740 0c32 30000000 		.4byte	0x30
 2741 0c36 00000000 		.4byte	.LLST20
 2742 0c3a 33       		.uleb128 0x33
 2743 0c3b 6900     		.ascii	"i\000"
 2744 0c3d 02       		.byte	0x2
 2745 0c3e 9D       		.byte	0x9d
 2746 0c3f 30000000 		.4byte	0x30
 2747 0c43 13000000 		.4byte	.LLST21
 2748 0c47 34       		.uleb128 0x34
 2749 0c48 5D460000 		.4byte	.LASF958
 2750 0c4c 02       		.byte	0x2
 2751 0c4d 9D       		.byte	0x9d
 2752 0c4e 30000000 		.4byte	0x30
 2753 0c52 32000000 		.4byte	.LLST22
 2754 0c56 33       		.uleb128 0x33
 2755 0c57 6E00     		.ascii	"n\000"
 2756 0c59 02       		.byte	0x2
 2757 0c5a 9D       		.byte	0x9d
 2758 0c5b 30000000 		.4byte	0x30
 2759 0c5f 5C000000 		.4byte	.LLST23
 2760 0c63 2B       		.uleb128 0x2b
 2761 0c64 083A0000 		.4byte	.LASF959
 2762 0c68 02       		.byte	0x2
 2763 0c69 9E       		.byte	0x9e
 2764 0c6a 97030000 		.4byte	0x397
 2765 0c6e 02       		.uleb128 0x2
 2766 0c6f 91       		.byte	0x91
 2767 0c70 48       		.sleb128 -56
 2768 0c71 35       		.uleb128 0x35
 2769 0c72 0B140000 		.4byte	0x140b
 2770 0c76 02000000 		.4byte	.LBB143
 2771 0c7a 00000000 		.4byte	.Ldebug_ranges0+0
 2772 0c7e 02       		.byte	0x2
 2773 0c7f 7F       		.byte	0x7f
 2774 0c80 CE0C0000 		.4byte	0xcce
 2775 0c84 36       		.uleb128 0x36
 2776 0c85 1D140000 		.4byte	0x141d
 2777 0c89 06       		.uleb128 0x6
 2778 0c8a F2       		.byte	0xf2
 2779 0c8b A90B0000 		.4byte	.Ldebug_info0+2985
 2780 0c8f 00       		.sleb128 0
 2781 0c90 37       		.uleb128 0x37
 2782 0c91 31140000 		.4byte	0x1431
 2783 0c95 91000000 		.4byte	.LLST24
 2784 0c99 37       		.uleb128 0x37
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 62


 2785 0c9a 26140000 		.4byte	0x1426
 2786 0c9e A5000000 		.4byte	.LLST25
 2787 0ca2 38       		.uleb128 0x38
 2788 0ca3 D9140000 		.4byte	0x14d9
 2789 0ca7 02000000 		.4byte	.LBB144
 2790 0cab 00000000 		.4byte	.Ldebug_ranges0+0
 2791 0caf 02       		.byte	0x2
 2792 0cb0 3D       		.byte	0x3d
 2793 0cb1 37       		.uleb128 0x37
 2794 0cb2 FB140000 		.4byte	0x14fb
 2795 0cb6 B9000000 		.4byte	.LLST26
 2796 0cba 37       		.uleb128 0x37
 2797 0cbb F0140000 		.4byte	0x14f0
 2798 0cbf CD000000 		.4byte	.LLST27
 2799 0cc3 37       		.uleb128 0x37
 2800 0cc4 E7140000 		.4byte	0x14e7
 2801 0cc8 E1000000 		.4byte	.LLST28
 2802 0ccc 00       		.byte	0
 2803 0ccd 00       		.byte	0
 2804 0cce 35       		.uleb128 0x35
 2805 0ccf 0B140000 		.4byte	0x140b
 2806 0cd3 0C000000 		.4byte	.LBB163
 2807 0cd7 38000000 		.4byte	.Ldebug_ranges0+0x38
 2808 0cdb 02       		.byte	0x2
 2809 0cdc 80       		.byte	0x80
 2810 0cdd 2B0D0000 		.4byte	0xd2b
 2811 0ce1 36       		.uleb128 0x36
 2812 0ce2 1D140000 		.4byte	0x141d
 2813 0ce6 06       		.uleb128 0x6
 2814 0ce7 F2       		.byte	0xf2
 2815 0ce8 A90B0000 		.4byte	.Ldebug_info0+2985
 2816 0cec 00       		.sleb128 0
 2817 0ced 37       		.uleb128 0x37
 2818 0cee 31140000 		.4byte	0x1431
 2819 0cf2 F4000000 		.4byte	.LLST29
 2820 0cf6 37       		.uleb128 0x37
 2821 0cf7 26140000 		.4byte	0x1426
 2822 0cfb 08010000 		.4byte	.LLST30
 2823 0cff 38       		.uleb128 0x38
 2824 0d00 D9140000 		.4byte	0x14d9
 2825 0d04 0C000000 		.4byte	.LBB164
 2826 0d08 38000000 		.4byte	.Ldebug_ranges0+0x38
 2827 0d0c 02       		.byte	0x2
 2828 0d0d 3D       		.byte	0x3d
 2829 0d0e 37       		.uleb128 0x37
 2830 0d0f FB140000 		.4byte	0x14fb
 2831 0d13 F4000000 		.4byte	.LLST29
 2832 0d17 37       		.uleb128 0x37
 2833 0d18 F0140000 		.4byte	0x14f0
 2834 0d1c 08010000 		.4byte	.LLST30
 2835 0d20 37       		.uleb128 0x37
 2836 0d21 E7140000 		.4byte	0x14e7
 2837 0d25 1C010000 		.4byte	.LLST33
 2838 0d29 00       		.byte	0
 2839 0d2a 00       		.byte	0
 2840 0d2b 35       		.uleb128 0x35
 2841 0d2c 0B140000 		.4byte	0x140b
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 63


 2842 0d30 16000000 		.4byte	.LBB181
 2843 0d34 68000000 		.4byte	.Ldebug_ranges0+0x68
 2844 0d38 02       		.byte	0x2
 2845 0d39 81       		.byte	0x81
 2846 0d3a 880D0000 		.4byte	0xd88
 2847 0d3e 36       		.uleb128 0x36
 2848 0d3f 1D140000 		.4byte	0x141d
 2849 0d43 06       		.uleb128 0x6
 2850 0d44 F2       		.byte	0xf2
 2851 0d45 A90B0000 		.4byte	.Ldebug_info0+2985
 2852 0d49 00       		.sleb128 0
 2853 0d4a 37       		.uleb128 0x37
 2854 0d4b 31140000 		.4byte	0x1431
 2855 0d4f 31010000 		.4byte	.LLST34
 2856 0d53 37       		.uleb128 0x37
 2857 0d54 26140000 		.4byte	0x1426
 2858 0d58 45010000 		.4byte	.LLST35
 2859 0d5c 38       		.uleb128 0x38
 2860 0d5d D9140000 		.4byte	0x14d9
 2861 0d61 16000000 		.4byte	.LBB182
 2862 0d65 68000000 		.4byte	.Ldebug_ranges0+0x68
 2863 0d69 02       		.byte	0x2
 2864 0d6a 3D       		.byte	0x3d
 2865 0d6b 37       		.uleb128 0x37
 2866 0d6c FB140000 		.4byte	0x14fb
 2867 0d70 31010000 		.4byte	.LLST34
 2868 0d74 37       		.uleb128 0x37
 2869 0d75 F0140000 		.4byte	0x14f0
 2870 0d79 45010000 		.4byte	.LLST35
 2871 0d7d 37       		.uleb128 0x37
 2872 0d7e E7140000 		.4byte	0x14e7
 2873 0d82 59010000 		.4byte	.LLST38
 2874 0d86 00       		.byte	0
 2875 0d87 00       		.byte	0
 2876 0d88 35       		.uleb128 0x35
 2877 0d89 0B140000 		.4byte	0x140b
 2878 0d8d 22000000 		.4byte	.LBB201
 2879 0d91 98000000 		.4byte	.Ldebug_ranges0+0x98
 2880 0d95 02       		.byte	0x2
 2881 0d96 82       		.byte	0x82
 2882 0d97 E50D0000 		.4byte	0xde5
 2883 0d9b 36       		.uleb128 0x36
 2884 0d9c 1D140000 		.4byte	0x141d
 2885 0da0 06       		.uleb128 0x6
 2886 0da1 F2       		.byte	0xf2
 2887 0da2 A90B0000 		.4byte	.Ldebug_info0+2985
 2888 0da6 00       		.sleb128 0
 2889 0da7 37       		.uleb128 0x37
 2890 0da8 31140000 		.4byte	0x1431
 2891 0dac 6F010000 		.4byte	.LLST39
 2892 0db0 37       		.uleb128 0x37
 2893 0db1 26140000 		.4byte	0x1426
 2894 0db5 83010000 		.4byte	.LLST40
 2895 0db9 38       		.uleb128 0x38
 2896 0dba D9140000 		.4byte	0x14d9
 2897 0dbe 22000000 		.4byte	.LBB202
 2898 0dc2 98000000 		.4byte	.Ldebug_ranges0+0x98
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 64


 2899 0dc6 02       		.byte	0x2
 2900 0dc7 3D       		.byte	0x3d
 2901 0dc8 37       		.uleb128 0x37
 2902 0dc9 FB140000 		.4byte	0x14fb
 2903 0dcd 6F010000 		.4byte	.LLST39
 2904 0dd1 37       		.uleb128 0x37
 2905 0dd2 F0140000 		.4byte	0x14f0
 2906 0dd6 83010000 		.4byte	.LLST40
 2907 0dda 37       		.uleb128 0x37
 2908 0ddb E7140000 		.4byte	0x14e7
 2909 0ddf 97010000 		.4byte	.LLST43
 2910 0de3 00       		.byte	0
 2911 0de4 00       		.byte	0
 2912 0de5 35       		.uleb128 0x35
 2913 0de6 0B140000 		.4byte	0x140b
 2914 0dea 24000000 		.4byte	.LBB217
 2915 0dee C8000000 		.4byte	.Ldebug_ranges0+0xc8
 2916 0df2 02       		.byte	0x2
 2917 0df3 83       		.byte	0x83
 2918 0df4 420E0000 		.4byte	0xe42
 2919 0df8 36       		.uleb128 0x36
 2920 0df9 1D140000 		.4byte	0x141d
 2921 0dfd 06       		.uleb128 0x6
 2922 0dfe F2       		.byte	0xf2
 2923 0dff A90B0000 		.4byte	.Ldebug_info0+2985
 2924 0e03 00       		.sleb128 0
 2925 0e04 37       		.uleb128 0x37
 2926 0e05 31140000 		.4byte	0x1431
 2927 0e09 AA010000 		.4byte	.LLST44
 2928 0e0d 37       		.uleb128 0x37
 2929 0e0e 26140000 		.4byte	0x1426
 2930 0e12 BE010000 		.4byte	.LLST45
 2931 0e16 38       		.uleb128 0x38
 2932 0e17 D9140000 		.4byte	0x14d9
 2933 0e1b 24000000 		.4byte	.LBB218
 2934 0e1f C8000000 		.4byte	.Ldebug_ranges0+0xc8
 2935 0e23 02       		.byte	0x2
 2936 0e24 3D       		.byte	0x3d
 2937 0e25 37       		.uleb128 0x37
 2938 0e26 FB140000 		.4byte	0x14fb
 2939 0e2a AA010000 		.4byte	.LLST44
 2940 0e2e 37       		.uleb128 0x37
 2941 0e2f F0140000 		.4byte	0x14f0
 2942 0e33 BE010000 		.4byte	.LLST45
 2943 0e37 37       		.uleb128 0x37
 2944 0e38 E7140000 		.4byte	0x14e7
 2945 0e3c D2010000 		.4byte	.LLST48
 2946 0e40 00       		.byte	0
 2947 0e41 00       		.byte	0
 2948 0e42 35       		.uleb128 0x35
 2949 0e43 13160000 		.4byte	0x1613
 2950 0e47 32000000 		.4byte	.LBB237
 2951 0e4b F8000000 		.4byte	.Ldebug_ranges0+0xf8
 2952 0e4f 02       		.byte	0x2
 2953 0e50 8C       		.byte	0x8c
 2954 0e51 9E0E0000 		.4byte	0xe9e
 2955 0e55 37       		.uleb128 0x37
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 65


 2956 0e56 71160000 		.4byte	0x1671
 2957 0e5a E5010000 		.4byte	.LLST49
 2958 0e5e 37       		.uleb128 0x37
 2959 0e5f 65160000 		.4byte	0x1665
 2960 0e63 FD010000 		.4byte	.LLST50
 2961 0e67 37       		.uleb128 0x37
 2962 0e68 5A160000 		.4byte	0x165a
 2963 0e6c 15020000 		.4byte	.LLST51
 2964 0e70 37       		.uleb128 0x37
 2965 0e71 4E160000 		.4byte	0x164e
 2966 0e75 35020000 		.4byte	.LLST52
 2967 0e79 37       		.uleb128 0x37
 2968 0e7a 42160000 		.4byte	0x1642
 2969 0e7e 48020000 		.4byte	.LLST53
 2970 0e82 37       		.uleb128 0x37
 2971 0e83 36160000 		.4byte	0x1636
 2972 0e87 5B020000 		.4byte	.LLST54
 2973 0e8b 37       		.uleb128 0x37
 2974 0e8c 2A160000 		.4byte	0x162a
 2975 0e90 70020000 		.4byte	.LLST55
 2976 0e94 37       		.uleb128 0x37
 2977 0e95 21160000 		.4byte	0x1621
 2978 0e99 83020000 		.4byte	.LLST56
 2979 0e9d 00       		.byte	0
 2980 0e9e 35       		.uleb128 0x35
 2981 0e9f 0B140000 		.4byte	0x140b
 2982 0ea3 7A000000 		.4byte	.LBB262
 2983 0ea7 28010000 		.4byte	.Ldebug_ranges0+0x128
 2984 0eab 02       		.byte	0x2
 2985 0eac 92       		.byte	0x92
 2986 0ead FB0E0000 		.4byte	0xefb
 2987 0eb1 36       		.uleb128 0x36
 2988 0eb2 1D140000 		.4byte	0x141d
 2989 0eb6 06       		.uleb128 0x6
 2990 0eb7 F2       		.byte	0xf2
 2991 0eb8 A90B0000 		.4byte	.Ldebug_info0+2985
 2992 0ebc 00       		.sleb128 0
 2993 0ebd 37       		.uleb128 0x37
 2994 0ebe 31140000 		.4byte	0x1431
 2995 0ec2 A4020000 		.4byte	.LLST57
 2996 0ec6 37       		.uleb128 0x37
 2997 0ec7 26140000 		.4byte	0x1426
 2998 0ecb B8020000 		.4byte	.LLST58
 2999 0ecf 38       		.uleb128 0x38
 3000 0ed0 D9140000 		.4byte	0x14d9
 3001 0ed4 7A000000 		.4byte	.LBB263
 3002 0ed8 28010000 		.4byte	.Ldebug_ranges0+0x128
 3003 0edc 02       		.byte	0x2
 3004 0edd 3D       		.byte	0x3d
 3005 0ede 37       		.uleb128 0x37
 3006 0edf FB140000 		.4byte	0x14fb
 3007 0ee3 A4020000 		.4byte	.LLST57
 3008 0ee7 37       		.uleb128 0x37
 3009 0ee8 F0140000 		.4byte	0x14f0
 3010 0eec B8020000 		.4byte	.LLST58
 3011 0ef0 37       		.uleb128 0x37
 3012 0ef1 E7140000 		.4byte	0x14e7
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 66


 3013 0ef5 CC020000 		.4byte	.LLST61
 3014 0ef9 00       		.byte	0
 3015 0efa 00       		.byte	0
 3016 0efb 35       		.uleb128 0x35
 3017 0efc 0B140000 		.4byte	0x140b
 3018 0f00 86000000 		.4byte	.LBB269
 3019 0f04 40010000 		.4byte	.Ldebug_ranges0+0x140
 3020 0f08 02       		.byte	0x2
 3021 0f09 93       		.byte	0x93
 3022 0f0a 580F0000 		.4byte	0xf58
 3023 0f0e 36       		.uleb128 0x36
 3024 0f0f 1D140000 		.4byte	0x141d
 3025 0f13 06       		.uleb128 0x6
 3026 0f14 F2       		.byte	0xf2
 3027 0f15 A90B0000 		.4byte	.Ldebug_info0+2985
 3028 0f19 00       		.sleb128 0
 3029 0f1a 37       		.uleb128 0x37
 3030 0f1b 31140000 		.4byte	0x1431
 3031 0f1f ED020000 		.4byte	.LLST62
 3032 0f23 37       		.uleb128 0x37
 3033 0f24 26140000 		.4byte	0x1426
 3034 0f28 01030000 		.4byte	.LLST63
 3035 0f2c 38       		.uleb128 0x38
 3036 0f2d D9140000 		.4byte	0x14d9
 3037 0f31 86000000 		.4byte	.LBB270
 3038 0f35 40010000 		.4byte	.Ldebug_ranges0+0x140
 3039 0f39 02       		.byte	0x2
 3040 0f3a 3D       		.byte	0x3d
 3041 0f3b 37       		.uleb128 0x37
 3042 0f3c FB140000 		.4byte	0x14fb
 3043 0f40 ED020000 		.4byte	.LLST62
 3044 0f44 37       		.uleb128 0x37
 3045 0f45 F0140000 		.4byte	0x14f0
 3046 0f49 01030000 		.4byte	.LLST63
 3047 0f4d 37       		.uleb128 0x37
 3048 0f4e E7140000 		.4byte	0x14e7
 3049 0f52 15030000 		.4byte	.LLST66
 3050 0f56 00       		.byte	0
 3051 0f57 00       		.byte	0
 3052 0f58 39       		.uleb128 0x39
 3053 0f59 66140000 		.4byte	0x1466
 3054 0f5d AE000000 		.4byte	.LBB282
 3055 0f61 04000000 		.4byte	.LBE282-.LBB282
 3056 0f65 02       		.byte	0x2
 3057 0f66 98       		.byte	0x98
 3058 0f67 7E0F0000 		.4byte	0xf7e
 3059 0f6b 37       		.uleb128 0x37
 3060 0f6c 81140000 		.4byte	0x1481
 3061 0f70 2B030000 		.4byte	.LLST67
 3062 0f74 37       		.uleb128 0x37
 3063 0f75 78140000 		.4byte	0x1478
 3064 0f79 3F030000 		.4byte	.LLST68
 3065 0f7d 00       		.byte	0
 3066 0f7e 39       		.uleb128 0x39
 3067 0f7f 66140000 		.4byte	0x1466
 3068 0f83 B2000000 		.4byte	.LBB284
 3069 0f87 06000000 		.4byte	.LBE284-.LBB284
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 67


 3070 0f8b 02       		.byte	0x2
 3071 0f8c 99       		.byte	0x99
 3072 0f8d A40F0000 		.4byte	0xfa4
 3073 0f91 37       		.uleb128 0x37
 3074 0f92 81140000 		.4byte	0x1481
 3075 0f96 55030000 		.4byte	.LLST69
 3076 0f9a 37       		.uleb128 0x37
 3077 0f9b 78140000 		.4byte	0x1478
 3078 0f9f 69030000 		.4byte	.LLST70
 3079 0fa3 00       		.byte	0
 3080 0fa4 39       		.uleb128 0x39
 3081 0fa5 02120000 		.4byte	0x1202
 3082 0fa9 B8000000 		.4byte	.LBB286
 3083 0fad 08000000 		.4byte	.LBE286-.LBB286
 3084 0fb1 02       		.byte	0x2
 3085 0fb2 A0       		.byte	0xa0
 3086 0fb3 D20F0000 		.4byte	0xfd2
 3087 0fb7 37       		.uleb128 0x37
 3088 0fb8 12120000 		.4byte	0x1212
 3089 0fbc 7F030000 		.4byte	.LLST71
 3090 0fc0 3A       		.uleb128 0x3a
 3091 0fc1 C0000000 		.4byte	.LVL70
 3092 0fc5 DC150000 		.4byte	0x15dc
 3093 0fc9 3B       		.uleb128 0x3b
 3094 0fca 01       		.uleb128 0x1
 3095 0fcb 50       		.byte	0x50
 3096 0fcc 03       		.uleb128 0x3
 3097 0fcd 0A       		.byte	0xa
 3098 0fce D007     		.2byte	0x7d0
 3099 0fd0 00       		.byte	0
 3100 0fd1 00       		.byte	0
 3101 0fd2 3C       		.uleb128 0x3c
 3102 0fd3 72000000 		.4byte	.LVL59
 3103 0fd7 AC040000 		.4byte	0x4ac
 3104 0fdb E70F0000 		.4byte	0xfe7
 3105 0fdf 3B       		.uleb128 0x3b
 3106 0fe0 01       		.uleb128 0x1
 3107 0fe1 50       		.byte	0x50
 3108 0fe2 03       		.uleb128 0x3
 3109 0fe3 91       		.byte	0x91
 3110 0fe4 AC7F     		.sleb128 -84
 3111 0fe6 00       		.byte	0
 3112 0fe7 3C       		.uleb128 0x3c
 3113 0fe8 7A000000 		.4byte	.LVL60
 3114 0fec 25060000 		.4byte	0x625
 3115 0ff0 01100000 		.4byte	0x1001
 3116 0ff4 3B       		.uleb128 0x3b
 3117 0ff5 01       		.uleb128 0x1
 3118 0ff6 50       		.byte	0x50
 3119 0ff7 03       		.uleb128 0x3
 3120 0ff8 91       		.byte	0x91
 3121 0ff9 AC7F     		.sleb128 -84
 3122 0ffb 3B       		.uleb128 0x3b
 3123 0ffc 01       		.uleb128 0x1
 3124 0ffd 51       		.byte	0x51
 3125 0ffe 01       		.uleb128 0x1
 3126 0fff 3A       		.byte	0x3a
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 68


 3127 1000 00       		.byte	0
 3128 1001 3C       		.uleb128 0x3c
 3129 1002 9E000000 		.4byte	.LVL64
 3130 1006 8B140000 		.4byte	0x148b
 3131 100a 16100000 		.4byte	0x1016
 3132 100e 3B       		.uleb128 0x3b
 3133 100f 01       		.uleb128 0x1
 3134 1010 50       		.byte	0x50
 3135 1011 03       		.uleb128 0x3
 3136 1012 91       		.byte	0x91
 3137 1013 847F     		.sleb128 -124
 3138 1015 00       		.byte	0
 3139 1016 3C       		.uleb128 0x3c
 3140 1017 A4000000 		.4byte	.LVL65
 3141 101b 8B140000 		.4byte	0x148b
 3142 101f 2B100000 		.4byte	0x102b
 3143 1023 3B       		.uleb128 0x3b
 3144 1024 01       		.uleb128 0x1
 3145 1025 50       		.byte	0x50
 3146 1026 03       		.uleb128 0x3
 3147 1027 91       		.byte	0x91
 3148 1028 987F     		.sleb128 -104
 3149 102a 00       		.byte	0
 3150 102b 3C       		.uleb128 0x3c
 3151 102c AA000000 		.4byte	.LVL66
 3152 1030 64050000 		.4byte	0x564
 3153 1034 40100000 		.4byte	0x1040
 3154 1038 3B       		.uleb128 0x3b
 3155 1039 01       		.uleb128 0x1
 3156 103a 50       		.byte	0x50
 3157 103b 03       		.uleb128 0x3
 3158 103c 91       		.byte	0x91
 3159 103d AC7F     		.sleb128 -84
 3160 103f 00       		.byte	0
 3161 1040 3C       		.uleb128 0x3c
 3162 1041 D0000000 		.4byte	.LVL71
 3163 1045 66140000 		.4byte	0x1466
 3164 1049 55100000 		.4byte	0x1055
 3165 104d 3B       		.uleb128 0x3b
 3166 104e 01       		.uleb128 0x1
 3167 104f 50       		.byte	0x50
 3168 1050 03       		.uleb128 0x3
 3169 1051 91       		.byte	0x91
 3170 1052 847F     		.sleb128 -124
 3171 1054 00       		.byte	0
 3172 1055 3C       		.uleb128 0x3c
 3173 1056 EA000000 		.4byte	.LVL72
 3174 105a 66140000 		.4byte	0x1466
 3175 105e 6A100000 		.4byte	0x106a
 3176 1062 3B       		.uleb128 0x3b
 3177 1063 01       		.uleb128 0x1
 3178 1064 50       		.byte	0x50
 3179 1065 03       		.uleb128 0x3
 3180 1066 91       		.byte	0x91
 3181 1067 987F     		.sleb128 -104
 3182 1069 00       		.byte	0
 3183 106a 3C       		.uleb128 0x3c
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 69


 3184 106b 08010000 		.4byte	.LVL75
 3185 106f 01110000 		.4byte	0x1101
 3186 1073 93100000 		.4byte	0x1093
 3187 1077 3B       		.uleb128 0x3b
 3188 1078 01       		.uleb128 0x1
 3189 1079 50       		.byte	0x50
 3190 107a 03       		.uleb128 0x3
 3191 107b 91       		.byte	0x91
 3192 107c AC7F     		.sleb128 -84
 3193 107e 3B       		.uleb128 0x3b
 3194 107f 01       		.uleb128 0x1
 3195 1080 51       		.byte	0x51
 3196 1081 02       		.uleb128 0x2
 3197 1082 09       		.byte	0x9
 3198 1083 B0       		.byte	0xb0
 3199 1084 3B       		.uleb128 0x3b
 3200 1085 01       		.uleb128 0x1
 3201 1086 52       		.byte	0x52
 3202 1087 05       		.uleb128 0x5
 3203 1088 03       		.byte	0x3
 3204 1089 00000000 		.4byte	.LANCHOR2
 3205 108d 3B       		.uleb128 0x3b
 3206 108e 01       		.uleb128 0x1
 3207 108f 53       		.byte	0x53
 3208 1090 01       		.uleb128 0x1
 3209 1091 41       		.byte	0x41
 3210 1092 00       		.byte	0
 3211 1093 3C       		.uleb128 0x3c
 3212 1094 10010000 		.4byte	.LVL77
 3213 1098 56080000 		.4byte	0x856
 3214 109c A8100000 		.4byte	0x10a8
 3215 10a0 3B       		.uleb128 0x3b
 3216 10a1 01       		.uleb128 0x1
 3217 10a2 50       		.byte	0x50
 3218 10a3 03       		.uleb128 0x3
 3219 10a4 91       		.byte	0x91
 3220 10a5 AC7F     		.sleb128 -84
 3221 10a7 00       		.byte	0
 3222 10a8 3C       		.uleb128 0x3c
 3223 10a9 1C010000 		.4byte	.LVL78
 3224 10ad C7040000 		.4byte	0x4c7
 3225 10b1 C3100000 		.4byte	0x10c3
 3226 10b5 3B       		.uleb128 0x3b
 3227 10b6 01       		.uleb128 0x1
 3228 10b7 50       		.byte	0x50
 3229 10b8 03       		.uleb128 0x3
 3230 10b9 91       		.byte	0x91
 3231 10ba AC7F     		.sleb128 -84
 3232 10bc 3B       		.uleb128 0x3b
 3233 10bd 01       		.uleb128 0x1
 3234 10be 51       		.byte	0x51
 3235 10bf 02       		.uleb128 0x2
 3236 10c0 08       		.byte	0x8
 3237 10c1 60       		.byte	0x60
 3238 10c2 00       		.byte	0
 3239 10c3 3C       		.uleb128 0x3c
 3240 10c4 2E010000 		.4byte	.LVL81
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 70


 3241 10c8 EB040000 		.4byte	0x4eb
 3242 10cc E4100000 		.4byte	0x10e4
 3243 10d0 3B       		.uleb128 0x3b
 3244 10d1 01       		.uleb128 0x1
 3245 10d2 50       		.byte	0x50
 3246 10d3 03       		.uleb128 0x3
 3247 10d4 91       		.byte	0x91
 3248 10d5 AC7F     		.sleb128 -84
 3249 10d7 3B       		.uleb128 0x3b
 3250 10d8 01       		.uleb128 0x1
 3251 10d9 51       		.byte	0x51
 3252 10da 02       		.uleb128 0x2
 3253 10db 08       		.byte	0x8
 3254 10dc 61       		.byte	0x61
 3255 10dd 3B       		.uleb128 0x3b
 3256 10de 01       		.uleb128 0x1
 3257 10df 52       		.byte	0x52
 3258 10e0 02       		.uleb128 0x2
 3259 10e1 75       		.byte	0x75
 3260 10e2 00       		.sleb128 0
 3261 10e3 00       		.byte	0
 3262 10e4 3A       		.uleb128 0x3a
 3263 10e5 56010000 		.4byte	.LVL87
 3264 10e9 15050000 		.4byte	0x515
 3265 10ed 3B       		.uleb128 0x3b
 3266 10ee 01       		.uleb128 0x1
 3267 10ef 50       		.byte	0x50
 3268 10f0 03       		.uleb128 0x3
 3269 10f1 91       		.byte	0x91
 3270 10f2 AC7F     		.sleb128 -84
 3271 10f4 3B       		.uleb128 0x3b
 3272 10f5 01       		.uleb128 0x1
 3273 10f6 51       		.byte	0x51
 3274 10f7 02       		.uleb128 0x2
 3275 10f8 09       		.byte	0x9
 3276 10f9 E2       		.byte	0xe2
 3277 10fa 3B       		.uleb128 0x3b
 3278 10fb 01       		.uleb128 0x1
 3279 10fc 52       		.byte	0x52
 3280 10fd 01       		.uleb128 0x1
 3281 10fe 30       		.byte	0x30
 3282 10ff 00       		.byte	0
 3283 1100 00       		.byte	0
 3284 1101 3D       		.uleb128 0x3d
 3285 1102 90100000 		.4byte	.LASF960
 3286 1106 02       		.byte	0x2
 3287 1107 6F       		.byte	0x6f
 3288 1108 74580000 		.4byte	.LASF962
 3289 110c 00000000 		.4byte	.LFB63
 3290 1110 3C000000 		.4byte	.LFE63-.LFB63
 3291 1114 01       		.uleb128 0x1
 3292 1115 9C       		.byte	0x9c
 3293 1116 FC110000 		.4byte	0x11fc
 3294 111a 3E       		.uleb128 0x3e
 3295 111b 135D0000 		.4byte	.LASF955
 3296 111f 02       		.byte	0x2
 3297 1120 70       		.byte	0x70
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 71


 3298 1121 FC110000 		.4byte	0x11fc
 3299 1125 95030000 		.4byte	.LLST14
 3300 1129 3E       		.uleb128 0x3e
 3301 112a 300A0000 		.4byte	.LASF963
 3302 112e 02       		.byte	0x2
 3303 112f 70       		.byte	0x70
 3304 1130 30000000 		.4byte	0x30
 3305 1134 C1030000 		.4byte	.LLST15
 3306 1138 3E       		.uleb128 0x3e
 3307 1139 4B1E0000 		.4byte	.LASF964
 3308 113d 02       		.byte	0x2
 3309 113e 71       		.byte	0x71
 3310 113f 5D090000 		.4byte	0x95d
 3311 1143 E2030000 		.4byte	.LLST16
 3312 1147 3F       		.uleb128 0x3f
 3313 1148 6C656E00 		.ascii	"len\000"
 3314 114c 02       		.byte	0x2
 3315 114d 71       		.byte	0x71
 3316 114e 30000000 		.4byte	0x30
 3317 1152 0E040000 		.4byte	.LLST17
 3318 1156 39       		.uleb128 0x39
 3319 1157 02120000 		.4byte	0x1202
 3320 115b 20000000 		.4byte	.LBB46
 3321 115f 06000000 		.4byte	.LBE46-.LBB46
 3322 1163 02       		.byte	0x2
 3323 1164 76       		.byte	0x76
 3324 1165 83110000 		.4byte	0x1183
 3325 1169 37       		.uleb128 0x37
 3326 116a 12120000 		.4byte	0x1212
 3327 116e 2F040000 		.4byte	.LLST18
 3328 1172 3A       		.uleb128 0x3a
 3329 1173 26000000 		.4byte	.LVL44
 3330 1177 DC150000 		.4byte	0x15dc
 3331 117b 3B       		.uleb128 0x3b
 3332 117c 01       		.uleb128 0x1
 3333 117d 50       		.byte	0x50
 3334 117e 02       		.uleb128 0x2
 3335 117f 08       		.byte	0x8
 3336 1180 64       		.byte	0x64
 3337 1181 00       		.byte	0
 3338 1182 00       		.byte	0
 3339 1183 39       		.uleb128 0x39
 3340 1184 02120000 		.4byte	0x1202
 3341 1188 26000000 		.4byte	.LBB48
 3342 118c 06000000 		.4byte	.LBE48-.LBB48
 3343 1190 02       		.byte	0x2
 3344 1191 77       		.byte	0x77
 3345 1192 B1110000 		.4byte	0x11b1
 3346 1196 37       		.uleb128 0x37
 3347 1197 12120000 		.4byte	0x1212
 3348 119b 44040000 		.4byte	.LLST19
 3349 119f 3A       		.uleb128 0x3a
 3350 11a0 2C000000 		.4byte	.LVL45
 3351 11a4 DC150000 		.4byte	0x15dc
 3352 11a8 3B       		.uleb128 0x3b
 3353 11a9 01       		.uleb128 0x1
 3354 11aa 50       		.byte	0x50
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 72


 3355 11ab 03       		.uleb128 0x3
 3356 11ac 0A       		.byte	0xa
 3357 11ad 1027     		.2byte	0x2710
 3358 11af 00       		.byte	0
 3359 11b0 00       		.byte	0
 3360 11b1 3C       		.uleb128 0x3c
 3361 11b2 0E000000 		.4byte	.LVL42
 3362 11b6 83050000 		.4byte	0x583
 3363 11ba C5110000 		.4byte	0x11c5
 3364 11be 3B       		.uleb128 0x3b
 3365 11bf 01       		.uleb128 0x1
 3366 11c0 50       		.byte	0x50
 3367 11c1 02       		.uleb128 0x2
 3368 11c2 74       		.byte	0x74
 3369 11c3 00       		.sleb128 0
 3370 11c4 00       		.byte	0
 3371 11c5 3C       		.uleb128 0x3c
 3372 11c6 20000000 		.4byte	.LVL43
 3373 11ca 3A050000 		.4byte	0x53a
 3374 11ce EB110000 		.4byte	0x11eb
 3375 11d2 3B       		.uleb128 0x3b
 3376 11d3 01       		.uleb128 0x1
 3377 11d4 50       		.byte	0x50
 3378 11d5 02       		.uleb128 0x2
 3379 11d6 74       		.byte	0x74
 3380 11d7 00       		.sleb128 0
 3381 11d8 3B       		.uleb128 0x3b
 3382 11d9 01       		.uleb128 0x1
 3383 11da 51       		.byte	0x51
 3384 11db 02       		.uleb128 0x2
 3385 11dc 75       		.byte	0x75
 3386 11dd 00       		.sleb128 0
 3387 11de 3B       		.uleb128 0x3b
 3388 11df 01       		.uleb128 0x1
 3389 11e0 52       		.byte	0x52
 3390 11e1 02       		.uleb128 0x2
 3391 11e2 76       		.byte	0x76
 3392 11e3 00       		.sleb128 0
 3393 11e4 3B       		.uleb128 0x3b
 3394 11e5 01       		.uleb128 0x1
 3395 11e6 53       		.byte	0x53
 3396 11e7 02       		.uleb128 0x2
 3397 11e8 77       		.byte	0x77
 3398 11e9 00       		.sleb128 0
 3399 11ea 00       		.byte	0
 3400 11eb 3A       		.uleb128 0x3a
 3401 11ec 32000000 		.4byte	.LVL46
 3402 11f0 9E050000 		.4byte	0x59e
 3403 11f4 3B       		.uleb128 0x3b
 3404 11f5 01       		.uleb128 0x1
 3405 11f6 50       		.byte	0x50
 3406 11f7 02       		.uleb128 0x2
 3407 11f8 74       		.byte	0x74
 3408 11f9 00       		.sleb128 0
 3409 11fa 00       		.byte	0
 3410 11fb 00       		.byte	0
 3411 11fc 22       		.uleb128 0x22
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 73


 3412 11fd 04       		.byte	0x4
 3413 11fe A7030000 		.4byte	0x3a7
 3414 1202 40       		.uleb128 0x40
 3415 1203 350A0000 		.4byte	.LASF859
 3416 1207 02       		.byte	0x2
 3417 1208 68       		.byte	0x68
 3418 1209 A4570000 		.4byte	.LASF992
 3419 120d 01       		.byte	0x1
 3420 120e 1C120000 		.4byte	0x121c
 3421 1212 41       		.uleb128 0x41
 3422 1213 6E00     		.ascii	"n\000"
 3423 1215 02       		.byte	0x2
 3424 1216 68       		.byte	0x68
 3425 1217 7D000000 		.4byte	0x7d
 3426 121b 00       		.byte	0
 3427 121c 3D       		.uleb128 0x3d
 3428 121d 730E0000 		.4byte	.LASF858
 3429 1221 02       		.byte	0x2
 3430 1222 67       		.byte	0x67
 3431 1223 DE410000 		.4byte	.LASF965
 3432 1227 00000000 		.4byte	.LFB61
 3433 122b 0E000000 		.4byte	.LFE61-.LFB61
 3434 122f 01       		.uleb128 0x1
 3435 1230 9C       		.byte	0x9c
 3436 1231 58120000 		.4byte	0x1258
 3437 1235 3F       		.uleb128 0x3f
 3438 1236 6E00     		.ascii	"n\000"
 3439 1238 02       		.byte	0x2
 3440 1239 67       		.byte	0x67
 3441 123a 7D000000 		.4byte	0x7d
 3442 123e 5A040000 		.4byte	.LLST5
 3443 1242 3A       		.uleb128 0x3a
 3444 1243 0C000000 		.4byte	.LVL16
 3445 1247 DC150000 		.4byte	0x15dc
 3446 124b 3B       		.uleb128 0x3b
 3447 124c 01       		.uleb128 0x1
 3448 124d 50       		.byte	0x50
 3449 124e 07       		.uleb128 0x7
 3450 124f F3       		.byte	0xf3
 3451 1250 01       		.uleb128 0x1
 3452 1251 50       		.byte	0x50
 3453 1252 0A       		.byte	0xa
 3454 1253 E803     		.2byte	0x3e8
 3455 1255 1E       		.byte	0x1e
 3456 1256 00       		.byte	0
 3457 1257 00       		.byte	0
 3458 1258 3D       		.uleb128 0x3d
 3459 1259 4E510000 		.4byte	.LASF966
 3460 125d 02       		.byte	0x2
 3461 125e 5E       		.byte	0x5e
 3462 125f 65090000 		.4byte	.LASF967
 3463 1263 00000000 		.4byte	.LFB60
 3464 1267 28000000 		.4byte	.LFE60-.LFB60
 3465 126b 01       		.uleb128 0x1
 3466 126c 9C       		.byte	0x9c
 3467 126d DE120000 		.4byte	0x12de
 3468 1271 3F       		.uleb128 0x3f
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 74


 3469 1272 6C656400 		.ascii	"led\000"
 3470 1276 02       		.byte	0x2
 3471 1277 5E       		.byte	0x5e
 3472 1278 28090000 		.4byte	0x928
 3473 127c 7B040000 		.4byte	.LLST12
 3474 1280 3E       		.uleb128 0x3e
 3475 1281 780B0000 		.4byte	.LASF968
 3476 1285 02       		.byte	0x2
 3477 1286 5E       		.byte	0x5e
 3478 1287 7D000000 		.4byte	0x7d
 3479 128b 99040000 		.4byte	.LLST13
 3480 128f 42       		.uleb128 0x42
 3481 1290 10000000 		.4byte	.LVL37
 3482 1294 A4120000 		.4byte	0x12a4
 3483 1298 3B       		.uleb128 0x3b
 3484 1299 01       		.uleb128 0x1
 3485 129a 50       		.byte	0x50
 3486 129b 02       		.uleb128 0x2
 3487 129c 74       		.byte	0x74
 3488 129d 00       		.sleb128 0
 3489 129e 3B       		.uleb128 0x3b
 3490 129f 01       		.uleb128 0x1
 3491 12a0 51       		.byte	0x51
 3492 12a1 01       		.uleb128 0x1
 3493 12a2 31       		.byte	0x31
 3494 12a3 00       		.byte	0
 3495 12a4 3C       		.uleb128 0x3c
 3496 12a5 16000000 		.4byte	.LVL38
 3497 12a9 DC150000 		.4byte	0x15dc
 3498 12ad B8120000 		.4byte	0x12b8
 3499 12b1 3B       		.uleb128 0x3b
 3500 12b2 01       		.uleb128 0x1
 3501 12b3 50       		.byte	0x50
 3502 12b4 02       		.uleb128 0x2
 3503 12b5 75       		.byte	0x75
 3504 12b6 00       		.sleb128 0
 3505 12b7 00       		.byte	0
 3506 12b8 42       		.uleb128 0x42
 3507 12b9 20000000 		.4byte	.LVL39
 3508 12bd CD120000 		.4byte	0x12cd
 3509 12c1 3B       		.uleb128 0x3b
 3510 12c2 01       		.uleb128 0x1
 3511 12c3 50       		.byte	0x50
 3512 12c4 02       		.uleb128 0x2
 3513 12c5 74       		.byte	0x74
 3514 12c6 00       		.sleb128 0
 3515 12c7 3B       		.uleb128 0x3b
 3516 12c8 01       		.uleb128 0x1
 3517 12c9 51       		.byte	0x51
 3518 12ca 01       		.uleb128 0x1
 3519 12cb 30       		.byte	0x30
 3520 12cc 00       		.byte	0
 3521 12cd 3A       		.uleb128 0x3a
 3522 12ce 26000000 		.4byte	.LVL40
 3523 12d2 DC150000 		.4byte	0x15dc
 3524 12d6 3B       		.uleb128 0x3b
 3525 12d7 01       		.uleb128 0x1
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 75


 3526 12d8 50       		.byte	0x50
 3527 12d9 02       		.uleb128 0x2
 3528 12da 75       		.byte	0x75
 3529 12db 00       		.sleb128 0
 3530 12dc 00       		.byte	0
 3531 12dd 00       		.byte	0
 3532 12de 3D       		.uleb128 0x3d
 3533 12df 212E0000 		.4byte	.LASF969
 3534 12e3 02       		.byte	0x2
 3535 12e4 41       		.byte	0x41
 3536 12e5 C0260000 		.4byte	.LASF970
 3537 12e9 00000000 		.4byte	.LFB59
 3538 12ed 60000000 		.4byte	.LFE59-.LFB59
 3539 12f1 01       		.uleb128 0x1
 3540 12f2 9C       		.byte	0x9c
 3541 12f3 0B140000 		.4byte	0x140b
 3542 12f7 3E       		.uleb128 0x3e
 3543 12f8 135D0000 		.4byte	.LASF955
 3544 12fc 02       		.byte	0x2
 3545 12fd 41       		.byte	0x41
 3546 12fe FC110000 		.4byte	0x11fc
 3547 1302 B7040000 		.4byte	.LLST7
 3548 1306 3F       		.uleb128 0x3f
 3549 1307 6C656400 		.ascii	"led\000"
 3550 130b 02       		.byte	0x2
 3551 130c 41       		.byte	0x41
 3552 130d 28090000 		.4byte	0x928
 3553 1311 EE040000 		.4byte	.LLST8
 3554 1315 33       		.uleb128 0x33
 3555 1316 6C656E00 		.ascii	"len\000"
 3556 131a 02       		.byte	0x2
 3557 131b 42       		.byte	0x42
 3558 131c 30000000 		.4byte	0x30
 3559 1320 25050000 		.4byte	.LLST9
 3560 1324 33       		.uleb128 0x33
 3561 1325 6900     		.ascii	"i\000"
 3562 1327 02       		.byte	0x2
 3563 1328 42       		.byte	0x42
 3564 1329 30000000 		.4byte	0x30
 3565 132d 43050000 		.4byte	.LLST10
 3566 1331 34       		.uleb128 0x34
 3567 1332 5D460000 		.4byte	.LASF958
 3568 1336 02       		.byte	0x2
 3569 1337 42       		.byte	0x42
 3570 1338 30000000 		.4byte	0x30
 3571 133c 43050000 		.4byte	.LLST10
 3572 1340 2B       		.uleb128 0x2b
 3573 1341 083A0000 		.4byte	.LASF959
 3574 1345 02       		.byte	0x2
 3575 1346 43       		.byte	0x43
 3576 1347 97030000 		.4byte	0x397
 3577 134b 02       		.uleb128 0x2
 3578 134c 91       		.byte	0x91
 3579 134d 50       		.sleb128 -48
 3580 134e 3C       		.uleb128 0x3c
 3581 134f 0C000000 		.4byte	.LVL20
 3582 1353 56080000 		.4byte	0x856
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 76


 3583 1357 62130000 		.4byte	0x1362
 3584 135b 3B       		.uleb128 0x3b
 3585 135c 01       		.uleb128 0x1
 3586 135d 50       		.byte	0x50
 3587 135e 02       		.uleb128 0x2
 3588 135f 74       		.byte	0x74
 3589 1360 00       		.sleb128 0
 3590 1361 00       		.byte	0
 3591 1362 3C       		.uleb128 0x3c
 3592 1363 18000000 		.4byte	.LVL21
 3593 1367 C7040000 		.4byte	0x4c7
 3594 136b 7C130000 		.4byte	0x137c
 3595 136f 3B       		.uleb128 0x3b
 3596 1370 01       		.uleb128 0x1
 3597 1371 50       		.byte	0x50
 3598 1372 02       		.uleb128 0x2
 3599 1373 74       		.byte	0x74
 3600 1374 00       		.sleb128 0
 3601 1375 3B       		.uleb128 0x3b
 3602 1376 01       		.uleb128 0x1
 3603 1377 51       		.byte	0x51
 3604 1378 02       		.uleb128 0x2
 3605 1379 08       		.byte	0x8
 3606 137a 60       		.byte	0x60
 3607 137b 00       		.byte	0
 3608 137c 3C       		.uleb128 0x3c
 3609 137d 28000000 		.4byte	.LVL24
 3610 1381 EB040000 		.4byte	0x4eb
 3611 1385 9C130000 		.4byte	0x139c
 3612 1389 3B       		.uleb128 0x3b
 3613 138a 01       		.uleb128 0x1
 3614 138b 50       		.byte	0x50
 3615 138c 02       		.uleb128 0x2
 3616 138d 74       		.byte	0x74
 3617 138e 00       		.sleb128 0
 3618 138f 3B       		.uleb128 0x3b
 3619 1390 01       		.uleb128 0x1
 3620 1391 51       		.byte	0x51
 3621 1392 02       		.uleb128 0x2
 3622 1393 08       		.byte	0x8
 3623 1394 61       		.byte	0x61
 3624 1395 3B       		.uleb128 0x3b
 3625 1396 01       		.uleb128 0x1
 3626 1397 52       		.byte	0x52
 3627 1398 02       		.uleb128 0x2
 3628 1399 7D       		.byte	0x7d
 3629 139a 00       		.sleb128 0
 3630 139b 00       		.byte	0
 3631 139c 3C       		.uleb128 0x3c
 3632 139d 2E000000 		.4byte	.LVL25
 3633 13a1 56080000 		.4byte	0x856
 3634 13a5 B0130000 		.4byte	0x13b0
 3635 13a9 3B       		.uleb128 0x3b
 3636 13aa 01       		.uleb128 0x1
 3637 13ab 50       		.byte	0x50
 3638 13ac 02       		.uleb128 0x2
 3639 13ad 74       		.byte	0x74
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 77


 3640 13ae 00       		.sleb128 0
 3641 13af 00       		.byte	0
 3642 13b0 42       		.uleb128 0x42
 3643 13b1 3C000000 		.4byte	.LVL27
 3644 13b5 C5130000 		.4byte	0x13c5
 3645 13b9 3B       		.uleb128 0x3b
 3646 13ba 01       		.uleb128 0x1
 3647 13bb 50       		.byte	0x50
 3648 13bc 02       		.uleb128 0x2
 3649 13bd 75       		.byte	0x75
 3650 13be 00       		.sleb128 0
 3651 13bf 3B       		.uleb128 0x3b
 3652 13c0 01       		.uleb128 0x1
 3653 13c1 51       		.byte	0x51
 3654 13c2 01       		.uleb128 0x1
 3655 13c3 30       		.byte	0x30
 3656 13c4 00       		.byte	0
 3657 13c5 3C       		.uleb128 0x3c
 3658 13c6 42000000 		.4byte	.LVL28
 3659 13ca DC150000 		.4byte	0x15dc
 3660 13ce DA130000 		.4byte	0x13da
 3661 13d2 3B       		.uleb128 0x3b
 3662 13d3 01       		.uleb128 0x1
 3663 13d4 50       		.byte	0x50
 3664 13d5 03       		.uleb128 0x3
 3665 13d6 0A       		.byte	0xa
 3666 13d7 50C3     		.2byte	0xc350
 3667 13d9 00       		.byte	0
 3668 13da 42       		.uleb128 0x42
 3669 13db 4C000000 		.4byte	.LVL29
 3670 13df EF130000 		.4byte	0x13ef
 3671 13e3 3B       		.uleb128 0x3b
 3672 13e4 01       		.uleb128 0x1
 3673 13e5 50       		.byte	0x50
 3674 13e6 02       		.uleb128 0x2
 3675 13e7 75       		.byte	0x75
 3676 13e8 00       		.sleb128 0
 3677 13e9 3B       		.uleb128 0x3b
 3678 13ea 01       		.uleb128 0x1
 3679 13eb 51       		.byte	0x51
 3680 13ec 01       		.uleb128 0x1
 3681 13ed 31       		.byte	0x31
 3682 13ee 00       		.byte	0
 3683 13ef 3A       		.uleb128 0x3a
 3684 13f0 5A000000 		.4byte	.LVL34
 3685 13f4 15050000 		.4byte	0x515
 3686 13f8 3B       		.uleb128 0x3b
 3687 13f9 01       		.uleb128 0x1
 3688 13fa 50       		.byte	0x50
 3689 13fb 02       		.uleb128 0x2
 3690 13fc 74       		.byte	0x74
 3691 13fd 00       		.sleb128 0
 3692 13fe 3B       		.uleb128 0x3b
 3693 13ff 01       		.uleb128 0x1
 3694 1400 51       		.byte	0x51
 3695 1401 02       		.uleb128 0x2
 3696 1402 09       		.byte	0x9
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 78


 3697 1403 E2       		.byte	0xe2
 3698 1404 3B       		.uleb128 0x3b
 3699 1405 01       		.uleb128 0x1
 3700 1406 52       		.byte	0x52
 3701 1407 01       		.uleb128 0x1
 3702 1408 30       		.byte	0x30
 3703 1409 00       		.byte	0
 3704 140a 00       		.byte	0
 3705 140b 43       		.uleb128 0x43
 3706 140c 7C090000 		.4byte	0x97c
 3707 1410 1D140000 		.4byte	0x141d
 3708 1414 03       		.byte	0x3
 3709 1415 1D140000 		.4byte	0x141d
 3710 1419 3D140000 		.4byte	0x143d
 3711 141d 44       		.uleb128 0x44
 3712 141e 3E200000 		.4byte	.LASF972
 3713 1422 DC0A0000 		.4byte	0xadc
 3714 1426 45       		.uleb128 0x45
 3715 1427 09560000 		.4byte	.LASF971
 3716 142b 02       		.byte	0x2
 3717 142c 3C       		.byte	0x3c
 3718 142d 7D000000 		.4byte	0x7d
 3719 1431 41       		.uleb128 0x41
 3720 1432 70696E00 		.ascii	"pin\000"
 3721 1436 02       		.byte	0x2
 3722 1437 3C       		.byte	0x3c
 3723 1438 7D000000 		.4byte	0x7d
 3724 143c 00       		.byte	0
 3725 143d 46       		.uleb128 0x46
 3726 143e AE0A0000 		.4byte	0xaae
 3727 1442 58140000 		.4byte	0x1458
 3728 1446 00000000 		.4byte	.LFB45
 3729 144a 0C000000 		.4byte	.LFE45-.LFB45
 3730 144e 01       		.uleb128 0x1
 3731 144f 9C       		.byte	0x9c
 3732 1450 58140000 		.4byte	0x1458
 3733 1454 66140000 		.4byte	0x1466
 3734 1458 47       		.uleb128 0x47
 3735 1459 3E200000 		.4byte	.LASF972
 3736 145d 350B0000 		.4byte	0xb35
 3737 1461 57050000 		.4byte	.LLST3
 3738 1465 00       		.byte	0
 3739 1466 43       		.uleb128 0x43
 3740 1467 870A0000 		.4byte	0xa87
 3741 146b 78140000 		.4byte	0x1478
 3742 146f 03       		.byte	0x3
 3743 1470 78140000 		.4byte	0x1478
 3744 1474 8B140000 		.4byte	0x148b
 3745 1478 44       		.uleb128 0x44
 3746 1479 3E200000 		.4byte	.LASF972
 3747 147d 350B0000 		.4byte	0xb35
 3748 1481 41       		.uleb128 0x41
 3749 1482 7800     		.ascii	"x\000"
 3750 1484 02       		.byte	0x2
 3751 1485 31       		.byte	0x31
 3752 1486 63090000 		.4byte	0x963
 3753 148a 00       		.byte	0
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 79


 3754 148b 46       		.uleb128 0x46
 3755 148c 650A0000 		.4byte	0xa65
 3756 1490 A6140000 		.4byte	0x14a6
 3757 1494 00000000 		.4byte	.LFB43
 3758 1498 0C000000 		.4byte	.LFE43-.LFB43
 3759 149c 01       		.uleb128 0x1
 3760 149d 9C       		.byte	0x9c
 3761 149e A6140000 		.4byte	0x14a6
 3762 14a2 B2140000 		.4byte	0x14b2
 3763 14a6 48       		.uleb128 0x48
 3764 14a7 3E200000 		.4byte	.LASF972
 3765 14ab 350B0000 		.4byte	0xb35
 3766 14af 01       		.uleb128 0x1
 3767 14b0 50       		.byte	0x50
 3768 14b1 00       		.byte	0
 3769 14b2 46       		.uleb128 0x46
 3770 14b3 430A0000 		.4byte	0xa43
 3771 14b7 CD140000 		.4byte	0x14cd
 3772 14bb 00000000 		.4byte	.LFB42
 3773 14bf 0C000000 		.4byte	.LFE42-.LFB42
 3774 14c3 01       		.uleb128 0x1
 3775 14c4 9C       		.byte	0x9c
 3776 14c5 CD140000 		.4byte	0x14cd
 3777 14c9 D9140000 		.4byte	0x14d9
 3778 14cd 48       		.uleb128 0x48
 3779 14ce 3E200000 		.4byte	.LASF972
 3780 14d2 350B0000 		.4byte	0xb35
 3781 14d6 01       		.uleb128 0x1
 3782 14d7 50       		.byte	0x50
 3783 14d8 00       		.byte	0
 3784 14d9 49       		.uleb128 0x49
 3785 14da 1B0A0000 		.4byte	0xa1b
 3786 14de 02       		.byte	0x2
 3787 14df E7140000 		.4byte	0x14e7
 3788 14e3 07150000 		.4byte	0x1507
 3789 14e7 44       		.uleb128 0x44
 3790 14e8 3E200000 		.4byte	.LASF972
 3791 14ec 350B0000 		.4byte	0xb35
 3792 14f0 45       		.uleb128 0x45
 3793 14f1 09560000 		.4byte	.LASF971
 3794 14f5 02       		.byte	0x2
 3795 14f6 24       		.byte	0x24
 3796 14f7 7D000000 		.4byte	0x7d
 3797 14fb 41       		.uleb128 0x41
 3798 14fc 70696E00 		.ascii	"pin\000"
 3799 1500 02       		.byte	0x2
 3800 1501 24       		.byte	0x24
 3801 1502 7D000000 		.4byte	0x7d
 3802 1506 00       		.byte	0
 3803 1507 4A       		.uleb128 0x4a
 3804 1508 D9140000 		.4byte	0x14d9
 3805 150c 82560000 		.4byte	.LASF973
 3806 1510 18150000 		.4byte	0x1518
 3807 1514 28150000 		.4byte	0x1528
 3808 1518 4B       		.uleb128 0x4b
 3809 1519 E7140000 		.4byte	0x14e7
 3810 151d 4B       		.uleb128 0x4b
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 80


 3811 151e F0140000 		.4byte	0x14f0
 3812 1522 4B       		.uleb128 0x4b
 3813 1523 FB140000 		.4byte	0x14fb
 3814 1527 00       		.byte	0
 3815 1528 4C       		.uleb128 0x4c
 3816 1529 0D030000 		.4byte	0x30d
 3817 152d 01       		.byte	0x1
 3818 152e 1A       		.byte	0x1a
 3819 152f 02       		.byte	0x2
 3820 1530 38150000 		.4byte	0x1538
 3821 1534 42150000 		.4byte	0x1542
 3822 1538 44       		.uleb128 0x44
 3823 1539 3E200000 		.4byte	.LASF972
 3824 153d 480B0000 		.4byte	0xb48
 3825 1541 00       		.byte	0
 3826 1542 4A       		.uleb128 0x4a
 3827 1543 28150000 		.4byte	0x1528
 3828 1547 DB5C0000 		.4byte	.LASF974
 3829 154b 53150000 		.4byte	0x1553
 3830 154f 59150000 		.4byte	0x1559
 3831 1553 4B       		.uleb128 0x4b
 3832 1554 38150000 		.4byte	0x1538
 3833 1558 00       		.byte	0
 3834 1559 4C       		.uleb128 0x4c
 3835 155a 47020000 		.4byte	0x247
 3836 155e 01       		.byte	0x1
 3837 155f 12       		.byte	0x12
 3838 1560 02       		.byte	0x2
 3839 1561 69150000 		.4byte	0x1569
 3840 1565 73150000 		.4byte	0x1573
 3841 1569 44       		.uleb128 0x44
 3842 156a 3E200000 		.4byte	.LASF972
 3843 156e 740B0000 		.4byte	0xb74
 3844 1572 00       		.byte	0
 3845 1573 4A       		.uleb128 0x4a
 3846 1574 59150000 		.4byte	0x1559
 3847 1578 DB530000 		.4byte	.LASF975
 3848 157c 84150000 		.4byte	0x1584
 3849 1580 8A150000 		.4byte	0x158a
 3850 1584 4B       		.uleb128 0x4b
 3851 1585 69150000 		.4byte	0x1569
 3852 1589 00       		.byte	0
 3853 158a 4C       		.uleb128 0x4c
 3854 158b 83010000 		.4byte	0x183
 3855 158f 01       		.byte	0x1
 3856 1590 0C       		.byte	0xc
 3857 1591 02       		.byte	0x2
 3858 1592 9A150000 		.4byte	0x159a
 3859 1596 A4150000 		.4byte	0x15a4
 3860 159a 44       		.uleb128 0x44
 3861 159b 3E200000 		.4byte	.LASF972
 3862 159f 850B0000 		.4byte	0xb85
 3863 15a3 00       		.byte	0
 3864 15a4 4A       		.uleb128 0x4a
 3865 15a5 8A150000 		.4byte	0x158a
 3866 15a9 43110000 		.4byte	.LASF976
 3867 15ad B5150000 		.4byte	0x15b5
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 81


 3868 15b1 BB150000 		.4byte	0x15bb
 3869 15b5 4B       		.uleb128 0x4b
 3870 15b6 9A150000 		.4byte	0x159a
 3871 15ba 00       		.byte	0
 3872 15bb 4D       		.uleb128 0x4d
 3873 15bc FD090000 		.4byte	0x9fd
 3874 15c0 03       		.byte	0x3
 3875 15c1 DC150000 		.4byte	0x15dc
 3876 15c5 45       		.uleb128 0x45
 3877 15c6 09560000 		.4byte	.LASF971
 3878 15ca 02       		.byte	0x2
 3879 15cb 1F       		.byte	0x1f
 3880 15cc 7D000000 		.4byte	0x7d
 3881 15d0 45       		.uleb128 0x45
 3882 15d1 D9400000 		.4byte	.LASF977
 3883 15d5 02       		.byte	0x2
 3884 15d6 1F       		.byte	0x1f
 3885 15d7 7D000000 		.4byte	0x7d
 3886 15db 00       		.byte	0
 3887 15dc 3D       		.uleb128 0x3d
 3888 15dd 653A0000 		.4byte	.LASF978
 3889 15e1 02       		.byte	0x2
 3890 15e2 0C       		.byte	0xc
 3891 15e3 895B0000 		.4byte	.LASF979
 3892 15e7 00000000 		.4byte	.LFB28
 3893 15eb 40000000 		.4byte	.LFE28-.LFB28
 3894 15ef 01       		.uleb128 0x1
 3895 15f0 9C       		.byte	0x9c
 3896 15f1 13160000 		.4byte	0x1613
 3897 15f5 3F       		.uleb128 0x3f
 3898 15f6 7400     		.ascii	"t\000"
 3899 15f8 02       		.byte	0x2
 3900 15f9 0C       		.byte	0xc
 3901 15fa 7D000000 		.4byte	0x7d
 3902 15fe 78050000 		.4byte	.LLST4
 3903 1602 3A       		.uleb128 0x3a
 3904 1603 12000000 		.4byte	.LVL11
 3905 1607 DC150000 		.4byte	0x15dc
 3906 160b 3B       		.uleb128 0x3b
 3907 160c 01       		.uleb128 0x1
 3908 160d 50       		.byte	0x50
 3909 160e 02       		.uleb128 0x2
 3910 160f 75       		.byte	0x75
 3911 1610 00       		.sleb128 0
 3912 1611 00       		.byte	0
 3913 1612 00       		.byte	0
 3914 1613 49       		.uleb128 0x49
 3915 1614 31040000 		.4byte	0x431
 3916 1618 02       		.byte	0x2
 3917 1619 21160000 		.4byte	0x1621
 3918 161d 7E160000 		.4byte	0x167e
 3919 1621 44       		.uleb128 0x44
 3920 1622 3E200000 		.4byte	.LASF972
 3921 1626 4B090000 		.4byte	0x94b
 3922 162a 4E       		.uleb128 0x4e
 3923 162b 8B020000 		.4byte	.LASF855
 3924 162f 03       		.byte	0x3
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 82


 3925 1630 9201     		.2byte	0x192
 3926 1632 28090000 		.4byte	0x928
 3927 1636 4E       		.uleb128 0x4e
 3928 1637 71220000 		.4byte	.LASF856
 3929 163b 03       		.byte	0x3
 3930 163c 9301     		.2byte	0x193
 3931 163e 28090000 		.4byte	0x928
 3932 1642 4E       		.uleb128 0x4e
 3933 1643 7F0C0000 		.4byte	.LASF857
 3934 1647 03       		.byte	0x3
 3935 1648 9401     		.2byte	0x194
 3936 164a 2E090000 		.4byte	0x92e
 3937 164e 4F       		.uleb128 0x4f
 3938 164f 63736E00 		.ascii	"csn\000"
 3939 1653 03       		.byte	0x3
 3940 1654 9501     		.2byte	0x195
 3941 1656 28090000 		.4byte	0x928
 3942 165a 4F       		.uleb128 0x4f
 3943 165b 636500   		.ascii	"ce\000"
 3944 165e 03       		.byte	0x3
 3945 165f 9601     		.2byte	0x196
 3946 1661 28090000 		.4byte	0x928
 3947 1665 4E       		.uleb128 0x4e
 3948 1666 730E0000 		.4byte	.LASF858
 3949 166a 03       		.byte	0x3
 3950 166b 9801     		.2byte	0x198
 3951 166d 3F090000 		.4byte	0x93f
 3952 1671 4E       		.uleb128 0x4e
 3953 1672 350A0000 		.4byte	.LASF859
 3954 1676 03       		.byte	0x3
 3955 1677 9901     		.2byte	0x199
 3956 1679 3F090000 		.4byte	0x93f
 3957 167d 00       		.byte	0
 3958 167e 4A       		.uleb128 0x4a
 3959 167f 13160000 		.4byte	0x1613
 3960 1683 59180000 		.4byte	.LASF980
 3961 1687 8F160000 		.4byte	0x168f
 3962 168b B8160000 		.4byte	0x16b8
 3963 168f 4B       		.uleb128 0x4b
 3964 1690 21160000 		.4byte	0x1621
 3965 1694 4B       		.uleb128 0x4b
 3966 1695 2A160000 		.4byte	0x162a
 3967 1699 4B       		.uleb128 0x4b
 3968 169a 36160000 		.4byte	0x1636
 3969 169e 4B       		.uleb128 0x4b
 3970 169f 42160000 		.4byte	0x1642
 3971 16a3 4B       		.uleb128 0x4b
 3972 16a4 4E160000 		.4byte	0x164e
 3973 16a8 4B       		.uleb128 0x4b
 3974 16a9 5A160000 		.4byte	0x165a
 3975 16ad 4B       		.uleb128 0x4b
 3976 16ae 65160000 		.4byte	0x1665
 3977 16b2 4B       		.uleb128 0x4b
 3978 16b3 71160000 		.4byte	0x1671
 3979 16b7 00       		.byte	0
 3980 16b8 50       		.uleb128 0x50
 3981 16b9 72030000 		.4byte	0x372
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 83


 3982 16bd C5160000 		.4byte	0x16c5
 3983 16c1 CF160000 		.4byte	0x16cf
 3984 16c5 44       		.uleb128 0x44
 3985 16c6 3E200000 		.4byte	.LASF972
 3986 16ca 480B0000 		.4byte	0xb48
 3987 16ce 00       		.byte	0
 3988 16cf 50       		.uleb128 0x50
 3989 16d0 50030000 		.4byte	0x350
 3990 16d4 DC160000 		.4byte	0x16dc
 3991 16d8 E6160000 		.4byte	0x16e6
 3992 16dc 44       		.uleb128 0x44
 3993 16dd 3E200000 		.4byte	.LASF972
 3994 16e1 480B0000 		.4byte	0xb48
 3995 16e5 00       		.byte	0
 3996 16e6 51       		.uleb128 0x51
 3997 16e7 29030000 		.4byte	0x329
 3998 16eb 01170000 		.4byte	0x1701
 3999 16ef 00000000 		.4byte	.LFB22
 4000 16f3 12000000 		.4byte	.LFE22-.LFB22
 4001 16f7 01       		.uleb128 0x1
 4002 16f8 9C       		.byte	0x9c
 4003 16f9 01170000 		.4byte	0x1701
 4004 16fd 1C170000 		.4byte	0x171c
 4005 1701 47       		.uleb128 0x47
 4006 1702 3E200000 		.4byte	.LASF972
 4007 1706 480B0000 		.4byte	0xb48
 4008 170a 96050000 		.4byte	.LLST0
 4009 170e 3F       		.uleb128 0x3f
 4010 170f 6400     		.ascii	"d\000"
 4011 1711 01       		.byte	0x1
 4012 1712 1C       		.byte	0x1c
 4013 1713 08010000 		.4byte	0x108
 4014 1717 C2050000 		.4byte	.LLST1
 4015 171b 00       		.byte	0
 4016 171c 50       		.uleb128 0x50
 4017 171d 89020000 		.4byte	0x289
 4018 1721 29170000 		.4byte	0x1729
 4019 1725 33170000 		.4byte	0x1733
 4020 1729 44       		.uleb128 0x44
 4021 172a 3E200000 		.4byte	.LASF972
 4022 172e 740B0000 		.4byte	0xb74
 4023 1732 00       		.byte	0
 4024 1733 50       		.uleb128 0x50
 4025 1734 C6010000 		.4byte	0x1c6
 4026 1738 40170000 		.4byte	0x1740
 4027 173c 4A170000 		.4byte	0x174a
 4028 1740 44       		.uleb128 0x44
 4029 1741 3E200000 		.4byte	.LASF972
 4030 1745 850B0000 		.4byte	0xb85
 4031 1749 00       		.byte	0
 4032 174a 52       		.uleb128 0x52
 4033 174b 66140000 		.4byte	0x1466
 4034 174f 223B0000 		.4byte	.LASF949
 4035 1753 00000000 		.4byte	.LFB44
 4036 1757 08000000 		.4byte	.LFE44-.LFB44
 4037 175b 01       		.uleb128 0x1
 4038 175c 9C       		.byte	0x9c
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 84


 4039 175d 65170000 		.4byte	0x1765
 4040 1761 76170000 		.4byte	0x1776
 4041 1765 36       		.uleb128 0x36
 4042 1766 78140000 		.4byte	0x1478
 4043 176a 01       		.uleb128 0x1
 4044 176b 50       		.byte	0x50
 4045 176c 37       		.uleb128 0x37
 4046 176d 81140000 		.4byte	0x1481
 4047 1771 EE050000 		.4byte	.LLST2
 4048 1775 00       		.byte	0
 4049 1776 53       		.uleb128 0x53
 4050 1777 02120000 		.4byte	0x1202
 4051 177b A4570000 		.4byte	.LASF992
 4052 177f 00000000 		.4byte	.LFB62
 4053 1783 08000000 		.4byte	.LFE62-.LFB62
 4054 1787 01       		.uleb128 0x1
 4055 1788 9C       		.byte	0x9c
 4056 1789 37       		.uleb128 0x37
 4057 178a 12120000 		.4byte	0x1212
 4058 178e 0F060000 		.4byte	.LLST6
 4059 1792 3A       		.uleb128 0x3a
 4060 1793 06000000 		.4byte	.LVL18
 4061 1797 DC150000 		.4byte	0x15dc
 4062 179b 3B       		.uleb128 0x3b
 4063 179c 01       		.uleb128 0x1
 4064 179d 50       		.byte	0x50
 4065 179e 03       		.uleb128 0x3
 4066 179f F3       		.byte	0xf3
 4067 17a0 01       		.uleb128 0x1
 4068 17a1 50       		.byte	0x50
 4069 17a2 00       		.byte	0
 4070 17a3 00       		.byte	0
 4071 17a4 00       		.byte	0
 4072              		.section	.debug_abbrev,"",%progbits
 4073              	.Ldebug_abbrev0:
 4074 0000 01       		.uleb128 0x1
 4075 0001 11       		.uleb128 0x11
 4076 0002 01       		.byte	0x1
 4077 0003 25       		.uleb128 0x25
 4078 0004 0E       		.uleb128 0xe
 4079 0005 13       		.uleb128 0x13
 4080 0006 0B       		.uleb128 0xb
 4081 0007 03       		.uleb128 0x3
 4082 0008 0E       		.uleb128 0xe
 4083 0009 1B       		.uleb128 0x1b
 4084 000a 0E       		.uleb128 0xe
 4085 000b 55       		.uleb128 0x55
 4086 000c 17       		.uleb128 0x17
 4087 000d 11       		.uleb128 0x11
 4088 000e 01       		.uleb128 0x1
 4089 000f 10       		.uleb128 0x10
 4090 0010 17       		.uleb128 0x17
 4091 0011 9942     		.uleb128 0x2119
 4092 0013 17       		.uleb128 0x17
 4093 0014 00       		.byte	0
 4094 0015 00       		.byte	0
 4095 0016 02       		.uleb128 0x2
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 85


 4096 0017 24       		.uleb128 0x24
 4097 0018 00       		.byte	0
 4098 0019 0B       		.uleb128 0xb
 4099 001a 0B       		.uleb128 0xb
 4100 001b 3E       		.uleb128 0x3e
 4101 001c 0B       		.uleb128 0xb
 4102 001d 03       		.uleb128 0x3
 4103 001e 0E       		.uleb128 0xe
 4104 001f 00       		.byte	0
 4105 0020 00       		.byte	0
 4106 0021 03       		.uleb128 0x3
 4107 0022 26       		.uleb128 0x26
 4108 0023 00       		.byte	0
 4109 0024 49       		.uleb128 0x49
 4110 0025 13       		.uleb128 0x13
 4111 0026 00       		.byte	0
 4112 0027 00       		.byte	0
 4113 0028 04       		.uleb128 0x4
 4114 0029 16       		.uleb128 0x16
 4115 002a 00       		.byte	0
 4116 002b 03       		.uleb128 0x3
 4117 002c 0E       		.uleb128 0xe
 4118 002d 3A       		.uleb128 0x3a
 4119 002e 0B       		.uleb128 0xb
 4120 002f 3B       		.uleb128 0x3b
 4121 0030 0B       		.uleb128 0xb
 4122 0031 49       		.uleb128 0x49
 4123 0032 13       		.uleb128 0x13
 4124 0033 00       		.byte	0
 4125 0034 00       		.byte	0
 4126 0035 05       		.uleb128 0x5
 4127 0036 24       		.uleb128 0x24
 4128 0037 00       		.byte	0
 4129 0038 0B       		.uleb128 0xb
 4130 0039 0B       		.uleb128 0xb
 4131 003a 3E       		.uleb128 0x3e
 4132 003b 0B       		.uleb128 0xb
 4133 003c 03       		.uleb128 0x3
 4134 003d 08       		.uleb128 0x8
 4135 003e 00       		.byte	0
 4136 003f 00       		.byte	0
 4137 0040 06       		.uleb128 0x6
 4138 0041 35       		.uleb128 0x35
 4139 0042 00       		.byte	0
 4140 0043 49       		.uleb128 0x49
 4141 0044 13       		.uleb128 0x13
 4142 0045 00       		.byte	0
 4143 0046 00       		.byte	0
 4144 0047 07       		.uleb128 0x7
 4145 0048 13       		.uleb128 0x13
 4146 0049 01       		.byte	0x1
 4147 004a 0B       		.uleb128 0xb
 4148 004b 0B       		.uleb128 0xb
 4149 004c 3A       		.uleb128 0x3a
 4150 004d 0B       		.uleb128 0xb
 4151 004e 3B       		.uleb128 0x3b
 4152 004f 0B       		.uleb128 0xb
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 86


 4153 0050 6E       		.uleb128 0x6e
 4154 0051 0E       		.uleb128 0xe
 4155 0052 01       		.uleb128 0x1
 4156 0053 13       		.uleb128 0x13
 4157 0054 00       		.byte	0
 4158 0055 00       		.byte	0
 4159 0056 08       		.uleb128 0x8
 4160 0057 0D       		.uleb128 0xd
 4161 0058 00       		.byte	0
 4162 0059 03       		.uleb128 0x3
 4163 005a 0E       		.uleb128 0xe
 4164 005b 3A       		.uleb128 0x3a
 4165 005c 0B       		.uleb128 0xb
 4166 005d 3B       		.uleb128 0x3b
 4167 005e 0B       		.uleb128 0xb
 4168 005f 49       		.uleb128 0x49
 4169 0060 13       		.uleb128 0x13
 4170 0061 38       		.uleb128 0x38
 4171 0062 0B       		.uleb128 0xb
 4172 0063 00       		.byte	0
 4173 0064 00       		.byte	0
 4174 0065 09       		.uleb128 0x9
 4175 0066 0D       		.uleb128 0xd
 4176 0067 00       		.byte	0
 4177 0068 03       		.uleb128 0x3
 4178 0069 08       		.uleb128 0x8
 4179 006a 3A       		.uleb128 0x3a
 4180 006b 0B       		.uleb128 0xb
 4181 006c 3B       		.uleb128 0x3b
 4182 006d 0B       		.uleb128 0xb
 4183 006e 49       		.uleb128 0x49
 4184 006f 13       		.uleb128 0x13
 4185 0070 38       		.uleb128 0x38
 4186 0071 0B       		.uleb128 0xb
 4187 0072 00       		.byte	0
 4188 0073 00       		.byte	0
 4189 0074 0A       		.uleb128 0xa
 4190 0075 34       		.uleb128 0x34
 4191 0076 00       		.byte	0
 4192 0077 03       		.uleb128 0x3
 4193 0078 0E       		.uleb128 0xe
 4194 0079 3A       		.uleb128 0x3a
 4195 007a 0B       		.uleb128 0xb
 4196 007b 3B       		.uleb128 0x3b
 4197 007c 0B       		.uleb128 0xb
 4198 007d 49       		.uleb128 0x49
 4199 007e 13       		.uleb128 0x13
 4200 007f 3F       		.uleb128 0x3f
 4201 0080 19       		.uleb128 0x19
 4202 0081 3C       		.uleb128 0x3c
 4203 0082 19       		.uleb128 0x19
 4204 0083 00       		.byte	0
 4205 0084 00       		.byte	0
 4206 0085 0B       		.uleb128 0xb
 4207 0086 39       		.uleb128 0x39
 4208 0087 01       		.byte	0x1
 4209 0088 03       		.uleb128 0x3
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 87


 4210 0089 0E       		.uleb128 0xe
 4211 008a 3A       		.uleb128 0x3a
 4212 008b 0B       		.uleb128 0xb
 4213 008c 3B       		.uleb128 0x3b
 4214 008d 0B       		.uleb128 0xb
 4215 008e 01       		.uleb128 0x1
 4216 008f 13       		.uleb128 0x13
 4217 0090 00       		.byte	0
 4218 0091 00       		.byte	0
 4219 0092 0C       		.uleb128 0xc
 4220 0093 04       		.uleb128 0x4
 4221 0094 01       		.byte	0x1
 4222 0095 03       		.uleb128 0x3
 4223 0096 0E       		.uleb128 0xe
 4224 0097 3E       		.uleb128 0x3e
 4225 0098 0B       		.uleb128 0xb
 4226 0099 0B       		.uleb128 0xb
 4227 009a 0B       		.uleb128 0xb
 4228 009b 49       		.uleb128 0x49
 4229 009c 13       		.uleb128 0x13
 4230 009d 3A       		.uleb128 0x3a
 4231 009e 0B       		.uleb128 0xb
 4232 009f 3B       		.uleb128 0x3b
 4233 00a0 0B       		.uleb128 0xb
 4234 00a1 01       		.uleb128 0x1
 4235 00a2 13       		.uleb128 0x13
 4236 00a3 00       		.byte	0
 4237 00a4 00       		.byte	0
 4238 00a5 0D       		.uleb128 0xd
 4239 00a6 28       		.uleb128 0x28
 4240 00a7 00       		.byte	0
 4241 00a8 03       		.uleb128 0x3
 4242 00a9 0E       		.uleb128 0xe
 4243 00aa 1C       		.uleb128 0x1c
 4244 00ab 0B       		.uleb128 0xb
 4245 00ac 00       		.byte	0
 4246 00ad 00       		.byte	0
 4247 00ae 0E       		.uleb128 0xe
 4248 00af 02       		.uleb128 0x2
 4249 00b0 01       		.byte	0x1
 4250 00b1 03       		.uleb128 0x3
 4251 00b2 0E       		.uleb128 0xe
 4252 00b3 0B       		.uleb128 0xb
 4253 00b4 0B       		.uleb128 0xb
 4254 00b5 3A       		.uleb128 0x3a
 4255 00b6 0B       		.uleb128 0xb
 4256 00b7 3B       		.uleb128 0x3b
 4257 00b8 0B       		.uleb128 0xb
 4258 00b9 1D       		.uleb128 0x1d
 4259 00ba 13       		.uleb128 0x13
 4260 00bb 01       		.uleb128 0x1
 4261 00bc 13       		.uleb128 0x13
 4262 00bd 00       		.byte	0
 4263 00be 00       		.byte	0
 4264 00bf 0F       		.uleb128 0xf
 4265 00c0 0D       		.uleb128 0xd
 4266 00c1 00       		.byte	0
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 88


 4267 00c2 03       		.uleb128 0x3
 4268 00c3 0E       		.uleb128 0xe
 4269 00c4 49       		.uleb128 0x49
 4270 00c5 13       		.uleb128 0x13
 4271 00c6 38       		.uleb128 0x38
 4272 00c7 0B       		.uleb128 0xb
 4273 00c8 34       		.uleb128 0x34
 4274 00c9 19       		.uleb128 0x19
 4275 00ca 32       		.uleb128 0x32
 4276 00cb 0B       		.uleb128 0xb
 4277 00cc 00       		.byte	0
 4278 00cd 00       		.byte	0
 4279 00ce 10       		.uleb128 0x10
 4280 00cf 2E       		.uleb128 0x2e
 4281 00d0 01       		.byte	0x1
 4282 00d1 3F       		.uleb128 0x3f
 4283 00d2 19       		.uleb128 0x19
 4284 00d3 03       		.uleb128 0x3
 4285 00d4 0E       		.uleb128 0xe
 4286 00d5 6E       		.uleb128 0x6e
 4287 00d6 0E       		.uleb128 0xe
 4288 00d7 49       		.uleb128 0x49
 4289 00d8 13       		.uleb128 0x13
 4290 00d9 34       		.uleb128 0x34
 4291 00da 19       		.uleb128 0x19
 4292 00db 32       		.uleb128 0x32
 4293 00dc 0B       		.uleb128 0xb
 4294 00dd 3C       		.uleb128 0x3c
 4295 00de 19       		.uleb128 0x19
 4296 00df 64       		.uleb128 0x64
 4297 00e0 13       		.uleb128 0x13
 4298 00e1 01       		.uleb128 0x1
 4299 00e2 13       		.uleb128 0x13
 4300 00e3 00       		.byte	0
 4301 00e4 00       		.byte	0
 4302 00e5 11       		.uleb128 0x11
 4303 00e6 05       		.uleb128 0x5
 4304 00e7 00       		.byte	0
 4305 00e8 49       		.uleb128 0x49
 4306 00e9 13       		.uleb128 0x13
 4307 00ea 34       		.uleb128 0x34
 4308 00eb 19       		.uleb128 0x19
 4309 00ec 00       		.byte	0
 4310 00ed 00       		.byte	0
 4311 00ee 12       		.uleb128 0x12
 4312 00ef 05       		.uleb128 0x5
 4313 00f0 00       		.byte	0
 4314 00f1 49       		.uleb128 0x49
 4315 00f2 13       		.uleb128 0x13
 4316 00f3 00       		.byte	0
 4317 00f4 00       		.byte	0
 4318 00f5 13       		.uleb128 0x13
 4319 00f6 2E       		.uleb128 0x2e
 4320 00f7 01       		.byte	0x1
 4321 00f8 3F       		.uleb128 0x3f
 4322 00f9 19       		.uleb128 0x19
 4323 00fa 03       		.uleb128 0x3
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 89


 4324 00fb 08       		.uleb128 0x8
 4325 00fc 3A       		.uleb128 0x3a
 4326 00fd 0B       		.uleb128 0xb
 4327 00fe 3B       		.uleb128 0x3b
 4328 00ff 0B       		.uleb128 0xb
 4329 0100 6E       		.uleb128 0x6e
 4330 0101 0E       		.uleb128 0xe
 4331 0102 4C       		.uleb128 0x4c
 4332 0103 0B       		.uleb128 0xb
 4333 0104 4D       		.uleb128 0x4d
 4334 0105 18       		.uleb128 0x18
 4335 0106 1D       		.uleb128 0x1d
 4336 0107 13       		.uleb128 0x13
 4337 0108 32       		.uleb128 0x32
 4338 0109 0B       		.uleb128 0xb
 4339 010a 3C       		.uleb128 0x3c
 4340 010b 19       		.uleb128 0x19
 4341 010c 64       		.uleb128 0x64
 4342 010d 13       		.uleb128 0x13
 4343 010e 01       		.uleb128 0x1
 4344 010f 13       		.uleb128 0x13
 4345 0110 00       		.byte	0
 4346 0111 00       		.byte	0
 4347 0112 14       		.uleb128 0x14
 4348 0113 2E       		.uleb128 0x2e
 4349 0114 01       		.byte	0x1
 4350 0115 3F       		.uleb128 0x3f
 4351 0116 19       		.uleb128 0x19
 4352 0117 03       		.uleb128 0x3
 4353 0118 0E       		.uleb128 0xe
 4354 0119 3A       		.uleb128 0x3a
 4355 011a 0B       		.uleb128 0xb
 4356 011b 3B       		.uleb128 0x3b
 4357 011c 0B       		.uleb128 0xb
 4358 011d 6E       		.uleb128 0x6e
 4359 011e 0E       		.uleb128 0xe
 4360 011f 4C       		.uleb128 0x4c
 4361 0120 0B       		.uleb128 0xb
 4362 0121 4D       		.uleb128 0x4d
 4363 0122 18       		.uleb128 0x18
 4364 0123 1D       		.uleb128 0x1d
 4365 0124 13       		.uleb128 0x13
 4366 0125 32       		.uleb128 0x32
 4367 0126 0B       		.uleb128 0xb
 4368 0127 3C       		.uleb128 0x3c
 4369 0128 19       		.uleb128 0x19
 4370 0129 64       		.uleb128 0x64
 4371 012a 13       		.uleb128 0x13
 4372 012b 00       		.byte	0
 4373 012c 00       		.byte	0
 4374 012d 15       		.uleb128 0x15
 4375 012e 2E       		.uleb128 0x2e
 4376 012f 01       		.byte	0x1
 4377 0130 3F       		.uleb128 0x3f
 4378 0131 19       		.uleb128 0x19
 4379 0132 03       		.uleb128 0x3
 4380 0133 08       		.uleb128 0x8
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 90


 4381 0134 3A       		.uleb128 0x3a
 4382 0135 0B       		.uleb128 0xb
 4383 0136 3B       		.uleb128 0x3b
 4384 0137 0B       		.uleb128 0xb
 4385 0138 6E       		.uleb128 0x6e
 4386 0139 0E       		.uleb128 0xe
 4387 013a 49       		.uleb128 0x49
 4388 013b 13       		.uleb128 0x13
 4389 013c 4C       		.uleb128 0x4c
 4390 013d 0B       		.uleb128 0xb
 4391 013e 4D       		.uleb128 0x4d
 4392 013f 18       		.uleb128 0x18
 4393 0140 1D       		.uleb128 0x1d
 4394 0141 13       		.uleb128 0x13
 4395 0142 32       		.uleb128 0x32
 4396 0143 0B       		.uleb128 0xb
 4397 0144 3C       		.uleb128 0x3c
 4398 0145 19       		.uleb128 0x19
 4399 0146 64       		.uleb128 0x64
 4400 0147 13       		.uleb128 0x13
 4401 0148 01       		.uleb128 0x1
 4402 0149 13       		.uleb128 0x13
 4403 014a 00       		.byte	0
 4404 014b 00       		.byte	0
 4405 014c 16       		.uleb128 0x16
 4406 014d 1C       		.uleb128 0x1c
 4407 014e 00       		.byte	0
 4408 014f 49       		.uleb128 0x49
 4409 0150 13       		.uleb128 0x13
 4410 0151 38       		.uleb128 0x38
 4411 0152 0B       		.uleb128 0xb
 4412 0153 32       		.uleb128 0x32
 4413 0154 0B       		.uleb128 0xb
 4414 0155 00       		.byte	0
 4415 0156 00       		.byte	0
 4416 0157 17       		.uleb128 0x17
 4417 0158 2E       		.uleb128 0x2e
 4418 0159 01       		.byte	0x1
 4419 015a 3F       		.uleb128 0x3f
 4420 015b 19       		.uleb128 0x19
 4421 015c 03       		.uleb128 0x3
 4422 015d 0E       		.uleb128 0xe
 4423 015e 3A       		.uleb128 0x3a
 4424 015f 0B       		.uleb128 0xb
 4425 0160 3B       		.uleb128 0x3b
 4426 0161 0B       		.uleb128 0xb
 4427 0162 6E       		.uleb128 0x6e
 4428 0163 0E       		.uleb128 0xe
 4429 0164 4C       		.uleb128 0x4c
 4430 0165 0B       		.uleb128 0xb
 4431 0166 4D       		.uleb128 0x4d
 4432 0167 18       		.uleb128 0x18
 4433 0168 1D       		.uleb128 0x1d
 4434 0169 13       		.uleb128 0x13
 4435 016a 32       		.uleb128 0x32
 4436 016b 0B       		.uleb128 0xb
 4437 016c 3C       		.uleb128 0x3c
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 91


 4438 016d 19       		.uleb128 0x19
 4439 016e 64       		.uleb128 0x64
 4440 016f 13       		.uleb128 0x13
 4441 0170 01       		.uleb128 0x1
 4442 0171 13       		.uleb128 0x13
 4443 0172 00       		.byte	0
 4444 0173 00       		.byte	0
 4445 0174 18       		.uleb128 0x18
 4446 0175 01       		.uleb128 0x1
 4447 0176 01       		.byte	0x1
 4448 0177 49       		.uleb128 0x49
 4449 0178 13       		.uleb128 0x13
 4450 0179 01       		.uleb128 0x1
 4451 017a 13       		.uleb128 0x13
 4452 017b 00       		.byte	0
 4453 017c 00       		.byte	0
 4454 017d 19       		.uleb128 0x19
 4455 017e 21       		.uleb128 0x21
 4456 017f 00       		.byte	0
 4457 0180 49       		.uleb128 0x49
 4458 0181 13       		.uleb128 0x13
 4459 0182 2F       		.uleb128 0x2f
 4460 0183 0B       		.uleb128 0xb
 4461 0184 00       		.byte	0
 4462 0185 00       		.byte	0
 4463 0186 1A       		.uleb128 0x1a
 4464 0187 02       		.uleb128 0x2
 4465 0188 01       		.byte	0x1
 4466 0189 03       		.uleb128 0x3
 4467 018a 0E       		.uleb128 0xe
 4468 018b 0B       		.uleb128 0xb
 4469 018c 0B       		.uleb128 0xb
 4470 018d 3A       		.uleb128 0x3a
 4471 018e 0B       		.uleb128 0xb
 4472 018f 3B       		.uleb128 0x3b
 4473 0190 05       		.uleb128 0x5
 4474 0191 01       		.uleb128 0x1
 4475 0192 13       		.uleb128 0x13
 4476 0193 00       		.byte	0
 4477 0194 00       		.byte	0
 4478 0195 1B       		.uleb128 0x1b
 4479 0196 0D       		.uleb128 0xd
 4480 0197 00       		.byte	0
 4481 0198 03       		.uleb128 0x3
 4482 0199 0E       		.uleb128 0xe
 4483 019a 3A       		.uleb128 0x3a
 4484 019b 0B       		.uleb128 0xb
 4485 019c 3B       		.uleb128 0x3b
 4486 019d 05       		.uleb128 0x5
 4487 019e 49       		.uleb128 0x49
 4488 019f 13       		.uleb128 0x13
 4489 01a0 38       		.uleb128 0x38
 4490 01a1 0B       		.uleb128 0xb
 4491 01a2 00       		.byte	0
 4492 01a3 00       		.byte	0
 4493 01a4 1C       		.uleb128 0x1c
 4494 01a5 0D       		.uleb128 0xd
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 92


 4495 01a6 00       		.byte	0
 4496 01a7 03       		.uleb128 0x3
 4497 01a8 08       		.uleb128 0x8
 4498 01a9 3A       		.uleb128 0x3a
 4499 01aa 0B       		.uleb128 0xb
 4500 01ab 3B       		.uleb128 0x3b
 4501 01ac 05       		.uleb128 0x5
 4502 01ad 49       		.uleb128 0x49
 4503 01ae 13       		.uleb128 0x13
 4504 01af 38       		.uleb128 0x38
 4505 01b0 0B       		.uleb128 0xb
 4506 01b1 00       		.byte	0
 4507 01b2 00       		.byte	0
 4508 01b3 1D       		.uleb128 0x1d
 4509 01b4 2E       		.uleb128 0x2e
 4510 01b5 01       		.byte	0x1
 4511 01b6 3F       		.uleb128 0x3f
 4512 01b7 19       		.uleb128 0x19
 4513 01b8 03       		.uleb128 0x3
 4514 01b9 0E       		.uleb128 0xe
 4515 01ba 3A       		.uleb128 0x3a
 4516 01bb 0B       		.uleb128 0xb
 4517 01bc 3B       		.uleb128 0x3b
 4518 01bd 05       		.uleb128 0x5
 4519 01be 6E       		.uleb128 0x6e
 4520 01bf 0E       		.uleb128 0xe
 4521 01c0 49       		.uleb128 0x49
 4522 01c1 13       		.uleb128 0x13
 4523 01c2 3C       		.uleb128 0x3c
 4524 01c3 19       		.uleb128 0x19
 4525 01c4 64       		.uleb128 0x64
 4526 01c5 13       		.uleb128 0x13
 4527 01c6 01       		.uleb128 0x1
 4528 01c7 13       		.uleb128 0x13
 4529 01c8 00       		.byte	0
 4530 01c9 00       		.byte	0
 4531 01ca 1E       		.uleb128 0x1e
 4532 01cb 2E       		.uleb128 0x2e
 4533 01cc 01       		.byte	0x1
 4534 01cd 3F       		.uleb128 0x3f
 4535 01ce 19       		.uleb128 0x19
 4536 01cf 03       		.uleb128 0x3
 4537 01d0 0E       		.uleb128 0xe
 4538 01d1 3A       		.uleb128 0x3a
 4539 01d2 0B       		.uleb128 0xb
 4540 01d3 3B       		.uleb128 0x3b
 4541 01d4 05       		.uleb128 0x5
 4542 01d5 6E       		.uleb128 0x6e
 4543 01d6 0E       		.uleb128 0xe
 4544 01d7 49       		.uleb128 0x49
 4545 01d8 13       		.uleb128 0x13
 4546 01d9 32       		.uleb128 0x32
 4547 01da 0B       		.uleb128 0xb
 4548 01db 3C       		.uleb128 0x3c
 4549 01dc 19       		.uleb128 0x19
 4550 01dd 64       		.uleb128 0x64
 4551 01de 13       		.uleb128 0x13
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 93


 4552 01df 01       		.uleb128 0x1
 4553 01e0 13       		.uleb128 0x13
 4554 01e1 00       		.byte	0
 4555 01e2 00       		.byte	0
 4556 01e3 1F       		.uleb128 0x1f
 4557 01e4 2E       		.uleb128 0x2e
 4558 01e5 01       		.byte	0x1
 4559 01e6 3F       		.uleb128 0x3f
 4560 01e7 19       		.uleb128 0x19
 4561 01e8 03       		.uleb128 0x3
 4562 01e9 0E       		.uleb128 0xe
 4563 01ea 3A       		.uleb128 0x3a
 4564 01eb 0B       		.uleb128 0xb
 4565 01ec 3B       		.uleb128 0x3b
 4566 01ed 05       		.uleb128 0x5
 4567 01ee 6E       		.uleb128 0x6e
 4568 01ef 0E       		.uleb128 0xe
 4569 01f0 3C       		.uleb128 0x3c
 4570 01f1 19       		.uleb128 0x19
 4571 01f2 64       		.uleb128 0x64
 4572 01f3 13       		.uleb128 0x13
 4573 01f4 01       		.uleb128 0x1
 4574 01f5 13       		.uleb128 0x13
 4575 01f6 00       		.byte	0
 4576 01f7 00       		.byte	0
 4577 01f8 20       		.uleb128 0x20
 4578 01f9 2E       		.uleb128 0x2e
 4579 01fa 01       		.byte	0x1
 4580 01fb 3F       		.uleb128 0x3f
 4581 01fc 19       		.uleb128 0x19
 4582 01fd 03       		.uleb128 0x3
 4583 01fe 0E       		.uleb128 0xe
 4584 01ff 3A       		.uleb128 0x3a
 4585 0200 0B       		.uleb128 0xb
 4586 0201 3B       		.uleb128 0x3b
 4587 0202 05       		.uleb128 0x5
 4588 0203 6E       		.uleb128 0x6e
 4589 0204 0E       		.uleb128 0xe
 4590 0205 32       		.uleb128 0x32
 4591 0206 0B       		.uleb128 0xb
 4592 0207 3C       		.uleb128 0x3c
 4593 0208 19       		.uleb128 0x19
 4594 0209 64       		.uleb128 0x64
 4595 020a 13       		.uleb128 0x13
 4596 020b 01       		.uleb128 0x1
 4597 020c 13       		.uleb128 0x13
 4598 020d 00       		.byte	0
 4599 020e 00       		.byte	0
 4600 020f 21       		.uleb128 0x21
 4601 0210 2E       		.uleb128 0x2e
 4602 0211 01       		.byte	0x1
 4603 0212 3F       		.uleb128 0x3f
 4604 0213 19       		.uleb128 0x19
 4605 0214 03       		.uleb128 0x3
 4606 0215 0E       		.uleb128 0xe
 4607 0216 3A       		.uleb128 0x3a
 4608 0217 0B       		.uleb128 0xb
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 94


 4609 0218 3B       		.uleb128 0x3b
 4610 0219 05       		.uleb128 0x5
 4611 021a 6E       		.uleb128 0x6e
 4612 021b 0E       		.uleb128 0xe
 4613 021c 49       		.uleb128 0x49
 4614 021d 13       		.uleb128 0x13
 4615 021e 32       		.uleb128 0x32
 4616 021f 0B       		.uleb128 0xb
 4617 0220 3C       		.uleb128 0x3c
 4618 0221 19       		.uleb128 0x19
 4619 0222 64       		.uleb128 0x64
 4620 0223 13       		.uleb128 0x13
 4621 0224 00       		.byte	0
 4622 0225 00       		.byte	0
 4623 0226 22       		.uleb128 0x22
 4624 0227 10       		.uleb128 0x10
 4625 0228 00       		.byte	0
 4626 0229 0B       		.uleb128 0xb
 4627 022a 0B       		.uleb128 0xb
 4628 022b 49       		.uleb128 0x49
 4629 022c 13       		.uleb128 0x13
 4630 022d 00       		.byte	0
 4631 022e 00       		.byte	0
 4632 022f 23       		.uleb128 0x23
 4633 0230 15       		.uleb128 0x15
 4634 0231 01       		.byte	0x1
 4635 0232 01       		.uleb128 0x1
 4636 0233 13       		.uleb128 0x13
 4637 0234 00       		.byte	0
 4638 0235 00       		.byte	0
 4639 0236 24       		.uleb128 0x24
 4640 0237 0F       		.uleb128 0xf
 4641 0238 00       		.byte	0
 4642 0239 0B       		.uleb128 0xb
 4643 023a 0B       		.uleb128 0xb
 4644 023b 49       		.uleb128 0x49
 4645 023c 13       		.uleb128 0x13
 4646 023d 00       		.byte	0
 4647 023e 00       		.byte	0
 4648 023f 25       		.uleb128 0x25
 4649 0240 02       		.uleb128 0x2
 4650 0241 01       		.byte	0x1
 4651 0242 03       		.uleb128 0x3
 4652 0243 0E       		.uleb128 0xe
 4653 0244 0B       		.uleb128 0xb
 4654 0245 0B       		.uleb128 0xb
 4655 0246 3A       		.uleb128 0x3a
 4656 0247 0B       		.uleb128 0xb
 4657 0248 3B       		.uleb128 0x3b
 4658 0249 0B       		.uleb128 0xb
 4659 024a 01       		.uleb128 0x1
 4660 024b 13       		.uleb128 0x13
 4661 024c 00       		.byte	0
 4662 024d 00       		.byte	0
 4663 024e 26       		.uleb128 0x26
 4664 024f 2E       		.uleb128 0x2e
 4665 0250 01       		.byte	0x1
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 95


 4666 0251 3F       		.uleb128 0x3f
 4667 0252 19       		.uleb128 0x19
 4668 0253 03       		.uleb128 0x3
 4669 0254 08       		.uleb128 0x8
 4670 0255 3A       		.uleb128 0x3a
 4671 0256 0B       		.uleb128 0xb
 4672 0257 3B       		.uleb128 0x3b
 4673 0258 0B       		.uleb128 0xb
 4674 0259 6E       		.uleb128 0x6e
 4675 025a 0E       		.uleb128 0xe
 4676 025b 49       		.uleb128 0x49
 4677 025c 13       		.uleb128 0x13
 4678 025d 32       		.uleb128 0x32
 4679 025e 0B       		.uleb128 0xb
 4680 025f 3C       		.uleb128 0x3c
 4681 0260 19       		.uleb128 0x19
 4682 0261 64       		.uleb128 0x64
 4683 0262 13       		.uleb128 0x13
 4684 0263 00       		.byte	0
 4685 0264 00       		.byte	0
 4686 0265 27       		.uleb128 0x27
 4687 0266 2E       		.uleb128 0x2e
 4688 0267 01       		.byte	0x1
 4689 0268 3F       		.uleb128 0x3f
 4690 0269 19       		.uleb128 0x19
 4691 026a 03       		.uleb128 0x3
 4692 026b 0E       		.uleb128 0xe
 4693 026c 3A       		.uleb128 0x3a
 4694 026d 0B       		.uleb128 0xb
 4695 026e 3B       		.uleb128 0x3b
 4696 026f 0B       		.uleb128 0xb
 4697 0270 6E       		.uleb128 0x6e
 4698 0271 0E       		.uleb128 0xe
 4699 0272 49       		.uleb128 0x49
 4700 0273 13       		.uleb128 0x13
 4701 0274 3C       		.uleb128 0x3c
 4702 0275 19       		.uleb128 0x19
 4703 0276 01       		.uleb128 0x1
 4704 0277 13       		.uleb128 0x13
 4705 0278 00       		.byte	0
 4706 0279 00       		.byte	0
 4707 027a 28       		.uleb128 0x28
 4708 027b 2E       		.uleb128 0x2e
 4709 027c 01       		.byte	0x1
 4710 027d 3F       		.uleb128 0x3f
 4711 027e 19       		.uleb128 0x19
 4712 027f 03       		.uleb128 0x3
 4713 0280 0E       		.uleb128 0xe
 4714 0281 3A       		.uleb128 0x3a
 4715 0282 0B       		.uleb128 0xb
 4716 0283 3B       		.uleb128 0x3b
 4717 0284 0B       		.uleb128 0xb
 4718 0285 6E       		.uleb128 0x6e
 4719 0286 0E       		.uleb128 0xe
 4720 0287 49       		.uleb128 0x49
 4721 0288 13       		.uleb128 0x13
 4722 0289 32       		.uleb128 0x32
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 96


 4723 028a 0B       		.uleb128 0xb
 4724 028b 3C       		.uleb128 0x3c
 4725 028c 19       		.uleb128 0x19
 4726 028d 64       		.uleb128 0x64
 4727 028e 13       		.uleb128 0x13
 4728 028f 01       		.uleb128 0x1
 4729 0290 13       		.uleb128 0x13
 4730 0291 00       		.byte	0
 4731 0292 00       		.byte	0
 4732 0293 29       		.uleb128 0x29
 4733 0294 2E       		.uleb128 0x2e
 4734 0295 01       		.byte	0x1
 4735 0296 3F       		.uleb128 0x3f
 4736 0297 19       		.uleb128 0x19
 4737 0298 03       		.uleb128 0x3
 4738 0299 08       		.uleb128 0x8
 4739 029a 3A       		.uleb128 0x3a
 4740 029b 0B       		.uleb128 0xb
 4741 029c 3B       		.uleb128 0x3b
 4742 029d 0B       		.uleb128 0xb
 4743 029e 6E       		.uleb128 0x6e
 4744 029f 0E       		.uleb128 0xe
 4745 02a0 49       		.uleb128 0x49
 4746 02a1 13       		.uleb128 0x13
 4747 02a2 4C       		.uleb128 0x4c
 4748 02a3 0B       		.uleb128 0xb
 4749 02a4 4D       		.uleb128 0x4d
 4750 02a5 18       		.uleb128 0x18
 4751 02a6 1D       		.uleb128 0x1d
 4752 02a7 13       		.uleb128 0x13
 4753 02a8 32       		.uleb128 0x32
 4754 02a9 0B       		.uleb128 0xb
 4755 02aa 3C       		.uleb128 0x3c
 4756 02ab 19       		.uleb128 0x19
 4757 02ac 64       		.uleb128 0x64
 4758 02ad 13       		.uleb128 0x13
 4759 02ae 00       		.byte	0
 4760 02af 00       		.byte	0
 4761 02b0 2A       		.uleb128 0x2a
 4762 02b1 34       		.uleb128 0x34
 4763 02b2 00       		.byte	0
 4764 02b3 03       		.uleb128 0x3
 4765 02b4 0E       		.uleb128 0xe
 4766 02b5 3A       		.uleb128 0x3a
 4767 02b6 0B       		.uleb128 0xb
 4768 02b7 3B       		.uleb128 0x3b
 4769 02b8 0B       		.uleb128 0xb
 4770 02b9 49       		.uleb128 0x49
 4771 02ba 13       		.uleb128 0x13
 4772 02bb 3F       		.uleb128 0x3f
 4773 02bc 19       		.uleb128 0x19
 4774 02bd 02       		.uleb128 0x2
 4775 02be 18       		.uleb128 0x18
 4776 02bf 00       		.byte	0
 4777 02c0 00       		.byte	0
 4778 02c1 2B       		.uleb128 0x2b
 4779 02c2 34       		.uleb128 0x34
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 97


 4780 02c3 00       		.byte	0
 4781 02c4 03       		.uleb128 0x3
 4782 02c5 0E       		.uleb128 0xe
 4783 02c6 3A       		.uleb128 0x3a
 4784 02c7 0B       		.uleb128 0xb
 4785 02c8 3B       		.uleb128 0x3b
 4786 02c9 0B       		.uleb128 0xb
 4787 02ca 49       		.uleb128 0x49
 4788 02cb 13       		.uleb128 0x13
 4789 02cc 02       		.uleb128 0x2
 4790 02cd 18       		.uleb128 0x18
 4791 02ce 00       		.byte	0
 4792 02cf 00       		.byte	0
 4793 02d0 2C       		.uleb128 0x2c
 4794 02d1 0F       		.uleb128 0xf
 4795 02d2 00       		.byte	0
 4796 02d3 0B       		.uleb128 0xb
 4797 02d4 0B       		.uleb128 0xb
 4798 02d5 00       		.byte	0
 4799 02d6 00       		.byte	0
 4800 02d7 2D       		.uleb128 0x2d
 4801 02d8 15       		.uleb128 0x15
 4802 02d9 01       		.byte	0x1
 4803 02da 49       		.uleb128 0x49
 4804 02db 13       		.uleb128 0x13
 4805 02dc 01       		.uleb128 0x1
 4806 02dd 13       		.uleb128 0x13
 4807 02de 00       		.byte	0
 4808 02df 00       		.byte	0
 4809 02e0 2E       		.uleb128 0x2e
 4810 02e1 18       		.uleb128 0x18
 4811 02e2 00       		.byte	0
 4812 02e3 00       		.byte	0
 4813 02e4 00       		.byte	0
 4814 02e5 2F       		.uleb128 0x2f
 4815 02e6 0F       		.uleb128 0xf
 4816 02e7 00       		.byte	0
 4817 02e8 0B       		.uleb128 0xb
 4818 02e9 0B       		.uleb128 0xb
 4819 02ea 03       		.uleb128 0x3
 4820 02eb 0E       		.uleb128 0xe
 4821 02ec 49       		.uleb128 0x49
 4822 02ed 13       		.uleb128 0x13
 4823 02ee 00       		.byte	0
 4824 02ef 00       		.byte	0
 4825 02f0 30       		.uleb128 0x30
 4826 02f1 2E       		.uleb128 0x2e
 4827 02f2 01       		.byte	0x1
 4828 02f3 3F       		.uleb128 0x3f
 4829 02f4 19       		.uleb128 0x19
 4830 02f5 03       		.uleb128 0x3
 4831 02f6 0E       		.uleb128 0xe
 4832 02f7 3A       		.uleb128 0x3a
 4833 02f8 0B       		.uleb128 0xb
 4834 02f9 3B       		.uleb128 0x3b
 4835 02fa 0B       		.uleb128 0xb
 4836 02fb 49       		.uleb128 0x49
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 98


 4837 02fc 13       		.uleb128 0x13
 4838 02fd 11       		.uleb128 0x11
 4839 02fe 01       		.uleb128 0x1
 4840 02ff 12       		.uleb128 0x12
 4841 0300 06       		.uleb128 0x6
 4842 0301 40       		.uleb128 0x40
 4843 0302 18       		.uleb128 0x18
 4844 0303 9742     		.uleb128 0x2117
 4845 0305 19       		.uleb128 0x19
 4846 0306 01       		.uleb128 0x1
 4847 0307 13       		.uleb128 0x13
 4848 0308 00       		.byte	0
 4849 0309 00       		.byte	0
 4850 030a 31       		.uleb128 0x31
 4851 030b 34       		.uleb128 0x34
 4852 030c 00       		.byte	0
 4853 030d 03       		.uleb128 0x3
 4854 030e 0E       		.uleb128 0xe
 4855 030f 3A       		.uleb128 0x3a
 4856 0310 0B       		.uleb128 0xb
 4857 0311 3B       		.uleb128 0x3b
 4858 0312 0B       		.uleb128 0xb
 4859 0313 49       		.uleb128 0x49
 4860 0314 13       		.uleb128 0x13
 4861 0315 00       		.byte	0
 4862 0316 00       		.byte	0
 4863 0317 32       		.uleb128 0x32
 4864 0318 34       		.uleb128 0x34
 4865 0319 00       		.byte	0
 4866 031a 03       		.uleb128 0x3
 4867 031b 08       		.uleb128 0x8
 4868 031c 3A       		.uleb128 0x3a
 4869 031d 0B       		.uleb128 0xb
 4870 031e 3B       		.uleb128 0x3b
 4871 031f 0B       		.uleb128 0xb
 4872 0320 49       		.uleb128 0x49
 4873 0321 13       		.uleb128 0x13
 4874 0322 02       		.uleb128 0x2
 4875 0323 18       		.uleb128 0x18
 4876 0324 00       		.byte	0
 4877 0325 00       		.byte	0
 4878 0326 33       		.uleb128 0x33
 4879 0327 34       		.uleb128 0x34
 4880 0328 00       		.byte	0
 4881 0329 03       		.uleb128 0x3
 4882 032a 08       		.uleb128 0x8
 4883 032b 3A       		.uleb128 0x3a
 4884 032c 0B       		.uleb128 0xb
 4885 032d 3B       		.uleb128 0x3b
 4886 032e 0B       		.uleb128 0xb
 4887 032f 49       		.uleb128 0x49
 4888 0330 13       		.uleb128 0x13
 4889 0331 02       		.uleb128 0x2
 4890 0332 17       		.uleb128 0x17
 4891 0333 00       		.byte	0
 4892 0334 00       		.byte	0
 4893 0335 34       		.uleb128 0x34
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 99


 4894 0336 34       		.uleb128 0x34
 4895 0337 00       		.byte	0
 4896 0338 03       		.uleb128 0x3
 4897 0339 0E       		.uleb128 0xe
 4898 033a 3A       		.uleb128 0x3a
 4899 033b 0B       		.uleb128 0xb
 4900 033c 3B       		.uleb128 0x3b
 4901 033d 0B       		.uleb128 0xb
 4902 033e 49       		.uleb128 0x49
 4903 033f 13       		.uleb128 0x13
 4904 0340 02       		.uleb128 0x2
 4905 0341 17       		.uleb128 0x17
 4906 0342 00       		.byte	0
 4907 0343 00       		.byte	0
 4908 0344 35       		.uleb128 0x35
 4909 0345 1D       		.uleb128 0x1d
 4910 0346 01       		.byte	0x1
 4911 0347 31       		.uleb128 0x31
 4912 0348 13       		.uleb128 0x13
 4913 0349 52       		.uleb128 0x52
 4914 034a 01       		.uleb128 0x1
 4915 034b 55       		.uleb128 0x55
 4916 034c 17       		.uleb128 0x17
 4917 034d 58       		.uleb128 0x58
 4918 034e 0B       		.uleb128 0xb
 4919 034f 59       		.uleb128 0x59
 4920 0350 0B       		.uleb128 0xb
 4921 0351 01       		.uleb128 0x1
 4922 0352 13       		.uleb128 0x13
 4923 0353 00       		.byte	0
 4924 0354 00       		.byte	0
 4925 0355 36       		.uleb128 0x36
 4926 0356 05       		.uleb128 0x5
 4927 0357 00       		.byte	0
 4928 0358 31       		.uleb128 0x31
 4929 0359 13       		.uleb128 0x13
 4930 035a 02       		.uleb128 0x2
 4931 035b 18       		.uleb128 0x18
 4932 035c 00       		.byte	0
 4933 035d 00       		.byte	0
 4934 035e 37       		.uleb128 0x37
 4935 035f 05       		.uleb128 0x5
 4936 0360 00       		.byte	0
 4937 0361 31       		.uleb128 0x31
 4938 0362 13       		.uleb128 0x13
 4939 0363 02       		.uleb128 0x2
 4940 0364 17       		.uleb128 0x17
 4941 0365 00       		.byte	0
 4942 0366 00       		.byte	0
 4943 0367 38       		.uleb128 0x38
 4944 0368 1D       		.uleb128 0x1d
 4945 0369 01       		.byte	0x1
 4946 036a 31       		.uleb128 0x31
 4947 036b 13       		.uleb128 0x13
 4948 036c 52       		.uleb128 0x52
 4949 036d 01       		.uleb128 0x1
 4950 036e 55       		.uleb128 0x55
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 100


 4951 036f 17       		.uleb128 0x17
 4952 0370 58       		.uleb128 0x58
 4953 0371 0B       		.uleb128 0xb
 4954 0372 59       		.uleb128 0x59
 4955 0373 0B       		.uleb128 0xb
 4956 0374 00       		.byte	0
 4957 0375 00       		.byte	0
 4958 0376 39       		.uleb128 0x39
 4959 0377 1D       		.uleb128 0x1d
 4960 0378 01       		.byte	0x1
 4961 0379 31       		.uleb128 0x31
 4962 037a 13       		.uleb128 0x13
 4963 037b 11       		.uleb128 0x11
 4964 037c 01       		.uleb128 0x1
 4965 037d 12       		.uleb128 0x12
 4966 037e 06       		.uleb128 0x6
 4967 037f 58       		.uleb128 0x58
 4968 0380 0B       		.uleb128 0xb
 4969 0381 59       		.uleb128 0x59
 4970 0382 0B       		.uleb128 0xb
 4971 0383 01       		.uleb128 0x1
 4972 0384 13       		.uleb128 0x13
 4973 0385 00       		.byte	0
 4974 0386 00       		.byte	0
 4975 0387 3A       		.uleb128 0x3a
 4976 0388 898201   		.uleb128 0x4109
 4977 038b 01       		.byte	0x1
 4978 038c 11       		.uleb128 0x11
 4979 038d 01       		.uleb128 0x1
 4980 038e 31       		.uleb128 0x31
 4981 038f 13       		.uleb128 0x13
 4982 0390 00       		.byte	0
 4983 0391 00       		.byte	0
 4984 0392 3B       		.uleb128 0x3b
 4985 0393 8A8201   		.uleb128 0x410a
 4986 0396 00       		.byte	0
 4987 0397 02       		.uleb128 0x2
 4988 0398 18       		.uleb128 0x18
 4989 0399 9142     		.uleb128 0x2111
 4990 039b 18       		.uleb128 0x18
 4991 039c 00       		.byte	0
 4992 039d 00       		.byte	0
 4993 039e 3C       		.uleb128 0x3c
 4994 039f 898201   		.uleb128 0x4109
 4995 03a2 01       		.byte	0x1
 4996 03a3 11       		.uleb128 0x11
 4997 03a4 01       		.uleb128 0x1
 4998 03a5 31       		.uleb128 0x31
 4999 03a6 13       		.uleb128 0x13
 5000 03a7 01       		.uleb128 0x1
 5001 03a8 13       		.uleb128 0x13
 5002 03a9 00       		.byte	0
 5003 03aa 00       		.byte	0
 5004 03ab 3D       		.uleb128 0x3d
 5005 03ac 2E       		.uleb128 0x2e
 5006 03ad 01       		.byte	0x1
 5007 03ae 3F       		.uleb128 0x3f
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 101


 5008 03af 19       		.uleb128 0x19
 5009 03b0 03       		.uleb128 0x3
 5010 03b1 0E       		.uleb128 0xe
 5011 03b2 3A       		.uleb128 0x3a
 5012 03b3 0B       		.uleb128 0xb
 5013 03b4 3B       		.uleb128 0x3b
 5014 03b5 0B       		.uleb128 0xb
 5015 03b6 6E       		.uleb128 0x6e
 5016 03b7 0E       		.uleb128 0xe
 5017 03b8 11       		.uleb128 0x11
 5018 03b9 01       		.uleb128 0x1
 5019 03ba 12       		.uleb128 0x12
 5020 03bb 06       		.uleb128 0x6
 5021 03bc 40       		.uleb128 0x40
 5022 03bd 18       		.uleb128 0x18
 5023 03be 9742     		.uleb128 0x2117
 5024 03c0 19       		.uleb128 0x19
 5025 03c1 01       		.uleb128 0x1
 5026 03c2 13       		.uleb128 0x13
 5027 03c3 00       		.byte	0
 5028 03c4 00       		.byte	0
 5029 03c5 3E       		.uleb128 0x3e
 5030 03c6 05       		.uleb128 0x5
 5031 03c7 00       		.byte	0
 5032 03c8 03       		.uleb128 0x3
 5033 03c9 0E       		.uleb128 0xe
 5034 03ca 3A       		.uleb128 0x3a
 5035 03cb 0B       		.uleb128 0xb
 5036 03cc 3B       		.uleb128 0x3b
 5037 03cd 0B       		.uleb128 0xb
 5038 03ce 49       		.uleb128 0x49
 5039 03cf 13       		.uleb128 0x13
 5040 03d0 02       		.uleb128 0x2
 5041 03d1 17       		.uleb128 0x17
 5042 03d2 00       		.byte	0
 5043 03d3 00       		.byte	0
 5044 03d4 3F       		.uleb128 0x3f
 5045 03d5 05       		.uleb128 0x5
 5046 03d6 00       		.byte	0
 5047 03d7 03       		.uleb128 0x3
 5048 03d8 08       		.uleb128 0x8
 5049 03d9 3A       		.uleb128 0x3a
 5050 03da 0B       		.uleb128 0xb
 5051 03db 3B       		.uleb128 0x3b
 5052 03dc 0B       		.uleb128 0xb
 5053 03dd 49       		.uleb128 0x49
 5054 03de 13       		.uleb128 0x13
 5055 03df 02       		.uleb128 0x2
 5056 03e0 17       		.uleb128 0x17
 5057 03e1 00       		.byte	0
 5058 03e2 00       		.byte	0
 5059 03e3 40       		.uleb128 0x40
 5060 03e4 2E       		.uleb128 0x2e
 5061 03e5 01       		.byte	0x1
 5062 03e6 3F       		.uleb128 0x3f
 5063 03e7 19       		.uleb128 0x19
 5064 03e8 03       		.uleb128 0x3
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 102


 5065 03e9 0E       		.uleb128 0xe
 5066 03ea 3A       		.uleb128 0x3a
 5067 03eb 0B       		.uleb128 0xb
 5068 03ec 3B       		.uleb128 0x3b
 5069 03ed 0B       		.uleb128 0xb
 5070 03ee 6E       		.uleb128 0x6e
 5071 03ef 0E       		.uleb128 0xe
 5072 03f0 20       		.uleb128 0x20
 5073 03f1 0B       		.uleb128 0xb
 5074 03f2 01       		.uleb128 0x1
 5075 03f3 13       		.uleb128 0x13
 5076 03f4 00       		.byte	0
 5077 03f5 00       		.byte	0
 5078 03f6 41       		.uleb128 0x41
 5079 03f7 05       		.uleb128 0x5
 5080 03f8 00       		.byte	0
 5081 03f9 03       		.uleb128 0x3
 5082 03fa 08       		.uleb128 0x8
 5083 03fb 3A       		.uleb128 0x3a
 5084 03fc 0B       		.uleb128 0xb
 5085 03fd 3B       		.uleb128 0x3b
 5086 03fe 0B       		.uleb128 0xb
 5087 03ff 49       		.uleb128 0x49
 5088 0400 13       		.uleb128 0x13
 5089 0401 00       		.byte	0
 5090 0402 00       		.byte	0
 5091 0403 42       		.uleb128 0x42
 5092 0404 898201   		.uleb128 0x4109
 5093 0407 01       		.byte	0x1
 5094 0408 11       		.uleb128 0x11
 5095 0409 01       		.uleb128 0x1
 5096 040a 01       		.uleb128 0x1
 5097 040b 13       		.uleb128 0x13
 5098 040c 00       		.byte	0
 5099 040d 00       		.byte	0
 5100 040e 43       		.uleb128 0x43
 5101 040f 2E       		.uleb128 0x2e
 5102 0410 01       		.byte	0x1
 5103 0411 47       		.uleb128 0x47
 5104 0412 13       		.uleb128 0x13
 5105 0413 64       		.uleb128 0x64
 5106 0414 13       		.uleb128 0x13
 5107 0415 20       		.uleb128 0x20
 5108 0416 0B       		.uleb128 0xb
 5109 0417 64       		.uleb128 0x64
 5110 0418 13       		.uleb128 0x13
 5111 0419 01       		.uleb128 0x1
 5112 041a 13       		.uleb128 0x13
 5113 041b 00       		.byte	0
 5114 041c 00       		.byte	0
 5115 041d 44       		.uleb128 0x44
 5116 041e 05       		.uleb128 0x5
 5117 041f 00       		.byte	0
 5118 0420 03       		.uleb128 0x3
 5119 0421 0E       		.uleb128 0xe
 5120 0422 49       		.uleb128 0x49
 5121 0423 13       		.uleb128 0x13
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 103


 5122 0424 34       		.uleb128 0x34
 5123 0425 19       		.uleb128 0x19
 5124 0426 00       		.byte	0
 5125 0427 00       		.byte	0
 5126 0428 45       		.uleb128 0x45
 5127 0429 05       		.uleb128 0x5
 5128 042a 00       		.byte	0
 5129 042b 03       		.uleb128 0x3
 5130 042c 0E       		.uleb128 0xe
 5131 042d 3A       		.uleb128 0x3a
 5132 042e 0B       		.uleb128 0xb
 5133 042f 3B       		.uleb128 0x3b
 5134 0430 0B       		.uleb128 0xb
 5135 0431 49       		.uleb128 0x49
 5136 0432 13       		.uleb128 0x13
 5137 0433 00       		.byte	0
 5138 0434 00       		.byte	0
 5139 0435 46       		.uleb128 0x46
 5140 0436 2E       		.uleb128 0x2e
 5141 0437 01       		.byte	0x1
 5142 0438 47       		.uleb128 0x47
 5143 0439 13       		.uleb128 0x13
 5144 043a 64       		.uleb128 0x64
 5145 043b 13       		.uleb128 0x13
 5146 043c 11       		.uleb128 0x11
 5147 043d 01       		.uleb128 0x1
 5148 043e 12       		.uleb128 0x12
 5149 043f 06       		.uleb128 0x6
 5150 0440 40       		.uleb128 0x40
 5151 0441 18       		.uleb128 0x18
 5152 0442 64       		.uleb128 0x64
 5153 0443 13       		.uleb128 0x13
 5154 0444 9742     		.uleb128 0x2117
 5155 0446 19       		.uleb128 0x19
 5156 0447 01       		.uleb128 0x1
 5157 0448 13       		.uleb128 0x13
 5158 0449 00       		.byte	0
 5159 044a 00       		.byte	0
 5160 044b 47       		.uleb128 0x47
 5161 044c 05       		.uleb128 0x5
 5162 044d 00       		.byte	0
 5163 044e 03       		.uleb128 0x3
 5164 044f 0E       		.uleb128 0xe
 5165 0450 49       		.uleb128 0x49
 5166 0451 13       		.uleb128 0x13
 5167 0452 34       		.uleb128 0x34
 5168 0453 19       		.uleb128 0x19
 5169 0454 02       		.uleb128 0x2
 5170 0455 17       		.uleb128 0x17
 5171 0456 00       		.byte	0
 5172 0457 00       		.byte	0
 5173 0458 48       		.uleb128 0x48
 5174 0459 05       		.uleb128 0x5
 5175 045a 00       		.byte	0
 5176 045b 03       		.uleb128 0x3
 5177 045c 0E       		.uleb128 0xe
 5178 045d 49       		.uleb128 0x49
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 104


 5179 045e 13       		.uleb128 0x13
 5180 045f 34       		.uleb128 0x34
 5181 0460 19       		.uleb128 0x19
 5182 0461 02       		.uleb128 0x2
 5183 0462 18       		.uleb128 0x18
 5184 0463 00       		.byte	0
 5185 0464 00       		.byte	0
 5186 0465 49       		.uleb128 0x49
 5187 0466 2E       		.uleb128 0x2e
 5188 0467 01       		.byte	0x1
 5189 0468 47       		.uleb128 0x47
 5190 0469 13       		.uleb128 0x13
 5191 046a 20       		.uleb128 0x20
 5192 046b 0B       		.uleb128 0xb
 5193 046c 64       		.uleb128 0x64
 5194 046d 13       		.uleb128 0x13
 5195 046e 01       		.uleb128 0x1
 5196 046f 13       		.uleb128 0x13
 5197 0470 00       		.byte	0
 5198 0471 00       		.byte	0
 5199 0472 4A       		.uleb128 0x4a
 5200 0473 2E       		.uleb128 0x2e
 5201 0474 01       		.byte	0x1
 5202 0475 31       		.uleb128 0x31
 5203 0476 13       		.uleb128 0x13
 5204 0477 6E       		.uleb128 0x6e
 5205 0478 0E       		.uleb128 0xe
 5206 0479 64       		.uleb128 0x64
 5207 047a 13       		.uleb128 0x13
 5208 047b 01       		.uleb128 0x1
 5209 047c 13       		.uleb128 0x13
 5210 047d 00       		.byte	0
 5211 047e 00       		.byte	0
 5212 047f 4B       		.uleb128 0x4b
 5213 0480 05       		.uleb128 0x5
 5214 0481 00       		.byte	0
 5215 0482 31       		.uleb128 0x31
 5216 0483 13       		.uleb128 0x13
 5217 0484 00       		.byte	0
 5218 0485 00       		.byte	0
 5219 0486 4C       		.uleb128 0x4c
 5220 0487 2E       		.uleb128 0x2e
 5221 0488 01       		.byte	0x1
 5222 0489 47       		.uleb128 0x47
 5223 048a 13       		.uleb128 0x13
 5224 048b 3A       		.uleb128 0x3a
 5225 048c 0B       		.uleb128 0xb
 5226 048d 3B       		.uleb128 0x3b
 5227 048e 0B       		.uleb128 0xb
 5228 048f 20       		.uleb128 0x20
 5229 0490 0B       		.uleb128 0xb
 5230 0491 64       		.uleb128 0x64
 5231 0492 13       		.uleb128 0x13
 5232 0493 01       		.uleb128 0x1
 5233 0494 13       		.uleb128 0x13
 5234 0495 00       		.byte	0
 5235 0496 00       		.byte	0
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 105


 5236 0497 4D       		.uleb128 0x4d
 5237 0498 2E       		.uleb128 0x2e
 5238 0499 01       		.byte	0x1
 5239 049a 47       		.uleb128 0x47
 5240 049b 13       		.uleb128 0x13
 5241 049c 20       		.uleb128 0x20
 5242 049d 0B       		.uleb128 0xb
 5243 049e 01       		.uleb128 0x1
 5244 049f 13       		.uleb128 0x13
 5245 04a0 00       		.byte	0
 5246 04a1 00       		.byte	0
 5247 04a2 4E       		.uleb128 0x4e
 5248 04a3 05       		.uleb128 0x5
 5249 04a4 00       		.byte	0
 5250 04a5 03       		.uleb128 0x3
 5251 04a6 0E       		.uleb128 0xe
 5252 04a7 3A       		.uleb128 0x3a
 5253 04a8 0B       		.uleb128 0xb
 5254 04a9 3B       		.uleb128 0x3b
 5255 04aa 05       		.uleb128 0x5
 5256 04ab 49       		.uleb128 0x49
 5257 04ac 13       		.uleb128 0x13
 5258 04ad 00       		.byte	0
 5259 04ae 00       		.byte	0
 5260 04af 4F       		.uleb128 0x4f
 5261 04b0 05       		.uleb128 0x5
 5262 04b1 00       		.byte	0
 5263 04b2 03       		.uleb128 0x3
 5264 04b3 08       		.uleb128 0x8
 5265 04b4 3A       		.uleb128 0x3a
 5266 04b5 0B       		.uleb128 0xb
 5267 04b6 3B       		.uleb128 0x3b
 5268 04b7 05       		.uleb128 0x5
 5269 04b8 49       		.uleb128 0x49
 5270 04b9 13       		.uleb128 0x13
 5271 04ba 00       		.byte	0
 5272 04bb 00       		.byte	0
 5273 04bc 50       		.uleb128 0x50
 5274 04bd 2E       		.uleb128 0x2e
 5275 04be 01       		.byte	0x1
 5276 04bf 47       		.uleb128 0x47
 5277 04c0 13       		.uleb128 0x13
 5278 04c1 64       		.uleb128 0x64
 5279 04c2 13       		.uleb128 0x13
 5280 04c3 01       		.uleb128 0x1
 5281 04c4 13       		.uleb128 0x13
 5282 04c5 00       		.byte	0
 5283 04c6 00       		.byte	0
 5284 04c7 51       		.uleb128 0x51
 5285 04c8 2E       		.uleb128 0x2e
 5286 04c9 01       		.byte	0x1
 5287 04ca 47       		.uleb128 0x47
 5288 04cb 13       		.uleb128 0x13
 5289 04cc 64       		.uleb128 0x64
 5290 04cd 13       		.uleb128 0x13
 5291 04ce 11       		.uleb128 0x11
 5292 04cf 01       		.uleb128 0x1
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 106


 5293 04d0 12       		.uleb128 0x12
 5294 04d1 06       		.uleb128 0x6
 5295 04d2 40       		.uleb128 0x40
 5296 04d3 18       		.uleb128 0x18
 5297 04d4 64       		.uleb128 0x64
 5298 04d5 13       		.uleb128 0x13
 5299 04d6 9642     		.uleb128 0x2116
 5300 04d8 19       		.uleb128 0x19
 5301 04d9 01       		.uleb128 0x1
 5302 04da 13       		.uleb128 0x13
 5303 04db 00       		.byte	0
 5304 04dc 00       		.byte	0
 5305 04dd 52       		.uleb128 0x52
 5306 04de 2E       		.uleb128 0x2e
 5307 04df 01       		.byte	0x1
 5308 04e0 31       		.uleb128 0x31
 5309 04e1 13       		.uleb128 0x13
 5310 04e2 6E       		.uleb128 0x6e
 5311 04e3 0E       		.uleb128 0xe
 5312 04e4 11       		.uleb128 0x11
 5313 04e5 01       		.uleb128 0x1
 5314 04e6 12       		.uleb128 0x12
 5315 04e7 06       		.uleb128 0x6
 5316 04e8 40       		.uleb128 0x40
 5317 04e9 18       		.uleb128 0x18
 5318 04ea 64       		.uleb128 0x64
 5319 04eb 13       		.uleb128 0x13
 5320 04ec 9742     		.uleb128 0x2117
 5321 04ee 19       		.uleb128 0x19
 5322 04ef 01       		.uleb128 0x1
 5323 04f0 13       		.uleb128 0x13
 5324 04f1 00       		.byte	0
 5325 04f2 00       		.byte	0
 5326 04f3 53       		.uleb128 0x53
 5327 04f4 2E       		.uleb128 0x2e
 5328 04f5 01       		.byte	0x1
 5329 04f6 31       		.uleb128 0x31
 5330 04f7 13       		.uleb128 0x13
 5331 04f8 6E       		.uleb128 0x6e
 5332 04f9 0E       		.uleb128 0xe
 5333 04fa 11       		.uleb128 0x11
 5334 04fb 01       		.uleb128 0x1
 5335 04fc 12       		.uleb128 0x12
 5336 04fd 06       		.uleb128 0x6
 5337 04fe 40       		.uleb128 0x40
 5338 04ff 18       		.uleb128 0x18
 5339 0500 9742     		.uleb128 0x2117
 5340 0502 19       		.uleb128 0x19
 5341 0503 00       		.byte	0
 5342 0504 00       		.byte	0
 5343 0505 00       		.byte	0
 5344              		.section	.debug_loc,"",%progbits
 5345              	.Ldebug_loc0:
 5346              	.LLST20:
 5347 0000 1E010000 		.4byte	.LVL79
 5348 0004 2A010000 		.4byte	.LVL80
 5349 0008 0100     		.2byte	0x1
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 107


 5350 000a 50       		.byte	0x50
 5351 000b 00000000 		.4byte	0
 5352 000f 00000000 		.4byte	0
 5353              	.LLST21:
 5354 0013 2E010000 		.4byte	.LVL81
 5355 0017 30010000 		.4byte	.LVL82
 5356 001b 0200     		.2byte	0x2
 5357 001d 30       		.byte	0x30
 5358 001e 9F       		.byte	0x9f
 5359 001f 30010000 		.4byte	.LVL82
 5360 0023 34010000 		.4byte	.LVL83
 5361 0027 0100     		.2byte	0x1
 5362 0029 54       		.byte	0x54
 5363 002a 00000000 		.4byte	0
 5364 002e 00000000 		.4byte	0
 5365              	.LLST22:
 5366 0032 2E010000 		.4byte	.LVL81
 5367 0036 30010000 		.4byte	.LVL82
 5368 003a 0200     		.2byte	0x2
 5369 003c 30       		.byte	0x30
 5370 003d 9F       		.byte	0x9f
 5371 003e 30010000 		.4byte	.LVL82
 5372 0042 36010000 		.4byte	.LVL84
 5373 0046 0100     		.2byte	0x1
 5374 0048 53       		.byte	0x53
 5375 0049 38010000 		.4byte	.LVL85
 5376 004d 44010000 		.4byte	.LVL86
 5377 0051 0100     		.2byte	0x1
 5378 0053 53       		.byte	0x53
 5379 0054 00000000 		.4byte	0
 5380 0058 00000000 		.4byte	0
 5381              	.LLST23:
 5382 005c B8000000 		.4byte	.LVL69
 5383 0060 F6000000 		.4byte	.LVL73
 5384 0064 0100     		.2byte	0x1
 5385 0066 56       		.byte	0x56
 5386 0067 F8000000 		.4byte	.LVL74
 5387 006b 08010000 		.4byte	.LVL75
 5388 006f 0100     		.2byte	0x1
 5389 0071 56       		.byte	0x56
 5390 0072 08010000 		.4byte	.LVL75
 5391 0076 0A010000 		.4byte	.LVL76
 5392 007a 0200     		.2byte	0x2
 5393 007c 30       		.byte	0x30
 5394 007d 9F       		.byte	0x9f
 5395 007e 0A010000 		.4byte	.LVL76
 5396 0082 98010000 		.4byte	.LFE64
 5397 0086 0100     		.2byte	0x1
 5398 0088 56       		.byte	0x56
 5399 0089 00000000 		.4byte	0
 5400 008d 00000000 		.4byte	0
 5401              	.LLST24:
 5402 0091 00000000 		.4byte	.LVL49
 5403 0095 50000000 		.4byte	.LVL51
 5404 0099 0200     		.2byte	0x2
 5405 009b 32       		.byte	0x32
 5406 009c 9F       		.byte	0x9f
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 108


 5407 009d 00000000 		.4byte	0
 5408 00a1 00000000 		.4byte	0
 5409              	.LLST25:
 5410 00a5 00000000 		.4byte	.LVL49
 5411 00a9 50000000 		.4byte	.LVL51
 5412 00ad 0200     		.2byte	0x2
 5413 00af 30       		.byte	0x30
 5414 00b0 9F       		.byte	0x9f
 5415 00b1 00000000 		.4byte	0
 5416 00b5 00000000 		.4byte	0
 5417              	.LLST26:
 5418 00b9 06000000 		.4byte	.LVL50
 5419 00bd 50000000 		.4byte	.LVL51
 5420 00c1 0200     		.2byte	0x2
 5421 00c3 32       		.byte	0x32
 5422 00c4 9F       		.byte	0x9f
 5423 00c5 00000000 		.4byte	0
 5424 00c9 00000000 		.4byte	0
 5425              	.LLST27:
 5426 00cd 06000000 		.4byte	.LVL50
 5427 00d1 50000000 		.4byte	.LVL51
 5428 00d5 0200     		.2byte	0x2
 5429 00d7 30       		.byte	0x30
 5430 00d8 9F       		.byte	0x9f
 5431 00d9 00000000 		.4byte	0
 5432 00dd 00000000 		.4byte	0
 5433              	.LLST28:
 5434 00e1 06000000 		.4byte	.LVL50
 5435 00e5 50000000 		.4byte	.LVL51
 5436 00e9 0100     		.2byte	0x1
 5437 00eb 5D       		.byte	0x5d
 5438 00ec 00000000 		.4byte	0
 5439 00f0 00000000 		.4byte	0
 5440              	.LLST29:
 5441 00f4 50000000 		.4byte	.LVL51
 5442 00f8 54000000 		.4byte	.LVL52
 5443 00fc 0200     		.2byte	0x2
 5444 00fe 33       		.byte	0x33
 5445 00ff 9F       		.byte	0x9f
 5446 0100 00000000 		.4byte	0
 5447 0104 00000000 		.4byte	0
 5448              	.LLST30:
 5449 0108 50000000 		.4byte	.LVL51
 5450 010c 54000000 		.4byte	.LVL52
 5451 0110 0200     		.2byte	0x2
 5452 0112 30       		.byte	0x30
 5453 0113 9F       		.byte	0x9f
 5454 0114 00000000 		.4byte	0
 5455 0118 00000000 		.4byte	0
 5456              	.LLST33:
 5457 011c 50000000 		.4byte	.LVL51
 5458 0120 54000000 		.4byte	.LVL52
 5459 0124 0300     		.2byte	0x3
 5460 0126 91       		.byte	0x91
 5461 0127 B07F     		.sleb128 -80
 5462 0129 00000000 		.4byte	0
 5463 012d 00000000 		.4byte	0
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 109


 5464              	.LLST34:
 5465 0131 54000000 		.4byte	.LVL52
 5466 0135 58000000 		.4byte	.LVL53
 5467 0139 0200     		.2byte	0x2
 5468 013b 34       		.byte	0x34
 5469 013c 9F       		.byte	0x9f
 5470 013d 00000000 		.4byte	0
 5471 0141 00000000 		.4byte	0
 5472              	.LLST35:
 5473 0145 54000000 		.4byte	.LVL52
 5474 0149 58000000 		.4byte	.LVL53
 5475 014d 0200     		.2byte	0x2
 5476 014f 30       		.byte	0x30
 5477 0150 9F       		.byte	0x9f
 5478 0151 00000000 		.4byte	0
 5479 0155 00000000 		.4byte	0
 5480              	.LLST38:
 5481 0159 54000000 		.4byte	.LVL52
 5482 015d 58000000 		.4byte	.LVL53
 5483 0161 0400     		.2byte	0x4
 5484 0163 91       		.byte	0x91
 5485 0164 C87E     		.sleb128 -184
 5486 0166 9F       		.byte	0x9f
 5487 0167 00000000 		.4byte	0
 5488 016b 00000000 		.4byte	0
 5489              	.LLST39:
 5490 016f 58000000 		.4byte	.LVL53
 5491 0173 5C000000 		.4byte	.LVL54
 5492 0177 0200     		.2byte	0x2
 5493 0179 35       		.byte	0x35
 5494 017a 9F       		.byte	0x9f
 5495 017b 00000000 		.4byte	0
 5496 017f 00000000 		.4byte	0
 5497              	.LLST40:
 5498 0183 58000000 		.4byte	.LVL53
 5499 0187 5C000000 		.4byte	.LVL54
 5500 018b 0200     		.2byte	0x2
 5501 018d 30       		.byte	0x30
 5502 018e 9F       		.byte	0x9f
 5503 018f 00000000 		.4byte	0
 5504 0193 00000000 		.4byte	0
 5505              	.LLST43:
 5506 0197 58000000 		.4byte	.LVL53
 5507 019b 5C000000 		.4byte	.LVL54
 5508 019f 0100     		.2byte	0x1
 5509 01a1 52       		.byte	0x52
 5510 01a2 00000000 		.4byte	0
 5511 01a6 00000000 		.4byte	0
 5512              	.LLST44:
 5513 01aa 5C000000 		.4byte	.LVL54
 5514 01ae 62000000 		.4byte	.LVL55
 5515 01b2 0200     		.2byte	0x2
 5516 01b4 36       		.byte	0x36
 5517 01b5 9F       		.byte	0x9f
 5518 01b6 00000000 		.4byte	0
 5519 01ba 00000000 		.4byte	0
 5520              	.LLST45:
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 110


 5521 01be 5C000000 		.4byte	.LVL54
 5522 01c2 62000000 		.4byte	.LVL55
 5523 01c6 0200     		.2byte	0x2
 5524 01c8 30       		.byte	0x30
 5525 01c9 9F       		.byte	0x9f
 5526 01ca 00000000 		.4byte	0
 5527 01ce 00000000 		.4byte	0
 5528              	.LLST48:
 5529 01d2 5C000000 		.4byte	.LVL54
 5530 01d6 62000000 		.4byte	.LVL55
 5531 01da 0100     		.2byte	0x1
 5532 01dc 53       		.byte	0x53
 5533 01dd 00000000 		.4byte	0
 5534 01e1 00000000 		.4byte	0
 5535              	.LLST49:
 5536 01e5 62000000 		.4byte	.LVL55
 5537 01e9 6E000000 		.4byte	.LVL58
 5538 01ed 0600     		.2byte	0x6
 5539 01ef 03       		.byte	0x3
 5540 01f0 00000000 		.4byte	_Z7wait_usj
 5541 01f4 9F       		.byte	0x9f
 5542 01f5 00000000 		.4byte	0
 5543 01f9 00000000 		.4byte	0
 5544              	.LLST50:
 5545 01fd 62000000 		.4byte	.LVL55
 5546 0201 6E000000 		.4byte	.LVL58
 5547 0205 0600     		.2byte	0x6
 5548 0207 03       		.byte	0x3
 5549 0208 00000000 		.4byte	_Z7wait_msj
 5550 020c 9F       		.byte	0x9f
 5551 020d 00000000 		.4byte	0
 5552 0211 00000000 		.4byte	0
 5553              	.LLST51:
 5554 0215 62000000 		.4byte	.LVL55
 5555 0219 66000000 		.4byte	.LVL56
 5556 021d 0100     		.2byte	0x1
 5557 021f 53       		.byte	0x53
 5558 0220 66000000 		.4byte	.LVL56
 5559 0224 6E000000 		.4byte	.LVL58
 5560 0228 0300     		.2byte	0x3
 5561 022a 91       		.byte	0x91
 5562 022b BC7F     		.sleb128 -68
 5563 022d 00000000 		.4byte	0
 5564 0231 00000000 		.4byte	0
 5565              	.LLST52:
 5566 0235 62000000 		.4byte	.LVL55
 5567 0239 6E000000 		.4byte	.LVL58
 5568 023d 0100     		.2byte	0x1
 5569 023f 52       		.byte	0x52
 5570 0240 00000000 		.4byte	0
 5571 0244 00000000 		.4byte	0
 5572              	.LLST53:
 5573 0248 62000000 		.4byte	.LVL55
 5574 024c 6E000000 		.4byte	.LVL58
 5575 0250 0100     		.2byte	0x1
 5576 0252 51       		.byte	0x51
 5577 0253 00000000 		.4byte	0
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 111


 5578 0257 00000000 		.4byte	0
 5579              	.LLST54:
 5580 025b 62000000 		.4byte	.LVL55
 5581 025f 6E000000 		.4byte	.LVL58
 5582 0263 0300     		.2byte	0x3
 5583 0265 91       		.byte	0x91
 5584 0266 B07F     		.sleb128 -80
 5585 0268 00000000 		.4byte	0
 5586 026c 00000000 		.4byte	0
 5587              	.LLST55:
 5588 0270 62000000 		.4byte	.LVL55
 5589 0274 6E000000 		.4byte	.LVL58
 5590 0278 0100     		.2byte	0x1
 5591 027a 5D       		.byte	0x5d
 5592 027b 00000000 		.4byte	0
 5593 027f 00000000 		.4byte	0
 5594              	.LLST56:
 5595 0283 62000000 		.4byte	.LVL55
 5596 0287 68000000 		.4byte	.LVL57
 5597 028b 0400     		.2byte	0x4
 5598 028d 91       		.byte	0x91
 5599 028e AC7F     		.sleb128 -84
 5600 0290 9F       		.byte	0x9f
 5601 0291 68000000 		.4byte	.LVL57
 5602 0295 6E000000 		.4byte	.LVL58
 5603 0299 0100     		.2byte	0x1
 5604 029b 50       		.byte	0x50
 5605 029c 00000000 		.4byte	0
 5606 02a0 00000000 		.4byte	0
 5607              	.LLST57:
 5608 02a4 7A000000 		.4byte	.LVL60
 5609 02a8 96000000 		.4byte	.LVL62
 5610 02ac 0200     		.2byte	0x2
 5611 02ae 30       		.byte	0x30
 5612 02af 9F       		.byte	0x9f
 5613 02b0 00000000 		.4byte	0
 5614 02b4 00000000 		.4byte	0
 5615              	.LLST58:
 5616 02b8 7A000000 		.4byte	.LVL60
 5617 02bc 96000000 		.4byte	.LVL62
 5618 02c0 0200     		.2byte	0x2
 5619 02c2 32       		.byte	0x32
 5620 02c3 9F       		.byte	0x9f
 5621 02c4 00000000 		.4byte	0
 5622 02c8 00000000 		.4byte	0
 5623              	.LLST61:
 5624 02cc 7A000000 		.4byte	.LVL60
 5625 02d0 8E000000 		.4byte	.LVL61
 5626 02d4 0400     		.2byte	0x4
 5627 02d6 91       		.byte	0x91
 5628 02d7 847F     		.sleb128 -124
 5629 02d9 9F       		.byte	0x9f
 5630 02da 8E000000 		.4byte	.LVL61
 5631 02de 96000000 		.4byte	.LVL62
 5632 02e2 0100     		.2byte	0x1
 5633 02e4 50       		.byte	0x50
 5634 02e5 00000000 		.4byte	0
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 112


 5635 02e9 00000000 		.4byte	0
 5636              	.LLST62:
 5637 02ed 96000000 		.4byte	.LVL62
 5638 02f1 9A000000 		.4byte	.LVL63
 5639 02f5 0200     		.2byte	0x2
 5640 02f7 31       		.byte	0x31
 5641 02f8 9F       		.byte	0x9f
 5642 02f9 00000000 		.4byte	0
 5643 02fd 00000000 		.4byte	0
 5644              	.LLST63:
 5645 0301 96000000 		.4byte	.LVL62
 5646 0305 9A000000 		.4byte	.LVL63
 5647 0309 0200     		.2byte	0x2
 5648 030b 32       		.byte	0x32
 5649 030c 9F       		.byte	0x9f
 5650 030d 00000000 		.4byte	0
 5651 0311 00000000 		.4byte	0
 5652              	.LLST66:
 5653 0315 96000000 		.4byte	.LVL62
 5654 0319 9A000000 		.4byte	.LVL63
 5655 031d 0400     		.2byte	0x4
 5656 031f 91       		.byte	0x91
 5657 0320 987F     		.sleb128 -104
 5658 0322 9F       		.byte	0x9f
 5659 0323 00000000 		.4byte	0
 5660 0327 00000000 		.4byte	0
 5661              	.LLST67:
 5662 032b AE000000 		.4byte	.LVL67
 5663 032f B2000000 		.4byte	.LVL68
 5664 0333 0200     		.2byte	0x2
 5665 0335 30       		.byte	0x30
 5666 0336 9F       		.byte	0x9f
 5667 0337 00000000 		.4byte	0
 5668 033b 00000000 		.4byte	0
 5669              	.LLST68:
 5670 033f AE000000 		.4byte	.LVL67
 5671 0343 B2000000 		.4byte	.LVL68
 5672 0347 0400     		.2byte	0x4
 5673 0349 91       		.byte	0x91
 5674 034a 847F     		.sleb128 -124
 5675 034c 9F       		.byte	0x9f
 5676 034d 00000000 		.4byte	0
 5677 0351 00000000 		.4byte	0
 5678              	.LLST69:
 5679 0355 B2000000 		.4byte	.LVL68
 5680 0359 B8000000 		.4byte	.LVL69
 5681 035d 0200     		.2byte	0x2
 5682 035f 30       		.byte	0x30
 5683 0360 9F       		.byte	0x9f
 5684 0361 00000000 		.4byte	0
 5685 0365 00000000 		.4byte	0
 5686              	.LLST70:
 5687 0369 B2000000 		.4byte	.LVL68
 5688 036d B8000000 		.4byte	.LVL69
 5689 0371 0400     		.2byte	0x4
 5690 0373 91       		.byte	0x91
 5691 0374 987F     		.sleb128 -104
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 113


 5692 0376 9F       		.byte	0x9f
 5693 0377 00000000 		.4byte	0
 5694 037b 00000000 		.4byte	0
 5695              	.LLST71:
 5696 037f B8000000 		.4byte	.LVL69
 5697 0383 C0000000 		.4byte	.LVL70
 5698 0387 0400     		.2byte	0x4
 5699 0389 0A       		.byte	0xa
 5700 038a D007     		.2byte	0x7d0
 5701 038c 9F       		.byte	0x9f
 5702 038d 00000000 		.4byte	0
 5703 0391 00000000 		.4byte	0
 5704              	.LLST14:
 5705 0395 00000000 		.4byte	.LVL41
 5706 0399 0D000000 		.4byte	.LVL42-1
 5707 039d 0100     		.2byte	0x1
 5708 039f 50       		.byte	0x50
 5709 03a0 0D000000 		.4byte	.LVL42-1
 5710 03a4 32000000 		.4byte	.LVL47
 5711 03a8 0100     		.2byte	0x1
 5712 03aa 54       		.byte	0x54
 5713 03ab 32000000 		.4byte	.LVL47
 5714 03af 3C000000 		.4byte	.LFE63
 5715 03b3 0400     		.2byte	0x4
 5716 03b5 F3       		.byte	0xf3
 5717 03b6 01       		.uleb128 0x1
 5718 03b7 50       		.byte	0x50
 5719 03b8 9F       		.byte	0x9f
 5720 03b9 00000000 		.4byte	0
 5721 03bd 00000000 		.4byte	0
 5722              	.LLST15:
 5723 03c1 00000000 		.4byte	.LVL41
 5724 03c5 0D000000 		.4byte	.LVL42-1
 5725 03c9 0100     		.2byte	0x1
 5726 03cb 51       		.byte	0x51
 5727 03cc 0D000000 		.4byte	.LVL42-1
 5728 03d0 3C000000 		.4byte	.LFE63
 5729 03d4 0400     		.2byte	0x4
 5730 03d6 F3       		.byte	0xf3
 5731 03d7 01       		.uleb128 0x1
 5732 03d8 51       		.byte	0x51
 5733 03d9 9F       		.byte	0x9f
 5734 03da 00000000 		.4byte	0
 5735 03de 00000000 		.4byte	0
 5736              	.LLST16:
 5737 03e2 00000000 		.4byte	.LVL41
 5738 03e6 0D000000 		.4byte	.LVL42-1
 5739 03ea 0100     		.2byte	0x1
 5740 03ec 52       		.byte	0x52
 5741 03ed 0D000000 		.4byte	.LVL42-1
 5742 03f1 32000000 		.4byte	.LVL48
 5743 03f5 0100     		.2byte	0x1
 5744 03f7 56       		.byte	0x56
 5745 03f8 32000000 		.4byte	.LVL48
 5746 03fc 3C000000 		.4byte	.LFE63
 5747 0400 0400     		.2byte	0x4
 5748 0402 F3       		.byte	0xf3
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 114


 5749 0403 01       		.uleb128 0x1
 5750 0404 52       		.byte	0x52
 5751 0405 9F       		.byte	0x9f
 5752 0406 00000000 		.4byte	0
 5753 040a 00000000 		.4byte	0
 5754              	.LLST17:
 5755 040e 00000000 		.4byte	.LVL41
 5756 0412 0D000000 		.4byte	.LVL42-1
 5757 0416 0100     		.2byte	0x1
 5758 0418 53       		.byte	0x53
 5759 0419 0D000000 		.4byte	.LVL42-1
 5760 041d 3C000000 		.4byte	.LFE63
 5761 0421 0400     		.2byte	0x4
 5762 0423 F3       		.byte	0xf3
 5763 0424 01       		.uleb128 0x1
 5764 0425 53       		.byte	0x53
 5765 0426 9F       		.byte	0x9f
 5766 0427 00000000 		.4byte	0
 5767 042b 00000000 		.4byte	0
 5768              	.LLST18:
 5769 042f 20000000 		.4byte	.LVL43
 5770 0433 26000000 		.4byte	.LVL44
 5771 0437 0300     		.2byte	0x3
 5772 0439 08       		.byte	0x8
 5773 043a 64       		.byte	0x64
 5774 043b 9F       		.byte	0x9f
 5775 043c 00000000 		.4byte	0
 5776 0440 00000000 		.4byte	0
 5777              	.LLST19:
 5778 0444 26000000 		.4byte	.LVL44
 5779 0448 2C000000 		.4byte	.LVL45
 5780 044c 0400     		.2byte	0x4
 5781 044e 0A       		.byte	0xa
 5782 044f 1027     		.2byte	0x2710
 5783 0451 9F       		.byte	0x9f
 5784 0452 00000000 		.4byte	0
 5785 0456 00000000 		.4byte	0
 5786              	.LLST5:
 5787 045a 00000000 		.4byte	.LVL14
 5788 045e 08000000 		.4byte	.LVL15
 5789 0462 0100     		.2byte	0x1
 5790 0464 50       		.byte	0x50
 5791 0465 08000000 		.4byte	.LVL15
 5792 0469 0E000000 		.4byte	.LFE61
 5793 046d 0400     		.2byte	0x4
 5794 046f F3       		.byte	0xf3
 5795 0470 01       		.uleb128 0x1
 5796 0471 50       		.byte	0x50
 5797 0472 9F       		.byte	0x9f
 5798 0473 00000000 		.4byte	0
 5799 0477 00000000 		.4byte	0
 5800              	.LLST12:
 5801 047b 00000000 		.4byte	.LVL35
 5802 047f 06000000 		.4byte	.LVL36
 5803 0483 0100     		.2byte	0x1
 5804 0485 50       		.byte	0x50
 5805 0486 06000000 		.4byte	.LVL36
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 115


 5806 048a 28000000 		.4byte	.LFE60
 5807 048e 0100     		.2byte	0x1
 5808 0490 54       		.byte	0x54
 5809 0491 00000000 		.4byte	0
 5810 0495 00000000 		.4byte	0
 5811              	.LLST13:
 5812 0499 00000000 		.4byte	.LVL35
 5813 049d 06000000 		.4byte	.LVL36
 5814 04a1 0100     		.2byte	0x1
 5815 04a3 51       		.byte	0x51
 5816 04a4 06000000 		.4byte	.LVL36
 5817 04a8 28000000 		.4byte	.LFE60
 5818 04ac 0100     		.2byte	0x1
 5819 04ae 55       		.byte	0x55
 5820 04af 00000000 		.4byte	0
 5821 04b3 00000000 		.4byte	0
 5822              	.LLST7:
 5823 04b7 00000000 		.4byte	.LVL19
 5824 04bb 0B000000 		.4byte	.LVL20-1
 5825 04bf 0100     		.2byte	0x1
 5826 04c1 50       		.byte	0x50
 5827 04c2 0B000000 		.4byte	.LVL20-1
 5828 04c6 4E000000 		.4byte	.LVL30
 5829 04ca 0100     		.2byte	0x1
 5830 04cc 54       		.byte	0x54
 5831 04cd 4E000000 		.4byte	.LVL30
 5832 04d1 50000000 		.4byte	.LVL32
 5833 04d5 0400     		.2byte	0x4
 5834 04d7 F3       		.byte	0xf3
 5835 04d8 01       		.uleb128 0x1
 5836 04d9 50       		.byte	0x50
 5837 04da 9F       		.byte	0x9f
 5838 04db 50000000 		.4byte	.LVL32
 5839 04df 60000000 		.4byte	.LFE59
 5840 04e3 0100     		.2byte	0x1
 5841 04e5 54       		.byte	0x54
 5842 04e6 00000000 		.4byte	0
 5843 04ea 00000000 		.4byte	0
 5844              	.LLST8:
 5845 04ee 00000000 		.4byte	.LVL19
 5846 04f2 0B000000 		.4byte	.LVL20-1
 5847 04f6 0100     		.2byte	0x1
 5848 04f8 51       		.byte	0x51
 5849 04f9 0B000000 		.4byte	.LVL20-1
 5850 04fd 4E000000 		.4byte	.LVL31
 5851 0501 0100     		.2byte	0x1
 5852 0503 55       		.byte	0x55
 5853 0504 4E000000 		.4byte	.LVL31
 5854 0508 50000000 		.4byte	.LVL32
 5855 050c 0400     		.2byte	0x4
 5856 050e F3       		.byte	0xf3
 5857 050f 01       		.uleb128 0x1
 5858 0510 51       		.byte	0x51
 5859 0511 9F       		.byte	0x9f
 5860 0512 50000000 		.4byte	.LVL32
 5861 0516 60000000 		.4byte	.LFE59
 5862 051a 0100     		.2byte	0x1
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 116


 5863 051c 55       		.byte	0x55
 5864 051d 00000000 		.4byte	0
 5865 0521 00000000 		.4byte	0
 5866              	.LLST9:
 5867 0525 1A000000 		.4byte	.LVL22
 5868 0529 24000000 		.4byte	.LVL23
 5869 052d 0100     		.2byte	0x1
 5870 052f 50       		.byte	0x50
 5871 0530 50000000 		.4byte	.LVL32
 5872 0534 56000000 		.4byte	.LVL33
 5873 0538 0100     		.2byte	0x1
 5874 053a 50       		.byte	0x50
 5875 053b 00000000 		.4byte	0
 5876 053f 00000000 		.4byte	0
 5877              	.LLST10:
 5878 0543 32000000 		.4byte	.LVL26
 5879 0547 4C000000 		.4byte	.LVL29
 5880 054b 0200     		.2byte	0x2
 5881 054d 30       		.byte	0x30
 5882 054e 9F       		.byte	0x9f
 5883 054f 00000000 		.4byte	0
 5884 0553 00000000 		.4byte	0
 5885              	.LLST3:
 5886 0557 00000000 		.4byte	.LVL7
 5887 055b 04000000 		.4byte	.LVL8
 5888 055f 0100     		.2byte	0x1
 5889 0561 50       		.byte	0x50
 5890 0562 04000000 		.4byte	.LVL8
 5891 0566 0C000000 		.4byte	.LFE45
 5892 056a 0400     		.2byte	0x4
 5893 056c F3       		.byte	0xf3
 5894 056d 01       		.uleb128 0x1
 5895 056e 50       		.byte	0x50
 5896 056f 9F       		.byte	0x9f
 5897 0570 00000000 		.4byte	0
 5898 0574 00000000 		.4byte	0
 5899              	.LLST4:
 5900 0578 00000000 		.4byte	.LVL9
 5901 057c 08000000 		.4byte	.LVL10
 5902 0580 0100     		.2byte	0x1
 5903 0582 50       		.byte	0x50
 5904 0583 08000000 		.4byte	.LVL10
 5905 0587 1E000000 		.4byte	.LVL13
 5906 058b 0100     		.2byte	0x1
 5907 058d 54       		.byte	0x54
 5908 058e 00000000 		.4byte	0
 5909 0592 00000000 		.4byte	0
 5910              	.LLST0:
 5911 0596 00000000 		.4byte	.LVL0
 5912 059a 0B000000 		.4byte	.LVL1-1
 5913 059e 0100     		.2byte	0x1
 5914 05a0 50       		.byte	0x50
 5915 05a1 0B000000 		.4byte	.LVL1-1
 5916 05a5 0E000000 		.4byte	.LVL2
 5917 05a9 0400     		.2byte	0x4
 5918 05ab F3       		.byte	0xf3
 5919 05ac 01       		.uleb128 0x1
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 117


 5920 05ad 50       		.byte	0x50
 5921 05ae 9F       		.byte	0x9f
 5922 05af 0E000000 		.4byte	.LVL2
 5923 05b3 12000000 		.4byte	.LFE22
 5924 05b7 0100     		.2byte	0x1
 5925 05b9 50       		.byte	0x50
 5926 05ba 00000000 		.4byte	0
 5927 05be 00000000 		.4byte	0
 5928              	.LLST1:
 5929 05c2 00000000 		.4byte	.LVL0
 5930 05c6 0B000000 		.4byte	.LVL1-1
 5931 05ca 0100     		.2byte	0x1
 5932 05cc 51       		.byte	0x51
 5933 05cd 0B000000 		.4byte	.LVL1-1
 5934 05d1 0E000000 		.4byte	.LVL2
 5935 05d5 0400     		.2byte	0x4
 5936 05d7 F3       		.byte	0xf3
 5937 05d8 01       		.uleb128 0x1
 5938 05d9 51       		.byte	0x51
 5939 05da 9F       		.byte	0x9f
 5940 05db 0E000000 		.4byte	.LVL2
 5941 05df 12000000 		.4byte	.LFE22
 5942 05e3 0100     		.2byte	0x1
 5943 05e5 51       		.byte	0x51
 5944 05e6 00000000 		.4byte	0
 5945 05ea 00000000 		.4byte	0
 5946              	.LLST2:
 5947 05ee 00000000 		.4byte	.LVL5
 5948 05f2 04000000 		.4byte	.LVL6
 5949 05f6 0100     		.2byte	0x1
 5950 05f8 51       		.byte	0x51
 5951 05f9 04000000 		.4byte	.LVL6
 5952 05fd 08000000 		.4byte	.LFE44
 5953 0601 0400     		.2byte	0x4
 5954 0603 F3       		.byte	0xf3
 5955 0604 01       		.uleb128 0x1
 5956 0605 51       		.byte	0x51
 5957 0606 9F       		.byte	0x9f
 5958 0607 00000000 		.4byte	0
 5959 060b 00000000 		.4byte	0
 5960              	.LLST6:
 5961 060f 00000000 		.4byte	.LVL17
 5962 0613 05000000 		.4byte	.LVL18-1
 5963 0617 0100     		.2byte	0x1
 5964 0619 50       		.byte	0x50
 5965 061a 05000000 		.4byte	.LVL18-1
 5966 061e 08000000 		.4byte	.LFE62
 5967 0622 0400     		.2byte	0x4
 5968 0624 F3       		.byte	0xf3
 5969 0625 01       		.uleb128 0x1
 5970 0626 50       		.byte	0x50
 5971 0627 9F       		.byte	0x9f
 5972 0628 00000000 		.4byte	0
 5973 062c 00000000 		.4byte	0
 5974              		.section	.debug_aranges,"",%progbits
 5975 0000 84000000 		.4byte	0x84
 5976 0004 0200     		.2byte	0x2
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 118


 5977 0006 00000000 		.4byte	.Ldebug_info0
 5978 000a 04       		.byte	0x4
 5979 000b 00       		.byte	0
 5980 000c 0000     		.2byte	0
 5981 000e 0000     		.2byte	0
 5982 0010 00000000 		.4byte	.LFB22
 5983 0014 12000000 		.4byte	.LFE22-.LFB22
 5984 0018 00000000 		.4byte	.LFB42
 5985 001c 0C000000 		.4byte	.LFE42-.LFB42
 5986 0020 0C000000 		.4byte	.LFB67
 5987 0024 10000000 		.4byte	.LFE67-.LFB67
 5988 0028 00000000 		.4byte	.LFB43
 5989 002c 0C000000 		.4byte	.LFE43-.LFB43
 5990 0030 00000000 		.4byte	.LFB44
 5991 0034 08000000 		.4byte	.LFE44-.LFB44
 5992 0038 00000000 		.4byte	.LFB45
 5993 003c 0C000000 		.4byte	.LFE45-.LFB45
 5994 0040 0C000000 		.4byte	.LFB68
 5995 0044 10000000 		.4byte	.LFE68-.LFB68
 5996 0048 00000000 		.4byte	.LFB28
 5997 004c 40000000 		.4byte	.LFE28-.LFB28
 5998 0050 00000000 		.4byte	.LFB61
 5999 0054 0E000000 		.4byte	.LFE61-.LFB61
 6000 0058 00000000 		.4byte	.LFB62
 6001 005c 08000000 		.4byte	.LFE62-.LFB62
 6002 0060 00000000 		.4byte	.LFB59
 6003 0064 60000000 		.4byte	.LFE59-.LFB59
 6004 0068 00000000 		.4byte	.LFB60
 6005 006c 28000000 		.4byte	.LFE60-.LFB60
 6006 0070 00000000 		.4byte	.LFB63
 6007 0074 3C000000 		.4byte	.LFE63-.LFB63
 6008 0078 00000000 		.4byte	.LFB64
 6009 007c 98010000 		.4byte	.LFE64-.LFB64
 6010 0080 00000000 		.4byte	0
 6011 0084 00000000 		.4byte	0
 6012              		.section	.debug_ranges,"",%progbits
 6013              	.Ldebug_ranges0:
 6014 0000 02000000 		.4byte	.LBB143
 6015 0004 04000000 		.4byte	.LBE143
 6016 0008 06000000 		.4byte	.LBB162
 6017 000c 0C000000 		.4byte	.LBE162
 6018 0010 0E000000 		.4byte	.LBB179
 6019 0014 10000000 		.4byte	.LBE179
 6020 0018 18000000 		.4byte	.LBB197
 6021 001c 1A000000 		.4byte	.LBE197
 6022 0020 34000000 		.4byte	.LBB248
 6023 0024 38000000 		.4byte	.LBE248
 6024 0028 4C000000 		.4byte	.LBB255
 6025 002c 50000000 		.4byte	.LBE255
 6026 0030 00000000 		.4byte	0
 6027 0034 00000000 		.4byte	0
 6028 0038 0C000000 		.4byte	.LBB163
 6029 003c 0E000000 		.4byte	.LBE163
 6030 0040 10000000 		.4byte	.LBB180
 6031 0044 16000000 		.4byte	.LBE180
 6032 0048 1E000000 		.4byte	.LBB199
 6033 004c 20000000 		.4byte	.LBE199
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 119


 6034 0050 38000000 		.4byte	.LBB249
 6035 0054 3A000000 		.4byte	.LBE249
 6036 0058 50000000 		.4byte	.LBB256
 6037 005c 54000000 		.4byte	.LBE256
 6038 0060 00000000 		.4byte	0
 6039 0064 00000000 		.4byte	0
 6040 0068 16000000 		.4byte	.LBB181
 6041 006c 18000000 		.4byte	.LBE181
 6042 0070 1A000000 		.4byte	.LBB198
 6043 0074 1E000000 		.4byte	.LBE198
 6044 0078 20000000 		.4byte	.LBB200
 6045 007c 22000000 		.4byte	.LBE200
 6046 0080 28000000 		.4byte	.LBB233
 6047 0084 2A000000 		.4byte	.LBE233
 6048 0088 54000000 		.4byte	.LBB257
 6049 008c 58000000 		.4byte	.LBE257
 6050 0090 00000000 		.4byte	0
 6051 0094 00000000 		.4byte	0
 6052 0098 22000000 		.4byte	.LBB201
 6053 009c 24000000 		.4byte	.LBE201
 6054 00a0 2A000000 		.4byte	.LBB234
 6055 00a4 2C000000 		.4byte	.LBE234
 6056 00a8 2E000000 		.4byte	.LBB236
 6057 00ac 32000000 		.4byte	.LBE236
 6058 00b0 3C000000 		.4byte	.LBB251
 6059 00b4 40000000 		.4byte	.LBE251
 6060 00b8 58000000 		.4byte	.LBB258
 6061 00bc 5C000000 		.4byte	.LBE258
 6062 00c0 00000000 		.4byte	0
 6063 00c4 00000000 		.4byte	0
 6064 00c8 24000000 		.4byte	.LBB217
 6065 00cc 28000000 		.4byte	.LBE217
 6066 00d0 2C000000 		.4byte	.LBB235
 6067 00d4 2E000000 		.4byte	.LBE235
 6068 00d8 3A000000 		.4byte	.LBB250
 6069 00dc 3C000000 		.4byte	.LBE250
 6070 00e0 42000000 		.4byte	.LBB253
 6071 00e4 44000000 		.4byte	.LBE253
 6072 00e8 5C000000 		.4byte	.LBB259
 6073 00ec 62000000 		.4byte	.LBE259
 6074 00f0 00000000 		.4byte	0
 6075 00f4 00000000 		.4byte	0
 6076 00f8 32000000 		.4byte	.LBB237
 6077 00fc 34000000 		.4byte	.LBE237
 6078 0100 40000000 		.4byte	.LBB252
 6079 0104 42000000 		.4byte	.LBE252
 6080 0108 44000000 		.4byte	.LBB254
 6081 010c 4C000000 		.4byte	.LBE254
 6082 0110 62000000 		.4byte	.LBB260
 6083 0114 66000000 		.4byte	.LBE260
 6084 0118 68000000 		.4byte	.LBB261
 6085 011c 6E000000 		.4byte	.LBE261
 6086 0120 00000000 		.4byte	0
 6087 0124 00000000 		.4byte	0
 6088 0128 7A000000 		.4byte	.LBB262
 6089 012c 86000000 		.4byte	.LBE262
 6090 0130 92000000 		.4byte	.LBB280
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 120


 6091 0134 96000000 		.4byte	.LBE280
 6092 0138 00000000 		.4byte	0
 6093 013c 00000000 		.4byte	0
 6094 0140 86000000 		.4byte	.LBB269
 6095 0144 8C000000 		.4byte	.LBE269
 6096 0148 8E000000 		.4byte	.LBB279
 6097 014c 92000000 		.4byte	.LBE279
 6098 0150 96000000 		.4byte	.LBB281
 6099 0154 9A000000 		.4byte	.LBE281
 6100 0158 00000000 		.4byte	0
 6101 015c 00000000 		.4byte	0
 6102 0160 00000000 		.4byte	.LFB22
 6103 0164 12000000 		.4byte	.LFE22
 6104 0168 00000000 		.4byte	.LFB42
 6105 016c 0C000000 		.4byte	.LFE42
 6106 0170 0C000000 		.4byte	.LFB67
 6107 0174 1C000000 		.4byte	.LFE67
 6108 0178 00000000 		.4byte	.LFB43
 6109 017c 0C000000 		.4byte	.LFE43
 6110 0180 00000000 		.4byte	.LFB44
 6111 0184 08000000 		.4byte	.LFE44
 6112 0188 00000000 		.4byte	.LFB45
 6113 018c 0C000000 		.4byte	.LFE45
 6114 0190 0C000000 		.4byte	.LFB68
 6115 0194 1C000000 		.4byte	.LFE68
 6116 0198 00000000 		.4byte	.LFB28
 6117 019c 40000000 		.4byte	.LFE28
 6118 01a0 00000000 		.4byte	.LFB61
 6119 01a4 0E000000 		.4byte	.LFE61
 6120 01a8 00000000 		.4byte	.LFB62
 6121 01ac 08000000 		.4byte	.LFE62
 6122 01b0 00000000 		.4byte	.LFB59
 6123 01b4 60000000 		.4byte	.LFE59
 6124 01b8 00000000 		.4byte	.LFB60
 6125 01bc 28000000 		.4byte	.LFE60
 6126 01c0 00000000 		.4byte	.LFB63
 6127 01c4 3C000000 		.4byte	.LFE63
 6128 01c8 00000000 		.4byte	.LFB64
 6129 01cc 98010000 		.4byte	.LFE64
 6130 01d0 00000000 		.4byte	0
 6131 01d4 00000000 		.4byte	0
 6132              		.section	.debug_macro,"",%progbits
 6133              	.Ldebug_macro0:
 6134 0000 0400     		.2byte	0x4
 6135 0002 02       		.byte	0x2
 6136 0003 00000000 		.4byte	.Ldebug_line0
 6137 0007 07       		.byte	0x7
 6138 0008 00000000 		.4byte	.Ldebug_macro1
 6139 000c 03       		.byte	0x3
 6140 000d 00       		.uleb128 0
 6141 000e 02       		.uleb128 0x2
 6142              		.file 8 "LPC11xx.h"
 6143 000f 03       		.byte	0x3
 6144 0010 08       		.uleb128 0x8
 6145 0011 08       		.uleb128 0x8
 6146 0012 07       		.byte	0x7
 6147 0013 00000000 		.4byte	.Ldebug_macro2
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 121


 6148 0017 03       		.byte	0x3
 6149 0018 6D       		.uleb128 0x6d
 6150 0019 06       		.uleb128 0x6
 6151 001a 07       		.byte	0x7
 6152 001b 00000000 		.4byte	.Ldebug_macro3
 6153              		.file 9 "c:\\sysgcc\\arm-eabi\\lib\\gcc\\arm-eabi\\7.2.0\\include\\stdint.h"
 6154 001f 03       		.byte	0x3
 6155 0020 37       		.uleb128 0x37
 6156 0021 09       		.uleb128 0x9
 6157              		.file 10 "c:\\sysgcc\\arm-eabi\\arm-eabi\\sys-include\\stdint.h"
 6158 0022 03       		.byte	0x3
 6159 0023 09       		.uleb128 0x9
 6160 0024 0A       		.uleb128 0xa
 6161 0025 05       		.byte	0x5
 6162 0026 0A       		.uleb128 0xa
 6163 0027 10190000 		.4byte	.LASF449
 6164 002b 03       		.byte	0x3
 6165 002c 0C       		.uleb128 0xc
 6166 002d 04       		.uleb128 0x4
 6167 002e 05       		.byte	0x5
 6168 002f 06       		.uleb128 0x6
 6169 0030 3F430000 		.4byte	.LASF450
 6170              		.file 11 "c:\\sysgcc\\arm-eabi\\arm-eabi\\sys-include\\sys\\features.h"
 6171 0034 03       		.byte	0x3
 6172 0035 08       		.uleb128 0x8
 6173 0036 0B       		.uleb128 0xb
 6174 0037 05       		.byte	0x5
 6175 0038 16       		.uleb128 0x16
 6176 0039 AD1C0000 		.4byte	.LASF451
 6177              		.file 12 "c:\\sysgcc\\arm-eabi\\arm-eabi\\sys-include\\_newlib_version.h"
 6178 003d 03       		.byte	0x3
 6179 003e 1C       		.uleb128 0x1c
 6180 003f 0C       		.uleb128 0xc
 6181 0040 04       		.byte	0x4
 6182 0041 07       		.byte	0x7
 6183 0042 00000000 		.4byte	.Ldebug_macro4
 6184 0046 04       		.byte	0x4
 6185 0047 07       		.byte	0x7
 6186 0048 00000000 		.4byte	.Ldebug_macro5
 6187 004c 04       		.byte	0x4
 6188              		.file 13 "c:\\sysgcc\\arm-eabi\\arm-eabi\\sys-include\\sys\\_intsup.h"
 6189 004d 03       		.byte	0x3
 6190 004e 0D       		.uleb128 0xd
 6191 004f 0D       		.uleb128 0xd
 6192 0050 07       		.byte	0x7
 6193 0051 00000000 		.4byte	.Ldebug_macro6
 6194 0055 04       		.byte	0x4
 6195 0056 03       		.byte	0x3
 6196 0057 0E       		.uleb128 0xe
 6197 0058 05       		.uleb128 0x5
 6198 0059 07       		.byte	0x7
 6199 005a 00000000 		.4byte	.Ldebug_macro7
 6200 005e 04       		.byte	0x4
 6201 005f 07       		.byte	0x7
 6202 0060 00000000 		.4byte	.Ldebug_macro8
 6203 0064 04       		.byte	0x4
 6204 0065 05       		.byte	0x5
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 122


 6205 0066 0D       		.uleb128 0xd
 6206 0067 B4050000 		.4byte	.LASF598
 6207 006b 04       		.byte	0x4
 6208 006c 07       		.byte	0x7
 6209 006d 00000000 		.4byte	.Ldebug_macro9
 6210 0071 04       		.byte	0x4
 6211 0072 03       		.byte	0x3
 6212 0073 6E       		.uleb128 0x6e
 6213 0074 07       		.uleb128 0x7
 6214 0075 07       		.byte	0x7
 6215 0076 00000000 		.4byte	.Ldebug_macro10
 6216 007a 04       		.byte	0x4
 6217 007b 07       		.byte	0x7
 6218 007c 00000000 		.4byte	.Ldebug_macro11
 6219 0080 04       		.byte	0x4
 6220 0081 03       		.byte	0x3
 6221 0082 09       		.uleb128 0x9
 6222 0083 01       		.uleb128 0x1
 6223 0084 05       		.byte	0x5
 6224 0085 08       		.uleb128 0x8
 6225 0086 F8210000 		.4byte	.LASF770
 6226 008a 04       		.byte	0x4
 6227 008b 03       		.byte	0x3
 6228 008c 0A       		.uleb128 0xa
 6229 008d 03       		.uleb128 0x3
 6230 008e 07       		.byte	0x7
 6231 008f 00000000 		.4byte	.Ldebug_macro12
 6232 0093 04       		.byte	0x4
 6233 0094 04       		.byte	0x4
 6234 0095 00       		.byte	0
 6235              		.section	.debug_macro,"G",%progbits,wm4.0.c78eeed12c58b02cb443484f13096dde,comdat
 6236              	.Ldebug_macro1:
 6237 0000 0400     		.2byte	0x4
 6238 0002 00       		.byte	0
 6239 0003 05       		.byte	0x5
 6240 0004 00       		.uleb128 0
 6241 0005 56540000 		.4byte	.LASF0
 6242 0009 05       		.byte	0x5
 6243 000a 00       		.uleb128 0
 6244 000b 19280000 		.4byte	.LASF1
 6245 000f 05       		.byte	0x5
 6246 0010 00       		.uleb128 0
 6247 0011 18080000 		.4byte	.LASF2
 6248 0015 05       		.byte	0x5
 6249 0016 00       		.uleb128 0
 6250 0017 242D0000 		.4byte	.LASF3
 6251 001b 05       		.byte	0x5
 6252 001c 00       		.uleb128 0
 6253 001d F3510000 		.4byte	.LASF4
 6254 0021 05       		.byte	0x5
 6255 0022 00       		.uleb128 0
 6256 0023 B3180000 		.4byte	.LASF5
 6257 0027 05       		.byte	0x5
 6258 0028 00       		.uleb128 0
 6259 0029 82410000 		.4byte	.LASF6
 6260 002d 05       		.byte	0x5
 6261 002e 00       		.uleb128 0
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 123


 6262 002f B0570000 		.4byte	.LASF7
 6263 0033 05       		.byte	0x5
 6264 0034 00       		.uleb128 0
 6265 0035 DE1A0000 		.4byte	.LASF8
 6266 0039 05       		.byte	0x5
 6267 003a 00       		.uleb128 0
 6268 003b 1F490000 		.4byte	.LASF9
 6269 003f 05       		.byte	0x5
 6270 0040 00       		.uleb128 0
 6271 0041 FF300000 		.4byte	.LASF10
 6272 0045 05       		.byte	0x5
 6273 0046 00       		.uleb128 0
 6274 0047 40660000 		.4byte	.LASF11
 6275 004b 05       		.byte	0x5
 6276 004c 00       		.uleb128 0
 6277 004d 67030000 		.4byte	.LASF12
 6278 0051 05       		.byte	0x5
 6279 0052 00       		.uleb128 0
 6280 0053 7C280000 		.4byte	.LASF13
 6281 0057 05       		.byte	0x5
 6282 0058 00       		.uleb128 0
 6283 0059 C4310000 		.4byte	.LASF14
 6284 005d 05       		.byte	0x5
 6285 005e 00       		.uleb128 0
 6286 005f 34320000 		.4byte	.LASF15
 6287 0063 05       		.byte	0x5
 6288 0064 00       		.uleb128 0
 6289 0065 08450000 		.4byte	.LASF16
 6290 0069 05       		.byte	0x5
 6291 006a 00       		.uleb128 0
 6292 006b DF150000 		.4byte	.LASF17
 6293 006f 05       		.byte	0x5
 6294 0070 00       		.uleb128 0
 6295 0071 72040000 		.4byte	.LASF18
 6296 0075 05       		.byte	0x5
 6297 0076 00       		.uleb128 0
 6298 0077 761C0000 		.4byte	.LASF19
 6299 007b 05       		.byte	0x5
 6300 007c 00       		.uleb128 0
 6301 007d DF190000 		.4byte	.LASF20
 6302 0081 05       		.byte	0x5
 6303 0082 00       		.uleb128 0
 6304 0083 3A160000 		.4byte	.LASF21
 6305 0087 05       		.byte	0x5
 6306 0088 00       		.uleb128 0
 6307 0089 111D0000 		.4byte	.LASF22
 6308 008d 05       		.byte	0x5
 6309 008e 00       		.uleb128 0
 6310 008f 5A550000 		.4byte	.LASF23
 6311 0093 05       		.byte	0x5
 6312 0094 00       		.uleb128 0
 6313 0095 533D0000 		.4byte	.LASF24
 6314 0099 05       		.byte	0x5
 6315 009a 00       		.uleb128 0
 6316 009b EA670000 		.4byte	.LASF25
 6317 009f 05       		.byte	0x5
 6318 00a0 00       		.uleb128 0
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 124


 6319 00a1 6F490000 		.4byte	.LASF26
 6320 00a5 05       		.byte	0x5
 6321 00a6 00       		.uleb128 0
 6322 00a7 DB0B0000 		.4byte	.LASF27
 6323 00ab 05       		.byte	0x5
 6324 00ac 00       		.uleb128 0
 6325 00ad 74050000 		.4byte	.LASF28
 6326 00b1 05       		.byte	0x5
 6327 00b2 00       		.uleb128 0
 6328 00b3 B6390000 		.4byte	.LASF29
 6329 00b7 05       		.byte	0x5
 6330 00b8 00       		.uleb128 0
 6331 00b9 B03F0000 		.4byte	.LASF30
 6332 00bd 05       		.byte	0x5
 6333 00be 00       		.uleb128 0
 6334 00bf 33130000 		.4byte	.LASF31
 6335 00c3 05       		.byte	0x5
 6336 00c4 00       		.uleb128 0
 6337 00c5 3D550000 		.4byte	.LASF32
 6338 00c9 05       		.byte	0x5
 6339 00ca 00       		.uleb128 0
 6340 00cb 8E050000 		.4byte	.LASF33
 6341 00cf 05       		.byte	0x5
 6342 00d0 00       		.uleb128 0
 6343 00d1 71230000 		.4byte	.LASF34
 6344 00d5 05       		.byte	0x5
 6345 00d6 00       		.uleb128 0
 6346 00d7 461D0000 		.4byte	.LASF35
 6347 00db 05       		.byte	0x5
 6348 00dc 00       		.uleb128 0
 6349 00dd 61080000 		.4byte	.LASF36
 6350 00e1 05       		.byte	0x5
 6351 00e2 00       		.uleb128 0
 6352 00e3 4E520000 		.4byte	.LASF37
 6353 00e7 05       		.byte	0x5
 6354 00e8 00       		.uleb128 0
 6355 00e9 88510000 		.4byte	.LASF38
 6356 00ed 05       		.byte	0x5
 6357 00ee 00       		.uleb128 0
 6358 00ef EE4B0000 		.4byte	.LASF39
 6359 00f3 05       		.byte	0x5
 6360 00f4 00       		.uleb128 0
 6361 00f5 4C150000 		.4byte	.LASF40
 6362 00f9 05       		.byte	0x5
 6363 00fa 00       		.uleb128 0
 6364 00fb 4B400000 		.4byte	.LASF41
 6365 00ff 05       		.byte	0x5
 6366 0100 00       		.uleb128 0
 6367 0101 DD050000 		.4byte	.LASF42
 6368 0105 05       		.byte	0x5
 6369 0106 00       		.uleb128 0
 6370 0107 9F060000 		.4byte	.LASF43
 6371 010b 05       		.byte	0x5
 6372 010c 00       		.uleb128 0
 6373 010d A34E0000 		.4byte	.LASF44
 6374 0111 05       		.byte	0x5
 6375 0112 00       		.uleb128 0
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 125


 6376 0113 F63B0000 		.4byte	.LASF45
 6377 0117 05       		.byte	0x5
 6378 0118 00       		.uleb128 0
 6379 0119 0E400000 		.4byte	.LASF46
 6380 011d 05       		.byte	0x5
 6381 011e 00       		.uleb128 0
 6382 011f 462D0000 		.4byte	.LASF47
 6383 0123 05       		.byte	0x5
 6384 0124 00       		.uleb128 0
 6385 0125 E25D0000 		.4byte	.LASF48
 6386 0129 05       		.byte	0x5
 6387 012a 00       		.uleb128 0
 6388 012b CF170000 		.4byte	.LASF49
 6389 012f 05       		.byte	0x5
 6390 0130 00       		.uleb128 0
 6391 0131 48130000 		.4byte	.LASF50
 6392 0135 05       		.byte	0x5
 6393 0136 00       		.uleb128 0
 6394 0137 6E620000 		.4byte	.LASF51
 6395 013b 05       		.byte	0x5
 6396 013c 00       		.uleb128 0
 6397 013d F4470000 		.4byte	.LASF52
 6398 0141 05       		.byte	0x5
 6399 0142 00       		.uleb128 0
 6400 0143 66680000 		.4byte	.LASF53
 6401 0147 05       		.byte	0x5
 6402 0148 00       		.uleb128 0
 6403 0149 E2100000 		.4byte	.LASF54
 6404 014d 05       		.byte	0x5
 6405 014e 00       		.uleb128 0
 6406 014f C72E0000 		.4byte	.LASF55
 6407 0153 05       		.byte	0x5
 6408 0154 00       		.uleb128 0
 6409 0155 04520000 		.4byte	.LASF56
 6410 0159 05       		.byte	0x5
 6411 015a 00       		.uleb128 0
 6412 015b F12F0000 		.4byte	.LASF57
 6413 015f 05       		.byte	0x5
 6414 0160 00       		.uleb128 0
 6415 0161 9E120000 		.4byte	.LASF58
 6416 0165 05       		.byte	0x5
 6417 0166 00       		.uleb128 0
 6418 0167 214B0000 		.4byte	.LASF59
 6419 016b 05       		.byte	0x5
 6420 016c 00       		.uleb128 0
 6421 016d E0400000 		.4byte	.LASF60
 6422 0171 05       		.byte	0x5
 6423 0172 00       		.uleb128 0
 6424 0173 3F080000 		.4byte	.LASF61
 6425 0177 05       		.byte	0x5
 6426 0178 00       		.uleb128 0
 6427 0179 4E2E0000 		.4byte	.LASF62
 6428 017d 05       		.byte	0x5
 6429 017e 00       		.uleb128 0
 6430 017f B2600000 		.4byte	.LASF63
 6431 0183 05       		.byte	0x5
 6432 0184 00       		.uleb128 0
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 126


 6433 0185 AF190000 		.4byte	.LASF64
 6434 0189 05       		.byte	0x5
 6435 018a 00       		.uleb128 0
 6436 018b 091E0000 		.4byte	.LASF65
 6437 018f 05       		.byte	0x5
 6438 0190 00       		.uleb128 0
 6439 0191 7C540000 		.4byte	.LASF66
 6440 0195 05       		.byte	0x5
 6441 0196 00       		.uleb128 0
 6442 0197 A0540000 		.4byte	.LASF67
 6443 019b 05       		.byte	0x5
 6444 019c 00       		.uleb128 0
 6445 019d 162B0000 		.4byte	.LASF68
 6446 01a1 05       		.byte	0x5
 6447 01a2 00       		.uleb128 0
 6448 01a3 29220000 		.4byte	.LASF69
 6449 01a7 05       		.byte	0x5
 6450 01a8 00       		.uleb128 0
 6451 01a9 5B5A0000 		.4byte	.LASF70
 6452 01ad 05       		.byte	0x5
 6453 01ae 00       		.uleb128 0
 6454 01af DD4D0000 		.4byte	.LASF71
 6455 01b3 05       		.byte	0x5
 6456 01b4 00       		.uleb128 0
 6457 01b5 4E4B0000 		.4byte	.LASF72
 6458 01b9 05       		.byte	0x5
 6459 01ba 00       		.uleb128 0
 6460 01bb 450F0000 		.4byte	.LASF73
 6461 01bf 05       		.byte	0x5
 6462 01c0 00       		.uleb128 0
 6463 01c1 66650000 		.4byte	.LASF74
 6464 01c5 05       		.byte	0x5
 6465 01c6 00       		.uleb128 0
 6466 01c7 5F210000 		.4byte	.LASF75
 6467 01cb 05       		.byte	0x5
 6468 01cc 00       		.uleb128 0
 6469 01cd 083E0000 		.4byte	.LASF76
 6470 01d1 05       		.byte	0x5
 6471 01d2 00       		.uleb128 0
 6472 01d3 0E4A0000 		.4byte	.LASF77
 6473 01d7 05       		.byte	0x5
 6474 01d8 00       		.uleb128 0
 6475 01d9 4F680000 		.4byte	.LASF78
 6476 01dd 05       		.byte	0x5
 6477 01de 00       		.uleb128 0
 6478 01df 39560000 		.4byte	.LASF79
 6479 01e3 05       		.byte	0x5
 6480 01e4 00       		.uleb128 0
 6481 01e5 42440000 		.4byte	.LASF80
 6482 01e9 05       		.byte	0x5
 6483 01ea 00       		.uleb128 0
 6484 01eb 98030000 		.4byte	.LASF81
 6485 01ef 05       		.byte	0x5
 6486 01f0 00       		.uleb128 0
 6487 01f1 29340000 		.4byte	.LASF82
 6488 01f5 05       		.byte	0x5
 6489 01f6 00       		.uleb128 0
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 127


 6490 01f7 3E620000 		.4byte	.LASF83
 6491 01fb 05       		.byte	0x5
 6492 01fc 00       		.uleb128 0
 6493 01fd D6610000 		.4byte	.LASF84
 6494 0201 05       		.byte	0x5
 6495 0202 00       		.uleb128 0
 6496 0203 05020000 		.4byte	.LASF85
 6497 0207 05       		.byte	0x5
 6498 0208 00       		.uleb128 0
 6499 0209 5B630000 		.4byte	.LASF86
 6500 020d 05       		.byte	0x5
 6501 020e 00       		.uleb128 0
 6502 020f DA0D0000 		.4byte	.LASF87
 6503 0213 05       		.byte	0x5
 6504 0214 00       		.uleb128 0
 6505 0215 94400000 		.4byte	.LASF88
 6506 0219 05       		.byte	0x5
 6507 021a 00       		.uleb128 0
 6508 021b 49490000 		.4byte	.LASF89
 6509 021f 05       		.byte	0x5
 6510 0220 00       		.uleb128 0
 6511 0221 C3330000 		.4byte	.LASF90
 6512 0225 05       		.byte	0x5
 6513 0226 00       		.uleb128 0
 6514 0227 20350000 		.4byte	.LASF91
 6515 022b 05       		.byte	0x5
 6516 022c 00       		.uleb128 0
 6517 022d A60A0000 		.4byte	.LASF92
 6518 0231 05       		.byte	0x5
 6519 0232 00       		.uleb128 0
 6520 0233 25370000 		.4byte	.LASF93
 6521 0237 05       		.byte	0x5
 6522 0238 00       		.uleb128 0
 6523 0239 D40C0000 		.4byte	.LASF94
 6524 023d 05       		.byte	0x5
 6525 023e 00       		.uleb128 0
 6526 023f C4610000 		.4byte	.LASF95
 6527 0243 05       		.byte	0x5
 6528 0244 00       		.uleb128 0
 6529 0245 CD020000 		.4byte	.LASF96
 6530 0249 05       		.byte	0x5
 6531 024a 00       		.uleb128 0
 6532 024b 91000000 		.4byte	.LASF97
 6533 024f 05       		.byte	0x5
 6534 0250 00       		.uleb128 0
 6535 0251 77670000 		.4byte	.LASF98
 6536 0255 05       		.byte	0x5
 6537 0256 00       		.uleb128 0
 6538 0257 1B130000 		.4byte	.LASF99
 6539 025b 05       		.byte	0x5
 6540 025c 00       		.uleb128 0
 6541 025d 3D050000 		.4byte	.LASF100
 6542 0261 05       		.byte	0x5
 6543 0262 00       		.uleb128 0
 6544 0263 CF4E0000 		.4byte	.LASF101
 6545 0267 05       		.byte	0x5
 6546 0268 00       		.uleb128 0
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 128


 6547 0269 60260000 		.4byte	.LASF102
 6548 026d 05       		.byte	0x5
 6549 026e 00       		.uleb128 0
 6550 026f 785A0000 		.4byte	.LASF103
 6551 0273 05       		.byte	0x5
 6552 0274 00       		.uleb128 0
 6553 0275 522C0000 		.4byte	.LASF104
 6554 0279 05       		.byte	0x5
 6555 027a 00       		.uleb128 0
 6556 027b 7C590000 		.4byte	.LASF105
 6557 027f 05       		.byte	0x5
 6558 0280 00       		.uleb128 0
 6559 0281 F02E0000 		.4byte	.LASF106
 6560 0285 05       		.byte	0x5
 6561 0286 00       		.uleb128 0
 6562 0287 AB320000 		.4byte	.LASF107
 6563 028b 05       		.byte	0x5
 6564 028c 00       		.uleb128 0
 6565 028d 16200000 		.4byte	.LASF108
 6566 0291 05       		.byte	0x5
 6567 0292 00       		.uleb128 0
 6568 0293 611B0000 		.4byte	.LASF109
 6569 0297 05       		.byte	0x5
 6570 0298 00       		.uleb128 0
 6571 0299 A9290000 		.4byte	.LASF110
 6572 029d 05       		.byte	0x5
 6573 029e 00       		.uleb128 0
 6574 029f 2C290000 		.4byte	.LASF111
 6575 02a3 05       		.byte	0x5
 6576 02a4 00       		.uleb128 0
 6577 02a5 152A0000 		.4byte	.LASF112
 6578 02a9 05       		.byte	0x5
 6579 02aa 00       		.uleb128 0
 6580 02ab CF440000 		.4byte	.LASF113
 6581 02af 05       		.byte	0x5
 6582 02b0 00       		.uleb128 0
 6583 02b1 57620000 		.4byte	.LASF114
 6584 02b5 05       		.byte	0x5
 6585 02b6 00       		.uleb128 0
 6586 02b7 733E0000 		.4byte	.LASF115
 6587 02bb 05       		.byte	0x5
 6588 02bc 00       		.uleb128 0
 6589 02bd 45650000 		.4byte	.LASF116
 6590 02c1 05       		.byte	0x5
 6591 02c2 00       		.uleb128 0
 6592 02c3 E6270000 		.4byte	.LASF117
 6593 02c7 05       		.byte	0x5
 6594 02c8 00       		.uleb128 0
 6595 02c9 F15B0000 		.4byte	.LASF118
 6596 02cd 05       		.byte	0x5
 6597 02ce 00       		.uleb128 0
 6598 02cf B70B0000 		.4byte	.LASF119
 6599 02d3 05       		.byte	0x5
 6600 02d4 00       		.uleb128 0
 6601 02d5 4E160000 		.4byte	.LASF120
 6602 02d9 05       		.byte	0x5
 6603 02da 00       		.uleb128 0
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 129


 6604 02db 342F0000 		.4byte	.LASF121
 6605 02df 05       		.byte	0x5
 6606 02e0 00       		.uleb128 0
 6607 02e1 F4550000 		.4byte	.LASF122
 6608 02e5 05       		.byte	0x5
 6609 02e6 00       		.uleb128 0
 6610 02e7 C52B0000 		.4byte	.LASF123
 6611 02eb 05       		.byte	0x5
 6612 02ec 00       		.uleb128 0
 6613 02ed 8D260000 		.4byte	.LASF124
 6614 02f1 05       		.byte	0x5
 6615 02f2 00       		.uleb128 0
 6616 02f3 90060000 		.4byte	.LASF125
 6617 02f7 05       		.byte	0x5
 6618 02f8 00       		.uleb128 0
 6619 02f9 F4180000 		.4byte	.LASF126
 6620 02fd 05       		.byte	0x5
 6621 02fe 00       		.uleb128 0
 6622 02ff 1B570000 		.4byte	.LASF127
 6623 0303 05       		.byte	0x5
 6624 0304 00       		.uleb128 0
 6625 0305 762B0000 		.4byte	.LASF128
 6626 0309 05       		.byte	0x5
 6627 030a 00       		.uleb128 0
 6628 030b 5B220000 		.4byte	.LASF129
 6629 030f 05       		.byte	0x5
 6630 0310 00       		.uleb128 0
 6631 0311 E3480000 		.4byte	.LASF130
 6632 0315 05       		.byte	0x5
 6633 0316 00       		.uleb128 0
 6634 0317 AA470000 		.4byte	.LASF131
 6635 031b 05       		.byte	0x5
 6636 031c 00       		.uleb128 0
 6637 031d 6E5C0000 		.4byte	.LASF132
 6638 0321 05       		.byte	0x5
 6639 0322 00       		.uleb128 0
 6640 0323 1B3E0000 		.4byte	.LASF133
 6641 0327 05       		.byte	0x5
 6642 0328 00       		.uleb128 0
 6643 0329 384D0000 		.4byte	.LASF134
 6644 032d 05       		.byte	0x5
 6645 032e 00       		.uleb128 0
 6646 032f EC0D0000 		.4byte	.LASF135
 6647 0333 05       		.byte	0x5
 6648 0334 00       		.uleb128 0
 6649 0335 C01A0000 		.4byte	.LASF136
 6650 0339 05       		.byte	0x5
 6651 033a 00       		.uleb128 0
 6652 033b 63190000 		.4byte	.LASF137
 6653 033f 05       		.byte	0x5
 6654 0340 00       		.uleb128 0
 6655 0341 C3110000 		.4byte	.LASF138
 6656 0345 05       		.byte	0x5
 6657 0346 00       		.uleb128 0
 6658 0347 020B0000 		.4byte	.LASF139
 6659 034b 05       		.byte	0x5
 6660 034c 00       		.uleb128 0
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 130


 6661 034d 1E0D0000 		.4byte	.LASF140
 6662 0351 05       		.byte	0x5
 6663 0352 00       		.uleb128 0
 6664 0353 AB0E0000 		.4byte	.LASF141
 6665 0357 05       		.byte	0x5
 6666 0358 00       		.uleb128 0
 6667 0359 AB150000 		.4byte	.LASF142
 6668 035d 05       		.byte	0x5
 6669 035e 00       		.uleb128 0
 6670 035f 79350000 		.4byte	.LASF143
 6671 0363 05       		.byte	0x5
 6672 0364 00       		.uleb128 0
 6673 0365 590E0000 		.4byte	.LASF144
 6674 0369 05       		.byte	0x5
 6675 036a 00       		.uleb128 0
 6676 036b CC350000 		.4byte	.LASF145
 6677 036f 05       		.byte	0x5
 6678 0370 00       		.uleb128 0
 6679 0371 B7090000 		.4byte	.LASF146
 6680 0375 05       		.byte	0x5
 6681 0376 00       		.uleb128 0
 6682 0377 E33E0000 		.4byte	.LASF147
 6683 037b 05       		.byte	0x5
 6684 037c 00       		.uleb128 0
 6685 037d F22C0000 		.4byte	.LASF148
 6686 0381 05       		.byte	0x5
 6687 0382 00       		.uleb128 0
 6688 0383 7F3D0000 		.4byte	.LASF149
 6689 0387 05       		.byte	0x5
 6690 0388 00       		.uleb128 0
 6691 0389 BB2D0000 		.4byte	.LASF150
 6692 038d 05       		.byte	0x5
 6693 038e 00       		.uleb128 0
 6694 038f 443C0000 		.4byte	.LASF151
 6695 0393 05       		.byte	0x5
 6696 0394 00       		.uleb128 0
 6697 0395 B3340000 		.4byte	.LASF152
 6698 0399 05       		.byte	0x5
 6699 039a 00       		.uleb128 0
 6700 039b 64310000 		.4byte	.LASF153
 6701 039f 05       		.byte	0x5
 6702 03a0 00       		.uleb128 0
 6703 03a1 1B190000 		.4byte	.LASF154
 6704 03a5 05       		.byte	0x5
 6705 03a6 00       		.uleb128 0
 6706 03a7 2D3C0000 		.4byte	.LASF155
 6707 03ab 05       		.byte	0x5
 6708 03ac 00       		.uleb128 0
 6709 03ad EE490000 		.4byte	.LASF156
 6710 03b1 05       		.byte	0x5
 6711 03b2 00       		.uleb128 0
 6712 03b3 CB150000 		.4byte	.LASF157
 6713 03b7 05       		.byte	0x5
 6714 03b8 00       		.uleb128 0
 6715 03b9 241A0000 		.4byte	.LASF158
 6716 03bd 05       		.byte	0x5
 6717 03be 00       		.uleb128 0
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 131


 6718 03bf 772A0000 		.4byte	.LASF159
 6719 03c3 05       		.byte	0x5
 6720 03c4 00       		.uleb128 0
 6721 03c5 D5330000 		.4byte	.LASF160
 6722 03c9 05       		.byte	0x5
 6723 03ca 00       		.uleb128 0
 6724 03cb 501E0000 		.4byte	.LASF161
 6725 03cf 05       		.byte	0x5
 6726 03d0 00       		.uleb128 0
 6727 03d1 DC220000 		.4byte	.LASF162
 6728 03d5 05       		.byte	0x5
 6729 03d6 00       		.uleb128 0
 6730 03d7 B9210000 		.4byte	.LASF163
 6731 03db 05       		.byte	0x5
 6732 03dc 00       		.uleb128 0
 6733 03dd C8050000 		.4byte	.LASF164
 6734 03e1 05       		.byte	0x5
 6735 03e2 00       		.uleb128 0
 6736 03e3 DE2B0000 		.4byte	.LASF165
 6737 03e7 05       		.byte	0x5
 6738 03e8 00       		.uleb128 0
 6739 03e9 9B180000 		.4byte	.LASF166
 6740 03ed 05       		.byte	0x5
 6741 03ee 00       		.uleb128 0
 6742 03ef 9D670000 		.4byte	.LASF167
 6743 03f3 05       		.byte	0x5
 6744 03f4 00       		.uleb128 0
 6745 03f5 1A550000 		.4byte	.LASF168
 6746 03f9 05       		.byte	0x5
 6747 03fa 00       		.uleb128 0
 6748 03fb 56450000 		.4byte	.LASF169
 6749 03ff 05       		.byte	0x5
 6750 0400 00       		.uleb128 0
 6751 0401 7C660000 		.4byte	.LASF170
 6752 0405 05       		.byte	0x5
 6753 0406 00       		.uleb128 0
 6754 0407 DC300000 		.4byte	.LASF171
 6755 040b 05       		.byte	0x5
 6756 040c 00       		.uleb128 0
 6757 040d 89040000 		.4byte	.LASF172
 6758 0411 05       		.byte	0x5
 6759 0412 00       		.uleb128 0
 6760 0413 DC580000 		.4byte	.LASF173
 6761 0417 05       		.byte	0x5
 6762 0418 00       		.uleb128 0
 6763 0419 982B0000 		.4byte	.LASF174
 6764 041d 05       		.byte	0x5
 6765 041e 00       		.uleb128 0
 6766 041f 040E0000 		.4byte	.LASF175
 6767 0423 05       		.byte	0x5
 6768 0424 00       		.uleb128 0
 6769 0425 35090000 		.4byte	.LASF176
 6770 0429 05       		.byte	0x5
 6771 042a 00       		.uleb128 0
 6772 042b 7B190000 		.4byte	.LASF177
 6773 042f 05       		.byte	0x5
 6774 0430 00       		.uleb128 0
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 132


 6775 0431 9E200000 		.4byte	.LASF178
 6776 0435 05       		.byte	0x5
 6777 0436 00       		.uleb128 0
 6778 0437 E1570000 		.4byte	.LASF179
 6779 043b 05       		.byte	0x5
 6780 043c 00       		.uleb128 0
 6781 043d 56530000 		.4byte	.LASF180
 6782 0441 05       		.byte	0x5
 6783 0442 00       		.uleb128 0
 6784 0443 62060000 		.4byte	.LASF181
 6785 0447 05       		.byte	0x5
 6786 0448 00       		.uleb128 0
 6787 0449 1D610000 		.4byte	.LASF182
 6788 044d 05       		.byte	0x5
 6789 044e 00       		.uleb128 0
 6790 044f 39060000 		.4byte	.LASF183
 6791 0453 05       		.byte	0x5
 6792 0454 00       		.uleb128 0
 6793 0455 F8400000 		.4byte	.LASF184
 6794 0459 05       		.byte	0x5
 6795 045a 00       		.uleb128 0
 6796 045b 43200000 		.4byte	.LASF185
 6797 045f 05       		.byte	0x5
 6798 0460 00       		.uleb128 0
 6799 0461 D9620000 		.4byte	.LASF186
 6800 0465 05       		.byte	0x5
 6801 0466 00       		.uleb128 0
 6802 0467 1A000000 		.4byte	.LASF187
 6803 046b 05       		.byte	0x5
 6804 046c 00       		.uleb128 0
 6805 046d 325C0000 		.4byte	.LASF188
 6806 0471 05       		.byte	0x5
 6807 0472 00       		.uleb128 0
 6808 0473 A3630000 		.4byte	.LASF189
 6809 0477 05       		.byte	0x5
 6810 0478 00       		.uleb128 0
 6811 0479 41030000 		.4byte	.LASF190
 6812 047d 05       		.byte	0x5
 6813 047e 00       		.uleb128 0
 6814 047f 31300000 		.4byte	.LASF191
 6815 0483 05       		.byte	0x5
 6816 0484 00       		.uleb128 0
 6817 0485 7E320000 		.4byte	.LASF192
 6818 0489 05       		.byte	0x5
 6819 048a 00       		.uleb128 0
 6820 048b 7A470000 		.4byte	.LASF193
 6821 048f 05       		.byte	0x5
 6822 0490 00       		.uleb128 0
 6823 0491 47250000 		.4byte	.LASF194
 6824 0495 05       		.byte	0x5
 6825 0496 00       		.uleb128 0
 6826 0497 07350000 		.4byte	.LASF195
 6827 049b 05       		.byte	0x5
 6828 049c 00       		.uleb128 0
 6829 049d 8E2F0000 		.4byte	.LASF196
 6830 04a1 05       		.byte	0x5
 6831 04a2 00       		.uleb128 0
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 133


 6832 04a3 9D460000 		.4byte	.LASF197
 6833 04a7 05       		.byte	0x5
 6834 04a8 00       		.uleb128 0
 6835 04a9 D3090000 		.4byte	.LASF198
 6836 04ad 05       		.byte	0x5
 6837 04ae 00       		.uleb128 0
 6838 04af 05420000 		.4byte	.LASF199
 6839 04b3 05       		.byte	0x5
 6840 04b4 00       		.uleb128 0
 6841 04b5 24140000 		.4byte	.LASF200
 6842 04b9 05       		.byte	0x5
 6843 04ba 00       		.uleb128 0
 6844 04bb 07090000 		.4byte	.LASF201
 6845 04bf 05       		.byte	0x5
 6846 04c0 00       		.uleb128 0
 6847 04c1 21060000 		.4byte	.LASF202
 6848 04c5 05       		.byte	0x5
 6849 04c6 00       		.uleb128 0
 6850 04c7 F2540000 		.4byte	.LASF203
 6851 04cb 05       		.byte	0x5
 6852 04cc 00       		.uleb128 0
 6853 04cd 05250000 		.4byte	.LASF204
 6854 04d1 05       		.byte	0x5
 6855 04d2 00       		.uleb128 0
 6856 04d3 DD390000 		.4byte	.LASF205
 6857 04d7 05       		.byte	0x5
 6858 04d8 00       		.uleb128 0
 6859 04d9 BC2F0000 		.4byte	.LASF206
 6860 04dd 05       		.byte	0x5
 6861 04de 00       		.uleb128 0
 6862 04df 8B5C0000 		.4byte	.LASF207
 6863 04e3 05       		.byte	0x5
 6864 04e4 00       		.uleb128 0
 6865 04e5 B4620000 		.4byte	.LASF208
 6866 04e9 05       		.byte	0x5
 6867 04ea 00       		.uleb128 0
 6868 04eb 2D250000 		.4byte	.LASF209
 6869 04ef 05       		.byte	0x5
 6870 04f0 00       		.uleb128 0
 6871 04f1 07580000 		.4byte	.LASF210
 6872 04f5 05       		.byte	0x5
 6873 04f6 00       		.uleb128 0
 6874 04f7 E6610000 		.4byte	.LASF211
 6875 04fb 05       		.byte	0x5
 6876 04fc 00       		.uleb128 0
 6877 04fd BA0C0000 		.4byte	.LASF212
 6878 0501 05       		.byte	0x5
 6879 0502 00       		.uleb128 0
 6880 0503 CD0A0000 		.4byte	.LASF213
 6881 0507 05       		.byte	0x5
 6882 0508 00       		.uleb128 0
 6883 0509 A7360000 		.4byte	.LASF214
 6884 050d 05       		.byte	0x5
 6885 050e 00       		.uleb128 0
 6886 050f E0120000 		.4byte	.LASF215
 6887 0513 05       		.byte	0x5
 6888 0514 00       		.uleb128 0
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 134


 6889 0515 1A0B0000 		.4byte	.LASF216
 6890 0519 05       		.byte	0x5
 6891 051a 00       		.uleb128 0
 6892 051b D7060000 		.4byte	.LASF217
 6893 051f 05       		.byte	0x5
 6894 0520 00       		.uleb128 0
 6895 0521 C9360000 		.4byte	.LASF218
 6896 0525 05       		.byte	0x5
 6897 0526 00       		.uleb128 0
 6898 0527 C35A0000 		.4byte	.LASF219
 6899 052b 05       		.byte	0x5
 6900 052c 00       		.uleb128 0
 6901 052d A7000000 		.4byte	.LASF220
 6902 0531 05       		.byte	0x5
 6903 0532 00       		.uleb128 0
 6904 0533 E63C0000 		.4byte	.LASF221
 6905 0537 05       		.byte	0x5
 6906 0538 00       		.uleb128 0
 6907 0539 36010000 		.4byte	.LASF222
 6908 053d 05       		.byte	0x5
 6909 053e 00       		.uleb128 0
 6910 053f 90470000 		.4byte	.LASF223
 6911 0543 05       		.byte	0x5
 6912 0544 00       		.uleb128 0
 6913 0545 FA640000 		.4byte	.LASF224
 6914 0549 05       		.byte	0x5
 6915 054a 00       		.uleb128 0
 6916 054b 3D4C0000 		.4byte	.LASF225
 6917 054f 05       		.byte	0x5
 6918 0550 00       		.uleb128 0
 6919 0551 26030000 		.4byte	.LASF226
 6920 0555 05       		.byte	0x5
 6921 0556 00       		.uleb128 0
 6922 0557 B0510000 		.4byte	.LASF227
 6923 055b 05       		.byte	0x5
 6924 055c 00       		.uleb128 0
 6925 055d FE2A0000 		.4byte	.LASF228
 6926 0561 05       		.byte	0x5
 6927 0562 00       		.uleb128 0
 6928 0563 0A2D0000 		.4byte	.LASF229
 6929 0567 05       		.byte	0x5
 6930 0568 00       		.uleb128 0
 6931 0569 EB110000 		.4byte	.LASF230
 6932 056d 05       		.byte	0x5
 6933 056e 00       		.uleb128 0
 6934 056f CB4F0000 		.4byte	.LASF231
 6935 0573 05       		.byte	0x5
 6936 0574 00       		.uleb128 0
 6937 0575 35360000 		.4byte	.LASF232
 6938 0579 05       		.byte	0x5
 6939 057a 00       		.uleb128 0
 6940 057b 20120000 		.4byte	.LASF233
 6941 057f 05       		.byte	0x5
 6942 0580 00       		.uleb128 0
 6943 0581 F2190000 		.4byte	.LASF234
 6944 0585 05       		.byte	0x5
 6945 0586 00       		.uleb128 0
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 135


 6946 0587 4C310000 		.4byte	.LASF235
 6947 058b 05       		.byte	0x5
 6948 058c 00       		.uleb128 0
 6949 058d 4D100000 		.4byte	.LASF236
 6950 0591 05       		.byte	0x5
 6951 0592 00       		.uleb128 0
 6952 0593 05120000 		.4byte	.LASF237
 6953 0597 05       		.byte	0x5
 6954 0598 00       		.uleb128 0
 6955 0599 BE420000 		.4byte	.LASF238
 6956 059d 05       		.byte	0x5
 6957 059e 00       		.uleb128 0
 6958 059f 771F0000 		.4byte	.LASF239
 6959 05a3 05       		.byte	0x5
 6960 05a4 00       		.uleb128 0
 6961 05a5 A62D0000 		.4byte	.LASF240
 6962 05a9 05       		.byte	0x5
 6963 05aa 00       		.uleb128 0
 6964 05ab 27050000 		.4byte	.LASF241
 6965 05af 05       		.byte	0x5
 6966 05b0 00       		.uleb128 0
 6967 05b1 7D3B0000 		.4byte	.LASF242
 6968 05b5 05       		.byte	0x5
 6969 05b6 00       		.uleb128 0
 6970 05b7 3D0D0000 		.4byte	.LASF243
 6971 05bb 05       		.byte	0x5
 6972 05bc 00       		.uleb128 0
 6973 05bd F1020000 		.4byte	.LASF244
 6974 05c1 05       		.byte	0x5
 6975 05c2 00       		.uleb128 0
 6976 05c3 99490000 		.4byte	.LASF245
 6977 05c7 05       		.byte	0x5
 6978 05c8 00       		.uleb128 0
 6979 05c9 CA3E0000 		.4byte	.LASF246
 6980 05cd 05       		.byte	0x5
 6981 05ce 00       		.uleb128 0
 6982 05cf 351E0000 		.4byte	.LASF247
 6983 05d3 05       		.byte	0x5
 6984 05d4 00       		.uleb128 0
 6985 05d5 A2580000 		.4byte	.LASF248
 6986 05d9 05       		.byte	0x5
 6987 05da 00       		.uleb128 0
 6988 05db 19170000 		.4byte	.LASF249
 6989 05df 05       		.byte	0x5
 6990 05e0 00       		.uleb128 0
 6991 05e1 A0040000 		.4byte	.LASF250
 6992 05e5 05       		.byte	0x5
 6993 05e6 00       		.uleb128 0
 6994 05e7 2D280000 		.4byte	.LASF251
 6995 05eb 05       		.byte	0x5
 6996 05ec 00       		.uleb128 0
 6997 05ed A6400000 		.4byte	.LASF252
 6998 05f1 05       		.byte	0x5
 6999 05f2 00       		.uleb128 0
 7000 05f3 69120000 		.4byte	.LASF253
 7001 05f7 05       		.byte	0x5
 7002 05f8 00       		.uleb128 0
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 136


 7003 05f9 741A0000 		.4byte	.LASF254
 7004 05fd 05       		.byte	0x5
 7005 05fe 00       		.uleb128 0
 7006 05ff 490C0000 		.4byte	.LASF255
 7007 0603 05       		.byte	0x5
 7008 0604 00       		.uleb128 0
 7009 0605 3A1A0000 		.4byte	.LASF256
 7010 0609 05       		.byte	0x5
 7011 060a 00       		.uleb128 0
 7012 060b 76000000 		.4byte	.LASF257
 7013 060f 05       		.byte	0x5
 7014 0610 00       		.uleb128 0
 7015 0611 E31B0000 		.4byte	.LASF258
 7016 0615 05       		.byte	0x5
 7017 0616 00       		.uleb128 0
 7018 0617 24010000 		.4byte	.LASF259
 7019 061b 05       		.byte	0x5
 7020 061c 00       		.uleb128 0
 7021 061d F9630000 		.4byte	.LASF260
 7022 0621 05       		.byte	0x5
 7023 0622 00       		.uleb128 0
 7024 0623 942C0000 		.4byte	.LASF261
 7025 0627 05       		.byte	0x5
 7026 0628 00       		.uleb128 0
 7027 0629 F01D0000 		.4byte	.LASF262
 7028 062d 05       		.byte	0x5
 7029 062e 00       		.uleb128 0
 7030 062f 19450000 		.4byte	.LASF263
 7031 0633 05       		.byte	0x5
 7032 0634 00       		.uleb128 0
 7033 0635 1E300000 		.4byte	.LASF264
 7034 0639 05       		.byte	0x5
 7035 063a 00       		.uleb128 0
 7036 063b 8F1F0000 		.4byte	.LASF265
 7037 063f 05       		.byte	0x5
 7038 0640 00       		.uleb128 0
 7039 0641 C51F0000 		.4byte	.LASF266
 7040 0645 05       		.byte	0x5
 7041 0646 00       		.uleb128 0
 7042 0647 83090000 		.4byte	.LASF267
 7043 064b 05       		.byte	0x5
 7044 064c 00       		.uleb128 0
 7045 064d 5E280000 		.4byte	.LASF268
 7046 0651 05       		.byte	0x5
 7047 0652 00       		.uleb128 0
 7048 0653 47180000 		.4byte	.LASF269
 7049 0657 05       		.byte	0x5
 7050 0658 00       		.uleb128 0
 7051 0659 0E490000 		.4byte	.LASF270
 7052 065d 05       		.byte	0x5
 7053 065e 00       		.uleb128 0
 7054 065f BA040000 		.4byte	.LASF271
 7055 0663 05       		.byte	0x5
 7056 0664 00       		.uleb128 0
 7057 0665 133C0000 		.4byte	.LASF272
 7058 0669 05       		.byte	0x5
 7059 066a 00       		.uleb128 0
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 137


 7060 066b EA410000 		.4byte	.LASF273
 7061 066f 05       		.byte	0x5
 7062 0670 00       		.uleb128 0
 7063 0671 933A0000 		.4byte	.LASF274
 7064 0675 05       		.byte	0x5
 7065 0676 00       		.uleb128 0
 7066 0677 AB440000 		.4byte	.LASF275
 7067 067b 05       		.byte	0x5
 7068 067c 00       		.uleb128 0
 7069 067d D10F0000 		.4byte	.LASF276
 7070 0681 05       		.byte	0x5
 7071 0682 00       		.uleb128 0
 7072 0683 6F380000 		.4byte	.LASF277
 7073 0687 05       		.byte	0x5
 7074 0688 00       		.uleb128 0
 7075 0689 0C340000 		.4byte	.LASF278
 7076 068d 05       		.byte	0x5
 7077 068e 00       		.uleb128 0
 7078 068f 99370000 		.4byte	.LASF279
 7079 0693 05       		.byte	0x5
 7080 0694 00       		.uleb128 0
 7081 0695 DD440000 		.4byte	.LASF280
 7082 0699 05       		.byte	0x5
 7083 069a 00       		.uleb128 0
 7084 069b 7A030000 		.4byte	.LASF281
 7085 069f 05       		.byte	0x5
 7086 06a0 00       		.uleb128 0
 7087 06a1 0C3F0000 		.4byte	.LASF282
 7088 06a5 05       		.byte	0x5
 7089 06a6 00       		.uleb128 0
 7090 06a7 4D410000 		.4byte	.LASF283
 7091 06ab 05       		.byte	0x5
 7092 06ac 00       		.uleb128 0
 7093 06ad B90A0000 		.4byte	.LASF284
 7094 06b1 05       		.byte	0x5
 7095 06b2 00       		.uleb128 0
 7096 06b3 CC670000 		.4byte	.LASF285
 7097 06b7 05       		.byte	0x5
 7098 06b8 00       		.uleb128 0
 7099 06b9 3B4E0000 		.4byte	.LASF286
 7100 06bd 05       		.byte	0x5
 7101 06be 00       		.uleb128 0
 7102 06bf 8D4B0000 		.4byte	.LASF287
 7103 06c3 05       		.byte	0x5
 7104 06c4 00       		.uleb128 0
 7105 06c5 BE540000 		.4byte	.LASF288
 7106 06c9 05       		.byte	0x5
 7107 06ca 00       		.uleb128 0
 7108 06cb A0620000 		.4byte	.LASF289
 7109 06cf 05       		.byte	0x5
 7110 06d0 00       		.uleb128 0
 7111 06d1 145F0000 		.4byte	.LASF290
 7112 06d5 05       		.byte	0x5
 7113 06d6 00       		.uleb128 0
 7114 06d7 415F0000 		.4byte	.LASF291
 7115 06db 05       		.byte	0x5
 7116 06dc 00       		.uleb128 0
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 138


 7117 06dd F2530000 		.4byte	.LASF292
 7118 06e1 05       		.byte	0x5
 7119 06e2 00       		.uleb128 0
 7120 06e3 AE640000 		.4byte	.LASF293
 7121 06e7 05       		.byte	0x5
 7122 06e8 00       		.uleb128 0
 7123 06e9 2A080000 		.4byte	.LASF294
 7124 06ed 05       		.byte	0x5
 7125 06ee 00       		.uleb128 0
 7126 06ef 29330000 		.4byte	.LASF295
 7127 06f3 05       		.byte	0x5
 7128 06f4 00       		.uleb128 0
 7129 06f5 A65E0000 		.4byte	.LASF296
 7130 06f9 05       		.byte	0x5
 7131 06fa 00       		.uleb128 0
 7132 06fb 70140000 		.4byte	.LASF297
 7133 06ff 05       		.byte	0x5
 7134 0700 00       		.uleb128 0
 7135 0701 685B0000 		.4byte	.LASF298
 7136 0705 05       		.byte	0x5
 7137 0706 00       		.uleb128 0
 7138 0707 89680000 		.4byte	.LASF299
 7139 070b 05       		.byte	0x5
 7140 070c 00       		.uleb128 0
 7141 070d CB4A0000 		.4byte	.LASF300
 7142 0711 05       		.byte	0x5
 7143 0712 00       		.uleb128 0
 7144 0713 6B4B0000 		.4byte	.LASF301
 7145 0717 05       		.byte	0x5
 7146 0718 00       		.uleb128 0
 7147 0719 61540000 		.4byte	.LASF302
 7148 071d 05       		.byte	0x5
 7149 071e 00       		.uleb128 0
 7150 071f 2D600000 		.4byte	.LASF303
 7151 0723 05       		.byte	0x5
 7152 0724 00       		.uleb128 0
 7153 0725 F50B0000 		.4byte	.LASF304
 7154 0729 05       		.byte	0x5
 7155 072a 00       		.uleb128 0
 7156 072b 743C0000 		.4byte	.LASF305
 7157 072f 05       		.byte	0x5
 7158 0730 00       		.uleb128 0
 7159 0731 0A060000 		.4byte	.LASF306
 7160 0735 05       		.byte	0x5
 7161 0736 00       		.uleb128 0
 7162 0737 0A050000 		.4byte	.LASF307
 7163 073b 05       		.byte	0x5
 7164 073c 00       		.uleb128 0
 7165 073d 38530000 		.4byte	.LASF308
 7166 0741 05       		.byte	0x5
 7167 0742 00       		.uleb128 0
 7168 0743 31110000 		.4byte	.LASF309
 7169 0747 05       		.byte	0x5
 7170 0748 00       		.uleb128 0
 7171 0749 70560000 		.4byte	.LASF310
 7172 074d 05       		.byte	0x5
 7173 074e 00       		.uleb128 0
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 139


 7174 074f B2030000 		.4byte	.LASF311
 7175 0753 05       		.byte	0x5
 7176 0754 00       		.uleb128 0
 7177 0755 342C0000 		.4byte	.LASF312
 7178 0759 05       		.byte	0x5
 7179 075a 00       		.uleb128 0
 7180 075b E3600000 		.4byte	.LASF313
 7181 075f 05       		.byte	0x5
 7182 0760 00       		.uleb128 0
 7183 0761 F9330000 		.4byte	.LASF314
 7184 0765 05       		.byte	0x5
 7185 0766 00       		.uleb128 0
 7186 0767 5C110000 		.4byte	.LASF315
 7187 076b 05       		.byte	0x5
 7188 076c 00       		.uleb128 0
 7189 076d AF220000 		.4byte	.LASF316
 7190 0771 05       		.byte	0x5
 7191 0772 00       		.uleb128 0
 7192 0773 D3310000 		.4byte	.LASF317
 7193 0777 05       		.byte	0x5
 7194 0778 00       		.uleb128 0
 7195 0779 123D0000 		.4byte	.LASF318
 7196 077d 05       		.byte	0x5
 7197 077e 00       		.uleb128 0
 7198 077f 78310000 		.4byte	.LASF319
 7199 0783 05       		.byte	0x5
 7200 0784 00       		.uleb128 0
 7201 0785 840D0000 		.4byte	.LASF320
 7202 0789 05       		.byte	0x5
 7203 078a 00       		.uleb128 0
 7204 078b 4A5C0000 		.4byte	.LASF321
 7205 078f 05       		.byte	0x5
 7206 0790 00       		.uleb128 0
 7207 0791 00070000 		.4byte	.LASF322
 7208 0795 05       		.byte	0x5
 7209 0796 00       		.uleb128 0
 7210 0797 E8010000 		.4byte	.LASF323
 7211 079b 05       		.byte	0x5
 7212 079c 00       		.uleb128 0
 7213 079d 2B590000 		.4byte	.LASF324
 7214 07a1 05       		.byte	0x5
 7215 07a2 00       		.uleb128 0
 7216 07a3 A5210000 		.4byte	.LASF325
 7217 07a7 05       		.byte	0x5
 7218 07a8 00       		.uleb128 0
 7219 07a9 7F340000 		.4byte	.LASF326
 7220 07ad 05       		.byte	0x5
 7221 07ae 00       		.uleb128 0
 7222 07af EC4D0000 		.4byte	.LASF327
 7223 07b3 05       		.byte	0x5
 7224 07b4 00       		.uleb128 0
 7225 07b5 FE600000 		.4byte	.LASF328
 7226 07b9 05       		.byte	0x5
 7227 07ba 00       		.uleb128 0
 7228 07bb 74510000 		.4byte	.LASF329
 7229 07bf 05       		.byte	0x5
 7230 07c0 00       		.uleb128 0
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 140


 7231 07c1 6F2E0000 		.4byte	.LASF330
 7232 07c5 05       		.byte	0x5
 7233 07c6 00       		.uleb128 0
 7234 07c7 B1010000 		.4byte	.LASF331
 7235 07cb 05       		.byte	0x5
 7236 07cc 00       		.uleb128 0
 7237 07cd AB280000 		.4byte	.LASF332
 7238 07d1 05       		.byte	0x5
 7239 07d2 00       		.uleb128 0
 7240 07d3 F14C0000 		.4byte	.LASF333
 7241 07d7 05       		.byte	0x5
 7242 07d8 00       		.uleb128 0
 7243 07d9 891C0000 		.4byte	.LASF334
 7244 07dd 05       		.byte	0x5
 7245 07de 00       		.uleb128 0
 7246 07df FD3C0000 		.4byte	.LASF335
 7247 07e3 05       		.byte	0x5
 7248 07e4 00       		.uleb128 0
 7249 07e5 FA5C0000 		.4byte	.LASF336
 7250 07e9 05       		.byte	0x5
 7251 07ea 00       		.uleb128 0
 7252 07eb D5040000 		.4byte	.LASF337
 7253 07ef 05       		.byte	0x5
 7254 07f0 00       		.uleb128 0
 7255 07f1 5D4A0000 		.4byte	.LASF338
 7256 07f5 05       		.byte	0x5
 7257 07f6 00       		.uleb128 0
 7258 07f7 6A5A0000 		.4byte	.LASF339
 7259 07fb 05       		.byte	0x5
 7260 07fc 00       		.uleb128 0
 7261 07fd 40510000 		.4byte	.LASF340
 7262 0801 05       		.byte	0x5
 7263 0802 00       		.uleb128 0
 7264 0803 2E630000 		.4byte	.LASF341
 7265 0807 05       		.byte	0x5
 7266 0808 00       		.uleb128 0
 7267 0809 6E660000 		.4byte	.LASF342
 7268 080d 05       		.byte	0x5
 7269 080e 00       		.uleb128 0
 7270 080f 3A0C0000 		.4byte	.LASF343
 7271 0813 05       		.byte	0x5
 7272 0814 00       		.uleb128 0
 7273 0815 66050000 		.4byte	.LASF344
 7274 0819 05       		.byte	0x5
 7275 081a 00       		.uleb128 0
 7276 081b AC4A0000 		.4byte	.LASF345
 7277 081f 05       		.byte	0x5
 7278 0820 00       		.uleb128 0
 7279 0821 7D4E0000 		.4byte	.LASF346
 7280 0825 05       		.byte	0x5
 7281 0826 00       		.uleb128 0
 7282 0827 771B0000 		.4byte	.LASF347
 7283 082b 05       		.byte	0x5
 7284 082c 00       		.uleb128 0
 7285 082d 18030000 		.4byte	.LASF348
 7286 0831 05       		.byte	0x5
 7287 0832 00       		.uleb128 0
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 141


 7288 0833 F8570000 		.4byte	.LASF349
 7289 0837 05       		.byte	0x5
 7290 0838 00       		.uleb128 0
 7291 0839 3A340000 		.4byte	.LASF350
 7292 083d 05       		.byte	0x5
 7293 083e 00       		.uleb128 0
 7294 083f D8010000 		.4byte	.LASF351
 7295 0843 05       		.byte	0x5
 7296 0844 00       		.uleb128 0
 7297 0845 DD4A0000 		.4byte	.LASF352
 7298 0849 05       		.byte	0x5
 7299 084a 00       		.uleb128 0
 7300 084b CB0B0000 		.4byte	.LASF353
 7301 084f 05       		.byte	0x5
 7302 0850 00       		.uleb128 0
 7303 0851 8A440000 		.4byte	.LASF354
 7304 0855 05       		.byte	0x5
 7305 0856 00       		.uleb128 0
 7306 0857 07440000 		.4byte	.LASF355
 7307 085b 05       		.byte	0x5
 7308 085c 00       		.uleb128 0
 7309 085d F95E0000 		.4byte	.LASF356
 7310 0861 05       		.byte	0x5
 7311 0862 00       		.uleb128 0
 7312 0863 A14C0000 		.4byte	.LASF357
 7313 0867 05       		.byte	0x5
 7314 0868 00       		.uleb128 0
 7315 0869 AD4F0000 		.4byte	.LASF358
 7316 086d 05       		.byte	0x5
 7317 086e 00       		.uleb128 0
 7318 086f 8A1E0000 		.4byte	.LASF359
 7319 0873 05       		.byte	0x5
 7320 0874 00       		.uleb128 0
 7321 0875 AC350000 		.4byte	.LASF360
 7322 0879 05       		.byte	0x5
 7323 087a 00       		.uleb128 0
 7324 087b BC4F0000 		.4byte	.LASF361
 7325 087f 05       		.byte	0x5
 7326 0880 00       		.uleb128 0
 7327 0881 C42C0000 		.4byte	.LASF362
 7328 0885 05       		.byte	0x5
 7329 0886 00       		.uleb128 0
 7330 0887 76210000 		.4byte	.LASF363
 7331 088b 05       		.byte	0x5
 7332 088c 00       		.uleb128 0
 7333 088d 82650000 		.4byte	.LASF364
 7334 0891 05       		.byte	0x5
 7335 0892 00       		.uleb128 0
 7336 0893 85250000 		.4byte	.LASF365
 7337 0897 05       		.byte	0x5
 7338 0898 00       		.uleb128 0
 7339 0899 9E1C0000 		.4byte	.LASF366
 7340 089d 05       		.byte	0x5
 7341 089e 00       		.uleb128 0
 7342 089f AC070000 		.4byte	.LASF367
 7343 08a3 05       		.byte	0x5
 7344 08a4 00       		.uleb128 0
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 142


 7345 08a5 D4600000 		.4byte	.LASF368
 7346 08a9 05       		.byte	0x5
 7347 08aa 00       		.uleb128 0
 7348 08ab 080C0000 		.4byte	.LASF369
 7349 08af 05       		.byte	0x5
 7350 08b0 00       		.uleb128 0
 7351 08b1 9E1D0000 		.4byte	.LASF370
 7352 08b5 05       		.byte	0x5
 7353 08b6 00       		.uleb128 0
 7354 08b7 B5120000 		.4byte	.LASF371
 7355 08bb 05       		.byte	0x5
 7356 08bc 00       		.uleb128 0
 7357 08bd 4B570000 		.4byte	.LASF372
 7358 08c1 05       		.byte	0x5
 7359 08c2 00       		.uleb128 0
 7360 08c3 82170000 		.4byte	.LASF373
 7361 08c7 05       		.byte	0x5
 7362 08c8 00       		.uleb128 0
 7363 08c9 315B0000 		.4byte	.LASF374
 7364 08cd 05       		.byte	0x5
 7365 08ce 00       		.uleb128 0
 7366 08cf DD540000 		.4byte	.LASF375
 7367 08d3 05       		.byte	0x5
 7368 08d4 00       		.uleb128 0
 7369 08d5 15290000 		.4byte	.LASF376
 7370 08d9 05       		.byte	0x5
 7371 08da 00       		.uleb128 0
 7372 08db 1F090000 		.4byte	.LASF377
 7373 08df 05       		.byte	0x5
 7374 08e0 00       		.uleb128 0
 7375 08e1 F8000000 		.4byte	.LASF378
 7376 08e5 05       		.byte	0x5
 7377 08e6 00       		.uleb128 0
 7378 08e7 5A490000 		.4byte	.LASF379
 7379 08eb 05       		.byte	0x5
 7380 08ec 00       		.uleb128 0
 7381 08ed 84130000 		.4byte	.LASF380
 7382 08f1 05       		.byte	0x5
 7383 08f2 00       		.uleb128 0
 7384 08f3 1C410000 		.4byte	.LASF381
 7385 08f7 05       		.byte	0x5
 7386 08f8 00       		.uleb128 0
 7387 08f9 75300000 		.4byte	.LASF382
 7388 08fd 05       		.byte	0x5
 7389 08fe 00       		.uleb128 0
 7390 08ff 180C0000 		.4byte	.LASF383
 7391 0903 05       		.byte	0x5
 7392 0904 00       		.uleb128 0
 7393 0905 D7000000 		.4byte	.LASF384
 7394 0909 05       		.byte	0x5
 7395 090a 00       		.uleb128 0
 7396 090b FE230000 		.4byte	.LASF385
 7397 090f 05       		.byte	0x5
 7398 0910 00       		.uleb128 0
 7399 0911 6C520000 		.4byte	.LASF386
 7400 0915 05       		.byte	0x5
 7401 0916 00       		.uleb128 0
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 143


 7402 0917 49340000 		.4byte	.LASF387
 7403 091b 05       		.byte	0x5
 7404 091c 00       		.uleb128 0
 7405 091d E0350000 		.4byte	.LASF388
 7406 0921 05       		.byte	0x5
 7407 0922 00       		.uleb128 0
 7408 0923 D0240000 		.4byte	.LASF389
 7409 0927 05       		.byte	0x5
 7410 0928 00       		.uleb128 0
 7411 0929 35450000 		.4byte	.LASF390
 7412 092d 05       		.byte	0x5
 7413 092e 00       		.uleb128 0
 7414 092f 642C0000 		.4byte	.LASF391
 7415 0933 05       		.byte	0x5
 7416 0934 00       		.uleb128 0
 7417 0935 2A1D0000 		.4byte	.LASF392
 7418 0939 05       		.byte	0x5
 7419 093a 00       		.uleb128 0
 7420 093b C8370000 		.4byte	.LASF393
 7421 093f 05       		.byte	0x5
 7422 0940 00       		.uleb128 0
 7423 0941 925B0000 		.4byte	.LASF394
 7424 0945 05       		.byte	0x5
 7425 0946 00       		.uleb128 0
 7426 0947 2C3F0000 		.4byte	.LASF395
 7427 094b 06       		.byte	0x6
 7428 094c 00       		.uleb128 0
 7429 094d BA350000 		.4byte	.LASF396
 7430 0951 06       		.byte	0x6
 7431 0952 00       		.uleb128 0
 7432 0953 D3030000 		.4byte	.LASF397
 7433 0957 06       		.byte	0x6
 7434 0958 00       		.uleb128 0
 7435 0959 74630000 		.4byte	.LASF398
 7436 095d 06       		.byte	0x6
 7437 095e 00       		.uleb128 0
 7438 095f C1470000 		.4byte	.LASF399
 7439 0963 06       		.byte	0x6
 7440 0964 00       		.uleb128 0
 7441 0965 D32C0000 		.4byte	.LASF400
 7442 0969 06       		.byte	0x6
 7443 096a 00       		.uleb128 0
 7444 096b 17440000 		.4byte	.LASF401
 7445 096f 06       		.byte	0x6
 7446 0970 00       		.uleb128 0
 7447 0971 813A0000 		.4byte	.LASF402
 7448 0975 06       		.byte	0x6
 7449 0976 00       		.uleb128 0
 7450 0977 5F3E0000 		.4byte	.LASF403
 7451 097b 06       		.byte	0x6
 7452 097c 00       		.uleb128 0
 7453 097d AF4B0000 		.4byte	.LASF404
 7454 0981 06       		.byte	0x6
 7455 0982 00       		.uleb128 0
 7456 0983 31520000 		.4byte	.LASF405
 7457 0987 06       		.byte	0x6
 7458 0988 00       		.uleb128 0
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 144


 7459 0989 91430000 		.4byte	.LASF406
 7460 098d 05       		.byte	0x5
 7461 098e 00       		.uleb128 0
 7462 098f B0410000 		.4byte	.LASF407
 7463 0993 05       		.byte	0x5
 7464 0994 00       		.uleb128 0
 7465 0995 E72A0000 		.4byte	.LASF408
 7466 0999 05       		.byte	0x5
 7467 099a 00       		.uleb128 0
 7468 099b 7B430000 		.4byte	.LASF409
 7469 099f 05       		.byte	0x5
 7470 09a0 00       		.uleb128 0
 7471 09a1 CC410000 		.4byte	.LASF410
 7472 09a5 05       		.byte	0x5
 7473 09a6 00       		.uleb128 0
 7474 09a7 A6340000 		.4byte	.LASF411
 7475 09ab 05       		.byte	0x5
 7476 09ac 00       		.uleb128 0
 7477 09ad 9E070000 		.4byte	.LASF412
 7478 09b1 05       		.byte	0x5
 7479 09b2 00       		.uleb128 0
 7480 09b3 CD620000 		.4byte	.LASF413
 7481 09b7 06       		.byte	0x6
 7482 09b8 00       		.uleb128 0
 7483 09b9 3E3E0000 		.4byte	.LASF414
 7484 09bd 05       		.byte	0x5
 7485 09be 00       		.uleb128 0
 7486 09bf 8F500000 		.4byte	.LASF415
 7487 09c3 05       		.byte	0x5
 7488 09c4 00       		.uleb128 0
 7489 09c5 2B440000 		.4byte	.LASF416
 7490 09c9 05       		.byte	0x5
 7491 09ca 00       		.uleb128 0
 7492 09cb 08630000 		.4byte	.LASF417
 7493 09cf 05       		.byte	0x5
 7494 09d0 00       		.uleb128 0
 7495 09d1 992D0000 		.4byte	.LASF418
 7496 09d5 05       		.byte	0x5
 7497 09d6 00       		.uleb128 0
 7498 09d7 310E0000 		.4byte	.LASF419
 7499 09db 06       		.byte	0x6
 7500 09dc 00       		.uleb128 0
 7501 09dd A3350000 		.4byte	.LASF420
 7502 09e1 06       		.byte	0x6
 7503 09e2 00       		.uleb128 0
 7504 09e3 2F2D0000 		.4byte	.LASF421
 7505 09e7 06       		.byte	0x6
 7506 09e8 00       		.uleb128 0
 7507 09e9 6B420000 		.4byte	.LASF422
 7508 09ed 06       		.byte	0x6
 7509 09ee 00       		.uleb128 0
 7510 09ef ED370000 		.4byte	.LASF423
 7511 09f3 06       		.byte	0x6
 7512 09f4 00       		.uleb128 0
 7513 09f5 13530000 		.4byte	.LASF424
 7514 09f9 06       		.byte	0x6
 7515 09fa 00       		.uleb128 0
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 145


 7516 09fb 6E150000 		.4byte	.LASF425
 7517 09ff 06       		.byte	0x6
 7518 0a00 00       		.uleb128 0
 7519 0a01 BD440000 		.4byte	.LASF426
 7520 0a05 06       		.byte	0x6
 7521 0a06 00       		.uleb128 0
 7522 0a07 F9130000 		.4byte	.LASF427
 7523 0a0b 06       		.byte	0x6
 7524 0a0c 00       		.uleb128 0
 7525 0a0d 0B200000 		.4byte	.LASF428
 7526 0a11 06       		.byte	0x6
 7527 0a12 00       		.uleb128 0
 7528 0a13 8A4F0000 		.4byte	.LASF429
 7529 0a17 05       		.byte	0x5
 7530 0a18 00       		.uleb128 0
 7531 0a19 5A140000 		.4byte	.LASF430
 7532 0a1d 05       		.byte	0x5
 7533 0a1e 00       		.uleb128 0
 7534 0a1f 48550000 		.4byte	.LASF431
 7535 0a23 05       		.byte	0x5
 7536 0a24 00       		.uleb128 0
 7537 0a25 182F0000 		.4byte	.LASF432
 7538 0a29 05       		.byte	0x5
 7539 0a2a 00       		.uleb128 0
 7540 0a2b 36500000 		.4byte	.LASF433
 7541 0a2f 06       		.byte	0x6
 7542 0a30 00       		.uleb128 0
 7543 0a31 F11A0000 		.4byte	.LASF434
 7544 0a35 06       		.byte	0x6
 7545 0a36 00       		.uleb128 0
 7546 0a37 2D2A0000 		.4byte	.LASF435
 7547 0a3b 06       		.byte	0x6
 7548 0a3c 00       		.uleb128 0
 7549 0a3d 11650000 		.4byte	.LASF436
 7550 0a41 05       		.byte	0x5
 7551 0a42 00       		.uleb128 0
 7552 0a43 115C0000 		.4byte	.LASF437
 7553 0a47 05       		.byte	0x5
 7554 0a48 00       		.uleb128 0
 7555 0a49 85500000 		.4byte	.LASF438
 7556 0a4d 05       		.byte	0x5
 7557 0a4e 00       		.uleb128 0
 7558 0a4f 60580000 		.4byte	.LASF439
 7559 0a53 00       		.byte	0
 7560              		.section	.debug_macro,"G",%progbits,wm4.LPC11xx.h.22.97bcf1be2c5f6779936b22057a56ffc7,comdat
 7561              	.Ldebug_macro2:
 7562 0000 0400     		.2byte	0x4
 7563 0002 00       		.byte	0
 7564 0003 05       		.byte	0x5
 7565 0004 16       		.uleb128 0x16
 7566 0005 975E0000 		.4byte	.LASF440
 7567 0009 05       		.byte	0x5
 7568 000a 66       		.uleb128 0x66
 7569 000b 242F0000 		.4byte	.LASF441
 7570 000f 05       		.byte	0x5
 7571 0010 67       		.uleb128 0x67
 7572 0011 9F600000 		.4byte	.LASF442
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 146


 7573 0015 05       		.byte	0x5
 7574 0016 68       		.uleb128 0x68
 7575 0017 EF440000 		.4byte	.LASF443
 7576 001b 00       		.byte	0
 7577              		.section	.debug_macro,"G",%progbits,wm4.core_cm0.h.25.00f8ea3d55014cac38a7e13b36921eaf,comdat
 7578              	.Ldebug_macro3:
 7579 0000 0400     		.2byte	0x4
 7580 0002 00       		.byte	0
 7581 0003 05       		.byte	0x5
 7582 0004 19       		.uleb128 0x19
 7583 0005 90540000 		.4byte	.LASF444
 7584 0009 05       		.byte	0x5
 7585 000a 31       		.uleb128 0x31
 7586 000b FA590000 		.4byte	.LASF445
 7587 000f 05       		.byte	0x5
 7588 0010 32       		.uleb128 0x32
 7589 0011 5D2F0000 		.4byte	.LASF446
 7590 0015 05       		.byte	0x5
 7591 0016 33       		.uleb128 0x33
 7592 0017 1E380000 		.4byte	.LASF447
 7593 001b 05       		.byte	0x5
 7594 001c 35       		.uleb128 0x35
 7595 001d 54650000 		.4byte	.LASF448
 7596 0021 00       		.byte	0
 7597              		.section	.debug_macro,"G",%progbits,wm4.features.h.33.863f3be0b2e521e624fcc7d6fa31d2ca,comdat
 7598              	.Ldebug_macro4:
 7599 0000 0400     		.2byte	0x4
 7600 0002 00       		.byte	0
 7601 0003 05       		.byte	0x5
 7602 0004 21       		.uleb128 0x21
 7603 0005 7D0F0000 		.4byte	.LASF452
 7604 0009 05       		.byte	0x5
 7605 000a 28       		.uleb128 0x28
 7606 000b 045B0000 		.4byte	.LASF453
 7607 000f 06       		.byte	0x6
 7608 0010 8001     		.uleb128 0x80
 7609 0012 875E0000 		.4byte	.LASF454
 7610 0016 05       		.byte	0x5
 7611 0017 8101     		.uleb128 0x81
 7612 0019 7C2F0000 		.4byte	.LASF455
 7613 001d 06       		.byte	0x6
 7614 001e 8501     		.uleb128 0x85
 7615 0020 692D0000 		.4byte	.LASF456
 7616 0024 05       		.byte	0x5
 7617 0025 8601     		.uleb128 0x86
 7618 0027 8F600000 		.4byte	.LASF457
 7619 002b 06       		.byte	0x6
 7620 002c 8701     		.uleb128 0x87
 7621 002e 67670000 		.4byte	.LASF458
 7622 0032 05       		.byte	0x5
 7623 0033 8801     		.uleb128 0x88
 7624 0035 93150000 		.4byte	.LASF459
 7625 0039 06       		.byte	0x6
 7626 003a 9B01     		.uleb128 0x9b
 7627 003c DD290000 		.4byte	.LASF460
 7628 0040 05       		.byte	0x5
 7629 0041 9C01     		.uleb128 0x9c
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 147


 7630 0043 15390000 		.4byte	.LASF461
 7631 0047 05       		.byte	0x5
 7632 0048 F201     		.uleb128 0xf2
 7633 004a 3A410000 		.4byte	.LASF462
 7634 004e 05       		.byte	0x5
 7635 004f F801     		.uleb128 0xf8
 7636 0051 DD370000 		.4byte	.LASF463
 7637 0055 05       		.byte	0x5
 7638 0056 8002     		.uleb128 0x100
 7639 0058 BB4A0000 		.4byte	.LASF464
 7640 005c 05       		.byte	0x5
 7641 005d 8802     		.uleb128 0x108
 7642 005f 92170000 		.4byte	.LASF465
 7643 0063 05       		.byte	0x5
 7644 0064 9002     		.uleb128 0x110
 7645 0066 03170000 		.4byte	.LASF466
 7646 006a 05       		.byte	0x5
 7647 006b 9402     		.uleb128 0x114
 7648 006d F4240000 		.4byte	.LASF467
 7649 0071 05       		.byte	0x5
 7650 0072 9A02     		.uleb128 0x11a
 7651 0074 6A3A0000 		.4byte	.LASF468
 7652 0078 05       		.byte	0x5
 7653 0079 AA02     		.uleb128 0x12a
 7654 007b 54000000 		.4byte	.LASF469
 7655 007f 05       		.byte	0x5
 7656 0080 BA02     		.uleb128 0x13a
 7657 0082 EA590000 		.4byte	.LASF470
 7658 0086 00       		.byte	0
 7659              		.section	.debug_macro,"G",%progbits,wm4._default_types.h.15.247e5cd201eca3442cbf5404108c4935,comda
 7660              	.Ldebug_macro5:
 7661 0000 0400     		.2byte	0x4
 7662 0002 00       		.byte	0
 7663 0003 05       		.byte	0x5
 7664 0004 0F       		.uleb128 0xf
 7665 0005 75390000 		.4byte	.LASF471
 7666 0009 05       		.byte	0x5
 7667 000a 1A       		.uleb128 0x1a
 7668 000b 564D0000 		.4byte	.LASF472
 7669 000f 05       		.byte	0x5
 7670 0010 21       		.uleb128 0x21
 7671 0011 1B590000 		.4byte	.LASF473
 7672 0015 05       		.byte	0x5
 7673 0016 2F       		.uleb128 0x2f
 7674 0017 802C0000 		.4byte	.LASF474
 7675 001b 05       		.byte	0x5
 7676 001c 3D       		.uleb128 0x3d
 7677 001d 29200000 		.4byte	.LASF475
 7678 0021 05       		.byte	0x5
 7679 0022 53       		.uleb128 0x53
 7680 0023 F2360000 		.4byte	.LASF476
 7681 0027 05       		.byte	0x5
 7682 0028 6D       		.uleb128 0x6d
 7683 0029 A2130000 		.4byte	.LASF477
 7684 002d 05       		.byte	0x5
 7685 002e 8C01     		.uleb128 0x8c
 7686 0030 803F0000 		.4byte	.LASF478
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 148


 7687 0034 05       		.byte	0x5
 7688 0035 A601     		.uleb128 0xa6
 7689 0037 4E120000 		.4byte	.LASF479
 7690 003b 05       		.byte	0x5
 7691 003c BC01     		.uleb128 0xbc
 7692 003e 90280000 		.4byte	.LASF480
 7693 0042 05       		.byte	0x5
 7694 0043 CE01     		.uleb128 0xce
 7695 0045 8B380000 		.4byte	.LASF481
 7696 0049 06       		.byte	0x6
 7697 004a F401     		.uleb128 0xf4
 7698 004c 6A470000 		.4byte	.LASF482
 7699 0050 00       		.byte	0
 7700              		.section	.debug_macro,"G",%progbits,wm4._intsup.h.10.cce27fed8484c08a33f522034c30d2b5,comdat
 7701              	.Ldebug_macro6:
 7702 0000 0400     		.2byte	0x4
 7703 0002 00       		.byte	0
 7704 0003 05       		.byte	0x5
 7705 0004 0A       		.uleb128 0xa
 7706 0005 03600000 		.4byte	.LASF483
 7707 0009 05       		.byte	0x5
 7708 000a 10       		.uleb128 0x10
 7709 000b 26390000 		.4byte	.LASF484
 7710 000f 06       		.byte	0x6
 7711 0010 2A       		.uleb128 0x2a
 7712 0011 EB2C0000 		.4byte	.LASF485
 7713 0015 06       		.byte	0x6
 7714 0016 2B       		.uleb128 0x2b
 7715 0017 A2560000 		.4byte	.LASF486
 7716 001b 06       		.byte	0x6
 7717 001c 2C       		.uleb128 0x2c
 7718 001d 991D0000 		.4byte	.LASF487
 7719 0021 06       		.byte	0x6
 7720 0022 2D       		.uleb128 0x2d
 7721 0023 89520000 		.4byte	.LASF488
 7722 0027 02       		.byte	0x2
 7723 0028 2E       		.uleb128 0x2e
 7724 0029 696E7400 		.ascii	"int\000"
 7725 002d 06       		.byte	0x6
 7726 002e 2F       		.uleb128 0x2f
 7727 002f 0C670000 		.4byte	.LASF489
 7728 0033 06       		.byte	0x6
 7729 0034 30       		.uleb128 0x30
 7730 0035 85440000 		.4byte	.LASF490
 7731 0039 05       		.byte	0x5
 7732 003a 31       		.uleb128 0x31
 7733 003b 70470000 		.4byte	.LASF491
 7734 003f 05       		.byte	0x5
 7735 0040 32       		.uleb128 0x32
 7736 0041 12310000 		.4byte	.LASF492
 7737 0045 05       		.byte	0x5
 7738 0046 33       		.uleb128 0x33
 7739 0047 043F0000 		.4byte	.LASF493
 7740 004b 05       		.byte	0x5
 7741 004c 34       		.uleb128 0x34
 7742 004d B9650000 		.4byte	.LASF494
 7743 0051 05       		.byte	0x5
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 149


 7744 0052 35       		.uleb128 0x35
 7745 0053 4B320000 		.4byte	.LASF495
 7746 0057 05       		.byte	0x5
 7747 0058 36       		.uleb128 0x36
 7748 0059 1A2E0000 		.4byte	.LASF496
 7749 005d 05       		.byte	0x5
 7750 005e 37       		.uleb128 0x37
 7751 005f 5F640000 		.4byte	.LASF497
 7752 0063 05       		.byte	0x5
 7753 0064 40       		.uleb128 0x40
 7754 0065 D72A0000 		.4byte	.LASF498
 7755 0069 05       		.byte	0x5
 7756 006a 47       		.uleb128 0x47
 7757 006b F7610000 		.4byte	.LASF499
 7758 006f 05       		.byte	0x5
 7759 0070 4F       		.uleb128 0x4f
 7760 0071 92070000 		.4byte	.LASF500
 7761 0075 05       		.byte	0x5
 7762 0076 5A       		.uleb128 0x5a
 7763 0077 323E0000 		.4byte	.LASF501
 7764 007b 05       		.byte	0x5
 7765 007c 65       		.uleb128 0x65
 7766 007d 8C5D0000 		.4byte	.LASF502
 7767 0081 05       		.byte	0x5
 7768 0082 6E       		.uleb128 0x6e
 7769 0083 4C0E0000 		.4byte	.LASF503
 7770 0087 05       		.byte	0x5
 7771 0088 75       		.uleb128 0x75
 7772 0089 E1590000 		.4byte	.LASF504
 7773 008d 05       		.byte	0x5
 7774 008e 7E       		.uleb128 0x7e
 7775 008f D0160000 		.4byte	.LASF505
 7776 0093 05       		.byte	0x5
 7777 0094 8501     		.uleb128 0x85
 7778 0096 2A320000 		.4byte	.LASF506
 7779 009a 05       		.byte	0x5
 7780 009b 9001     		.uleb128 0x90
 7781 009d F1300000 		.4byte	.LASF507
 7782 00a1 05       		.byte	0x5
 7783 00a2 9401     		.uleb128 0x94
 7784 00a4 0A2F0000 		.4byte	.LASF508
 7785 00a8 05       		.byte	0x5
 7786 00a9 9F01     		.uleb128 0x9f
 7787 00ab 5B570000 		.4byte	.LASF509
 7788 00af 05       		.byte	0x5
 7789 00b0 AA01     		.uleb128 0xaa
 7790 00b2 3E0E0000 		.4byte	.LASF510
 7791 00b6 05       		.byte	0x5
 7792 00b7 B301     		.uleb128 0xb3
 7793 00b9 A6430000 		.4byte	.LASF511
 7794 00bd 06       		.byte	0x6
 7795 00be B501     		.uleb128 0xb5
 7796 00c0 EB2C0000 		.4byte	.LASF485
 7797 00c4 06       		.byte	0x6
 7798 00c5 B601     		.uleb128 0xb6
 7799 00c7 A2560000 		.4byte	.LASF486
 7800 00cb 06       		.byte	0x6
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 150


 7801 00cc B701     		.uleb128 0xb7
 7802 00ce 991D0000 		.4byte	.LASF487
 7803 00d2 06       		.byte	0x6
 7804 00d3 B801     		.uleb128 0xb8
 7805 00d5 89520000 		.4byte	.LASF488
 7806 00d9 02       		.byte	0x2
 7807 00da B901     		.uleb128 0xb9
 7808 00dc 696E7400 		.ascii	"int\000"
 7809 00e0 06       		.byte	0x6
 7810 00e1 BA01     		.uleb128 0xba
 7811 00e3 85440000 		.4byte	.LASF490
 7812 00e7 06       		.byte	0x6
 7813 00e8 BF01     		.uleb128 0xbf
 7814 00ea 0C670000 		.4byte	.LASF489
 7815 00ee 00       		.byte	0
 7816              		.section	.debug_macro,"G",%progbits,wm4._stdint.h.10.c24fa3af3bc1706662bb5593a907e841,comdat
 7817              	.Ldebug_macro7:
 7818 0000 0400     		.2byte	0x4
 7819 0002 00       		.byte	0
 7820 0003 05       		.byte	0x5
 7821 0004 0A       		.uleb128 0xa
 7822 0005 840C0000 		.4byte	.LASF512
 7823 0009 05       		.byte	0x5
 7824 000a 15       		.uleb128 0x15
 7825 000b 90580000 		.4byte	.LASF513
 7826 000f 05       		.byte	0x5
 7827 0010 19       		.uleb128 0x19
 7828 0011 BC170000 		.4byte	.LASF514
 7829 0015 05       		.byte	0x5
 7830 0016 1B       		.uleb128 0x1b
 7831 0017 8B200000 		.4byte	.LASF515
 7832 001b 05       		.byte	0x5
 7833 001c 21       		.uleb128 0x21
 7834 001d 96270000 		.4byte	.LASF516
 7835 0021 05       		.byte	0x5
 7836 0022 25       		.uleb128 0x25
 7837 0023 29550000 		.4byte	.LASF517
 7838 0027 05       		.byte	0x5
 7839 0028 27       		.uleb128 0x27
 7840 0029 15330000 		.4byte	.LASF518
 7841 002d 05       		.byte	0x5
 7842 002e 2D       		.uleb128 0x2d
 7843 002f 433F0000 		.4byte	.LASF519
 7844 0033 05       		.byte	0x5
 7845 0034 31       		.uleb128 0x31
 7846 0035 B9020000 		.4byte	.LASF520
 7847 0039 05       		.byte	0x5
 7848 003a 33       		.uleb128 0x33
 7849 003b 984A0000 		.4byte	.LASF521
 7850 003f 05       		.byte	0x5
 7851 0040 39       		.uleb128 0x39
 7852 0041 1E4F0000 		.4byte	.LASF522
 7853 0045 05       		.byte	0x5
 7854 0046 3D       		.uleb128 0x3d
 7855 0047 10150000 		.4byte	.LASF523
 7856 004b 05       		.byte	0x5
 7857 004c 3F       		.uleb128 0x3f
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 151


 7858 004d 68590000 		.4byte	.LASF524
 7859 0051 05       		.byte	0x5
 7860 0052 44       		.uleb128 0x44
 7861 0053 D24B0000 		.4byte	.LASF525
 7862 0057 05       		.byte	0x5
 7863 0058 49       		.uleb128 0x49
 7864 0059 394B0000 		.4byte	.LASF526
 7865 005d 05       		.byte	0x5
 7866 005e 4E       		.uleb128 0x4e
 7867 005f 1B100000 		.4byte	.LASF527
 7868 0063 05       		.byte	0x5
 7869 0064 53       		.uleb128 0x53
 7870 0065 EF5A0000 		.4byte	.LASF528
 7871 0069 00       		.byte	0
 7872              		.section	.debug_macro,"G",%progbits,wm4.stdint.h.23.d53047a68f4a85177f80b422d52785ed,comdat
 7873              	.Ldebug_macro8:
 7874 0000 0400     		.2byte	0x4
 7875 0002 00       		.byte	0
 7876 0003 05       		.byte	0x5
 7877 0004 17       		.uleb128 0x17
 7878 0005 46640000 		.4byte	.LASF529
 7879 0009 05       		.byte	0x5
 7880 000a 1D       		.uleb128 0x1d
 7881 000b A4230000 		.4byte	.LASF530
 7882 000f 05       		.byte	0x5
 7883 0010 23       		.uleb128 0x23
 7884 0011 DA550000 		.4byte	.LASF531
 7885 0015 05       		.byte	0x5
 7886 0016 29       		.uleb128 0x29
 7887 0017 FF270000 		.4byte	.LASF532
 7888 001b 05       		.byte	0x5
 7889 001c 35       		.uleb128 0x35
 7890 001d 33400000 		.4byte	.LASF533
 7891 0021 05       		.byte	0x5
 7892 0022 3F       		.uleb128 0x3f
 7893 0023 093B0000 		.4byte	.LASF534
 7894 0027 05       		.byte	0x5
 7895 0028 49       		.uleb128 0x49
 7896 0029 E90A0000 		.4byte	.LASF535
 7897 002d 05       		.byte	0x5
 7898 002e 53       		.uleb128 0x53
 7899 002f 341C0000 		.4byte	.LASF536
 7900 0033 05       		.byte	0x5
 7901 0034 8001     		.uleb128 0x80
 7902 0036 C2250000 		.4byte	.LASF537
 7903 003a 05       		.byte	0x5
 7904 003b 8101     		.uleb128 0x81
 7905 003d BD400000 		.4byte	.LASF538
 7906 0041 05       		.byte	0x5
 7907 0042 8201     		.uleb128 0x82
 7908 0044 06140000 		.4byte	.LASF539
 7909 0048 05       		.byte	0x5
 7910 0049 9801     		.uleb128 0x98
 7911 004b 620C0000 		.4byte	.LASF540
 7912 004f 05       		.byte	0x5
 7913 0050 9901     		.uleb128 0x99
 7914 0052 96080000 		.4byte	.LASF541
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 152


 7915 0056 05       		.byte	0x5
 7916 0057 9A01     		.uleb128 0x9a
 7917 0059 DF630000 		.4byte	.LASF542
 7918 005d 05       		.byte	0x5
 7919 005e A201     		.uleb128 0xa2
 7920 0060 90020000 		.4byte	.LASF543
 7921 0064 05       		.byte	0x5
 7922 0065 A301     		.uleb128 0xa3
 7923 0067 970D0000 		.4byte	.LASF544
 7924 006b 05       		.byte	0x5
 7925 006c A401     		.uleb128 0xa4
 7926 006e CD510000 		.4byte	.LASF545
 7927 0072 05       		.byte	0x5
 7928 0073 AE01     		.uleb128 0xae
 7929 0075 4C420000 		.4byte	.LASF546
 7930 0079 05       		.byte	0x5
 7931 007a AF01     		.uleb128 0xaf
 7932 007c 5B0A0000 		.4byte	.LASF547
 7933 0080 05       		.byte	0x5
 7934 0081 B001     		.uleb128 0xb0
 7935 0083 AC370000 		.4byte	.LASF548
 7936 0087 05       		.byte	0x5
 7937 0088 B801     		.uleb128 0xb8
 7938 008a B7100000 		.4byte	.LASF549
 7939 008e 05       		.byte	0x5
 7940 008f B901     		.uleb128 0xb9
 7941 0091 BB070000 		.4byte	.LASF550
 7942 0095 05       		.byte	0x5
 7943 0096 BA01     		.uleb128 0xba
 7944 0098 104D0000 		.4byte	.LASF551
 7945 009c 05       		.byte	0x5
 7946 009d C401     		.uleb128 0xc4
 7947 009f 402A0000 		.4byte	.LASF552
 7948 00a3 05       		.byte	0x5
 7949 00a4 C501     		.uleb128 0xc5
 7950 00a6 45210000 		.4byte	.LASF553
 7951 00aa 05       		.byte	0x5
 7952 00ab C601     		.uleb128 0xc6
 7953 00ad EB340000 		.4byte	.LASF554
 7954 00b1 05       		.byte	0x5
 7955 00b2 D401     		.uleb128 0xd4
 7956 00b4 0E560000 		.4byte	.LASF555
 7957 00b8 05       		.byte	0x5
 7958 00b9 D501     		.uleb128 0xd5
 7959 00bb D8230000 		.4byte	.LASF556
 7960 00bf 05       		.byte	0x5
 7961 00c0 D601     		.uleb128 0xd6
 7962 00c2 2E540000 		.4byte	.LASF557
 7963 00c6 05       		.byte	0x5
 7964 00c7 E601     		.uleb128 0xe6
 7965 00c9 CD200000 		.4byte	.LASF558
 7966 00cd 05       		.byte	0x5
 7967 00ce E701     		.uleb128 0xe7
 7968 00d0 993B0000 		.4byte	.LASF559
 7969 00d4 05       		.byte	0x5
 7970 00d5 E801     		.uleb128 0xe8
 7971 00d7 B33B0000 		.4byte	.LASF560
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 153


 7972 00db 05       		.byte	0x5
 7973 00dc F601     		.uleb128 0xf6
 7974 00de CB0E0000 		.4byte	.LASF561
 7975 00e2 05       		.byte	0x5
 7976 00e3 F701     		.uleb128 0xf7
 7977 00e5 940C0000 		.4byte	.LASF562
 7978 00e9 05       		.byte	0x5
 7979 00ea F801     		.uleb128 0xf8
 7980 00ec C6490000 		.4byte	.LASF563
 7981 00f0 05       		.byte	0x5
 7982 00f1 8602     		.uleb128 0x106
 7983 00f3 933C0000 		.4byte	.LASF564
 7984 00f7 05       		.byte	0x5
 7985 00f8 8702     		.uleb128 0x107
 7986 00fa 231B0000 		.4byte	.LASF565
 7987 00fe 05       		.byte	0x5
 7988 00ff 8802     		.uleb128 0x108
 7989 0101 224A0000 		.4byte	.LASF566
 7990 0105 05       		.byte	0x5
 7991 0106 9602     		.uleb128 0x116
 7992 0108 EC290000 		.4byte	.LASF567
 7993 010c 05       		.byte	0x5
 7994 010d 9702     		.uleb128 0x117
 7995 010f 2F3D0000 		.4byte	.LASF568
 7996 0113 05       		.byte	0x5
 7997 0114 9802     		.uleb128 0x118
 7998 0116 8D530000 		.4byte	.LASF569
 7999 011a 05       		.byte	0x5
 8000 011b A602     		.uleb128 0x126
 8001 011d 67100000 		.4byte	.LASF570
 8002 0121 05       		.byte	0x5
 8003 0122 A702     		.uleb128 0x127
 8004 0124 24670000 		.4byte	.LASF571
 8005 0128 05       		.byte	0x5
 8006 0129 A802     		.uleb128 0x128
 8007 012b 511F0000 		.4byte	.LASF572
 8008 012f 05       		.byte	0x5
 8009 0130 B602     		.uleb128 0x136
 8010 0132 16430000 		.4byte	.LASF573
 8011 0136 05       		.byte	0x5
 8012 0137 B702     		.uleb128 0x137
 8013 0139 6B600000 		.4byte	.LASF574
 8014 013d 05       		.byte	0x5
 8015 013e B802     		.uleb128 0x138
 8016 0140 5F250000 		.4byte	.LASF575
 8017 0144 05       		.byte	0x5
 8018 0145 C602     		.uleb128 0x146
 8019 0147 29210000 		.4byte	.LASF576
 8020 014b 05       		.byte	0x5
 8021 014c C702     		.uleb128 0x147
 8022 014e 10180000 		.4byte	.LASF577
 8023 0152 05       		.byte	0x5
 8024 0153 CF02     		.uleb128 0x14f
 8025 0155 8B310000 		.4byte	.LASF578
 8026 0159 05       		.byte	0x5
 8027 015a D702     		.uleb128 0x157
 8028 015c 524E0000 		.4byte	.LASF579
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 154


 8029 0160 05       		.byte	0x5
 8030 0161 DD02     		.uleb128 0x15d
 8031 0163 4E270000 		.4byte	.LASF580
 8032 0167 05       		.byte	0x5
 8033 0168 DE02     		.uleb128 0x15e
 8034 016a 011F0000 		.4byte	.LASF581
 8035 016e 05       		.byte	0x5
 8036 016f E202     		.uleb128 0x162
 8037 0171 A9270000 		.4byte	.LASF582
 8038 0175 05       		.byte	0x5
 8039 0176 E602     		.uleb128 0x166
 8040 0178 48670000 		.4byte	.LASF583
 8041 017c 05       		.byte	0x5
 8042 017d EB02     		.uleb128 0x16b
 8043 017f 2D180000 		.4byte	.LASF584
 8044 0183 05       		.byte	0x5
 8045 0184 F602     		.uleb128 0x176
 8046 0186 560D0000 		.4byte	.LASF585
 8047 018a 05       		.byte	0x5
 8048 018b 8003     		.uleb128 0x180
 8049 018d 6A410000 		.4byte	.LASF586
 8050 0191 05       		.byte	0x5
 8051 0192 8503     		.uleb128 0x185
 8052 0194 064F0000 		.4byte	.LASF587
 8053 0198 05       		.byte	0x5
 8054 0199 8C03     		.uleb128 0x18c
 8055 019b 302E0000 		.4byte	.LASF588
 8056 019f 05       		.byte	0x5
 8057 01a0 8D03     		.uleb128 0x18d
 8058 01a2 C4220000 		.4byte	.LASF589
 8059 01a6 05       		.byte	0x5
 8060 01a7 9803     		.uleb128 0x198
 8061 01a9 600B0000 		.4byte	.LASF590
 8062 01ad 05       		.byte	0x5
 8063 01ae 9903     		.uleb128 0x199
 8064 01b0 275F0000 		.4byte	.LASF591
 8065 01b4 05       		.byte	0x5
 8066 01b5 A403     		.uleb128 0x1a4
 8067 01b7 4B190000 		.4byte	.LASF592
 8068 01bb 05       		.byte	0x5
 8069 01bc A503     		.uleb128 0x1a5
 8070 01be 5A3C0000 		.4byte	.LASF593
 8071 01c2 05       		.byte	0x5
 8072 01c3 B103     		.uleb128 0x1b1
 8073 01c5 C5290000 		.4byte	.LASF594
 8074 01c9 05       		.byte	0x5
 8075 01ca B203     		.uleb128 0x1b2
 8076 01cc 5A510000 		.4byte	.LASF595
 8077 01d0 05       		.byte	0x5
 8078 01d1 C103     		.uleb128 0x1c1
 8079 01d3 CF1D0000 		.4byte	.LASF596
 8080 01d7 05       		.byte	0x5
 8081 01d8 C203     		.uleb128 0x1c2
 8082 01da 4E470000 		.4byte	.LASF597
 8083 01de 00       		.byte	0
 8084              		.section	.debug_macro,"G",%progbits,wm4.core_cm0.h.76.4efc00236d202f2f883d0b40eb2e0180,comdat
 8085              	.Ldebug_macro9:
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 155


 8086 0000 0400     		.2byte	0x4
 8087 0002 00       		.byte	0
 8088 0003 05       		.byte	0x5
 8089 0004 4C       		.uleb128 0x4c
 8090 0005 530B0000 		.4byte	.LASF599
 8091 0009 05       		.byte	0x5
 8092 000a 50       		.uleb128 0x50
 8093 000b 0A270000 		.4byte	.LASF600
 8094 000f 05       		.byte	0x5
 8095 0010 51       		.uleb128 0x51
 8096 0011 35580000 		.4byte	.LASF601
 8097 0015 05       		.byte	0x5
 8098 0016 8501     		.uleb128 0x85
 8099 0018 F8380000 		.4byte	.LASF602
 8100 001c 05       		.byte	0x5
 8101 001d 8601     		.uleb128 0x86
 8102 001f F64F0000 		.4byte	.LASF603
 8103 0023 05       		.byte	0x5
 8104 0024 8801     		.uleb128 0x88
 8105 0026 ED4E0000 		.4byte	.LASF604
 8106 002a 05       		.byte	0x5
 8107 002b 8901     		.uleb128 0x89
 8108 002d E1070000 		.4byte	.LASF605
 8109 0031 05       		.byte	0x5
 8110 0032 8B01     		.uleb128 0x8b
 8111 0034 FD560000 		.4byte	.LASF606
 8112 0038 05       		.byte	0x5
 8113 0039 8C01     		.uleb128 0x8c
 8114 003b 1A5A0000 		.4byte	.LASF607
 8115 003f 05       		.byte	0x5
 8116 0040 8E01     		.uleb128 0x8e
 8117 0042 32490000 		.4byte	.LASF608
 8118 0046 05       		.byte	0x5
 8119 0047 8F01     		.uleb128 0x8f
 8120 0049 17270000 		.4byte	.LASF609
 8121 004d 05       		.byte	0x5
 8122 004e 9101     		.uleb128 0x91
 8123 0050 3D330000 		.4byte	.LASF610
 8124 0054 05       		.byte	0x5
 8125 0055 9201     		.uleb128 0x92
 8126 0057 12040000 		.4byte	.LASF611
 8127 005b 05       		.byte	0x5
 8128 005c 9501     		.uleb128 0x95
 8129 005e 91590000 		.4byte	.LASF612
 8130 0062 05       		.byte	0x5
 8131 0063 9601     		.uleb128 0x96
 8132 0065 9E2A0000 		.4byte	.LASF613
 8133 0069 05       		.byte	0x5
 8134 006a 9801     		.uleb128 0x98
 8135 006c A6260000 		.4byte	.LASF614
 8136 0070 05       		.byte	0x5
 8137 0071 9901     		.uleb128 0x99
 8138 0073 07620000 		.4byte	.LASF615
 8139 0077 05       		.byte	0x5
 8140 0078 9B01     		.uleb128 0x9b
 8141 007a 7E4A0000 		.4byte	.LASF616
 8142 007e 05       		.byte	0x5
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 156


 8143 007f 9C01     		.uleb128 0x9c
 8144 0081 E32D0000 		.4byte	.LASF617
 8145 0085 05       		.byte	0x5
 8146 0086 9E01     		.uleb128 0x9e
 8147 0088 7C080000 		.4byte	.LASF618
 8148 008c 05       		.byte	0x5
 8149 008d 9F01     		.uleb128 0x9f
 8150 008f 621D0000 		.4byte	.LASF619
 8151 0093 05       		.byte	0x5
 8152 0094 A101     		.uleb128 0xa1
 8153 0096 CF3B0000 		.4byte	.LASF620
 8154 009a 05       		.byte	0x5
 8155 009b A201     		.uleb128 0xa2
 8156 009d 505E0000 		.4byte	.LASF621
 8157 00a1 05       		.byte	0x5
 8158 00a2 A401     		.uleb128 0xa4
 8159 00a4 EC430000 		.4byte	.LASF622
 8160 00a8 05       		.byte	0x5
 8161 00a9 A501     		.uleb128 0xa5
 8162 00ab 6E360000 		.4byte	.LASF623
 8163 00af 05       		.byte	0x5
 8164 00b0 A701     		.uleb128 0xa7
 8165 00b2 57040000 		.4byte	.LASF624
 8166 00b6 05       		.byte	0x5
 8167 00b7 A801     		.uleb128 0xa8
 8168 00b9 0C0F0000 		.4byte	.LASF625
 8169 00bd 05       		.byte	0x5
 8170 00be AA01     		.uleb128 0xaa
 8171 00c0 02380000 		.4byte	.LASF626
 8172 00c4 05       		.byte	0x5
 8173 00c5 AB01     		.uleb128 0xab
 8174 00c7 A5660000 		.4byte	.LASF627
 8175 00cb 05       		.byte	0x5
 8176 00cc AD01     		.uleb128 0xad
 8177 00ce B3200000 		.4byte	.LASF628
 8178 00d2 05       		.byte	0x5
 8179 00d3 AE01     		.uleb128 0xae
 8180 00d5 EC200000 		.4byte	.LASF629
 8181 00d9 05       		.byte	0x5
 8182 00da B101     		.uleb128 0xb1
 8183 00dc 985D0000 		.4byte	.LASF630
 8184 00e0 05       		.byte	0x5
 8185 00e1 B201     		.uleb128 0xb2
 8186 00e3 BF5E0000 		.4byte	.LASF631
 8187 00e7 05       		.byte	0x5
 8188 00e8 B401     		.uleb128 0xb4
 8189 00ea 130A0000 		.4byte	.LASF632
 8190 00ee 05       		.byte	0x5
 8191 00ef B501     		.uleb128 0xb5
 8192 00f1 98550000 		.4byte	.LASF633
 8193 00f5 05       		.byte	0x5
 8194 00f6 B701     		.uleb128 0xb7
 8195 00f8 3F590000 		.4byte	.LASF634
 8196 00fc 05       		.byte	0x5
 8197 00fd B801     		.uleb128 0xb8
 8198 00ff 97300000 		.4byte	.LASF635
 8199 0103 05       		.byte	0x5
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 157


 8200 0104 BA01     		.uleb128 0xba
 8201 0106 EE260000 		.4byte	.LASF636
 8202 010a 05       		.byte	0x5
 8203 010b BB01     		.uleb128 0xbb
 8204 010d 03510000 		.4byte	.LASF637
 8205 0111 05       		.byte	0x5
 8206 0112 BD01     		.uleb128 0xbd
 8207 0114 3D630000 		.4byte	.LASF638
 8208 0118 05       		.byte	0x5
 8209 0119 BE01     		.uleb128 0xbe
 8210 011b A85F0000 		.4byte	.LASF639
 8211 011f 05       		.byte	0x5
 8212 0120 C101     		.uleb128 0xc1
 8213 0122 5F2A0000 		.4byte	.LASF640
 8214 0126 05       		.byte	0x5
 8215 0127 C201     		.uleb128 0xc2
 8216 0129 E60F0000 		.4byte	.LASF641
 8217 012d 05       		.byte	0x5
 8218 012e C401     		.uleb128 0xc4
 8219 0130 73200000 		.4byte	.LASF642
 8220 0134 05       		.byte	0x5
 8221 0135 C501     		.uleb128 0xc5
 8222 0137 EC4A0000 		.4byte	.LASF643
 8223 013b 05       		.byte	0x5
 8224 013c C701     		.uleb128 0xc7
 8225 013e 59200000 		.4byte	.LASF644
 8226 0142 05       		.byte	0x5
 8227 0143 C801     		.uleb128 0xc8
 8228 0145 76220000 		.4byte	.LASF645
 8229 0149 05       		.byte	0x5
 8230 014a CB01     		.uleb128 0xcb
 8231 014c EA1E0000 		.4byte	.LASF646
 8232 0150 05       		.byte	0x5
 8233 0151 CC01     		.uleb128 0xcc
 8234 0153 B71E0000 		.4byte	.LASF647
 8235 0157 05       		.byte	0x5
 8236 0158 CE01     		.uleb128 0xce
 8237 015a 96410000 		.4byte	.LASF648
 8238 015e 05       		.byte	0x5
 8239 015f CF01     		.uleb128 0xcf
 8240 0161 67010000 		.4byte	.LASF649
 8241 0165 05       		.byte	0x5
 8242 0166 D201     		.uleb128 0xd2
 8243 0168 69570000 		.4byte	.LASF650
 8244 016c 05       		.byte	0x5
 8245 016d D301     		.uleb128 0xd3
 8246 016f F52B0000 		.4byte	.LASF651
 8247 0173 05       		.byte	0x5
 8248 0174 D601     		.uleb128 0xd6
 8249 0176 AB110000 		.4byte	.LASF652
 8250 017a 05       		.byte	0x5
 8251 017b D701     		.uleb128 0xd7
 8252 017d AB560000 		.4byte	.LASF653
 8253 0181 05       		.byte	0x5
 8254 0182 D901     		.uleb128 0xd9
 8255 0184 741E0000 		.4byte	.LASF654
 8256 0188 05       		.byte	0x5
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 158


 8257 0189 DA01     		.uleb128 0xda
 8258 018b DD3F0000 		.4byte	.LASF655
 8259 018f 05       		.byte	0x5
 8260 0190 DC01     		.uleb128 0xdc
 8261 0192 34190000 		.4byte	.LASF656
 8262 0196 05       		.byte	0x5
 8263 0197 DD01     		.uleb128 0xdd
 8264 0199 42390000 		.4byte	.LASF657
 8265 019d 05       		.byte	0x5
 8266 019e DF01     		.uleb128 0xdf
 8267 01a0 20420000 		.4byte	.LASF658
 8268 01a4 05       		.byte	0x5
 8269 01a5 E001     		.uleb128 0xe0
 8270 01a7 8F520000 		.4byte	.LASF659
 8271 01ab 05       		.byte	0x5
 8272 01ac E201     		.uleb128 0xe2
 8273 01ae F60E0000 		.4byte	.LASF660
 8274 01b2 05       		.byte	0x5
 8275 01b3 E301     		.uleb128 0xe3
 8276 01b5 68480000 		.4byte	.LASF661
 8277 01b9 05       		.byte	0x5
 8278 01ba F401     		.uleb128 0xf4
 8279 01bc 86230000 		.4byte	.LASF662
 8280 01c0 05       		.byte	0x5
 8281 01c1 F501     		.uleb128 0xf5
 8282 01c3 84330000 		.4byte	.LASF663
 8283 01c7 05       		.byte	0x5
 8284 01c8 F701     		.uleb128 0xf7
 8285 01ca FB250000 		.4byte	.LASF664
 8286 01ce 05       		.byte	0x5
 8287 01cf F801     		.uleb128 0xf8
 8288 01d1 6E450000 		.4byte	.LASF665
 8289 01d5 05       		.byte	0x5
 8290 01d6 FA01     		.uleb128 0xfa
 8291 01d8 9C100000 		.4byte	.LASF666
 8292 01dc 05       		.byte	0x5
 8293 01dd FB01     		.uleb128 0xfb
 8294 01df 0B640000 		.4byte	.LASF667
 8295 01e3 05       		.byte	0x5
 8296 01e4 FD01     		.uleb128 0xfd
 8297 01e6 F6170000 		.4byte	.LASF668
 8298 01ea 05       		.byte	0x5
 8299 01eb FE01     		.uleb128 0xfe
 8300 01ed A25C0000 		.4byte	.LASF669
 8301 01f1 05       		.byte	0x5
 8302 01f2 8102     		.uleb128 0x101
 8303 01f4 13600000 		.4byte	.LASF670
 8304 01f8 05       		.byte	0x5
 8305 01f9 8202     		.uleb128 0x102
 8306 01fb A65B0000 		.4byte	.LASF671
 8307 01ff 05       		.byte	0x5
 8308 0200 8502     		.uleb128 0x105
 8309 0202 B5430000 		.4byte	.LASF672
 8310 0206 05       		.byte	0x5
 8311 0207 8602     		.uleb128 0x106
 8312 0209 0E470000 		.4byte	.LASF673
 8313 020d 05       		.byte	0x5
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 159


 8314 020e 8902     		.uleb128 0x109
 8315 0210 1D240000 		.4byte	.LASF674
 8316 0214 05       		.byte	0x5
 8317 0215 8A02     		.uleb128 0x10a
 8318 0217 38230000 		.4byte	.LASF675
 8319 021b 05       		.byte	0x5
 8320 021c 8C02     		.uleb128 0x10c
 8321 021e 040D0000 		.4byte	.LASF676
 8322 0222 05       		.byte	0x5
 8323 0223 8D02     		.uleb128 0x10d
 8324 0225 2E3A0000 		.4byte	.LASF677
 8325 0229 05       		.byte	0x5
 8326 022a 8F02     		.uleb128 0x10f
 8327 022c BE230000 		.4byte	.LASF678
 8328 0230 05       		.byte	0x5
 8329 0231 9002     		.uleb128 0x110
 8330 0233 45500000 		.4byte	.LASF679
 8331 0237 05       		.byte	0x5
 8332 0238 A102     		.uleb128 0x121
 8333 023a C3570000 		.4byte	.LASF680
 8334 023e 05       		.byte	0x5
 8335 023f A202     		.uleb128 0x122
 8336 0241 47610000 		.4byte	.LASF681
 8337 0245 05       		.byte	0x5
 8338 0246 A402     		.uleb128 0x124
 8339 0248 16230000 		.4byte	.LASF682
 8340 024c 05       		.byte	0x5
 8341 024d A502     		.uleb128 0x125
 8342 024f 52370000 		.4byte	.LASF683
 8343 0253 05       		.byte	0x5
 8344 0254 A702     		.uleb128 0x127
 8345 0256 DF1C0000 		.4byte	.LASF684
 8346 025a 05       		.byte	0x5
 8347 025b A802     		.uleb128 0x128
 8348 025d F1150000 		.4byte	.LASF685
 8349 0261 05       		.byte	0x5
 8350 0262 AA02     		.uleb128 0x12a
 8351 0264 330B0000 		.4byte	.LASF686
 8352 0268 05       		.byte	0x5
 8353 0269 AB02     		.uleb128 0x12b
 8354 026b D3420000 		.4byte	.LASF687
 8355 026f 05       		.byte	0x5
 8356 0270 AD02     		.uleb128 0x12d
 8357 0272 6A4D0000 		.4byte	.LASF688
 8358 0276 05       		.byte	0x5
 8359 0277 AE02     		.uleb128 0x12e
 8360 0279 E0450000 		.4byte	.LASF689
 8361 027d 05       		.byte	0x5
 8362 027e B002     		.uleb128 0x130
 8363 0280 BC520000 		.4byte	.LASF690
 8364 0284 05       		.byte	0x5
 8365 0285 B102     		.uleb128 0x131
 8366 0287 115E0000 		.4byte	.LASF691
 8367 028b 05       		.byte	0x5
 8368 028c B302     		.uleb128 0x133
 8369 028e AC590000 		.4byte	.LASF692
 8370 0292 05       		.byte	0x5
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 160


 8371 0293 B402     		.uleb128 0x134
 8372 0295 25480000 		.4byte	.LASF693
 8373 0299 05       		.byte	0x5
 8374 029a B602     		.uleb128 0x136
 8375 029c BE1C0000 		.4byte	.LASF694
 8376 02a0 05       		.byte	0x5
 8377 02a1 B702     		.uleb128 0x137
 8378 02a3 CE320000 		.4byte	.LASF695
 8379 02a7 05       		.byte	0x5
 8380 02a8 B902     		.uleb128 0x139
 8381 02aa 43580000 		.4byte	.LASF696
 8382 02ae 05       		.byte	0x5
 8383 02af BA02     		.uleb128 0x13a
 8384 02b1 894D0000 		.4byte	.LASF697
 8385 02b5 05       		.byte	0x5
 8386 02b6 BC02     		.uleb128 0x13c
 8387 02b8 A5250000 		.4byte	.LASF698
 8388 02bc 05       		.byte	0x5
 8389 02bd BD02     		.uleb128 0x13d
 8390 02bf B24C0000 		.4byte	.LASF699
 8391 02c3 05       		.byte	0x5
 8392 02c4 BF02     		.uleb128 0x13f
 8393 02c6 A63A0000 		.4byte	.LASF700
 8394 02ca 05       		.byte	0x5
 8395 02cb C002     		.uleb128 0x140
 8396 02cd 20020000 		.4byte	.LASF701
 8397 02d1 05       		.byte	0x5
 8398 02d2 C302     		.uleb128 0x143
 8399 02d4 4F4C0000 		.4byte	.LASF702
 8400 02d8 05       		.byte	0x5
 8401 02d9 C402     		.uleb128 0x144
 8402 02db 4D5D0000 		.4byte	.LASF703
 8403 02df 05       		.byte	0x5
 8404 02e0 C602     		.uleb128 0x146
 8405 02e2 87570000 		.4byte	.LASF704
 8406 02e6 05       		.byte	0x5
 8407 02e7 C702     		.uleb128 0x147
 8408 02e9 B7130000 		.4byte	.LASF705
 8409 02ed 05       		.byte	0x5
 8410 02ee CA02     		.uleb128 0x14a
 8411 02f0 C45D0000 		.4byte	.LASF706
 8412 02f4 05       		.byte	0x5
 8413 02f5 CB02     		.uleb128 0x14b
 8414 02f7 9C140000 		.4byte	.LASF707
 8415 02fb 05       		.byte	0x5
 8416 02fc CD02     		.uleb128 0x14d
 8417 02fe F9120000 		.4byte	.LASF708
 8418 0302 05       		.byte	0x5
 8419 0303 CE02     		.uleb128 0x14e
 8420 0305 67640000 		.4byte	.LASF709
 8421 0309 05       		.byte	0x5
 8422 030a D002     		.uleb128 0x150
 8423 030c B9580000 		.4byte	.LASF710
 8424 0310 05       		.byte	0x5
 8425 0311 D102     		.uleb128 0x151
 8426 0313 953D0000 		.4byte	.LASF711
 8427 0317 05       		.byte	0x5
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 161


 8428 0318 D602     		.uleb128 0x156
 8429 031a 91650000 		.4byte	.LASF712
 8430 031e 05       		.byte	0x5
 8431 031f D702     		.uleb128 0x157
 8432 0321 69440000 		.4byte	.LASF713
 8433 0325 05       		.byte	0x5
 8434 0326 D802     		.uleb128 0x158
 8435 0328 5C0F0000 		.4byte	.LASF714
 8436 032c 05       		.byte	0x5
 8437 032d D902     		.uleb128 0x159
 8438 032f 2F100000 		.4byte	.LASF715
 8439 0333 05       		.byte	0x5
 8440 0334 DA02     		.uleb128 0x15a
 8441 0336 623D0000 		.4byte	.LASF716
 8442 033a 05       		.byte	0x5
 8443 033b DC02     		.uleb128 0x15c
 8444 033d 451B0000 		.4byte	.LASF717
 8445 0341 05       		.byte	0x5
 8446 0342 DD02     		.uleb128 0x15d
 8447 0344 56320000 		.4byte	.LASF718
 8448 0348 05       		.byte	0x5
 8449 0349 DE02     		.uleb128 0x15e
 8450 034b F3030000 		.4byte	.LASF719
 8451 034f 05       		.byte	0x5
 8452 0350 DF02     		.uleb128 0x15f
 8453 0352 1E310000 		.4byte	.LASF720
 8454 0356 05       		.byte	0x5
 8455 0357 F102     		.uleb128 0x171
 8456 0359 BB0D0000 		.4byte	.LASF721
 8457 035d 05       		.byte	0x5
 8458 035e F202     		.uleb128 0x172
 8459 0360 14670000 		.4byte	.LASF722
 8460 0364 05       		.byte	0x5
 8461 0365 9006     		.uleb128 0x310
 8462 0367 FF350000 		.4byte	.LASF723
 8463 036b 05       		.byte	0x5
 8464 036c 9106     		.uleb128 0x311
 8465 036e 314F0000 		.4byte	.LASF724
 8466 0372 05       		.byte	0x5
 8467 0373 9206     		.uleb128 0x312
 8468 0375 DF3A0000 		.4byte	.LASF725
 8469 0379 00       		.byte	0
 8470              		.section	.debug_macro,"G",%progbits,wm4.system_LPC11xx.h.25.d8f18363fc12024090916ce41adb70c4,comda
 8471              	.Ldebug_macro10:
 8472 0000 0400     		.2byte	0x4
 8473 0002 00       		.byte	0
 8474 0003 05       		.byte	0x5
 8475 0004 19       		.uleb128 0x19
 8476 0005 BB4E0000 		.4byte	.LASF726
 8477 0009 05       		.byte	0x5
 8478 000a 1C       		.uleb128 0x1c
 8479 000b 52560000 		.4byte	.LASF727
 8480 000f 05       		.byte	0x5
 8481 0010 1D       		.uleb128 0x1d
 8482 0011 85210000 		.4byte	.LASF728
 8483 0015 00       		.byte	0
 8484              		.section	.debug_macro,"G",%progbits,wm4.LPC11xx.h.507.a44acb71f91a82d6b50ad849c423f394,comdat
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 162


 8485              	.Ldebug_macro11:
 8486 0000 0400     		.2byte	0x4
 8487 0002 00       		.byte	0
 8488 0003 05       		.byte	0x5
 8489 0004 FB03     		.uleb128 0x1fb
 8490 0006 D6470000 		.4byte	.LASF729
 8491 000a 05       		.byte	0x5
 8492 000b FC03     		.uleb128 0x1fc
 8493 000d 7A270000 		.4byte	.LASF730
 8494 0011 05       		.byte	0x5
 8495 0012 FD03     		.uleb128 0x1fd
 8496 0014 CF430000 		.4byte	.LASF731
 8497 0018 05       		.byte	0x5
 8498 0019 FE03     		.uleb128 0x1fe
 8499 001b 68130000 		.4byte	.LASF732
 8500 001f 05       		.byte	0x5
 8501 0020 8104     		.uleb128 0x201
 8502 0022 AE080000 		.4byte	.LASF733
 8503 0026 05       		.byte	0x5
 8504 0027 8204     		.uleb128 0x202
 8505 0029 900B0000 		.4byte	.LASF734
 8506 002d 05       		.byte	0x5
 8507 002e 8304     		.uleb128 0x203
 8508 0030 83110000 		.4byte	.LASF735
 8509 0034 05       		.byte	0x5
 8510 0035 8404     		.uleb128 0x204
 8511 0037 6E550000 		.4byte	.LASF736
 8512 003b 05       		.byte	0x5
 8513 003c 8504     		.uleb128 0x205
 8514 003e 4F350000 		.4byte	.LASF737
 8515 0042 05       		.byte	0x5
 8516 0043 8604     		.uleb128 0x206
 8517 0045 533B0000 		.4byte	.LASF738
 8518 0049 05       		.byte	0x5
 8519 004a 8704     		.uleb128 0x207
 8520 004c 563F0000 		.4byte	.LASF739
 8521 0050 05       		.byte	0x5
 8522 0051 8804     		.uleb128 0x208
 8523 0053 02220000 		.4byte	.LASF740
 8524 0057 05       		.byte	0x5
 8525 0058 8904     		.uleb128 0x209
 8526 005a 2D000000 		.4byte	.LASF741
 8527 005e 05       		.byte	0x5
 8528 005f 8A04     		.uleb128 0x20a
 8529 0061 E03D0000 		.4byte	.LASF742
 8530 0065 05       		.byte	0x5
 8531 0066 8B04     		.uleb128 0x20b
 8532 0068 281F0000 		.4byte	.LASF743
 8533 006c 05       		.byte	0x5
 8534 006d 8C04     		.uleb128 0x20c
 8535 006f 6D4C0000 		.4byte	.LASF744
 8536 0073 05       		.byte	0x5
 8537 0074 8D04     		.uleb128 0x20d
 8538 0076 EC090000 		.4byte	.LASF745
 8539 007a 05       		.byte	0x5
 8540 007b 8E04     		.uleb128 0x20e
 8541 007d E4660000 		.4byte	.LASF746
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 163


 8542 0081 05       		.byte	0x5
 8543 0082 9104     		.uleb128 0x211
 8544 0084 4A070000 		.4byte	.LASF747
 8545 0088 05       		.byte	0x5
 8546 0089 9204     		.uleb128 0x212
 8547 008b B3530000 		.4byte	.LASF748
 8548 008f 05       		.byte	0x5
 8549 0090 9304     		.uleb128 0x213
 8550 0092 89420000 		.4byte	.LASF749
 8551 0096 05       		.byte	0x5
 8552 0097 9404     		.uleb128 0x214
 8553 0099 99480000 		.4byte	.LASF750
 8554 009d 05       		.byte	0x5
 8555 009e 9504     		.uleb128 0x215
 8556 00a0 24150000 		.4byte	.LASF751
 8557 00a4 05       		.byte	0x5
 8558 00a5 9A04     		.uleb128 0x21a
 8559 00a7 114C0000 		.4byte	.LASF752
 8560 00ab 05       		.byte	0x5
 8561 00ac 9B04     		.uleb128 0x21b
 8562 00ae 05110000 		.4byte	.LASF753
 8563 00b2 05       		.byte	0x5
 8564 00b3 9C04     		.uleb128 0x21c
 8565 00b5 911A0000 		.4byte	.LASF754
 8566 00b9 05       		.byte	0x5
 8567 00ba 9D04     		.uleb128 0x21d
 8568 00bc DC650000 		.4byte	.LASF755
 8569 00c0 05       		.byte	0x5
 8570 00c1 9E04     		.uleb128 0x21e
 8571 00c3 F3310000 		.4byte	.LASF756
 8572 00c7 05       		.byte	0x5
 8573 00c8 9F04     		.uleb128 0x21f
 8574 00ca B5500000 		.4byte	.LASF757
 8575 00ce 05       		.byte	0x5
 8576 00cf A004     		.uleb128 0x220
 8577 00d1 9E160000 		.4byte	.LASF758
 8578 00d5 05       		.byte	0x5
 8579 00d6 A104     		.uleb128 0x221
 8580 00d8 DB140000 		.4byte	.LASF759
 8581 00dc 05       		.byte	0x5
 8582 00dd A204     		.uleb128 0x222
 8583 00df BA3C0000 		.4byte	.LASF760
 8584 00e3 05       		.byte	0x5
 8585 00e4 A304     		.uleb128 0x223
 8586 00e6 7A5F0000 		.4byte	.LASF761
 8587 00ea 05       		.byte	0x5
 8588 00eb A404     		.uleb128 0x224
 8589 00ed 56330000 		.4byte	.LASF762
 8590 00f1 05       		.byte	0x5
 8591 00f2 A504     		.uleb128 0x225
 8592 00f4 8A390000 		.4byte	.LASF763
 8593 00f8 05       		.byte	0x5
 8594 00f9 A604     		.uleb128 0x226
 8595 00fb 0E660000 		.4byte	.LASF764
 8596 00ff 05       		.byte	0x5
 8597 0100 A704     		.uleb128 0x227
 8598 0102 195D0000 		.4byte	.LASF765
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 164


 8599 0106 05       		.byte	0x5
 8600 0107 A804     		.uleb128 0x228
 8601 0109 A6380000 		.4byte	.LASF766
 8602 010d 05       		.byte	0x5
 8603 010e A904     		.uleb128 0x229
 8604 0110 452B0000 		.4byte	.LASF767
 8605 0114 05       		.byte	0x5
 8606 0115 AA04     		.uleb128 0x22a
 8607 0117 63400000 		.4byte	.LASF768
 8608 011b 05       		.byte	0x5
 8609 011c AB04     		.uleb128 0x22b
 8610 011e 750A0000 		.4byte	.LASF769
 8611 0122 00       		.byte	0
 8612              		.section	.debug_macro,"G",%progbits,wm4.rfm70.h.40.8a1699fd4d2a98c61874101f853a9e36,comdat
 8613              	.Ldebug_macro12:
 8614 0000 0400     		.2byte	0x4
 8615 0002 00       		.byte	0
 8616 0003 05       		.byte	0x5
 8617 0004 28       		.uleb128 0x28
 8618 0005 BE360000 		.4byte	.LASF771
 8619 0009 05       		.byte	0x5
 8620 000a 59       		.uleb128 0x59
 8621 000b 415B0000 		.4byte	.LASF772
 8622 000f 05       		.byte	0x5
 8623 0010 5E       		.uleb128 0x5e
 8624 0011 71290000 		.4byte	.LASF773
 8625 0015 05       		.byte	0x5
 8626 0016 70       		.uleb128 0x70
 8627 0017 071B0000 		.4byte	.LASF774
 8628 001b 05       		.byte	0x5
 8629 001c 73       		.uleb128 0x73
 8630 001d D7380000 		.4byte	.LASF775
 8631 0021 05       		.byte	0x5
 8632 0022 76       		.uleb128 0x76
 8633 0023 4F010000 		.4byte	.LASF776
 8634 0027 05       		.byte	0x5
 8635 0028 79       		.uleb128 0x79
 8636 0029 E3250000 		.4byte	.LASF777
 8637 002d 05       		.byte	0x5
 8638 002e 7C       		.uleb128 0x7c
 8639 002f B1670000 		.4byte	.LASF778
 8640 0033 05       		.byte	0x5
 8641 0034 7F       		.uleb128 0x7f
 8642 0035 3B460000 		.4byte	.LASF779
 8643 0039 05       		.byte	0x5
 8644 003a 8201     		.uleb128 0x82
 8645 003c 941B0000 		.4byte	.LASF780
 8646 0040 05       		.byte	0x5
 8647 0041 8501     		.uleb128 0x85
 8648 0043 34420000 		.4byte	.LASF781
 8649 0047 05       		.byte	0x5
 8650 0048 8801     		.uleb128 0x88
 8651 004a 53660000 		.4byte	.LASF782
 8652 004e 05       		.byte	0x5
 8653 004f 8B01     		.uleb128 0x8b
 8654 0051 12480000 		.4byte	.LASF783
 8655 0055 05       		.byte	0x5
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 165


 8656 0056 9E01     		.uleb128 0x9e
 8657 0058 9A3F0000 		.4byte	.LASF784
 8658 005c 05       		.byte	0x5
 8659 005d AA01     		.uleb128 0xaa
 8660 005f DA520000 		.4byte	.LASF785
 8661 0063 05       		.byte	0x5
 8662 0064 B601     		.uleb128 0xb6
 8663 0066 2C650000 		.4byte	.LASF786
 8664 006a 05       		.byte	0x5
 8665 006b BD01     		.uleb128 0xbd
 8666 006d 9D500000 		.4byte	.LASF787
 8667 0071 05       		.byte	0x5
 8668 0072 C401     		.uleb128 0xc4
 8669 0074 6D160000 		.4byte	.LASF788
 8670 0078 05       		.byte	0x5
 8671 0079 C901     		.uleb128 0xc9
 8672 007b C84D0000 		.4byte	.LASF789
 8673 007f 05       		.byte	0x5
 8674 0080 D201     		.uleb128 0xd2
 8675 0082 67340000 		.4byte	.LASF790
 8676 0086 05       		.byte	0x5
 8677 0087 E501     		.uleb128 0xe5
 8678 0089 C9630000 		.4byte	.LASF791
 8679 008d 05       		.byte	0x5
 8680 008e F201     		.uleb128 0xf2
 8681 0090 D1340000 		.4byte	.LASF792
 8682 0094 05       		.byte	0x5
 8683 0095 F901     		.uleb128 0xf9
 8684 0097 50170000 		.4byte	.LASF793
 8685 009b 05       		.byte	0x5
 8686 009c 8002     		.uleb128 0x100
 8687 009e 00000000 		.4byte	.LASF794
 8688 00a2 05       		.byte	0x5
 8689 00a3 8702     		.uleb128 0x107
 8690 00a5 C2650000 		.4byte	.LASF795
 8691 00a9 05       		.byte	0x5
 8692 00aa 8E02     		.uleb128 0x10e
 8693 00ac 21460000 		.4byte	.LASF796
 8694 00b0 05       		.byte	0x5
 8695 00b1 9502     		.uleb128 0x115
 8696 00b3 D5280000 		.4byte	.LASF797
 8697 00b7 05       		.byte	0x5
 8698 00b8 9C02     		.uleb128 0x11c
 8699 00ba 7F2D0000 		.4byte	.LASF798
 8700 00be 05       		.byte	0x5
 8701 00bf A302     		.uleb128 0x123
 8702 00c1 14630000 		.4byte	.LASF799
 8703 00c5 05       		.byte	0x5
 8704 00c6 AA02     		.uleb128 0x12a
 8705 00c8 F1620000 		.4byte	.LASF800
 8706 00cc 05       		.byte	0x5
 8707 00cd B002     		.uleb128 0x130
 8708 00cf 64460000 		.4byte	.LASF801
 8709 00d3 05       		.byte	0x5
 8710 00d4 B602     		.uleb128 0x136
 8711 00d6 0C010000 		.4byte	.LASF802
 8712 00da 05       		.byte	0x5
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 166


 8713 00db BC02     		.uleb128 0x13c
 8714 00dd DC180000 		.4byte	.LASF803
 8715 00e1 05       		.byte	0x5
 8716 00e2 C202     		.uleb128 0x142
 8717 00e4 1D580000 		.4byte	.LASF804
 8718 00e8 05       		.byte	0x5
 8719 00e9 C802     		.uleb128 0x148
 8720 00eb 8B4E0000 		.4byte	.LASF805
 8721 00ef 05       		.byte	0x5
 8722 00f0 CE02     		.uleb128 0x14e
 8723 00f2 A42F0000 		.4byte	.LASF806
 8724 00f6 05       		.byte	0x5
 8725 00f7 DA02     		.uleb128 0x15a
 8726 00f9 E90C0000 		.4byte	.LASF807
 8727 00fd 05       		.byte	0x5
 8728 00fe E802     		.uleb128 0x168
 8729 0100 51050000 		.4byte	.LASF808
 8730 0104 05       		.byte	0x5
 8731 0105 F102     		.uleb128 0x171
 8732 0107 CA460000 		.4byte	.LASF809
 8733 010b 00       		.byte	0
 8734              		.section	.debug_line,"",%progbits
 8735              	.Ldebug_line0:
 8736 0000 41030000 		.section	.debug_str,"MS",%progbits,1
 8736      02008201 
 8736      00000201 
 8736      FB0E0D00 
 8736      01010101 
 8737              	.LASF794:
 8738 0000 52464D37 		.ascii	"RFM70_REG_RX_ADDR_P0 0x0A\000"
 8738      305F5245 
 8738      475F5258 
 8738      5F414444 
 8738      525F5030 
 8739              	.LASF187:
 8740 001a 5F5F4445 		.ascii	"__DECIMAL_DIG__ 17\000"
 8740      43494D41 
 8740      4C5F4449 
 8740      475F5F20 
 8740      313700
 8741              	.LASF741:
 8742 002d 4C50435F 		.ascii	"LPC_PMU_BASE (LPC_APB0_BASE + 0x38000)\000"
 8742      504D555F 
 8742      42415345 
 8742      20284C50 
 8742      435F4150 
 8743              	.LASF469:
 8744 0054 5F5F5356 		.ascii	"__SVID_VISIBLE 1\000"
 8744      49445F56 
 8744      49534942 
 8744      4C452031 
 8744      00
 8745              	.LASF830:
 8746 0065 5F767074 		.ascii	"_vptr.output_pin\000"
 8746      722E6F75 
 8746      74707574 
 8746      5F70696E 
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 167


 8746      00
 8747              	.LASF257:
 8748 0076 5F5F4445 		.ascii	"__DEC128_EPSILON__ 1E-33DL\000"
 8748      43313238 
 8748      5F455053 
 8748      494C4F4E 
 8748      5F5F2031 
 8749              	.LASF97:
 8750 0091 5F5F494E 		.ascii	"__INTMAX_C(c) c ## LL\000"
 8750      544D4158 
 8750      5F432863 
 8750      29206320 
 8750      2323204C 
 8751              	.LASF220:
 8752 00a7 5F5F464C 		.ascii	"__FLT64_DENORM_MIN__ 4.9406564584124654e-324F64\000"
 8752      5436345F 
 8752      44454E4F 
 8752      524D5F4D 
 8752      494E5F5F 
 8753              	.LASF384:
 8754 00d7 5F5F4743 		.ascii	"__GCC_ATOMIC_WCHAR_T_LOCK_FREE 1\000"
 8754      435F4154 
 8754      4F4D4943 
 8754      5F574348 
 8754      41525F54 
 8755              	.LASF378:
 8756 00f8 5F5F4348 		.ascii	"__CHAR_UNSIGNED__ 1\000"
 8756      41525F55 
 8756      4E534947 
 8756      4E45445F 
 8756      5F203100 
 8757              	.LASF802:
 8758 010c 52464D37 		.ascii	"RFM70_REG_RX_PW_P1 0x12\000"
 8758      305F5245 
 8758      475F5258 
 8758      5F50575F 
 8758      50312030 
 8759              	.LASF259:
 8760 0124 5F5F5346 		.ascii	"__SFRACT_FBIT__ 7\000"
 8760      52414354 
 8760      5F464249 
 8760      545F5F20 
 8760      3700
 8761              	.LASF222:
 8762 0136 5F5F464C 		.ascii	"__FLT64_HAS_INFINITY__ 1\000"
 8762      5436345F 
 8762      4841535F 
 8762      494E4649 
 8762      4E495459 
 8763              	.LASF776:
 8764 014f 52464D37 		.ascii	"RFM70_CMD_FLUSH_TX 0xE1\000"
 8764      305F434D 
 8764      445F464C 
 8764      5553485F 
 8764      54582030 
 8765              	.LASF649:
 8766 0167 5343425F 		.ascii	"SCB_CCR_UNALIGN_TRP_Msk (1ul << SCB_CCR_UNALIGN_TRP"
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 168


 8766      4343525F 
 8766      554E414C 
 8766      49474E5F 
 8766      5452505F 
 8767 019a 5F506F73 		.ascii	"_Pos)\000"
 8767      2900
 8768              	.LASF846:
 8769 01a0 696E7075 		.ascii	"input_output_pin\000"
 8769      745F6F75 
 8769      74707574 
 8769      5F70696E 
 8769      00
 8770              	.LASF331:
 8771 01b1 5F5F4C4C 		.ascii	"__LLACCUM_MIN__ (-0X1P31LLK-0X1P31LLK)\000"
 8771      41434355 
 8771      4D5F4D49 
 8771      4E5F5F20 
 8771      282D3058 
 8772              	.LASF351:
 8773 01d8 5F5F5548 		.ascii	"__UHQ_FBIT__ 16\000"
 8773      515F4642 
 8773      49545F5F 
 8773      20313600 
 8774              	.LASF323:
 8775 01e8 5F5F4C41 		.ascii	"__LACCUM_EPSILON__ 0x1P-31LK\000"
 8775      4343554D 
 8775      5F455053 
 8775      494C4F4E 
 8775      5F5F2030 
 8776              	.LASF85:
 8777 0205 5F5F5054 		.ascii	"__PTRDIFF_MAX__ 0x7fffffff\000"
 8777      52444946 
 8777      465F4D41 
 8777      585F5F20 
 8777      30783766 
 8778              	.LASF701:
 8779 0220 436F7265 		.ascii	"CoreDebug_DHCSR_C_DEBUGEN_Msk (1ul << CoreDebug_DHC"
 8779      44656275 
 8779      675F4448 
 8779      4353525F 
 8779      435F4445 
 8780 0253 53525F43 		.ascii	"SR_C_DEBUGEN_Pos)\000"
 8780      5F444542 
 8780      5547454E 
 8780      5F506F73 
 8780      2900
 8781              	.LASF989:
 8782 0265 5F5A4E32 		.ascii	"_ZN21input_output_pin_lpc17gpioregEjj\000"
 8782      31696E70 
 8782      75745F6F 
 8782      75747075 
 8782      745F7069 
 8783              	.LASF855:
 8784 028b 73636C6B 		.ascii	"sclk\000"
 8784      00
 8785              	.LASF543:
 8786 0290 494E545F 		.ascii	"INT_LEAST8_MIN (-__INT_LEAST8_MAX__ - 1)\000"
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 169


 8786      4C454153 
 8786      54385F4D 
 8786      494E2028 
 8786      2D5F5F49 
 8787              	.LASF520:
 8788 02b9 5F55494E 		.ascii	"_UINT32_T_DECLARED \000"
 8788      5433325F 
 8788      545F4445 
 8788      434C4152 
 8788      45442000 
 8789              	.LASF96:
 8790 02cd 5F5F494E 		.ascii	"__INTMAX_MAX__ 0x7fffffffffffffffLL\000"
 8790      544D4158 
 8790      5F4D4158 
 8790      5F5F2030 
 8790      78376666 
 8791              	.LASF244:
 8792 02f1 5F5F4445 		.ascii	"__DEC32_SUBNORMAL_MIN__ 0.000001E-95DF\000"
 8792      4333325F 
 8792      5355424E 
 8792      4F524D41 
 8792      4C5F4D49 
 8793              	.LASF348:
 8794 0318 5F5F5451 		.ascii	"__TQ_IBIT__ 0\000"
 8794      5F494249 
 8794      545F5F20 
 8794      3000
 8795              	.LASF226:
 8796 0326 5F5F464C 		.ascii	"__FLT32X_MIN_EXP__ (-1021)\000"
 8796      54333258 
 8796      5F4D494E 
 8796      5F455850 
 8796      5F5F2028 
 8797              	.LASF190:
 8798 0341 5F5F4C44 		.ascii	"__LDBL_MIN__ 2.2250738585072014e-308L\000"
 8798      424C5F4D 
 8798      494E5F5F 
 8798      20322E32 
 8798      32353037 
 8799              	.LASF12:
 8800 0367 5F5F4154 		.ascii	"__ATOMIC_CONSUME 1\000"
 8800      4F4D4943 
 8800      5F434F4E 
 8800      53554D45 
 8800      203100
 8801              	.LASF281:
 8802 037a 5F5F4C46 		.ascii	"__LFRACT_MIN__ (-0.5LR-0.5LR)\000"
 8802      52414354 
 8802      5F4D494E 
 8802      5F5F2028 
 8802      2D302E35 
 8803              	.LASF81:
 8804 0398 5F5F5743 		.ascii	"__WCHAR_MAX__ 0xffffffffU\000"
 8804      4841525F 
 8804      4D41585F 
 8804      5F203078 
 8804      66666666 
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 170


 8805              	.LASF311:
 8806 03b2 5F5F4143 		.ascii	"__ACCUM_MIN__ (-0X1P15K-0X1P15K)\000"
 8806      43554D5F 
 8806      4D494E5F 
 8806      5F20282D 
 8806      30583150 
 8807              	.LASF397:
 8808 03d3 5F5F4152 		.ascii	"__ARM_FEATURE_QBIT\000"
 8808      4D5F4645 
 8808      41545552 
 8808      455F5142 
 8808      495400
 8809              	.LASF951:
 8810 03e6 7472616E 		.ascii	"transmit_led\000"
 8810      736D6974 
 8810      5F6C6564 
 8810      00
 8811              	.LASF719:
 8812 03f3 4E564943 		.ascii	"NVIC ((NVIC_Type *) NVIC_BASE)\000"
 8812      2028284E 
 8812      5649435F 
 8812      54797065 
 8812      202A2920 
 8813              	.LASF611:
 8814 0412 5343425F 		.ascii	"SCB_CPUID_REVISION_Msk (0xFul << SCB_CPUID_REVISION"
 8814      43505549 
 8814      445F5245 
 8814      56495349 
 8814      4F4E5F4D 
 8815 0445 5F506F73 		.ascii	"_Pos)\000"
 8815      2900
 8816              	.LASF810:
 8817 044b 7369676E 		.ascii	"signed char\000"
 8817      65642063 
 8817      68617200 
 8818              	.LASF624:
 8819 0457 5343425F 		.ascii	"SCB_ICSR_ISRPENDING_Pos 22\000"
 8819      49435352 
 8819      5F495352 
 8819      50454E44 
 8819      494E475F 
 8820              	.LASF18:
 8821 0472 5F5F5349 		.ascii	"__SIZEOF_LONG_LONG__ 8\000"
 8821      5A454F46 
 8821      5F4C4F4E 
 8821      475F4C4F 
 8821      4E475F5F 
 8822              	.LASF172:
 8823 0489 5F5F4442 		.ascii	"__DBL_MAX_10_EXP__ 308\000"
 8823      4C5F4D41 
 8823      585F3130 
 8823      5F455850 
 8823      5F5F2033 
 8824              	.LASF250:
 8825 04a0 5F5F4445 		.ascii	"__DEC64_EPSILON__ 1E-15DD\000"
 8825      4336345F 
 8825      45505349 
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 171


 8825      4C4F4E5F 
 8825      5F203145 
 8826              	.LASF271:
 8827 04ba 5F5F4652 		.ascii	"__FRACT_MIN__ (-0.5R-0.5R)\000"
 8827      4143545F 
 8827      4D494E5F 
 8827      5F20282D 
 8827      302E3552 
 8828              	.LASF337:
 8829 04d5 5F5F554C 		.ascii	"__ULLACCUM_MAX__ 0XFFFFFFFFFFFFFFFFP-32ULLK\000"
 8829      4C414343 
 8829      554D5F4D 
 8829      41585F5F 
 8829      20305846 
 8830              	.LASF982:
 8831 0501 6D61696E 		.ascii	"main.cpp\000"
 8831      2E637070 
 8831      00
 8832              	.LASF307:
 8833 050a 5F5F5553 		.ascii	"__USACCUM_MAX__ 0XFFFFP-8UHK\000"
 8833      41434355 
 8833      4D5F4D41 
 8833      585F5F20 
 8833      30584646 
 8834              	.LASF241:
 8835 0527 5F5F4445 		.ascii	"__DEC32_MIN__ 1E-95DF\000"
 8835      4333325F 
 8835      4D494E5F 
 8835      5F203145 
 8835      2D393544 
 8836              	.LASF100:
 8837 053d 5F5F494E 		.ascii	"__INTMAX_WIDTH__ 64\000"
 8837      544D4158 
 8837      5F574944 
 8837      54485F5F 
 8837      20363400 
 8838              	.LASF808:
 8839 0551 52464D37 		.ascii	"RFM70_REG_DYNPD 0x1C\000"
 8839      305F5245 
 8839      475F4459 
 8839      4E504420 
 8839      30783143 
 8840              	.LASF344:
 8841 0566 5F5F5351 		.ascii	"__SQ_IBIT__ 0\000"
 8841      5F494249 
 8841      545F5F20 
 8841      3000
 8842              	.LASF28:
 8843 0574 5F5F4F52 		.ascii	"__ORDER_PDP_ENDIAN__ 3412\000"
 8843      4445525F 
 8843      5044505F 
 8843      454E4449 
 8843      414E5F5F 
 8844              	.LASF33:
 8845 058e 5F5F5349 		.ascii	"__SIZE_TYPE__ unsigned int\000"
 8845      5A455F54 
 8845      5950455F 
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 172


 8845      5F20756E 
 8845      7369676E 
 8846              	.LASF838:
 8847 05a9 7E696E70 		.ascii	"~input_pin\000"
 8847      75745F70 
 8847      696E00
 8848              	.LASF598:
 8849 05b4 5F474343 		.ascii	"_GCC_WRAP_STDINT_H \000"
 8849      5F575241 
 8849      505F5354 
 8849      44494E54 
 8849      5F482000 
 8850              	.LASF164:
 8851 05c8 5F5F464C 		.ascii	"__FLT_HAS_DENORM__ 1\000"
 8851      545F4841 
 8851      535F4445 
 8851      4E4F524D 
 8851      5F5F2031 
 8852              	.LASF42:
 8853 05dd 5F5F494E 		.ascii	"__INT8_TYPE__ signed char\000"
 8853      54385F54 
 8853      5950455F 
 8853      5F207369 
 8853      676E6564 
 8854              	.LASF908:
 8855 05f7 6C6F7374 		.ascii	"lost_packets_reset\000"
 8855      5F706163 
 8855      6B657473 
 8855      5F726573 
 8855      657400
 8856              	.LASF306:
 8857 060a 5F5F5553 		.ascii	"__USACCUM_MIN__ 0.0UHK\000"
 8857      41434355 
 8857      4D5F4D49 
 8857      4E5F5F20 
 8857      302E3055 
 8858              	.LASF202:
 8859 0621 5F5F464C 		.ascii	"__FLT32_DECIMAL_DIG__ 9\000"
 8859      5433325F 
 8859      44454349 
 8859      4D414C5F 
 8859      4449475F 
 8860              	.LASF183:
 8861 0639 5F5F4C44 		.ascii	"__LDBL_MIN_EXP__ (-1021)\000"
 8861      424C5F4D 
 8861      494E5F45 
 8861      58505F5F 
 8861      20282D31 
 8862              	.LASF990:
 8863 0652 5F5F7674 		.ascii	"__vtbl_ptr_type\000"
 8863      626C5F70 
 8863      74725F74 
 8863      79706500 
 8864              	.LASF181:
 8865 0662 5F5F4C44 		.ascii	"__LDBL_MANT_DIG__ 53\000"
 8865      424C5F4D 
 8865      414E545F 
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 173


 8865      4449475F 
 8865      5F203533 
 8866              	.LASF833:
 8867 0677 5F5A4E34 		.ascii	"_ZN4pins10output_pinD4Ev\000"
 8867      70696E73 
 8867      31306F75 
 8867      74707574 
 8867      5F70696E 
 8868              	.LASF125:
 8869 0690 5F5F5549 		.ascii	"__UINT8_C(c) c\000"
 8869      4E54385F 
 8869      43286329 
 8869      206300
 8870              	.LASF43:
 8871 069f 5F5F494E 		.ascii	"__INT16_TYPE__ short int\000"
 8871      5431365F 
 8871      54595045 
 8871      5F5F2073 
 8871      686F7274 
 8872              	.LASF933:
 8873 06b8 5F5A4E35 		.ascii	"_ZN5rfm7017receive_next_pipeEv\000"
 8873      72666D37 
 8873      30313772 
 8873      65636569 
 8873      76655F6E 
 8874              	.LASF217:
 8875 06d7 5F5F464C 		.ascii	"__FLT64_MAX__ 1.7976931348623157e+308F64\000"
 8875      5436345F 
 8875      4D41585F 
 8875      5F20312E 
 8875      37393736 
 8876              	.LASF322:
 8877 0700 5F5F4C41 		.ascii	"__LACCUM_MAX__ 0X7FFFFFFFFFFFFFFFP-31LK\000"
 8877      4343554D 
 8877      5F4D4158 
 8877      5F5F2030 
 8877      58374646 
 8878              	.LASF915:
 8879 0728 5F5A4E35 		.ascii	"_ZN5rfm7018receive_address_p0EPKh\000"
 8879      72666D37 
 8879      30313872 
 8879      65636569 
 8879      76655F61 
 8880              	.LASF747:
 8881 074a 4C50435F 		.ascii	"LPC_GPIO_BASE (LPC_AHB_BASE + 0x00000)\000"
 8881      4750494F 
 8881      5F424153 
 8881      4520284C 
 8881      50435F41 
 8882              	.LASF935:
 8883 0771 5F5A4E35 		.ascii	"_ZN5rfm7019receive_next_lengthEv\000"
 8883      72666D37 
 8883      30313972 
 8883      65636569 
 8883      76655F6E 
 8884              	.LASF500:
 8885 0792 5F5F494E 		.ascii	"__INT8 \"hh\"\000"
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 174


 8885      54382022 
 8885      68682200 
 8886              	.LASF412:
 8887 079e 5F5F4150 		.ascii	"__APCS_32__ 1\000"
 8887      43535F33 
 8887      325F5F20 
 8887      3100
 8888              	.LASF367:
 8889 07ac 5F5F5548 		.ascii	"__UHA_FBIT__ 8\000"
 8889      415F4642 
 8889      49545F5F 
 8889      203800
 8890              	.LASF550:
 8891 07bb 494E545F 		.ascii	"INT_LEAST16_MAX (__INT_LEAST16_MAX__)\000"
 8891      4C454153 
 8891      5431365F 
 8891      4D415820 
 8891      285F5F49 
 8892              	.LASF605:
 8893 07e1 5343425F 		.ascii	"SCB_CPUID_VARIANT_Msk (0xFul << SCB_CPUID_VARIANT_P"
 8893      43505549 
 8893      445F5641 
 8893      5249414E 
 8893      545F4D73 
 8894 0814 6F732900 		.ascii	"os)\000"
 8895              	.LASF2:
 8896 0818 5F5F5354 		.ascii	"__STDC_HOSTED__ 1\000"
 8896      44435F48 
 8896      4F535445 
 8896      445F5F20 
 8896      3100
 8897              	.LASF294:
 8898 082a 5F5F554C 		.ascii	"__ULLFRACT_FBIT__ 64\000"
 8898      4C465241 
 8898      43545F46 
 8898      4249545F 
 8898      5F203634 
 8899              	.LASF61:
 8900 083f 5F5F494E 		.ascii	"__INT_FAST64_TYPE__ long long int\000"
 8900      545F4641 
 8900      53543634 
 8900      5F545950 
 8900      455F5F20 
 8901              	.LASF36:
 8902 0861 5F5F5749 		.ascii	"__WINT_TYPE__ unsigned int\000"
 8902      4E545F54 
 8902      5950455F 
 8902      5F20756E 
 8902      7369676E 
 8903              	.LASF618:
 8904 087c 5343425F 		.ascii	"SCB_ICSR_PENDSTSET_Pos 26\000"
 8904      49435352 
 8904      5F50454E 
 8904      44535453 
 8904      45545F50 
 8905              	.LASF541:
 8906 0896 494E5438 		.ascii	"INT8_MAX (__INT8_MAX__)\000"
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 175


 8906      5F4D4158 
 8906      20285F5F 
 8906      494E5438 
 8906      5F4D4158 
 8907              	.LASF733:
 8908 08ae 4C50435F 		.ascii	"LPC_I2C_BASE (LPC_APB0_BASE + 0x00000)\000"
 8908      4932435F 
 8908      42415345 
 8908      20284C50 
 8908      435F4150 
 8909              	.LASF946:
 8910 08d5 5F5A4E32 		.ascii	"_ZN21input_output_pin_lpc119direction_set_inputEv\000"
 8910      31696E70 
 8910      75745F6F 
 8910      75747075 
 8910      745F7069 
 8911              	.LASF201:
 8912 0907 5F5F464C 		.ascii	"__FLT32_MAX_10_EXP__ 38\000"
 8912      5433325F 
 8912      4D41585F 
 8912      31305F45 
 8912      58505F5F 
 8913              	.LASF377:
 8914 091f 5F5F474E 		.ascii	"__GNUC_GNU_INLINE__ 1\000"
 8914      55435F47 
 8914      4E555F49 
 8914      4E4C494E 
 8914      455F5F20 
 8915              	.LASF176:
 8916 0935 5F5F4442 		.ascii	"__DBL_EPSILON__ double(2.2204460492503131e-16L)\000"
 8916      4C5F4550 
 8916      53494C4F 
 8916      4E5F5F20 
 8916      646F7562 
 8917              	.LASF967:
 8918 0965 5F5A3562 		.ascii	"_Z5blinkRN4pins10output_pinEj\000"
 8918      6C696E6B 
 8918      524E3470 
 8918      696E7331 
 8918      306F7574 
 8919              	.LASF267:
 8920 0983 5F5F5553 		.ascii	"__USFRACT_MAX__ 0XFFP-8UHR\000"
 8920      46524143 
 8920      545F4D41 
 8920      585F5F20 
 8920      30584646 
 8921              	.LASF874:
 8922 099e 72656769 		.ascii	"register_write\000"
 8922      73746572 
 8922      5F777269 
 8922      746500
 8923              	.LASF986:
 8924 09ad 64697265 		.ascii	"direction\000"
 8924      6374696F 
 8924      6E00
 8925              	.LASF146:
 8926 09b7 5F5F5549 		.ascii	"__UINTPTR_MAX__ 0xffffffffU\000"
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 176


 8926      4E545054 
 8926      525F4D41 
 8926      585F5F20 
 8926      30786666 
 8927              	.LASF198:
 8928 09d3 5F5F464C 		.ascii	"__FLT32_MIN_EXP__ (-125)\000"
 8928      5433325F 
 8928      4D494E5F 
 8928      4558505F 
 8928      5F20282D 
 8929              	.LASF745:
 8930 09ec 4C50435F 		.ascii	"LPC_CAN_BASE (LPC_APB0_BASE + 0x50000)\000"
 8930      43414E5F 
 8930      42415345 
 8930      20284C50 
 8930      435F4150 
 8931              	.LASF632:
 8932 0a13 5343425F 		.ascii	"SCB_AIRCR_VECTKEYSTAT_Pos 16\000"
 8932      41495243 
 8932      525F5645 
 8932      43544B45 
 8932      59535441 
 8933              	.LASF963:
 8934 0a30 74797065 		.ascii	"type\000"
 8934      00
 8935              	.LASF859:
 8936 0a35 77616974 		.ascii	"wait_us\000"
 8936      5F757300 
 8937              	.LASF905:
 8938 0a3d 5F5A4E35 		.ascii	"_ZN5rfm7016retransmit_countEv\000"
 8938      72666D37 
 8938      30313672 
 8938      65747261 
 8938      6E736D69 
 8939              	.LASF547:
 8940 0a5b 494E5431 		.ascii	"INT16_MAX (__INT16_MAX__)\000"
 8940      365F4D41 
 8940      5820285F 
 8940      5F494E54 
 8940      31365F4D 
 8941              	.LASF769:
 8942 0a75 4C50435F 		.ascii	"LPC_GPIO3 ((LPC_GPIO_TypeDef *) LPC_GPIO3_BASE )\000"
 8942      4750494F 
 8942      33202828 
 8942      4C50435F 
 8942      4750494F 
 8943              	.LASF92:
 8944 0aa6 5F5F5743 		.ascii	"__WCHAR_WIDTH__ 32\000"
 8944      4841525F 
 8944      57494454 
 8944      485F5F20 
 8944      333200
 8945              	.LASF284:
 8946 0ab9 5F5F554C 		.ascii	"__ULFRACT_FBIT__ 32\000"
 8946      46524143 
 8946      545F4642 
 8946      49545F5F 
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 177


 8946      20333200 
 8947              	.LASF213:
 8948 0acd 5F5F464C 		.ascii	"__FLT64_MIN_10_EXP__ (-307)\000"
 8948      5436345F 
 8948      4D494E5F 
 8948      31305F45 
 8948      58505F5F 
 8949              	.LASF535:
 8950 0ae9 5F5F696E 		.ascii	"__int_fast32_t_defined 1\000"
 8950      745F6661 
 8950      73743332 
 8950      5F745F64 
 8950      6566696E 
 8951              	.LASF139:
 8952 0b02 5F5F494E 		.ascii	"__INT_FAST64_WIDTH__ 64\000"
 8952      545F4641 
 8952      53543634 
 8952      5F574944 
 8952      54485F5F 
 8953              	.LASF216:
 8954 0b1a 5F5F464C 		.ascii	"__FLT64_DECIMAL_DIG__ 17\000"
 8954      5436345F 
 8954      44454349 
 8954      4D414C5F 
 8954      4449475F 
 8955              	.LASF686:
 8956 0b33 436F7265 		.ascii	"CoreDebug_DHCSR_S_LOCKUP_Pos 19\000"
 8956      44656275 
 8956      675F4448 
 8956      4353525F 
 8956      535F4C4F 
 8957              	.LASF599:
 8958 0b53 5F5F4920 		.ascii	"__I volatile\000"
 8958      766F6C61 
 8958      74696C65 
 8958      00
 8959              	.LASF590:
 8960 0b60 494E5431 		.ascii	"INT16_C(x) __INT16_C(x)\000"
 8960      365F4328 
 8960      7829205F 
 8960      5F494E54 
 8960      31365F43 
 8961              	.LASF968:
 8962 0b78 64656C61 		.ascii	"delay\000"
 8962      7900
 8963              	.LASF942:
 8964 0b7e 64697265 		.ascii	"direction_pointer\000"
 8964      6374696F 
 8964      6E5F706F 
 8964      696E7465 
 8964      7200
 8965              	.LASF734:
 8966 0b90 4C50435F 		.ascii	"LPC_WDT_BASE (LPC_APB0_BASE + 0x04000)\000"
 8966      5744545F 
 8966      42415345 
 8966      20284C50 
 8966      435F4150 
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 178


 8967              	.LASF119:
 8968 0bb7 5F5F494E 		.ascii	"__INT32_C(c) c ## L\000"
 8968      5433325F 
 8968      43286329 
 8968      20632023 
 8968      23204C00 
 8969              	.LASF353:
 8970 0bcb 5F5F5553 		.ascii	"__USQ_FBIT__ 32\000"
 8970      515F4642 
 8970      49545F5F 
 8970      20333200 
 8971              	.LASF27:
 8972 0bdb 5F5F4F52 		.ascii	"__ORDER_BIG_ENDIAN__ 4321\000"
 8972      4445525F 
 8972      4249475F 
 8972      454E4449 
 8972      414E5F5F 
 8973              	.LASF304:
 8974 0bf5 5F5F5553 		.ascii	"__USACCUM_FBIT__ 8\000"
 8974      41434355 
 8974      4D5F4642 
 8974      49545F5F 
 8974      203800
 8975              	.LASF369:
 8976 0c08 5F5F5553 		.ascii	"__USA_FBIT__ 16\000"
 8976      415F4642 
 8976      49545F5F 
 8976      20313600 
 8977              	.LASF383:
 8978 0c18 5F5F4743 		.ascii	"__GCC_ATOMIC_CHAR32_T_LOCK_FREE 1\000"
 8978      435F4154 
 8978      4F4D4943 
 8978      5F434841 
 8978      5233325F 
 8979              	.LASF343:
 8980 0c3a 5F5F5351 		.ascii	"__SQ_FBIT__ 31\000"
 8980      5F464249 
 8980      545F5F20 
 8980      333100
 8981              	.LASF255:
 8982 0c49 5F5F4445 		.ascii	"__DEC128_MIN__ 1E-6143DL\000"
 8982      43313238 
 8982      5F4D494E 
 8982      5F5F2031 
 8982      452D3631 
 8983              	.LASF540:
 8984 0c62 494E5438 		.ascii	"INT8_MIN (-__INT8_MAX__ - 1)\000"
 8984      5F4D494E 
 8984      20282D5F 
 8984      5F494E54 
 8984      385F4D41 
 8985              	.LASF857:
 8986 0c7f 6D69736F 		.ascii	"miso\000"
 8986      00
 8987              	.LASF512:
 8988 0c84 5F535953 		.ascii	"_SYS__STDINT_H \000"
 8988      5F5F5354 
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 179


 8988      44494E54 
 8988      5F482000 
 8989              	.LASF562:
 8990 0c94 494E545F 		.ascii	"INT_LEAST64_MAX (__INT_LEAST64_MAX__)\000"
 8990      4C454153 
 8990      5436345F 
 8990      4D415820 
 8990      285F5F49 
 8991              	.LASF212:
 8992 0cba 5F5F464C 		.ascii	"__FLT64_MIN_EXP__ (-1021)\000"
 8992      5436345F 
 8992      4D494E5F 
 8992      4558505F 
 8992      5F20282D 
 8993              	.LASF94:
 8994 0cd4 5F5F5054 		.ascii	"__PTRDIFF_WIDTH__ 32\000"
 8994      52444946 
 8994      465F5749 
 8994      4454485F 
 8994      5F203332 
 8995              	.LASF807:
 8996 0ce9 52464D37 		.ascii	"RFM70_REG_FIFO_STATUS 0x17\000"
 8996      305F5245 
 8996      475F4649 
 8996      464F5F53 
 8996      54415455 
 8997              	.LASF676:
 8998 0d04 53797354 		.ascii	"SysTick_CALIB_SKEW_Pos 30\000"
 8998      69636B5F 
 8998      43414C49 
 8998      425F534B 
 8998      45575F50 
 8999              	.LASF140:
 9000 0d1e 5F5F5549 		.ascii	"__UINT_FAST8_MAX__ 0xffffffffU\000"
 9000      4E545F46 
 9000      41535438 
 9000      5F4D4158 
 9000      5F5F2030 
 9001              	.LASF243:
 9002 0d3d 5F5F4445 		.ascii	"__DEC32_EPSILON__ 1E-6DF\000"
 9002      4333325F 
 9002      45505349 
 9002      4C4F4E5F 
 9002      5F203145 
 9003              	.LASF585:
 9004 0d56 57434841 		.ascii	"WCHAR_MAX (__WCHAR_MAX__)\000"
 9004      525F4D41 
 9004      5820285F 
 9004      5F574348 
 9004      41525F4D 
 9005              	.LASF893:
 9006 0d70 5F5A4E35 		.ascii	"_ZN5rfm707channelEh\000"
 9006      72666D37 
 9006      30376368 
 9006      616E6E65 
 9006      6C456800 
 9007              	.LASF320:
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 180


 9008 0d84 5F5F4C41 		.ascii	"__LACCUM_IBIT__ 32\000"
 9008      4343554D 
 9008      5F494249 
 9008      545F5F20 
 9008      333200
 9009              	.LASF544:
 9010 0d97 494E545F 		.ascii	"INT_LEAST8_MAX (__INT_LEAST8_MAX__)\000"
 9010      4C454153 
 9010      54385F4D 
 9010      41582028 
 9010      5F5F494E 
 9011              	.LASF721:
 9012 0dbb 5F5F4153 		.ascii	"__ASM __asm\000"
 9012      4D205F5F 
 9012      61736D00 
 9013              	.LASF906:
 9014 0dc7 6C6F7374 		.ascii	"lost_packets_count\000"
 9014      5F706163 
 9014      6B657473 
 9014      5F636F75 
 9014      6E7400
 9015              	.LASF87:
 9016 0dda 5F5F5343 		.ascii	"__SCHAR_WIDTH__ 8\000"
 9016      4841525F 
 9016      57494454 
 9016      485F5F20 
 9016      3800
 9017              	.LASF135:
 9018 0dec 5F5F494E 		.ascii	"__INT_FAST16_WIDTH__ 32\000"
 9018      545F4641 
 9018      53543136 
 9018      5F574944 
 9018      54485F5F 
 9019              	.LASF175:
 9020 0e04 5F5F4442 		.ascii	"__DBL_MIN__ double(2.2250738585072014e-308L)\000"
 9020      4C5F4D49 
 9020      4E5F5F20 
 9020      646F7562 
 9020      6C652832 
 9021              	.LASF419:
 9022 0e31 5F5F5646 		.ascii	"__VFP_FP__ 1\000"
 9022      505F4650 
 9022      5F5F2031 
 9022      00
 9023              	.LASF510:
 9024 0e3e 5F5F4C45 		.ascii	"__LEAST32 \"l\"\000"
 9024      41535433 
 9024      3220226C 
 9024      2200
 9025              	.LASF503:
 9026 0e4c 5F5F494E 		.ascii	"__INT64 \"ll\"\000"
 9026      54363420 
 9026      226C6C22 
 9026      00
 9027              	.LASF144:
 9028 0e59 5F5F494E 		.ascii	"__INTPTR_MAX__ 0x7fffffff\000"
 9028      54505452 
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 181


 9028      5F4D4158 
 9028      5F5F2030 
 9028      78376666 
 9029              	.LASF858:
 9030 0e73 77616974 		.ascii	"wait_ms\000"
 9030      5F6D7300 
 9031              	.LASF927:
 9032 0e7b 5F5A4E35 		.ascii	"_ZN5rfm7018receive_fifo_emptyEv\000"
 9032      72666D37 
 9032      30313872 
 9032      65636569 
 9032      76655F66 
 9033              	.LASF837:
 9034 0e9b 5F767074 		.ascii	"_vptr.input_pin\000"
 9034      722E696E 
 9034      7075745F 
 9034      70696E00 
 9035              	.LASF141:
 9036 0eab 5F5F5549 		.ascii	"__UINT_FAST16_MAX__ 0xffffffffU\000"
 9036      4E545F46 
 9036      41535431 
 9036      365F4D41 
 9036      585F5F20 
 9037              	.LASF561:
 9038 0ecb 494E545F 		.ascii	"INT_LEAST64_MIN (-__INT_LEAST64_MAX__ - 1)\000"
 9038      4C454153 
 9038      5436345F 
 9038      4D494E20 
 9038      282D5F5F 
 9039              	.LASF660:
 9040 0ef6 5343425F 		.ascii	"SCB_DFSR_HALTED_Pos 0\000"
 9040      44465352 
 9040      5F48414C 
 9040      5445445F 
 9040      506F7320 
 9041              	.LASF625:
 9042 0f0c 5343425F 		.ascii	"SCB_ICSR_ISRPENDING_Msk (1ul << SCB_ICSR_ISRPENDING"
 9042      49435352 
 9042      5F495352 
 9042      50454E44 
 9042      494E475F 
 9043 0f3f 5F506F73 		.ascii	"_Pos)\000"
 9043      2900
 9044              	.LASF73:
 9045 0f45 5F5F6370 		.ascii	"__cpp_hex_float 201603\000"
 9045      705F6865 
 9045      785F666C 
 9045      6F617420 
 9045      32303136 
 9046              	.LASF714:
 9047 0f5c 53797354 		.ascii	"SysTick_BASE (SCS_BASE + 0x0010)\000"
 9047      69636B5F 
 9047      42415345 
 9047      20285343 
 9047      535F4241 
 9048              	.LASF452:
 9049 0f7d 5F5F474E 		.ascii	"__GNUC_PREREQ(maj,min) ((__GNUC__ << 16) + __GNUC_M"
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 182


 9049      55435F50 
 9049      52455245 
 9049      51286D61 
 9049      6A2C6D69 
 9050 0fb0 494E4F52 		.ascii	"INOR__ >= ((maj) << 16) + (min))\000"
 9050      5F5F203E 
 9050      3D202828 
 9050      6D616A29 
 9050      203C3C20 
 9051              	.LASF276:
 9052 0fd1 5F5F5546 		.ascii	"__UFRACT_MIN__ 0.0UR\000"
 9052      52414354 
 9052      5F4D494E 
 9052      5F5F2030 
 9052      2E305552 
 9053              	.LASF641:
 9054 0fe6 5343425F 		.ascii	"SCB_SCR_SEVONPEND_Msk (1ul << SCB_SCR_SEVONPEND_Pos"
 9054      5343525F 
 9054      5345564F 
 9054      4E50454E 
 9054      445F4D73 
 9055 1019 2900     		.ascii	")\000"
 9056              	.LASF527:
 9057 101b 5F494E54 		.ascii	"_INTPTR_T_DECLARED \000"
 9057      5054525F 
 9057      545F4445 
 9057      434C4152 
 9057      45442000 
 9058              	.LASF715:
 9059 102f 4E564943 		.ascii	"NVIC_BASE (SCS_BASE + 0x0100)\000"
 9059      5F424153 
 9059      45202853 
 9059      43535F42 
 9059      41534520 
 9060              	.LASF236:
 9061 104d 5F5F464C 		.ascii	"__FLT32X_HAS_INFINITY__ 1\000"
 9061      54333258 
 9061      5F484153 
 9061      5F494E46 
 9061      494E4954 
 9062              	.LASF570:
 9063 1067 494E545F 		.ascii	"INT_FAST32_MIN (-__INT_FAST32_MAX__ - 1)\000"
 9063      46415354 
 9063      33325F4D 
 9063      494E2028 
 9063      2D5F5F49 
 9064              	.LASF960:
 9065 1090 53656E64 		.ascii	"Send_Packet\000"
 9065      5F506163 
 9065      6B657400 
 9066              	.LASF666:
 9067 109c 53797354 		.ascii	"SysTick_CTRL_TICKINT_Pos 1\000"
 9067      69636B5F 
 9067      4354524C 
 9067      5F544943 
 9067      4B494E54 
 9068              	.LASF549:
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 183


 9069 10b7 494E545F 		.ascii	"INT_LEAST16_MIN (-__INT_LEAST16_MAX__ - 1)\000"
 9069      4C454153 
 9069      5431365F 
 9069      4D494E20 
 9069      282D5F5F 
 9070              	.LASF54:
 9071 10e2 5F5F5549 		.ascii	"__UINT_LEAST8_TYPE__ unsigned char\000"
 9071      4E545F4C 
 9071      45415354 
 9071      385F5459 
 9071      50455F5F 
 9072              	.LASF753:
 9073 1105 4C50435F 		.ascii	"LPC_WDT ((LPC_WDT_TypeDef *) LPC_WDT_BASE )\000"
 9073      57445420 
 9073      28284C50 
 9073      435F5744 
 9073      545F5479 
 9074              	.LASF309:
 9075 1131 5F5F4143 		.ascii	"__ACCUM_FBIT__ 15\000"
 9075      43554D5F 
 9075      46424954 
 9075      5F5F2031 
 9075      3500
 9076              	.LASF976:
 9077 1143 5F5A4E34 		.ascii	"_ZN4pins10output_pinC2Ev\000"
 9077      70696E73 
 9077      31306F75 
 9077      74707574 
 9077      5F70696E 
 9078              	.LASF315:
 9079 115c 5F5F5541 		.ascii	"__UACCUM_IBIT__ 16\000"
 9079      4343554D 
 9079      5F494249 
 9079      545F5F20 
 9079      313600
 9080              	.LASF843:
 9081 116f 64697265 		.ascii	"direction_set_input\000"
 9081      6374696F 
 9081      6E5F7365 
 9081      745F696E 
 9081      70757400 
 9082              	.LASF735:
 9083 1183 4C50435F 		.ascii	"LPC_UART_BASE (LPC_APB0_BASE + 0x08000)\000"
 9083      55415254 
 9083      5F424153 
 9083      4520284C 
 9083      50435F41 
 9084              	.LASF652:
 9085 11ab 5343425F 		.ascii	"SCB_DFSR_EXTERNAL_Pos 4\000"
 9085      44465352 
 9085      5F455854 
 9085      45524E41 
 9085      4C5F506F 
 9086              	.LASF138:
 9087 11c3 5F5F494E 		.ascii	"__INT_FAST64_MAX__ 0x7fffffffffffffffLL\000"
 9087      545F4641 
 9087      53543634 
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 184


 9087      5F4D4158 
 9087      5F5F2030 
 9088              	.LASF230:
 9089 11eb 5F5F464C 		.ascii	"__FLT32X_DECIMAL_DIG__ 17\000"
 9089      54333258 
 9089      5F444543 
 9089      494D414C 
 9089      5F444947 
 9090              	.LASF237:
 9091 1205 5F5F464C 		.ascii	"__FLT32X_HAS_QUIET_NAN__ 1\000"
 9091      54333258 
 9091      5F484153 
 9091      5F515549 
 9091      45545F4E 
 9092              	.LASF233:
 9093 1220 5F5F464C 		.ascii	"__FLT32X_EPSILON__ 2.2204460492503131e-16F32x\000"
 9093      54333258 
 9093      5F455053 
 9093      494C4F4E 
 9093      5F5F2032 
 9094              	.LASF479:
 9095 124e 5F5F5F69 		.ascii	"___int_least16_t_defined 1\000"
 9095      6E745F6C 
 9095      65617374 
 9095      31365F74 
 9095      5F646566 
 9096              	.LASF253:
 9097 1269 5F5F4445 		.ascii	"__DEC128_MIN_EXP__ (-6142)\000"
 9097      43313238 
 9097      5F4D494E 
 9097      5F455850 
 9097      5F5F2028 
 9098              	.LASF902:
 9099 1284 72657472 		.ascii	"retransmit_delay_attempts\000"
 9099      616E736D 
 9099      69745F64 
 9099      656C6179 
 9099      5F617474 
 9100              	.LASF58:
 9101 129e 5F5F494E 		.ascii	"__INT_FAST8_TYPE__ int\000"
 9101      545F4641 
 9101      5354385F 
 9101      54595045 
 9101      5F5F2069 
 9102              	.LASF371:
 9103 12b5 5F5F5544 		.ascii	"__UDA_FBIT__ 32\000"
 9103      415F4642 
 9103      49545F5F 
 9103      20333200 
 9104              	.LASF871:
 9105 12c5 5F5A4E35 		.ascii	"_ZN5rfm7013register_readEh\000"
 9105      72666D37 
 9105      30313372 
 9105      65676973 
 9105      7465725F 
 9106              	.LASF215:
 9107 12e0 5F5F464C 		.ascii	"__FLT64_MAX_10_EXP__ 308\000"
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 185


 9107      5436345F 
 9107      4D41585F 
 9107      31305F45 
 9107      58505F5F 
 9108              	.LASF708:
 9109 12f9 436F7265 		.ascii	"CoreDebug_DEMCR_VC_HARDERR_Pos 10\000"
 9109      44656275 
 9109      675F4445 
 9109      4D43525F 
 9109      56435F48 
 9110              	.LASF99:
 9111 131b 5F5F5549 		.ascii	"__UINTMAX_C(c) c ## ULL\000"
 9111      4E544D41 
 9111      585F4328 
 9111      63292063 
 9111      20232320 
 9112              	.LASF31:
 9113 1333 5F5F5349 		.ascii	"__SIZEOF_POINTER__ 4\000"
 9113      5A454F46 
 9113      5F504F49 
 9113      4E544552 
 9113      5F5F2034 
 9114              	.LASF50:
 9115 1348 5F5F494E 		.ascii	"__INT_LEAST8_TYPE__ signed char\000"
 9115      545F4C45 
 9115      41535438 
 9115      5F545950 
 9115      455F5F20 
 9116              	.LASF732:
 9117 1368 4C50435F 		.ascii	"LPC_AHB_BASE (0x50000000UL)\000"
 9117      4148425F 
 9117      42415345 
 9117      20283078 
 9117      35303030 
 9118              	.LASF380:
 9119 1384 5F5F4743 		.ascii	"__GCC_ATOMIC_BOOL_LOCK_FREE 1\000"
 9119      435F4154 
 9119      4F4D4943 
 9119      5F424F4F 
 9119      4C5F4C4F 
 9120              	.LASF477:
 9121 13a2 5F5F5F69 		.ascii	"___int64_t_defined 1\000"
 9121      6E743634 
 9121      5F745F64 
 9121      6566696E 
 9121      65642031 
 9122              	.LASF705:
 9123 13b7 436F7265 		.ascii	"CoreDebug_DCRSR_REGSEL_Msk (0x1Ful << CoreDebug_DCR"
 9123      44656275 
 9123      675F4443 
 9123      5253525F 
 9123      52454753 
 9124 13ea 53525F52 		.ascii	"SR_REGSEL_Pos)\000"
 9124      45475345 
 9124      4C5F506F 
 9124      732900
 9125              	.LASF427:
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 186


 9126 13f9 5F5F4152 		.ascii	"__ARM_NEON__\000"
 9126      4D5F4E45 
 9126      4F4E5F5F 
 9126      00
 9127              	.LASF539:
 9128 1406 55494E54 		.ascii	"UINTPTR_MAX (__UINTPTR_MAX__)\000"
 9128      5054525F 
 9128      4D415820 
 9128      285F5F55 
 9128      494E5450 
 9129              	.LASF200:
 9130 1424 5F5F464C 		.ascii	"__FLT32_MAX_EXP__ 128\000"
 9130      5433325F 
 9130      4D41585F 
 9130      4558505F 
 9130      5F203132 
 9131              	.LASF895:
 9132 143a 5F5A4E35 		.ascii	"_ZN5rfm7013air_data_rateEh\000"
 9132      72666D37 
 9132      30313361 
 9132      69725F64 
 9132      6174615F 
 9133              	.LASF953:
 9134 1455 6D61696E 		.ascii	"main\000"
 9134      00
 9135              	.LASF430:
 9136 145a 5F5F5448 		.ascii	"__THUMB_INTERWORK__ 1\000"
 9136      554D425F 
 9136      494E5445 
 9136      52574F52 
 9136      4B5F5F20 
 9137              	.LASF297:
 9138 1470 5F5F554C 		.ascii	"__ULLFRACT_MAX__ 0XFFFFFFFFFFFFFFFFP-64ULLR\000"
 9138      4C465241 
 9138      43545F4D 
 9138      41585F5F 
 9138      20305846 
 9139              	.LASF707:
 9140 149c 436F7265 		.ascii	"CoreDebug_DEMCR_DWTENA_Msk (1ul << CoreDebug_DEMCR_"
 9140      44656275 
 9140      675F4445 
 9140      4D43525F 
 9140      44575445 
 9141 14cf 44575445 		.ascii	"DWTENA_Pos)\000"
 9141      4E415F50 
 9141      6F732900 
 9142              	.LASF759:
 9143 14db 4C50435F 		.ascii	"LPC_ADC ((LPC_ADC_TypeDef *) LPC_ADC_BASE )\000"
 9143      41444320 
 9143      28284C50 
 9143      435F4144 
 9143      435F5479 
 9144              	.LASF890:
 9145 1507 6C6E615F 		.ascii	"lna_high\000"
 9145      68696768 
 9145      00
 9146              	.LASF523:
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 187


 9147 1510 5F55494E 		.ascii	"_UINT64_T_DECLARED \000"
 9147      5436345F 
 9147      545F4445 
 9147      434C4152 
 9147      45442000 
 9148              	.LASF751:
 9149 1524 4C50435F 		.ascii	"LPC_GPIO3_BASE (LPC_AHB_BASE + 0x30000)\000"
 9149      4750494F 
 9149      335F4241 
 9149      53452028 
 9149      4C50435F 
 9150              	.LASF40:
 9151 154c 5F5F4348 		.ascii	"__CHAR32_TYPE__ long unsigned int\000"
 9151      41523332 
 9151      5F545950 
 9151      455F5F20 
 9151      6C6F6E67 
 9152              	.LASF425:
 9153 156e 5F5F4152 		.ascii	"__ARM_FEATURE_FP16_VECTOR_ARITHMETIC\000"
 9153      4D5F4645 
 9153      41545552 
 9153      455F4650 
 9153      31365F56 
 9154              	.LASF459:
 9155 1593 5F504F53 		.ascii	"_POSIX_C_SOURCE 200809L\000"
 9155      49585F43 
 9155      5F534F55 
 9155      52434520 
 9155      32303038 
 9156              	.LASF142:
 9157 15ab 5F5F5549 		.ascii	"__UINT_FAST32_MAX__ 0xffffffffU\000"
 9157      4E545F46 
 9157      41535433 
 9157      325F4D41 
 9157      585F5F20 
 9158              	.LASF157:
 9159 15cb 5F5F464C 		.ascii	"__FLT_MAX_EXP__ 128\000"
 9159      545F4D41 
 9159      585F4558 
 9159      505F5F20 
 9159      31323800 
 9160              	.LASF17:
 9161 15df 5F5F5349 		.ascii	"__SIZEOF_LONG__ 4\000"
 9161      5A454F46 
 9161      5F4C4F4E 
 9161      475F5F20 
 9161      3400
 9162              	.LASF685:
 9163 15f1 436F7265 		.ascii	"CoreDebug_DHCSR_S_RETIRE_ST_Msk (1ul << CoreDebug_D"
 9163      44656275 
 9163      675F4448 
 9163      4353525F 
 9163      535F5245 
 9164 1624 48435352 		.ascii	"HCSR_S_RETIRE_ST_Pos)\000"
 9164      5F535F52 
 9164      45544952 
 9164      455F5354 
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 188


 9164      5F506F73 
 9165              	.LASF21:
 9166 163a 5F5F5349 		.ascii	"__SIZEOF_DOUBLE__ 8\000"
 9166      5A454F46 
 9166      5F444F55 
 9166      424C455F 
 9166      5F203800 
 9167              	.LASF120:
 9168 164e 5F5F494E 		.ascii	"__INT_LEAST32_WIDTH__ 32\000"
 9168      545F4C45 
 9168      41535433 
 9168      325F5749 
 9168      4454485F 
 9169              	.LASF868:
 9170 1667 72666D37 		.ascii	"rfm70\000"
 9170      3000
 9171              	.LASF788:
 9172 166d 52464D37 		.ascii	"RFM70_REG_SETUP_RETR 0x04\000"
 9172      305F5245 
 9172      475F5345 
 9172      5455505F 
 9172      52455452 
 9173              	.LASF841:
 9174 1687 5F5A4E34 		.ascii	"_ZN4pins9input_pinC4Ev\000"
 9174      70696E73 
 9174      39696E70 
 9174      75745F70 
 9174      696E4334 
 9175              	.LASF758:
 9176 169e 4C50435F 		.ascii	"LPC_TMR32B1 ((LPC_TMR_TypeDef *) LPC_CT32B1_BASE)\000"
 9176      544D5233 
 9176      32423120 
 9176      28284C50 
 9176      435F544D 
 9177              	.LASF505:
 9178 16d0 5F5F4641 		.ascii	"__FAST16 \000"
 9178      53543136 
 9178      2000
 9179              	.LASF983:
 9180 16da 433A5C74 		.ascii	"C:\\ti-software\\hwcpp\\attic\\rfm70-lpc1114\000"
 9180      692D736F 
 9180      66747761 
 9180      72655C68 
 9180      77637070 
 9181              	.LASF466:
 9182 1703 5F5F4C41 		.ascii	"__LARGEFILE_VISIBLE 0\000"
 9182      52474546 
 9182      494C455F 
 9182      56495349 
 9182      424C4520 
 9183              	.LASF249:
 9184 1719 5F5F4445 		.ascii	"__DEC64_MAX__ 9.999999999999999E384DD\000"
 9184      4336345F 
 9184      4D41585F 
 9184      5F20392E 
 9184      39393939 
 9185              	.LASF922:
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 189


 9186 173f 7472616E 		.ascii	"transmit_address\000"
 9186      736D6974 
 9186      5F616464 
 9186      72657373 
 9186      00
 9187              	.LASF793:
 9188 1750 52464D37 		.ascii	"RFM70_REG_CD 0x09\000"
 9188      305F5245 
 9188      475F4344 
 9188      20307830 
 9188      3900
 9189              	.LASF909:
 9190 1762 5F5A4E35 		.ascii	"_ZN5rfm7018lost_packets_resetEv\000"
 9190      72666D37 
 9190      3031386C 
 9190      6F73745F 
 9190      7061636B 
 9191              	.LASF373:
 9192 1782 5F5F5554 		.ascii	"__UTA_FBIT__ 64\000"
 9192      415F4642 
 9192      49545F5F 
 9192      20363400 
 9193              	.LASF465:
 9194 1792 5F5F4953 		.ascii	"__ISO_C_VISIBLE 1999\000"
 9194      4F5F435F 
 9194      56495349 
 9194      424C4520 
 9194      31393939 
 9195              	.LASF842:
 9196 17a7 64697265 		.ascii	"direction_set_output\000"
 9196      6374696F 
 9196      6E5F7365 
 9196      745F6F75 
 9196      74707574 
 9197              	.LASF514:
 9198 17bc 5F55494E 		.ascii	"_UINT8_T_DECLARED \000"
 9198      54385F54 
 9198      5F444543 
 9198      4C415245 
 9198      442000
 9199              	.LASF49:
 9200 17cf 5F5F5549 		.ascii	"__UINT64_TYPE__ long long unsigned int\000"
 9200      4E543634 
 9200      5F545950 
 9200      455F5F20 
 9200      6C6F6E67 
 9201              	.LASF668:
 9202 17f6 53797354 		.ascii	"SysTick_CTRL_ENABLE_Pos 0\000"
 9202      69636B5F 
 9202      4354524C 
 9202      5F454E41 
 9202      424C455F 
 9203              	.LASF577:
 9204 1810 494E544D 		.ascii	"INTMAX_MIN (-INTMAX_MAX - 1)\000"
 9204      41585F4D 
 9204      494E2028 
 9204      2D494E54 
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 190


 9204      4D41585F 
 9205              	.LASF584:
 9206 182d 57434841 		.ascii	"WCHAR_MIN (__WCHAR_MIN__)\000"
 9206      525F4D49 
 9206      4E20285F 
 9206      5F574348 
 9206      41525F4D 
 9207              	.LASF269:
 9208 1847 5F5F4652 		.ascii	"__FRACT_FBIT__ 15\000"
 9208      4143545F 
 9208      46424954 
 9208      5F5F2031 
 9208      3500
 9209              	.LASF980:
 9210 1859 5F5A4E35 		.ascii	"_ZN5rfm70C2ERN4pins10output_pinES2_RNS0_9input_pinE"
 9210      72666D37 
 9210      30433245 
 9210      524E3470 
 9210      696E7331 
 9211 188c 53325F53 		.ascii	"S2_S2_PFvjES6_\000"
 9211      325F5046 
 9211      766A4553 
 9211      365F00
 9212              	.LASF166:
 9213 189b 5F5F464C 		.ascii	"__FLT_HAS_QUIET_NAN__ 1\000"
 9213      545F4841 
 9213      535F5155 
 9213      4945545F 
 9213      4E414E5F 
 9214              	.LASF5:
 9215 18b3 5F5F474E 		.ascii	"__GNUC_PATCHLEVEL__ 0\000"
 9215      55435F50 
 9215      41544348 
 9215      4C455645 
 9215      4C5F5F20 
 9216              	.LASF866:
 9217 18c9 5F5A4E35 		.ascii	"_ZN5rfm706SPI_RWEh\000"
 9217      72666D37 
 9217      30365350 
 9217      495F5257 
 9217      456800
 9218              	.LASF803:
 9219 18dc 52464D37 		.ascii	"RFM70_REG_RX_PW_P2 0x13\000"
 9219      305F5245 
 9219      475F5258 
 9219      5F50575F 
 9219      50322030 
 9220              	.LASF126:
 9221 18f4 5F5F5549 		.ascii	"__UINT_LEAST16_MAX__ 0xffff\000"
 9221      4E545F4C 
 9221      45415354 
 9221      31365F4D 
 9221      41585F5F 
 9222              	.LASF449:
 9223 1910 5F535444 		.ascii	"_STDINT_H \000"
 9223      494E545F 
 9223      482000
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 191


 9224              	.LASF154:
 9225 191b 5F5F464C 		.ascii	"__FLT_DIG__ 6\000"
 9225      545F4449 
 9225      475F5F20 
 9225      3600
 9226              	.LASF862:
 9227 1929 696E6974 		.ascii	"init_bank1\000"
 9227      5F62616E 
 9227      6B3100
 9228              	.LASF656:
 9229 1934 5343425F 		.ascii	"SCB_DFSR_DWTTRAP_Pos 2\000"
 9229      44465352 
 9229      5F445754 
 9229      54524150 
 9229      5F506F73 
 9230              	.LASF592:
 9231 194b 494E5433 		.ascii	"INT32_C(x) __INT32_C(x)\000"
 9231      325F4328 
 9231      7829205F 
 9231      5F494E54 
 9231      33325F43 
 9232              	.LASF137:
 9233 1963 5F5F494E 		.ascii	"__INT_FAST32_WIDTH__ 32\000"
 9233      545F4641 
 9233      53543332 
 9233      5F574944 
 9233      54485F5F 
 9234              	.LASF177:
 9235 197b 5F5F4442 		.ascii	"__DBL_DENORM_MIN__ double(4.9406564584124654e-324L)"
 9235      4C5F4445 
 9235      4E4F524D 
 9235      5F4D494E 
 9235      5F5F2064 
 9236 19ae 00       		.ascii	"\000"
 9237              	.LASF64:
 9238 19af 5F5F5549 		.ascii	"__UINT_FAST32_TYPE__ unsigned int\000"
 9238      4E545F46 
 9238      41535433 
 9238      325F5459 
 9238      50455F5F 
 9239              	.LASF811:
 9240 19d1 756E7369 		.ascii	"unsigned char\000"
 9240      676E6564 
 9240      20636861 
 9240      7200
 9241              	.LASF20:
 9242 19df 5F5F5349 		.ascii	"__SIZEOF_FLOAT__ 4\000"
 9242      5A454F46 
 9242      5F464C4F 
 9242      41545F5F 
 9242      203400
 9243              	.LASF234:
 9244 19f2 5F5F464C 		.ascii	"__FLT32X_DENORM_MIN__ 4.9406564584124654e-324F32x\000"
 9244      54333258 
 9244      5F44454E 
 9244      4F524D5F 
 9244      4D494E5F 
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 192


 9245              	.LASF158:
 9246 1a24 5F5F464C 		.ascii	"__FLT_MAX_10_EXP__ 38\000"
 9246      545F4D41 
 9246      585F3130 
 9246      5F455850 
 9246      5F5F2033 
 9247              	.LASF256:
 9248 1a3a 5F5F4445 		.ascii	"__DEC128_MAX__ 9.999999999999999999999999999999999E"
 9248      43313238 
 9248      5F4D4158 
 9248      5F5F2039 
 9248      2E393939 
 9249 1a6d 36313434 		.ascii	"6144DL\000"
 9249      444C00
 9250              	.LASF254:
 9251 1a74 5F5F4445 		.ascii	"__DEC128_MAX_EXP__ 6145\000"
 9251      43313238 
 9251      5F4D4158 
 9251      5F455850 
 9251      5F5F2036 
 9252              	.LASF938:
 9253 1a8c 626F6F6C 		.ascii	"bool\000"
 9253      00
 9254              	.LASF754:
 9255 1a91 4C50435F 		.ascii	"LPC_UART ((LPC_UART_TypeDef *) LPC_UART_BASE )\000"
 9255      55415254 
 9255      2028284C 
 9255      50435F55 
 9255      4152545F 
 9256              	.LASF136:
 9257 1ac0 5F5F494E 		.ascii	"__INT_FAST32_MAX__ 0x7fffffff\000"
 9257      545F4641 
 9257      53543332 
 9257      5F4D4158 
 9257      5F5F2030 
 9258              	.LASF8:
 9259 1ade 5F5F4154 		.ascii	"__ATOMIC_SEQ_CST 5\000"
 9259      4F4D4943 
 9259      5F534551 
 9259      5F435354 
 9259      203500
 9260              	.LASF434:
 9261 1af1 5F5F4152 		.ascii	"__ARM_ARCH_EXT_IDIV__\000"
 9261      4D5F4152 
 9261      43485F45 
 9261      58545F49 
 9261      4449565F 
 9262              	.LASF774:
 9263 1b07 52464D37 		.ascii	"RFM70_CMD_R_RX_PAYLOAD 0x61\000"
 9263      305F434D 
 9263      445F525F 
 9263      52585F50 
 9263      41594C4F 
 9264              	.LASF565:
 9265 1b23 494E545F 		.ascii	"INT_FAST8_MAX (__INT_FAST8_MAX__)\000"
 9265      46415354 
 9265      385F4D41 
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 193


 9265      5820285F 
 9265      5F494E54 
 9266              	.LASF717:
 9267 1b45 53434220 		.ascii	"SCB ((SCB_Type *) SCB_BASE)\000"
 9267      28285343 
 9267      425F5479 
 9267      7065202A 
 9267      29205343 
 9268              	.LASF109:
 9269 1b61 5F5F5549 		.ascii	"__UINT16_MAX__ 0xffff\000"
 9269      4E543136 
 9269      5F4D4158 
 9269      5F5F2030 
 9269      78666666 
 9270              	.LASF347:
 9271 1b77 5F5F5451 		.ascii	"__TQ_FBIT__ 127\000"
 9271      5F464249 
 9271      545F5F20 
 9271      31323700 
 9272              	.LASF882:
 9273 1b87 6D6F6465 		.ascii	"mode_receive\000"
 9273      5F726563 
 9273      65697665 
 9273      00
 9274              	.LASF780:
 9275 1b94 52464D37 		.ascii	"RFM70_CMD_W_ACK_PAYLOAD 0xA8\000"
 9275      305F434D 
 9275      445F575F 
 9275      41434B5F 
 9275      5041594C 
 9276              	.LASF853:
 9277 1bb1 5F5A4E34 		.ascii	"_ZN4pins16input_output_pin19direction_set_inputEv\000"
 9277      70696E73 
 9277      3136696E 
 9277      7075745F 
 9277      6F757470 
 9278              	.LASF258:
 9279 1be3 5F5F4445 		.ascii	"__DEC128_SUBNORMAL_MIN__ 0.000000000000000000000000"
 9279      43313238 
 9279      5F535542 
 9279      4E4F524D 
 9279      414C5F4D 
 9280 1c16 30303030 		.ascii	"000000001E-6143DL\000"
 9280      30303030 
 9280      31452D36 
 9280      31343344 
 9280      4C00
 9281              	.LASF872:
 9282 1c28 62756666 		.ascii	"buffer_read\000"
 9282      65725F72 
 9282      65616400 
 9283              	.LASF536:
 9284 1c34 5F5F696E 		.ascii	"__int_fast64_t_defined 1\000"
 9284      745F6661 
 9284      73743634 
 9284      5F745F64 
 9284      6566696E 
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 194


 9285              	.LASF894:
 9286 1c4d 6169725F 		.ascii	"air_data_rate\000"
 9286      64617461 
 9286      5F726174 
 9286      6500
 9287              	.LASF881:
 9288 1c5b 5F5A4E35 		.ascii	"_ZN5rfm7013mode_transmitEv\000"
 9288      72666D37 
 9288      3031336D 
 9288      6F64655F 
 9288      7472616E 
 9289              	.LASF19:
 9290 1c76 5F5F5349 		.ascii	"__SIZEOF_SHORT__ 2\000"
 9290      5A454F46 
 9290      5F53484F 
 9290      52545F5F 
 9290      203200
 9291              	.LASF334:
 9292 1c89 5F5F554C 		.ascii	"__ULLACCUM_FBIT__ 32\000"
 9292      4C414343 
 9292      554D5F46 
 9292      4249545F 
 9292      5F203332 
 9293              	.LASF366:
 9294 1c9e 5F5F5441 		.ascii	"__TA_IBIT__ 64\000"
 9294      5F494249 
 9294      545F5F20 
 9294      363400
 9295              	.LASF451:
 9296 1cad 5F535953 		.ascii	"_SYS_FEATURES_H \000"
 9296      5F464541 
 9296      54555245 
 9296      535F4820 
 9296      00
 9297              	.LASF694:
 9298 1cbe 436F7265 		.ascii	"CoreDebug_DHCSR_C_MASKINTS_Pos 3\000"
 9298      44656275 
 9298      675F4448 
 9298      4353525F 
 9298      435F4D41 
 9299              	.LASF684:
 9300 1cdf 436F7265 		.ascii	"CoreDebug_DHCSR_S_RETIRE_ST_Pos 24\000"
 9300      44656275 
 9300      675F4448 
 9300      4353525F 
 9300      535F5245 
 9301              	.LASF886:
 9302 1d02 6D6F6465 		.ascii	"mode_powerdown\000"
 9302      5F706F77 
 9302      6572646F 
 9302      776E00
 9303              	.LASF22:
 9304 1d11 5F5F5349 		.ascii	"__SIZEOF_LONG_DOUBLE__ 8\000"
 9304      5A454F46 
 9304      5F4C4F4E 
 9304      475F444F 
 9304      55424C45 
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 195


 9305              	.LASF392:
 9306 1d2a 5F5F5052 		.ascii	"__PRAGMA_REDEFINE_EXTNAME 1\000"
 9306      41474D41 
 9306      5F524544 
 9306      4546494E 
 9306      455F4558 
 9307              	.LASF35:
 9308 1d46 5F5F5743 		.ascii	"__WCHAR_TYPE__ unsigned int\000"
 9308      4841525F 
 9308      54595045 
 9308      5F5F2075 
 9308      6E736967 
 9309              	.LASF619:
 9310 1d62 5343425F 		.ascii	"SCB_ICSR_PENDSTSET_Msk (1ul << SCB_ICSR_PENDSTSET_P"
 9310      49435352 
 9310      5F50454E 
 9310      44535453 
 9310      45545F4D 
 9311 1d95 6F732900 		.ascii	"os)\000"
 9312              	.LASF487:
 9313 1d99 63686172 		.ascii	"char\000"
 9313      00
 9314              	.LASF370:
 9315 1d9e 5F5F5553 		.ascii	"__USA_IBIT__ 16\000"
 9315      415F4942 
 9315      49545F5F 
 9315      20313600 
 9316              	.LASF919:
 9317 1dae 5F5A4E35 		.ascii	"_ZN5rfm7018receive_address_pnEhh\000"
 9317      72666D37 
 9317      30313872 
 9317      65636569 
 9317      76655F61 
 9318              	.LASF596:
 9319 1dcf 494E544D 		.ascii	"INTMAX_C(x) __INTMAX_C(x)\000"
 9319      41585F43 
 9319      28782920 
 9319      5F5F494E 
 9319      544D4158 
 9320              	.LASF957:
 9321 1de9 6C65645F 		.ascii	"led_rx\000"
 9321      727800
 9322              	.LASF262:
 9323 1df0 5F5F5346 		.ascii	"__SFRACT_MAX__ 0X7FP-7HR\000"
 9323      52414354 
 9323      5F4D4158 
 9323      5F5F2030 
 9323      58374650 
 9324              	.LASF65:
 9325 1e09 5F5F5549 		.ascii	"__UINT_FAST64_TYPE__ long long unsigned int\000"
 9325      4E545F46 
 9325      41535436 
 9325      345F5459 
 9325      50455F5F 
 9326              	.LASF247:
 9327 1e35 5F5F4445 		.ascii	"__DEC64_MAX_EXP__ 385\000"
 9327      4336345F 
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 196


 9327      4D41585F 
 9327      4558505F 
 9327      5F203338 
 9328              	.LASF964:
 9329 1e4b 70627566 		.ascii	"pbuf\000"
 9329      00
 9330              	.LASF161:
 9331 1e50 5F5F464C 		.ascii	"__FLT_MIN__ 1.1754943508222875e-38F\000"
 9331      545F4D49 
 9331      4E5F5F20 
 9331      312E3137 
 9331      35343934 
 9332              	.LASF654:
 9333 1e74 5343425F 		.ascii	"SCB_DFSR_VCATCH_Pos 3\000"
 9333      44465352 
 9333      5F564341 
 9333      5443485F 
 9333      506F7320 
 9334              	.LASF359:
 9335 1e8a 5F5F4841 		.ascii	"__HA_FBIT__ 7\000"
 9335      5F464249 
 9335      545F5F20 
 9335      3700
 9336              	.LASF850:
 9337 1e98 5F5A4E34 		.ascii	"_ZN4pins16input_output_pinC4Ev\000"
 9337      70696E73 
 9337      3136696E 
 9337      7075745F 
 9337      6F757470 
 9338              	.LASF647:
 9339 1eb7 5343425F 		.ascii	"SCB_CCR_STKALIGN_Msk (1ul << SCB_CCR_STKALIGN_Pos)\000"
 9339      4343525F 
 9339      53544B41 
 9339      4C49474E 
 9339      5F4D736B 
 9340              	.LASF646:
 9341 1eea 5343425F 		.ascii	"SCB_CCR_STKALIGN_Pos 9\000"
 9341      4343525F 
 9341      53544B41 
 9341      4C49474E 
 9341      5F506F73 
 9342              	.LASF581:
 9343 1f01 5349475F 		.ascii	"SIG_ATOMIC_MAX (__STDINT_EXP(INT_MAX))\000"
 9343      41544F4D 
 9343      49435F4D 
 9343      41582028 
 9343      5F5F5354 
 9344              	.LASF743:
 9345 1f28 4C50435F 		.ascii	"LPC_IOCON_BASE (LPC_APB0_BASE + 0x44000)\000"
 9345      494F434F 
 9345      4E5F4241 
 9345      53452028 
 9345      4C50435F 
 9346              	.LASF572:
 9347 1f51 55494E54 		.ascii	"UINT_FAST32_MAX (__UINT_FAST32_MAX__)\000"
 9347      5F464153 
 9347      5433325F 
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 197


 9347      4D415820 
 9347      285F5F55 
 9348              	.LASF239:
 9349 1f77 5F5F4445 		.ascii	"__DEC32_MIN_EXP__ (-94)\000"
 9349      4333325F 
 9349      4D494E5F 
 9349      4558505F 
 9349      5F20282D 
 9350              	.LASF265:
 9351 1f8f 5F5F5553 		.ascii	"__USFRACT_IBIT__ 0\000"
 9351      46524143 
 9351      545F4942 
 9351      49545F5F 
 9351      203000
 9352              	.LASF849:
 9353 1fa2 5F5A4E34 		.ascii	"_ZN4pins16input_output_pinC4ERKS0_\000"
 9353      70696E73 
 9353      3136696E 
 9353      7075745F 
 9353      6F757470 
 9354              	.LASF266:
 9355 1fc5 5F5F5553 		.ascii	"__USFRACT_MIN__ 0.0UHR\000"
 9355      46524143 
 9355      545F4D49 
 9355      4E5F5F20 
 9355      302E3055 
 9356              	.LASF887:
 9357 1fdc 5F5A4E35 		.ascii	"_ZN5rfm7014mode_powerdownEv\000"
 9357      72666D37 
 9357      3031346D 
 9357      6F64655F 
 9357      706F7765 
 9358              	.LASF914:
 9359 1ff8 72656365 		.ascii	"receive_address_p0\000"
 9359      6976655F 
 9359      61646472 
 9359      6573735F 
 9359      703000
 9360              	.LASF428:
 9361 200b 5F5F4152 		.ascii	"__ARM_NEON\000"
 9361      4D5F4E45 
 9361      4F4E00
 9362              	.LASF108:
 9363 2016 5F5F5549 		.ascii	"__UINT8_MAX__ 0xff\000"
 9363      4E54385F 
 9363      4D41585F 
 9363      5F203078 
 9363      666600
 9364              	.LASF475:
 9365 2029 5F5F5F69 		.ascii	"___int16_t_defined 1\000"
 9365      6E743136 
 9365      5F745F64 
 9365      6566696E 
 9365      65642031 
 9366              	.LASF972:
 9367 203e 74686973 		.ascii	"this\000"
 9367      00
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 198


 9368              	.LASF185:
 9369 2043 5F5F4C44 		.ascii	"__LDBL_MAX_EXP__ 1024\000"
 9369      424C5F4D 
 9369      41585F45 
 9369      58505F5F 
 9369      20313032 
 9370              	.LASF644:
 9371 2059 5343425F 		.ascii	"SCB_SCR_SLEEPONEXIT_Pos 1\000"
 9371      5343525F 
 9371      534C4545 
 9371      504F4E45 
 9371      5849545F 
 9372              	.LASF642:
 9373 2073 5343425F 		.ascii	"SCB_SCR_SLEEPDEEP_Pos 2\000"
 9373      5343525F 
 9373      534C4545 
 9373      50444545 
 9373      505F506F 
 9374              	.LASF515:
 9375 208b 5F5F696E 		.ascii	"__int8_t_defined 1\000"
 9375      74385F74 
 9375      5F646566 
 9375      696E6564 
 9375      203100
 9376              	.LASF178:
 9377 209e 5F5F4442 		.ascii	"__DBL_HAS_DENORM__ 1\000"
 9377      4C5F4841 
 9377      535F4445 
 9377      4E4F524D 
 9377      5F5F2031 
 9378              	.LASF628:
 9379 20b3 5343425F 		.ascii	"SCB_ICSR_VECTACTIVE_Pos 0\000"
 9379      49435352 
 9379      5F564543 
 9379      54414354 
 9379      4956455F 
 9380              	.LASF558:
 9381 20cd 494E5436 		.ascii	"INT64_MIN (-__INT64_MAX__ - 1)\000"
 9381      345F4D49 
 9381      4E20282D 
 9381      5F5F494E 
 9381      5436345F 
 9382              	.LASF629:
 9383 20ec 5343425F 		.ascii	"SCB_ICSR_VECTACTIVE_Msk (0x1FFul << SCB_ICSR_VECTAC"
 9383      49435352 
 9383      5F564543 
 9383      54414354 
 9383      4956455F 
 9384 211f 54495645 		.ascii	"TIVE_Pos)\000"
 9384      5F506F73 
 9384      2900
 9385              	.LASF576:
 9386 2129 494E544D 		.ascii	"INTMAX_MAX (__INTMAX_MAX__)\000"
 9386      41585F4D 
 9386      41582028 
 9386      5F5F494E 
 9386      544D4158 
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 199


 9387              	.LASF553:
 9388 2145 494E5433 		.ascii	"INT32_MAX (__INT32_MAX__)\000"
 9388      325F4D41 
 9388      5820285F 
 9388      5F494E54 
 9388      33325F4D 
 9389              	.LASF75:
 9390 215f 5F5F4758 		.ascii	"__GXX_ABI_VERSION 1011\000"
 9390      585F4142 
 9390      495F5645 
 9390      5253494F 
 9390      4E203130 
 9391              	.LASF363:
 9392 2176 5F5F4441 		.ascii	"__DA_FBIT__ 31\000"
 9392      5F464249 
 9392      545F5F20 
 9392      333100
 9393              	.LASF728:
 9394 2185 4E564943 		.ascii	"NVIC_VectTab_FLASH (0x00000000)\000"
 9394      5F566563 
 9394      74546162 
 9394      5F464C41 
 9394      53482028 
 9395              	.LASF325:
 9396 21a5 5F5F554C 		.ascii	"__ULACCUM_IBIT__ 32\000"
 9396      41434355 
 9396      4D5F4942 
 9396      49545F5F 
 9396      20333200 
 9397              	.LASF163:
 9398 21b9 5F5F464C 		.ascii	"__FLT_DENORM_MIN__ 1.4012984643248171e-45F\000"
 9398      545F4445 
 9398      4E4F524D 
 9398      5F4D494E 
 9398      5F5F2031 
 9399              	.LASF934:
 9400 21e4 72656365 		.ascii	"receive_next_length\000"
 9400      6976655F 
 9400      6E657874 
 9400      5F6C656E 
 9400      67746800 
 9401              	.LASF770:
 9402 21f8 5F50494E 		.ascii	"_PINS_H_ \000"
 9402      535F485F 
 9402      2000
 9403              	.LASF740:
 9404 2202 4C50435F 		.ascii	"LPC_ADC_BASE (LPC_APB0_BASE + 0x1C000)\000"
 9404      4144435F 
 9404      42415345 
 9404      20284C50 
 9404      435F4150 
 9405              	.LASF69:
 9406 2229 5F5F6861 		.ascii	"__has_include_next(STR) __has_include_next__(STR)\000"
 9406      735F696E 
 9406      636C7564 
 9406      655F6E65 
 9406      78742853 
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 200


 9407              	.LASF129:
 9408 225b 5F5F5549 		.ascii	"__UINT32_C(c) c ## UL\000"
 9408      4E543332 
 9408      5F432863 
 9408      29206320 
 9408      23232055 
 9409              	.LASF856:
 9410 2271 6D6F7369 		.ascii	"mosi\000"
 9410      00
 9411              	.LASF645:
 9412 2276 5343425F 		.ascii	"SCB_SCR_SLEEPONEXIT_Msk (1ul << SCB_SCR_SLEEPONEXIT"
 9412      5343525F 
 9412      534C4545 
 9412      504F4E45 
 9412      5849545F 
 9413 22a9 5F506F73 		.ascii	"_Pos)\000"
 9413      2900
 9414              	.LASF316:
 9415 22af 5F5F5541 		.ascii	"__UACCUM_MIN__ 0.0UK\000"
 9415      4343554D 
 9415      5F4D494E 
 9415      5F5F2030 
 9415      2E30554B 
 9416              	.LASF589:
 9417 22c4 55494E54 		.ascii	"UINT8_C(x) __UINT8_C(x)\000"
 9417      385F4328 
 9417      7829205F 
 9417      5F55494E 
 9417      54385F43 
 9418              	.LASF162:
 9419 22dc 5F5F464C 		.ascii	"__FLT_EPSILON__ 1.1920928955078125e-7F\000"
 9419      545F4550 
 9419      53494C4F 
 9419      4E5F5F20 
 9419      312E3139 
 9420              	.LASF918:
 9421 2303 72656365 		.ascii	"receive_address_pn\000"
 9421      6976655F 
 9421      61646472 
 9421      6573735F 
 9421      706E00
 9422              	.LASF682:
 9423 2316 436F7265 		.ascii	"CoreDebug_DHCSR_S_RESET_ST_Pos 25\000"
 9423      44656275 
 9423      675F4448 
 9423      4353525F 
 9423      535F5245 
 9424              	.LASF675:
 9425 2338 53797354 		.ascii	"SysTick_CALIB_NOREF_Msk (1ul << SysTick_CALIB_NOREF"
 9425      69636B5F 
 9425      43414C49 
 9425      425F4E4F 
 9425      5245465F 
 9426 236b 5F506F73 		.ascii	"_Pos)\000"
 9426      2900
 9427              	.LASF34:
 9428 2371 5F5F5054 		.ascii	"__PTRDIFF_TYPE__ int\000"
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 201


 9428      52444946 
 9428      465F5459 
 9428      50455F5F 
 9428      20696E74 
 9429              	.LASF662:
 9430 2386 53797354 		.ascii	"SysTick_CTRL_COUNTFLAG_Pos 16\000"
 9430      69636B5F 
 9430      4354524C 
 9430      5F434F55 
 9430      4E54464C 
 9431              	.LASF530:
 9432 23a4 5F5F696E 		.ascii	"__int_least16_t_defined 1\000"
 9432      745F6C65 
 9432      61737431 
 9432      365F745F 
 9432      64656669 
 9433              	.LASF678:
 9434 23be 53797354 		.ascii	"SysTick_CALIB_TENMS_Pos 0\000"
 9434      69636B5F 
 9434      43414C49 
 9434      425F5445 
 9434      4E4D535F 
 9435              	.LASF556:
 9436 23d8 494E545F 		.ascii	"INT_LEAST32_MAX (__INT_LEAST32_MAX__)\000"
 9436      4C454153 
 9436      5433325F 
 9436      4D415820 
 9436      285F5F49 
 9437              	.LASF385:
 9438 23fe 5F5F4743 		.ascii	"__GCC_ATOMIC_SHORT_LOCK_FREE 1\000"
 9438      435F4154 
 9438      4F4D4943 
 9438      5F53484F 
 9438      52545F4C 
 9439              	.LASF674:
 9440 241d 53797354 		.ascii	"SysTick_CALIB_NOREF_Pos 31\000"
 9440      69636B5F 
 9440      43414C49 
 9440      425F4E4F 
 9440      5245465F 
 9441              	.LASF828:
 9442 2438 696E7075 		.ascii	"input\000"
 9442      7400
 9443              	.LASF981:
 9444 243e 474E5520 		.ascii	"GNU C++98 7.2.0 -mcpu=cortex-m0 -mthumb -mfloat-abi"
 9444      432B2B39 
 9444      3820372E 
 9444      322E3020 
 9444      2D6D6370 
 9445 2471 3D736F66 		.ascii	"=soft -g -ggdb3 -Os -std=gnu++98 -ffunction-section"
 9445      74202D67 
 9445      202D6767 
 9445      64623320 
 9445      2D4F7320 
 9446 24a4 73202D66 		.ascii	"s -fdata-sections -fno-rtti -fno-exceptions\000"
 9446      64617461 
 9446      2D736563 
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 202


 9446      74696F6E 
 9446      73202D66 
 9447              	.LASF389:
 9448 24d0 5F5F4743 		.ascii	"__GCC_ATOMIC_TEST_AND_SET_TRUEVAL 1\000"
 9448      435F4154 
 9448      4F4D4943 
 9448      5F544553 
 9448      545F414E 
 9449              	.LASF467:
 9450 24f4 5F5F4D49 		.ascii	"__MISC_VISIBLE 1\000"
 9450      53435F56 
 9450      49534942 
 9450      4C452031 
 9450      00
 9451              	.LASF204:
 9452 2505 5F5F464C 		.ascii	"__FLT32_MIN__ 1.1754943508222875e-38F32\000"
 9452      5433325F 
 9452      4D494E5F 
 9452      5F20312E 
 9452      31373534 
 9453              	.LASF209:
 9454 252d 5F5F464C 		.ascii	"__FLT32_HAS_QUIET_NAN__ 1\000"
 9454      5433325F 
 9454      4841535F 
 9454      51554945 
 9454      545F4E41 
 9455              	.LASF194:
 9456 2547 5F5F4C44 		.ascii	"__LDBL_HAS_INFINITY__ 1\000"
 9456      424C5F48 
 9456      41535F49 
 9456      4E46494E 
 9456      4954595F 
 9457              	.LASF575:
 9458 255f 55494E54 		.ascii	"UINT_FAST64_MAX (__UINT_FAST64_MAX__)\000"
 9458      5F464153 
 9458      5436345F 
 9458      4D415820 
 9458      285F5F55 
 9459              	.LASF365:
 9460 2585 5F5F5441 		.ascii	"__TA_FBIT__ 63\000"
 9460      5F464249 
 9460      545F5F20 
 9460      363300
 9461              	.LASF863:
 9462 2594 5F5A4E35 		.ascii	"_ZN5rfm704bankEh\000"
 9462      72666D37 
 9462      30346261 
 9462      6E6B4568 
 9462      00
 9463              	.LASF698:
 9464 25a5 436F7265 		.ascii	"CoreDebug_DHCSR_C_HALT_Pos 1\000"
 9464      44656275 
 9464      675F4448 
 9464      4353525F 
 9464      435F4841 
 9465              	.LASF537:
 9466 25c2 494E5450 		.ascii	"INTPTR_MIN (-__INTPTR_MAX__ - 1)\000"
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 203


 9466      54525F4D 
 9466      494E2028 
 9466      2D5F5F49 
 9466      4E545054 
 9467              	.LASF777:
 9468 25e3 52464D37 		.ascii	"RFM70_CMD_FLUSH_RX 0xE2\000"
 9468      305F434D 
 9468      445F464C 
 9468      5553485F 
 9468      52582030 
 9469              	.LASF664:
 9470 25fb 53797354 		.ascii	"SysTick_CTRL_CLKSOURCE_Pos 2\000"
 9470      69636B5F 
 9470      4354524C 
 9470      5F434C4B 
 9470      534F5552 
 9471              	.LASF884:
 9472 2618 6D6F6465 		.ascii	"mode_standby\000"
 9472      5F737461 
 9472      6E646279 
 9472      00
 9473              	.LASF921:
 9474 2625 5F5A4E35 		.ascii	"_ZN5rfm7020channel_payload_sizeEhh\000"
 9474      72666D37 
 9474      30323063 
 9474      68616E6E 
 9474      656C5F70 
 9475              	.LASF897:
 9476 2648 5F5A4E35 		.ascii	"_ZN5rfm7010crc_lengthEh\000"
 9476      72666D37 
 9476      30313063 
 9476      72635F6C 
 9476      656E6774 
 9477              	.LASF102:
 9478 2660 5F5F5349 		.ascii	"__SIG_ATOMIC_MIN__ (-__SIG_ATOMIC_MAX__ - 1)\000"
 9478      475F4154 
 9478      4F4D4943 
 9478      5F4D494E 
 9478      5F5F2028 
 9479              	.LASF124:
 9480 268d 5F5F5549 		.ascii	"__UINT_LEAST8_MAX__ 0xff\000"
 9480      4E545F4C 
 9480      45415354 
 9480      385F4D41 
 9480      585F5F20 
 9481              	.LASF614:
 9482 26a6 5343425F 		.ascii	"SCB_ICSR_PENDSVSET_Pos 28\000"
 9482      49435352 
 9482      5F50454E 
 9482      44535653 
 9482      45545F50 
 9483              	.LASF970:
 9484 26c0 5F5A3134 		.ascii	"_Z14Receive_PacketR5rfm70RN4pins10output_pinE\000"
 9484      52656365 
 9484      6976655F 
 9484      5061636B 
 9484      65745235 
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 204


 9485              	.LASF636:
 9486 26ee 5343425F 		.ascii	"SCB_AIRCR_SYSRESETREQ_Pos 2\000"
 9486      41495243 
 9486      525F5359 
 9486      53524553 
 9486      45545245 
 9487              	.LASF600:
 9488 270a 5F5F4F20 		.ascii	"__O volatile\000"
 9488      766F6C61 
 9488      74696C65 
 9488      00
 9489              	.LASF609:
 9490 2717 5343425F 		.ascii	"SCB_CPUID_PARTNO_Msk (0xFFFul << SCB_CPUID_PARTNO_P"
 9490      43505549 
 9490      445F5041 
 9490      52544E4F 
 9490      5F4D736B 
 9491 274a 6F732900 		.ascii	"os)\000"
 9492              	.LASF580:
 9493 274e 5349475F 		.ascii	"SIG_ATOMIC_MIN (-__STDINT_EXP(INT_MAX) - 1)\000"
 9493      41544F4D 
 9493      49435F4D 
 9493      494E2028 
 9493      2D5F5F53 
 9494              	.LASF730:
 9495 277a 4C50435F 		.ascii	"LPC_RAM_BASE (0x10000000UL)\000"
 9495      52414D5F 
 9495      42415345 
 9495      20283078 
 9495      31303030 
 9496              	.LASF516:
 9497 2796 5F494E54 		.ascii	"_INT16_T_DECLARED \000"
 9497      31365F54 
 9497      5F444543 
 9497      4C415245 
 9497      442000
 9498              	.LASF582:
 9499 27a9 50545244 		.ascii	"PTRDIFF_MAX (__PTRDIFF_MAX__)\000"
 9499      4946465F 
 9499      4D415820 
 9499      285F5F50 
 9499      54524449 
 9500              	.LASF924:
 9501 27c7 7472616E 		.ascii	"transmit_fifo_full\000"
 9501      736D6974 
 9501      5F666966 
 9501      6F5F6675 
 9501      6C6C00
 9502              	.LASF825:
 9503 27da 436C6F63 		.ascii	"ClockSource\000"
 9503      6B536F75 
 9503      72636500 
 9504              	.LASF117:
 9505 27e6 5F5F494E 		.ascii	"__INT_LEAST16_WIDTH__ 16\000"
 9505      545F4C45 
 9505      41535431 
 9505      365F5749 
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 205


 9505      4454485F 
 9506              	.LASF532:
 9507 27ff 5F5F696E 		.ascii	"__int_least64_t_defined 1\000"
 9507      745F6C65 
 9507      61737436 
 9507      345F745F 
 9507      64656669 
 9508              	.LASF1:
 9509 2819 5F5F6370 		.ascii	"__cplusplus 199711L\000"
 9509      6C757370 
 9509      6C757320 
 9509      31393937 
 9509      31314C00 
 9510              	.LASF251:
 9511 282d 5F5F4445 		.ascii	"__DEC64_SUBNORMAL_MIN__ 0.000000000000001E-383DD\000"
 9511      4336345F 
 9511      5355424E 
 9511      4F524D41 
 9511      4C5F4D49 
 9512              	.LASF268:
 9513 285e 5F5F5553 		.ascii	"__USFRACT_EPSILON__ 0x1P-8UHR\000"
 9513      46524143 
 9513      545F4550 
 9513      53494C4F 
 9513      4E5F5F20 
 9514              	.LASF13:
 9515 287c 5F5F4F50 		.ascii	"__OPTIMIZE_SIZE__ 1\000"
 9515      54494D49 
 9515      5A455F53 
 9515      495A455F 
 9515      5F203100 
 9516              	.LASF480:
 9517 2890 5F5F5F69 		.ascii	"___int_least32_t_defined 1\000"
 9517      6E745F6C 
 9517      65617374 
 9517      33325F74 
 9517      5F646566 
 9518              	.LASF332:
 9519 28ab 5F5F4C4C 		.ascii	"__LLACCUM_MAX__ 0X7FFFFFFFFFFFFFFFP-31LLK\000"
 9519      41434355 
 9519      4D5F4D41 
 9519      585F5F20 
 9519      30583746 
 9520              	.LASF797:
 9521 28d5 52464D37 		.ascii	"RFM70_REG_RX_ADDR_P3 0x0D\000"
 9521      305F5245 
 9521      475F5258 
 9521      5F414444 
 9521      525F5033 
 9522              	.LASF931:
 9523 28ef 5F5A4E35 		.ascii	"_ZN5rfm7021transmit_message_onceEPKhh\000"
 9523      72666D37 
 9523      30323174 
 9523      72616E73 
 9523      6D69745F 
 9524              	.LASF376:
 9525 2915 5F5F5553 		.ascii	"__USER_LABEL_PREFIX__ \000"
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 206


 9525      45525F4C 
 9525      4142454C 
 9525      5F505245 
 9525      4649585F 
 9526              	.LASF111:
 9527 292c 5F5F5549 		.ascii	"__UINT64_MAX__ 0xffffffffffffffffULL\000"
 9527      4E543634 
 9527      5F4D4158 
 9527      5F5F2030 
 9527      78666666 
 9528              	.LASF907:
 9529 2951 5F5A4E35 		.ascii	"_ZN5rfm7018lost_packets_countEv\000"
 9529      72666D37 
 9529      3031386C 
 9529      6F73745F 
 9529      7061636B 
 9530              	.LASF773:
 9531 2971 52464D37 		.ascii	"RFM70_MAX_PACKET_LEN 32\000"
 9531      305F4D41 
 9531      585F5041 
 9531      434B4554 
 9531      5F4C454E 
 9532              	.LASF923:
 9533 2989 5F5A4E35 		.ascii	"_ZN5rfm7016transmit_addressEPKh\000"
 9533      72666D37 
 9533      30313674 
 9533      72616E73 
 9533      6D69745F 
 9534              	.LASF110:
 9535 29a9 5F5F5549 		.ascii	"__UINT32_MAX__ 0xffffffffUL\000"
 9535      4E543332 
 9535      5F4D4158 
 9535      5F5F2030 
 9535      78666666 
 9536              	.LASF594:
 9537 29c5 494E5436 		.ascii	"INT64_C(x) __INT64_C(x)\000"
 9537      345F4328 
 9537      7829205F 
 9537      5F494E54 
 9537      36345F43 
 9538              	.LASF460:
 9539 29dd 5F415446 		.ascii	"_ATFILE_SOURCE\000"
 9539      494C455F 
 9539      534F5552 
 9539      434500
 9540              	.LASF567:
 9541 29ec 494E545F 		.ascii	"INT_FAST16_MIN (-__INT_FAST16_MAX__ - 1)\000"
 9541      46415354 
 9541      31365F4D 
 9541      494E2028 
 9541      2D5F5F49 
 9542              	.LASF112:
 9543 2a15 5F5F494E 		.ascii	"__INT_LEAST8_MAX__ 0x7f\000"
 9543      545F4C45 
 9543      41535438 
 9543      5F4D4158 
 9543      5F5F2030 
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 207


 9544              	.LASF435:
 9545 2a2d 5F5F4152 		.ascii	"__ARM_FEATURE_IDIV\000"
 9545      4D5F4645 
 9545      41545552 
 9545      455F4944 
 9545      495600
 9546              	.LASF552:
 9547 2a40 494E5433 		.ascii	"INT32_MIN (-__INT32_MAX__ - 1)\000"
 9547      325F4D49 
 9547      4E20282D 
 9547      5F5F494E 
 9547      5433325F 
 9548              	.LASF640:
 9549 2a5f 5343425F 		.ascii	"SCB_SCR_SEVONPEND_Pos 4\000"
 9549      5343525F 
 9549      5345564F 
 9549      4E50454E 
 9549      445F506F 
 9550              	.LASF159:
 9551 2a77 5F5F464C 		.ascii	"__FLT_DECIMAL_DIG__ 9\000"
 9551      545F4445 
 9551      43494D41 
 9551      4C5F4449 
 9551      475F5F20 
 9552              	.LASF904:
 9553 2a8d 72657472 		.ascii	"retransmit_count\000"
 9553      616E736D 
 9553      69745F63 
 9553      6F756E74 
 9553      00
 9554              	.LASF613:
 9555 2a9e 5343425F 		.ascii	"SCB_ICSR_NMIPENDSET_Msk (1ul << SCB_ICSR_NMIPENDSET"
 9555      49435352 
 9555      5F4E4D49 
 9555      50454E44 
 9555      5345545F 
 9556 2ad1 5F506F73 		.ascii	"_Pos)\000"
 9556      2900
 9557              	.LASF498:
 9558 2ad7 5F494E54 		.ascii	"_INTPTR_EQ_INT \000"
 9558      5054525F 
 9558      45515F49 
 9558      4E542000 
 9559              	.LASF408:
 9560 2ae7 5F5F4152 		.ascii	"__ARM_SIZEOF_WCHAR_T 4\000"
 9560      4D5F5349 
 9560      5A454F46 
 9560      5F574348 
 9560      41525F54 
 9561              	.LASF228:
 9562 2afe 5F5F464C 		.ascii	"__FLT32X_MAX_EXP__ 1024\000"
 9562      54333258 
 9562      5F4D4158 
 9562      5F455850 
 9562      5F5F2031 
 9563              	.LASF68:
 9564 2b16 5F5F6861 		.ascii	"__has_include(STR) __has_include__(STR)\000"
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 208


 9564      735F696E 
 9564      636C7564 
 9564      65285354 
 9564      5229205F 
 9565              	.LASF956:
 9566 2b3e 6C65645F 		.ascii	"led_tx\000"
 9566      747800
 9567              	.LASF767:
 9568 2b45 4C50435F 		.ascii	"LPC_GPIO1 ((LPC_GPIO_TypeDef *) LPC_GPIO1_BASE )\000"
 9568      4750494F 
 9568      31202828 
 9568      4C50435F 
 9568      4750494F 
 9569              	.LASF128:
 9570 2b76 5F5F5549 		.ascii	"__UINT_LEAST32_MAX__ 0xffffffffUL\000"
 9570      4E545F4C 
 9570      45415354 
 9570      33325F4D 
 9570      41585F5F 
 9571              	.LASF174:
 9572 2b98 5F5F4442 		.ascii	"__DBL_MAX__ double(1.7976931348623157e+308L)\000"
 9572      4C5F4D41 
 9572      585F5F20 
 9572      646F7562 
 9572      6C652831 
 9573              	.LASF123:
 9574 2bc5 5F5F494E 		.ascii	"__INT_LEAST64_WIDTH__ 64\000"
 9574      545F4C45 
 9574      41535436 
 9574      345F5749 
 9574      4454485F 
 9575              	.LASF165:
 9576 2bde 5F5F464C 		.ascii	"__FLT_HAS_INFINITY__ 1\000"
 9576      545F4841 
 9576      535F494E 
 9576      46494E49 
 9576      54595F5F 
 9577              	.LASF651:
 9578 2bf5 5343425F 		.ascii	"SCB_SHCSR_SVCALLPENDED_Msk (1ul << SCB_SHCSR_SVCALL"
 9578      53484353 
 9578      525F5356 
 9578      43414C4C 
 9578      50454E44 
 9579 2c28 50454E44 		.ascii	"PENDED_Pos)\000"
 9579      45445F50 
 9579      6F732900 
 9580              	.LASF312:
 9581 2c34 5F5F4143 		.ascii	"__ACCUM_MAX__ 0X7FFFFFFFP-15K\000"
 9581      43554D5F 
 9581      4D41585F 
 9581      5F203058 
 9581      37464646 
 9582              	.LASF104:
 9583 2c52 5F5F494E 		.ascii	"__INT8_MAX__ 0x7f\000"
 9583      54385F4D 
 9583      41585F5F 
 9583      20307837 
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 209


 9583      6600
 9584              	.LASF391:
 9585 2c64 5F5F4743 		.ascii	"__GCC_HAVE_DWARF2_CFI_ASM 1\000"
 9585      435F4841 
 9585      56455F44 
 9585      57415246 
 9585      325F4346 
 9586              	.LASF474:
 9587 2c80 5F5F5F69 		.ascii	"___int8_t_defined 1\000"
 9587      6E74385F 
 9587      745F6465 
 9587      66696E65 
 9587      64203100 
 9588              	.LASF261:
 9589 2c94 5F5F5346 		.ascii	"__SFRACT_MIN__ (-0.5HR-0.5HR)\000"
 9589      52414354 
 9589      5F4D494E 
 9589      5F5F2028 
 9589      2D302E35 
 9590              	.LASF815:
 9591 2cb2 6C6F6E67 		.ascii	"long unsigned int\000"
 9591      20756E73 
 9591      69676E65 
 9591      6420696E 
 9591      7400
 9592              	.LASF362:
 9593 2cc4 5F5F5341 		.ascii	"__SA_IBIT__ 16\000"
 9593      5F494249 
 9593      545F5F20 
 9593      313600
 9594              	.LASF400:
 9595 2cd3 5F5F4152 		.ascii	"__ARM_FEATURE_UNALIGNED\000"
 9595      4D5F4645 
 9595      41545552 
 9595      455F554E 
 9595      414C4947 
 9596              	.LASF485:
 9597 2ceb 7369676E 		.ascii	"signed\000"
 9597      656400
 9598              	.LASF148:
 9599 2cf2 5F5F4743 		.ascii	"__GCC_IEC_559_COMPLEX 0\000"
 9599      435F4945 
 9599      435F3535 
 9599      395F434F 
 9599      4D504C45 
 9600              	.LASF229:
 9601 2d0a 5F5F464C 		.ascii	"__FLT32X_MAX_10_EXP__ 308\000"
 9601      54333258 
 9601      5F4D4158 
 9601      5F31305F 
 9601      4558505F 
 9602              	.LASF3:
 9603 2d24 5F5F474E 		.ascii	"__GNUC__ 7\000"
 9603      55435F5F 
 9603      203700
 9604              	.LASF421:
 9605 2d2f 5F5F4152 		.ascii	"__ARM_FP16_FORMAT_IEEE\000"
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 210


 9605      4D5F4650 
 9605      31365F46 
 9605      4F524D41 
 9605      545F4945 
 9606              	.LASF47:
 9607 2d46 5F5F5549 		.ascii	"__UINT16_TYPE__ short unsigned int\000"
 9607      4E543136 
 9607      5F545950 
 9607      455F5F20 
 9607      73686F72 
 9608              	.LASF456:
 9609 2d69 5F504F53 		.ascii	"_POSIX_SOURCE\000"
 9609      49585F53 
 9609      4F555243 
 9609      4500
 9610              	.LASF888:
 9611 2d77 6C6E615F 		.ascii	"lna_low\000"
 9611      6C6F7700 
 9612              	.LASF798:
 9613 2d7f 52464D37 		.ascii	"RFM70_REG_RX_ADDR_P4 0x0E\000"
 9613      305F5245 
 9613      475F5258 
 9613      5F414444 
 9613      525F5034 
 9614              	.LASF418:
 9615 2d99 5F5F534F 		.ascii	"__SOFTFP__ 1\000"
 9615      46544650 
 9615      5F5F2031 
 9615      00
 9616              	.LASF240:
 9617 2da6 5F5F4445 		.ascii	"__DEC32_MAX_EXP__ 97\000"
 9617      4333325F 
 9617      4D41585F 
 9617      4558505F 
 9617      5F203937 
 9618              	.LASF150:
 9619 2dbb 5F5F464C 		.ascii	"__FLT_EVAL_METHOD_TS_18661_3__ 0\000"
 9619      545F4556 
 9619      414C5F4D 
 9619      4554484F 
 9619      445F5453 
 9620              	.LASF991:
 9621 2ddc 74617267 		.ascii	"target\000"
 9621      657400
 9622              	.LASF617:
 9623 2de3 5343425F 		.ascii	"SCB_ICSR_PENDSVCLR_Msk (1ul << SCB_ICSR_PENDSVCLR_P"
 9623      49435352 
 9623      5F50454E 
 9623      44535643 
 9623      4C525F4D 
 9624 2e16 6F732900 		.ascii	"os)\000"
 9625              	.LASF496:
 9626 2e1a 696E7420 		.ascii	"int +2\000"
 9626      2B3200
 9627              	.LASF969:
 9628 2e21 52656365 		.ascii	"Receive_Packet\000"
 9628      6976655F 
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 211


 9628      5061636B 
 9628      657400
 9629              	.LASF588:
 9630 2e30 494E5438 		.ascii	"INT8_C(x) __INT8_C(x)\000"
 9630      5F432878 
 9630      29205F5F 
 9630      494E5438 
 9630      5F432878 
 9631              	.LASF892:
 9632 2e46 6368616E 		.ascii	"channel\000"
 9632      6E656C00 
 9633              	.LASF62:
 9634 2e4e 5F5F5549 		.ascii	"__UINT_FAST8_TYPE__ unsigned int\000"
 9634      4E545F46 
 9634      41535438 
 9634      5F545950 
 9634      455F5F20 
 9635              	.LASF330:
 9636 2e6f 5F5F4C4C 		.ascii	"__LLACCUM_IBIT__ 32\000"
 9636      41434355 
 9636      4D5F4942 
 9636      49545F5F 
 9636      20333200 
 9637              	.LASF845:
 9638 2e83 5F5A4E34 		.ascii	"_ZN4pins9input_pin19direction_set_inputEv\000"
 9638      70696E73 
 9638      39696E70 
 9638      75745F70 
 9638      696E3139 
 9639              	.LASF885:
 9640 2ead 5F5A4E35 		.ascii	"_ZN5rfm7012mode_standbyEv\000"
 9640      72666D37 
 9640      3031326D 
 9640      6F64655F 
 9640      7374616E 
 9641              	.LASF55:
 9642 2ec7 5F5F5549 		.ascii	"__UINT_LEAST16_TYPE__ short unsigned int\000"
 9642      4E545F4C 
 9642      45415354 
 9642      31365F54 
 9642      5950455F 
 9643              	.LASF106:
 9644 2ef0 5F5F494E 		.ascii	"__INT32_MAX__ 0x7fffffffL\000"
 9644      5433325F 
 9644      4D41585F 
 9644      5F203078 
 9644      37666666 
 9645              	.LASF508:
 9646 2f0a 5F5F4C45 		.ascii	"__LEAST8 \"hh\"\000"
 9646      41535438 
 9646      20226868 
 9646      2200
 9647              	.LASF432:
 9648 2f18 5F5F4152 		.ascii	"__ARM_PCS 1\000"
 9648      4D5F5043 
 9648      53203100 
 9649              	.LASF441:
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 212


 9650 2f24 5F5F4D50 		.ascii	"__MPU_PRESENT 0\000"
 9650      555F5052 
 9650      4553454E 
 9650      54203000 
 9651              	.LASF121:
 9652 2f34 5F5F494E 		.ascii	"__INT_LEAST64_MAX__ 0x7fffffffffffffffLL\000"
 9652      545F4C45 
 9652      41535436 
 9652      345F4D41 
 9652      585F5F20 
 9653              	.LASF446:
 9654 2f5d 5F5F434D 		.ascii	"__CM0_CMSIS_VERSION_SUB (0x30)\000"
 9654      305F434D 
 9654      5349535F 
 9654      56455253 
 9654      494F4E5F 
 9655              	.LASF455:
 9656 2f7c 5F444546 		.ascii	"_DEFAULT_SOURCE 1\000"
 9656      41554C54 
 9656      5F534F55 
 9656      52434520 
 9656      3100
 9657              	.LASF196:
 9658 2f8e 5F5F464C 		.ascii	"__FLT32_MANT_DIG__ 24\000"
 9658      5433325F 
 9658      4D414E54 
 9658      5F444947 
 9658      5F5F2032 
 9659              	.LASF806:
 9660 2fa4 52464D37 		.ascii	"RFM70_REG_RX_PW_P5 0x16\000"
 9660      305F5245 
 9660      475F5258 
 9660      5F50575F 
 9660      50352030 
 9661              	.LASF206:
 9662 2fbc 5F5F464C 		.ascii	"__FLT32_DENORM_MIN__ 1.4012984643248171e-45F32\000"
 9662      5433325F 
 9662      44454E4F 
 9662      524D5F4D 
 9662      494E5F5F 
 9663              	.LASF900:
 9664 2feb 706F7765 		.ascii	"power\000"
 9664      7200
 9665              	.LASF57:
 9666 2ff1 5F5F5549 		.ascii	"__UINT_LEAST64_TYPE__ long long unsigned int\000"
 9666      4E545F4C 
 9666      45415354 
 9666      36345F54 
 9666      5950455F 
 9667              	.LASF264:
 9668 301e 5F5F5553 		.ascii	"__USFRACT_FBIT__ 8\000"
 9668      46524143 
 9668      545F4642 
 9668      49545F5F 
 9668      203800
 9669              	.LASF191:
 9670 3031 5F5F4C44 		.ascii	"__LDBL_EPSILON__ 2.2204460492503131e-16L\000"
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 213


 9670      424C5F45 
 9670      5053494C 
 9670      4F4E5F5F 
 9670      20322E32 
 9671              	.LASF911:
 9672 305a 5F5A4E35 		.ascii	"_ZN5rfm7012pipe_autoackEhb\000"
 9672      72666D37 
 9672      30313270 
 9672      6970655F 
 9672      6175746F 
 9673              	.LASF382:
 9674 3075 5F5F4743 		.ascii	"__GCC_ATOMIC_CHAR16_T_LOCK_FREE 1\000"
 9674      435F4154 
 9674      4F4D4943 
 9674      5F434841 
 9674      5231365F 
 9675              	.LASF635:
 9676 3097 5343425F 		.ascii	"SCB_AIRCR_ENDIANESS_Msk (1ul << SCB_AIRCR_ENDIANESS"
 9676      41495243 
 9676      525F454E 
 9676      4449414E 
 9676      4553535F 
 9677 30ca 5F506F73 		.ascii	"_Pos)\000"
 9677      2900
 9678              	.LASF952:
 9679 30d0 72656365 		.ascii	"receive_led\000"
 9679      6976655F 
 9679      6C656400 
 9680              	.LASF171:
 9681 30dc 5F5F4442 		.ascii	"__DBL_MAX_EXP__ 1024\000"
 9681      4C5F4D41 
 9681      585F4558 
 9681      505F5F20 
 9681      31303234 
 9682              	.LASF507:
 9683 30f1 5F5F4641 		.ascii	"__FAST64 \"ll\"\000"
 9683      53543634 
 9683      20226C6C 
 9683      2200
 9684              	.LASF10:
 9685 30ff 5F5F4154 		.ascii	"__ATOMIC_RELEASE 3\000"
 9685      4F4D4943 
 9685      5F52454C 
 9685      45415345 
 9685      203300
 9686              	.LASF492:
 9687 3112 756E7369 		.ascii	"unsigned +0\000"
 9687      676E6564 
 9687      202B3000 
 9688              	.LASF720:
 9689 311e 436F7265 		.ascii	"CoreDebug ((CoreDebug_Type *) CoreDebug_BASE)\000"
 9689      44656275 
 9689      67202828 
 9689      436F7265 
 9689      44656275 
 9690              	.LASF235:
 9691 314c 5F5F464C 		.ascii	"__FLT32X_HAS_DENORM__ 1\000"
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 214


 9691      54333258 
 9691      5F484153 
 9691      5F44454E 
 9691      4F524D5F 
 9692              	.LASF153:
 9693 3164 5F5F464C 		.ascii	"__FLT_MANT_DIG__ 24\000"
 9693      545F4D41 
 9693      4E545F44 
 9693      49475F5F 
 9693      20323400 
 9694              	.LASF319:
 9695 3178 5F5F4C41 		.ascii	"__LACCUM_FBIT__ 31\000"
 9695      4343554D 
 9695      5F464249 
 9695      545F5F20 
 9695      333100
 9696              	.LASF578:
 9697 318b 55494E54 		.ascii	"UINTMAX_MAX (__UINTMAX_MAX__)\000"
 9697      4D41585F 
 9697      4D415820 
 9697      285F5F55 
 9697      494E544D 
 9698              	.LASF840:
 9699 31a9 5F5A4E34 		.ascii	"_ZN4pins9input_pinC4ERKS0_\000"
 9699      70696E73 
 9699      39696E70 
 9699      75745F70 
 9699      696E4334 
 9700              	.LASF14:
 9701 31c4 5F5F4F50 		.ascii	"__OPTIMIZE__ 1\000"
 9701      54494D49 
 9701      5A455F5F 
 9701      203100
 9702              	.LASF317:
 9703 31d3 5F5F5541 		.ascii	"__UACCUM_MAX__ 0XFFFFFFFFP-16UK\000"
 9703      4343554D 
 9703      5F4D4158 
 9703      5F5F2030 
 9703      58464646 
 9704              	.LASF756:
 9705 31f3 4C50435F 		.ascii	"LPC_TMR16B1 ((LPC_TMR_TypeDef *) LPC_CT16B1_BASE)\000"
 9705      544D5231 
 9705      36423120 
 9705      28284C50 
 9705      435F544D 
 9706              	.LASF985:
 9707 3225 70696E73 		.ascii	"pins\000"
 9707      00
 9708              	.LASF506:
 9709 322a 5F5F4641 		.ascii	"__FAST32 \000"
 9709      53543332 
 9709      2000
 9710              	.LASF15:
 9711 3234 5F5F4649 		.ascii	"__FINITE_MATH_ONLY__ 0\000"
 9711      4E495445 
 9711      5F4D4154 
 9711      485F4F4E 
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 215


 9711      4C595F5F 
 9712              	.LASF495:
 9713 324b 5F5F696E 		.ascii	"__int20 +2\000"
 9713      74323020 
 9713      2B3200
 9714              	.LASF718:
 9715 3256 53797354 		.ascii	"SysTick ((SysTick_Type *) SysTick_BASE)\000"
 9715      69636B20 
 9715      28285379 
 9715      73546963 
 9715      6B5F5479 
 9716              	.LASF192:
 9717 327e 5F5F4C44 		.ascii	"__LDBL_DENORM_MIN__ 4.9406564584124654e-324L\000"
 9717      424C5F44 
 9717      454E4F52 
 9717      4D5F4D49 
 9717      4E5F5F20 
 9718              	.LASF107:
 9719 32ab 5F5F494E 		.ascii	"__INT64_MAX__ 0x7fffffffffffffffLL\000"
 9719      5436345F 
 9719      4D41585F 
 9719      5F203078 
 9719      37666666 
 9720              	.LASF695:
 9721 32ce 436F7265 		.ascii	"CoreDebug_DHCSR_C_MASKINTS_Msk (1ul << CoreDebug_DH"
 9721      44656275 
 9721      675F4448 
 9721      4353525F 
 9721      435F4D41 
 9722 3301 4353525F 		.ascii	"CSR_C_MASKINTS_Pos)\000"
 9722      435F4D41 
 9722      534B494E 
 9722      54535F50 
 9722      6F732900 
 9723              	.LASF518:
 9724 3315 5F5F696E 		.ascii	"__int16_t_defined 1\000"
 9724      7431365F 
 9724      745F6465 
 9724      66696E65 
 9724      64203100 
 9725              	.LASF295:
 9726 3329 5F5F554C 		.ascii	"__ULLFRACT_IBIT__ 0\000"
 9726      4C465241 
 9726      43545F49 
 9726      4249545F 
 9726      5F203000 
 9727              	.LASF610:
 9728 333d 5343425F 		.ascii	"SCB_CPUID_REVISION_Pos 0\000"
 9728      43505549 
 9728      445F5245 
 9728      56495349 
 9728      4F4E5F50 
 9729              	.LASF762:
 9730 3356 4C50435F 		.ascii	"LPC_SSP1 ((LPC_SSP_TypeDef *) LPC_SSP1_BASE )\000"
 9730      53535031 
 9730      2028284C 
 9730      50435F53 
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 216


 9730      53505F54 
 9731              	.LASF663:
 9732 3384 53797354 		.ascii	"SysTick_CTRL_COUNTFLAG_Msk (1ul << SysTick_CTRL_COU"
 9732      69636B5F 
 9732      4354524C 
 9732      5F434F55 
 9732      4E54464C 
 9733 33b7 4E54464C 		.ascii	"NTFLAG_Pos)\000"
 9733      41475F50 
 9733      6F732900 
 9734              	.LASF90:
 9735 33c3 5F5F4C4F 		.ascii	"__LONG_WIDTH__ 32\000"
 9735      4E475F57 
 9735      49445448 
 9735      5F5F2033 
 9735      3200
 9736              	.LASF160:
 9737 33d5 5F5F464C 		.ascii	"__FLT_MAX__ 3.4028234663852886e+38F\000"
 9737      545F4D41 
 9737      585F5F20 
 9737      332E3430 
 9737      32383233 
 9738              	.LASF314:
 9739 33f9 5F5F5541 		.ascii	"__UACCUM_FBIT__ 16\000"
 9739      4343554D 
 9739      5F464249 
 9739      545F5F20 
 9739      313600
 9740              	.LASF278:
 9741 340c 5F5F5546 		.ascii	"__UFRACT_EPSILON__ 0x1P-16UR\000"
 9741      52414354 
 9741      5F455053 
 9741      494C4F4E 
 9741      5F5F2030 
 9742              	.LASF82:
 9743 3429 5F5F5743 		.ascii	"__WCHAR_MIN__ 0U\000"
 9743      4841525F 
 9743      4D494E5F 
 9743      5F203055 
 9743      00
 9744              	.LASF350:
 9745 343a 5F5F5551 		.ascii	"__UQQ_IBIT__ 0\000"
 9745      515F4942 
 9745      49545F5F 
 9745      203000
 9746              	.LASF387:
 9747 3449 5F5F4743 		.ascii	"__GCC_ATOMIC_LONG_LOCK_FREE 1\000"
 9747      435F4154 
 9747      4F4D4943 
 9747      5F4C4F4E 
 9747      475F4C4F 
 9748              	.LASF790:
 9749 3467 52464D37 		.ascii	"RFM70_REG_RF_SETUP 0x06\000"
 9749      305F5245 
 9749      475F5246 
 9749      5F534554 
 9749      55502030 
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 217


 9750              	.LASF326:
 9751 347f 5F5F554C 		.ascii	"__ULACCUM_MIN__ 0.0ULK\000"
 9751      41434355 
 9751      4D5F4D49 
 9751      4E5F5F20 
 9751      302E3055 
 9752              	.LASF861:
 9753 3496 62616E6B 		.ascii	"bank\000"
 9753      00
 9754              	.LASF819:
 9755 349b 5F5F7569 		.ascii	"__uint32_t\000"
 9755      6E743332 
 9755      5F7400
 9756              	.LASF411:
 9757 34a6 5F5F4152 		.ascii	"__ARM_ARCH 6\000"
 9757      4D5F4152 
 9757      43482036 
 9757      00
 9758              	.LASF152:
 9759 34b3 5F5F464C 		.ascii	"__FLT_RADIX__ 2\000"
 9759      545F5241 
 9759      4449585F 
 9759      5F203200 
 9760              	.LASF816:
 9761 34c3 6C6F6E67 		.ascii	"long long int\000"
 9761      206C6F6E 
 9761      6720696E 
 9761      7400
 9762              	.LASF792:
 9763 34d1 52464D37 		.ascii	"RFM70_REG_OBSERVE_TX 0x08\000"
 9763      305F5245 
 9763      475F4F42 
 9763      53455256 
 9763      455F5458 
 9764              	.LASF554:
 9765 34eb 55494E54 		.ascii	"UINT32_MAX (__UINT32_MAX__)\000"
 9765      33325F4D 
 9765      41582028 
 9765      5F5F5549 
 9765      4E543332 
 9766              	.LASF195:
 9767 3507 5F5F4C44 		.ascii	"__LDBL_HAS_QUIET_NAN__ 1\000"
 9767      424C5F48 
 9767      41535F51 
 9767      55494554 
 9767      5F4E414E 
 9768              	.LASF91:
 9769 3520 5F5F4C4F 		.ascii	"__LONG_LONG_WIDTH__ 64\000"
 9769      4E475F4C 
 9769      4F4E475F 
 9769      57494454 
 9769      485F5F20 
 9770              	.LASF821:
 9771 3537 4354524C 		.ascii	"CTRL\000"
 9771      00
 9772              	.LASF916:
 9773 353c 72656365 		.ascii	"receive_address_p1\000"
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 218


 9773      6976655F 
 9773      61646472 
 9773      6573735F 
 9773      703100
 9774              	.LASF737:
 9775 354f 4C50435F 		.ascii	"LPC_CT16B1_BASE (LPC_APB0_BASE + 0x10000)\000"
 9775      43543136 
 9775      42315F42 
 9775      41534520 
 9775      284C5043 
 9776              	.LASF143:
 9777 3579 5F5F5549 		.ascii	"__UINT_FAST64_MAX__ 0xffffffffffffffffULL\000"
 9777      4E545F46 
 9777      41535436 
 9777      345F4D41 
 9777      585F5F20 
 9778              	.LASF420:
 9779 35a3 5F5F4152 		.ascii	"__ARM_FP\000"
 9779      4D5F4650 
 9779      00
 9780              	.LASF360:
 9781 35ac 5F5F4841 		.ascii	"__HA_IBIT__ 8\000"
 9781      5F494249 
 9781      545F5F20 
 9781      3800
 9782              	.LASF396:
 9783 35ba 5F5F4152 		.ascii	"__ARM_FEATURE_DSP\000"
 9783      4D5F4645 
 9783      41545552 
 9783      455F4453 
 9783      5000
 9784              	.LASF145:
 9785 35cc 5F5F494E 		.ascii	"__INTPTR_WIDTH__ 32\000"
 9785      54505452 
 9785      5F574944 
 9785      54485F5F 
 9785      20333200 
 9786              	.LASF388:
 9787 35e0 5F5F4743 		.ascii	"__GCC_ATOMIC_LLONG_LOCK_FREE 1\000"
 9787      435F4154 
 9787      4F4D4943 
 9787      5F4C4C4F 
 9787      4E475F4C 
 9788              	.LASF723:
 9789 35ff 5F424954 		.ascii	"_BIT_SHIFT(IRQn) ( (((uint32_t)(IRQn) ) & 0x03) * 8"
 9789      5F534849 
 9789      46542849 
 9789      52516E29 
 9789      20282028 
 9790 3632 202900   		.ascii	" )\000"
 9791              	.LASF232:
 9792 3635 5F5F464C 		.ascii	"__FLT32X_MIN__ 2.2250738585072014e-308F32x\000"
 9792      54333258 
 9792      5F4D494E 
 9792      5F5F2032 
 9792      2E323235 
 9793              	.LASF880:
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 219


 9794 3660 6D6F6465 		.ascii	"mode_transmit\000"
 9794      5F747261 
 9794      6E736D69 
 9794      7400
 9795              	.LASF623:
 9796 366e 5343425F 		.ascii	"SCB_ICSR_ISRPREEMPT_Msk (1ul << SCB_ICSR_ISRPREEMPT"
 9796      49435352 
 9796      5F495352 
 9796      50524545 
 9796      4D50545F 
 9797 36a1 5F506F73 		.ascii	"_Pos)\000"
 9797      2900
 9798              	.LASF214:
 9799 36a7 5F5F464C 		.ascii	"__FLT64_MAX_EXP__ 1024\000"
 9799      5436345F 
 9799      4D41585F 
 9799      4558505F 
 9799      5F203130 
 9800              	.LASF771:
 9801 36be 5F52464D 		.ascii	"_RFM70_H_ \000"
 9801      37305F48 
 9801      5F2000
 9802              	.LASF218:
 9803 36c9 5F5F464C 		.ascii	"__FLT64_MIN__ 2.2250738585072014e-308F64\000"
 9803      5436345F 
 9803      4D494E5F 
 9803      5F20322E 
 9803      32323530 
 9804              	.LASF476:
 9805 36f2 5F5F5F69 		.ascii	"___int32_t_defined 1\000"
 9805      6E743332 
 9805      5F745F64 
 9805      6566696E 
 9805      65642031 
 9806              	.LASF877:
 9807 3707 5F5A4E35 		.ascii	"_ZN5rfm7012buffer_writeEcPKhh\000"
 9807      72666D37 
 9807      30313262 
 9807      75666665 
 9807      725F7772 
 9808              	.LASF93:
 9809 3725 5F5F5749 		.ascii	"__WINT_WIDTH__ 32\000"
 9809      4E545F57 
 9809      49445448 
 9809      5F5F2033 
 9809      3200
 9810              	.LASF948:
 9811 3737 5F5A4E34 		.ascii	"_ZN4pins10output_pin3setEb\000"
 9811      70696E73 
 9811      31306F75 
 9811      74707574 
 9811      5F70696E 
 9812              	.LASF683:
 9813 3752 436F7265 		.ascii	"CoreDebug_DHCSR_S_RESET_ST_Msk (1ul << CoreDebug_DH"
 9813      44656275 
 9813      675F4448 
 9813      4353525F 
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 220


 9813      535F5245 
 9814 3785 4353525F 		.ascii	"CSR_S_RESET_ST_Pos)\000"
 9814      535F5245 
 9814      5345545F 
 9814      53545F50 
 9814      6F732900 
 9815              	.LASF279:
 9816 3799 5F5F4C46 		.ascii	"__LFRACT_FBIT__ 31\000"
 9816      52414354 
 9816      5F464249 
 9816      545F5F20 
 9816      333100
 9817              	.LASF548:
 9818 37ac 55494E54 		.ascii	"UINT16_MAX (__UINT16_MAX__)\000"
 9818      31365F4D 
 9818      41582028 
 9818      5F5F5549 
 9818      4E543136 
 9819              	.LASF393:
 9820 37c8 5F5F5349 		.ascii	"__SIZEOF_WCHAR_T__ 4\000"
 9820      5A454F46 
 9820      5F574348 
 9820      41525F54 
 9820      5F5F2034 
 9821              	.LASF463:
 9822 37dd 5F5F4253 		.ascii	"__BSD_VISIBLE 1\000"
 9822      445F5649 
 9822      5349424C 
 9822      45203100 
 9823              	.LASF423:
 9824 37ed 5F5F4152 		.ascii	"__ARM_FP16_ARGS\000"
 9824      4D5F4650 
 9824      31365F41 
 9824      52475300 
 9825              	.LASF943:
 9826 37fd 6D61736B 		.ascii	"mask\000"
 9826      00
 9827              	.LASF626:
 9828 3802 5343425F 		.ascii	"SCB_ICSR_VECTPENDING_Pos 12\000"
 9828      49435352 
 9828      5F564543 
 9828      5450454E 
 9828      44494E47 
 9829              	.LASF447:
 9830 381e 5F5F434D 		.ascii	"__CM0_CMSIS_VERSION ((__CM0_CMSIS_VERSION_MAIN << 1"
 9830      305F434D 
 9830      5349535F 
 9830      56455253 
 9830      494F4E20 
 9831 3851 3629207C 		.ascii	"6) | __CM0_CMSIS_VERSION_SUB)\000"
 9831      205F5F43 
 9831      4D305F43 
 9831      4D534953 
 9831      5F564552 
 9832              	.LASF277:
 9833 386f 5F5F5546 		.ascii	"__UFRACT_MAX__ 0XFFFFP-16UR\000"
 9833      52414354 
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 221


 9833      5F4D4158 
 9833      5F5F2030 
 9833      58464646 
 9834              	.LASF481:
 9835 388b 5F5F5F69 		.ascii	"___int_least64_t_defined 1\000"
 9835      6E745F6C 
 9835      65617374 
 9835      36345F74 
 9835      5F646566 
 9836              	.LASF766:
 9837 38a6 4C50435F 		.ascii	"LPC_GPIO0 ((LPC_GPIO_TypeDef *) LPC_GPIO0_BASE )\000"
 9837      4750494F 
 9837      30202828 
 9837      4C50435F 
 9837      4750494F 
 9838              	.LASF775:
 9839 38d7 52464D37 		.ascii	"RFM70_CMD_W_TX_PAYLOAD 0xA0\000"
 9839      305F434D 
 9839      445F575F 
 9839      54585F50 
 9839      41594C4F 
 9840              	.LASF822:
 9841 38f3 4C4F4144 		.ascii	"LOAD\000"
 9841      00
 9842              	.LASF602:
 9843 38f8 5343425F 		.ascii	"SCB_CPUID_IMPLEMENTER_Pos 24\000"
 9843      43505549 
 9843      445F494D 
 9843      504C454D 
 9843      454E5445 
 9844              	.LASF461:
 9845 3915 5F415446 		.ascii	"_ATFILE_SOURCE 1\000"
 9845      494C455F 
 9845      534F5552 
 9845      43452031 
 9845      00
 9846              	.LASF484:
 9847 3926 5F5F5354 		.ascii	"__STDINT_EXP(x) __ ##x ##__\000"
 9847      44494E54 
 9847      5F455850 
 9847      28782920 
 9847      5F5F2023 
 9848              	.LASF657:
 9849 3942 5343425F 		.ascii	"SCB_DFSR_DWTTRAP_Msk (1ul << SCB_DFSR_DWTTRAP_Pos)\000"
 9849      44465352 
 9849      5F445754 
 9849      54524150 
 9849      5F4D736B 
 9850              	.LASF471:
 9851 3975 5F5F4558 		.ascii	"__EXP(x) __ ##x ##__\000"
 9851      50287829 
 9851      205F5F20 
 9851      23237820 
 9851      23235F5F 
 9852              	.LASF763:
 9853 398a 4C50435F 		.ascii	"LPC_CAN ((LPC_CAN_TypeDef *) LPC_CAN_BASE )\000"
 9853      43414E20 
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 222


 9853      28284C50 
 9853      435F4341 
 9853      4E5F5479 
 9854              	.LASF29:
 9855 39b6 5F5F4259 		.ascii	"__BYTE_ORDER__ __ORDER_LITTLE_ENDIAN__\000"
 9855      54455F4F 
 9855      52444552 
 9855      5F5F205F 
 9855      5F4F5244 
 9856              	.LASF205:
 9857 39dd 5F5F464C 		.ascii	"__FLT32_EPSILON__ 1.1920928955078125e-7F32\000"
 9857      5433325F 
 9857      45505349 
 9857      4C4F4E5F 
 9857      5F20312E 
 9858              	.LASF959:
 9859 3a08 72785F62 		.ascii	"rx_buf\000"
 9859      756600
 9860              	.LASF860:
 9861 3a0f 5350495F 		.ascii	"SPI_RW\000"
 9861      525700
 9862              	.LASF864:
 9863 3a16 5F5A4E35 		.ascii	"_ZN5rfm7010init_bank1Ev\000"
 9863      72666D37 
 9863      30313069 
 9863      6E69745F 
 9863      62616E6B 
 9864              	.LASF677:
 9865 3a2e 53797354 		.ascii	"SysTick_CALIB_SKEW_Msk (1ul << SysTick_CALIB_SKEW_P"
 9865      69636B5F 
 9865      43414C49 
 9865      425F534B 
 9865      45575F4D 
 9866 3a61 6F732900 		.ascii	"os)\000"
 9867              	.LASF978:
 9868 3a65 77616974 		.ascii	"wait\000"
 9868      00
 9869              	.LASF468:
 9870 3a6a 5F5F504F 		.ascii	"__POSIX_VISIBLE 200809\000"
 9870      5349585F 
 9870      56495349 
 9870      424C4520 
 9870      32303038 
 9871              	.LASF402:
 9872 3a81 5F5F4152 		.ascii	"__ARM_32BIT_STATE\000"
 9872      4D5F3332 
 9872      4249545F 
 9872      53544154 
 9872      4500
 9873              	.LASF274:
 9874 3a93 5F5F5546 		.ascii	"__UFRACT_FBIT__ 16\000"
 9874      52414354 
 9874      5F464249 
 9874      545F5F20 
 9874      313600
 9875              	.LASF700:
 9876 3aa6 436F7265 		.ascii	"CoreDebug_DHCSR_C_DEBUGEN_Pos 0\000"
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 223


 9876      44656275 
 9876      675F4448 
 9876      4353525F 
 9876      435F4445 
 9877              	.LASF835:
 9878 3ac6 5F5A4E34 		.ascii	"_ZN4pins10output_pinC4Ev\000"
 9878      70696E73 
 9878      31306F75 
 9878      74707574 
 9878      5F70696E 
 9879              	.LASF725:
 9880 3adf 5F49505F 		.ascii	"_IP_IDX(IRQn) ( ((uint32_t)(IRQn) >> 2) )\000"
 9880      49445828 
 9880      4952516E 
 9880      29202820 
 9880      28287569 
 9881              	.LASF534:
 9882 3b09 5F5F696E 		.ascii	"__int_fast16_t_defined 1\000"
 9882      745F6661 
 9882      73743136 
 9882      5F745F64 
 9882      6566696E 
 9883              	.LASF949:
 9884 3b22 5F5A4E32 		.ascii	"_ZN21input_output_pin_lpc13setEb\000"
 9884      31696E70 
 9884      75745F6F 
 9884      75747075 
 9884      745F7069 
 9885              	.LASF826:
 9886 3b43 53797374 		.ascii	"SystemFrequency\000"
 9886      656D4672 
 9886      65717565 
 9886      6E637900 
 9887              	.LASF738:
 9888 3b53 4C50435F 		.ascii	"LPC_CT32B0_BASE (LPC_APB0_BASE + 0x14000)\000"
 9888      43543332 
 9888      42305F42 
 9888      41534520 
 9888      284C5043 
 9889              	.LASF242:
 9890 3b7d 5F5F4445 		.ascii	"__DEC32_MAX__ 9.999999E96DF\000"
 9890      4333325F 
 9890      4D41585F 
 9890      5F20392E 
 9890      39393939 
 9891              	.LASF559:
 9892 3b99 494E5436 		.ascii	"INT64_MAX (__INT64_MAX__)\000"
 9892      345F4D41 
 9892      5820285F 
 9892      5F494E54 
 9892      36345F4D 
 9893              	.LASF560:
 9894 3bb3 55494E54 		.ascii	"UINT64_MAX (__UINT64_MAX__)\000"
 9894      36345F4D 
 9894      41582028 
 9894      5F5F5549 
 9894      4E543634 
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 224


 9895              	.LASF620:
 9896 3bcf 5343425F 		.ascii	"SCB_ICSR_PENDSTCLR_Pos 25\000"
 9896      49435352 
 9896      5F50454E 
 9896      44535443 
 9896      4C525F50 
 9897              	.LASF818:
 9898 3be9 756E7369 		.ascii	"unsigned int\000"
 9898      676E6564 
 9898      20696E74 
 9898      00
 9899              	.LASF45:
 9900 3bf6 5F5F494E 		.ascii	"__INT64_TYPE__ long long int\000"
 9900      5436345F 
 9900      54595045 
 9900      5F5F206C 
 9900      6F6E6720 
 9901              	.LASF272:
 9902 3c13 5F5F4652 		.ascii	"__FRACT_MAX__ 0X7FFFP-15R\000"
 9902      4143545F 
 9902      4D41585F 
 9902      5F203058 
 9902      37464646 
 9903              	.LASF155:
 9904 3c2d 5F5F464C 		.ascii	"__FLT_MIN_EXP__ (-125)\000"
 9904      545F4D49 
 9904      4E5F4558 
 9904      505F5F20 
 9904      282D3132 
 9905              	.LASF151:
 9906 3c44 5F5F4445 		.ascii	"__DEC_EVAL_METHOD__ 2\000"
 9906      435F4556 
 9906      414C5F4D 
 9906      4554484F 
 9906      445F5F20 
 9907              	.LASF593:
 9908 3c5a 55494E54 		.ascii	"UINT32_C(x) __UINT32_C(x)\000"
 9908      33325F43 
 9908      28782920 
 9908      5F5F5549 
 9908      4E543332 
 9909              	.LASF305:
 9910 3c74 5F5F5553 		.ascii	"__USACCUM_IBIT__ 8\000"
 9910      41434355 
 9910      4D5F4942 
 9910      49545F5F 
 9910      203800
 9911              	.LASF912:
 9912 3c87 70697065 		.ascii	"pipe_enable\000"
 9912      5F656E61 
 9912      626C6500 
 9913              	.LASF564:
 9914 3c93 494E545F 		.ascii	"INT_FAST8_MIN (-__INT_FAST8_MAX__ - 1)\000"
 9914      46415354 
 9914      385F4D49 
 9914      4E20282D 
 9914      5F5F494E 
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 225


 9915              	.LASF760:
 9916 3cba 4C50435F 		.ascii	"LPC_PMU ((LPC_PMU_TypeDef *) LPC_PMU_BASE )\000"
 9916      504D5520 
 9916      28284C50 
 9916      435F504D 
 9916      555F5479 
 9917              	.LASF221:
 9918 3ce6 5F5F464C 		.ascii	"__FLT64_HAS_DENORM__ 1\000"
 9918      5436345F 
 9918      4841535F 
 9918      44454E4F 
 9918      524D5F5F 
 9919              	.LASF335:
 9920 3cfd 5F5F554C 		.ascii	"__ULLACCUM_IBIT__ 32\000"
 9920      4C414343 
 9920      554D5F49 
 9920      4249545F 
 9920      5F203332 
 9921              	.LASF318:
 9922 3d12 5F5F5541 		.ascii	"__UACCUM_EPSILON__ 0x1P-16UK\000"
 9922      4343554D 
 9922      5F455053 
 9922      494C4F4E 
 9922      5F5F2030 
 9923              	.LASF568:
 9924 3d2f 494E545F 		.ascii	"INT_FAST16_MAX (__INT_FAST16_MAX__)\000"
 9924      46415354 
 9924      31365F4D 
 9924      41582028 
 9924      5F5F494E 
 9925              	.LASF24:
 9926 3d53 5F5F4348 		.ascii	"__CHAR_BIT__ 8\000"
 9926      41525F42 
 9926      49545F5F 
 9926      203800
 9927              	.LASF716:
 9928 3d62 5343425F 		.ascii	"SCB_BASE (SCS_BASE + 0x0D00)\000"
 9928      42415345 
 9928      20285343 
 9928      535F4241 
 9928      5345202B 
 9929              	.LASF149:
 9930 3d7f 5F5F464C 		.ascii	"__FLT_EVAL_METHOD__ 0\000"
 9930      545F4556 
 9930      414C5F4D 
 9930      4554484F 
 9930      445F5F20 
 9931              	.LASF711:
 9932 3d95 436F7265 		.ascii	"CoreDebug_DEMCR_VC_CORERESET_Msk (1ul << CoreDebug_"
 9932      44656275 
 9932      675F4445 
 9932      4D43525F 
 9932      56435F43 
 9933 3dc8 44454D43 		.ascii	"DEMCR_VC_CORERESET_Pos)\000"
 9933      525F5643 
 9933      5F434F52 
 9933      45524553 
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 226


 9933      45545F50 
 9934              	.LASF742:
 9935 3de0 4C50435F 		.ascii	"LPC_SSP0_BASE (LPC_APB0_BASE + 0x40000)\000"
 9935      53535030 
 9935      5F424153 
 9935      4520284C 
 9935      50435F41 
 9936              	.LASF76:
 9937 3e08 5F5F5343 		.ascii	"__SCHAR_MAX__ 0x7f\000"
 9937      4841525F 
 9937      4D41585F 
 9937      5F203078 
 9937      376600
 9938              	.LASF133:
 9939 3e1b 5F5F494E 		.ascii	"__INT_FAST8_WIDTH__ 32\000"
 9939      545F4641 
 9939      5354385F 
 9939      57494454 
 9939      485F5F20 
 9940              	.LASF501:
 9941 3e32 5F5F494E 		.ascii	"__INT16 \"h\"\000"
 9941      54313620 
 9941      22682200 
 9942              	.LASF414:
 9943 3e3e 5F5F7468 		.ascii	"__thumb2__\000"
 9943      756D6232 
 9943      5F5F00
 9944              	.LASF930:
 9945 3e49 7472616E 		.ascii	"transmit_message_once\000"
 9945      736D6974 
 9945      5F6D6573 
 9945      73616765 
 9945      5F6F6E63 
 9946              	.LASF403:
 9947 3e5f 5F5F4152 		.ascii	"__ARM_FEATURE_LDREX\000"
 9947      4D5F4645 
 9947      41545552 
 9947      455F4C44 
 9947      52455800 
 9948              	.LASF115:
 9949 3e73 5F5F494E 		.ascii	"__INT_LEAST16_MAX__ 0x7fff\000"
 9949      545F4C45 
 9949      41535431 
 9949      365F4D41 
 9949      585F5F20 
 9950              	.LASF925:
 9951 3e8e 5F5A4E35 		.ascii	"_ZN5rfm7018transmit_fifo_fullEv\000"
 9951      72666D37 
 9951      30313874 
 9951      72616E73 
 9951      6D69745F 
 9952              	.LASF899:
 9953 3eae 5F5A4E35 		.ascii	"_ZN5rfm7014address_lengthEh\000"
 9953      72666D37 
 9953      30313461 
 9953      64647265 
 9953      73735F6C 
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 227


 9954              	.LASF246:
 9955 3eca 5F5F4445 		.ascii	"__DEC64_MIN_EXP__ (-382)\000"
 9955      4336345F 
 9955      4D494E5F 
 9955      4558505F 
 9955      5F20282D 
 9956              	.LASF147:
 9957 3ee3 5F5F4743 		.ascii	"__GCC_IEC_559 0\000"
 9957      435F4945 
 9957      435F3535 
 9957      39203000 
 9958              	.LASF867:
 9959 3ef3 5F5A4E35 		.ascii	"_ZN5rfm704initEv\000"
 9959      72666D37 
 9959      3034696E 
 9959      69744576 
 9959      00
 9960              	.LASF493:
 9961 3f04 63686172 		.ascii	"char +0\000"
 9961      202B3000 
 9962              	.LASF282:
 9963 3f0c 5F5F4C46 		.ascii	"__LFRACT_MAX__ 0X7FFFFFFFP-31LR\000"
 9963      52414354 
 9963      5F4D4158 
 9963      5F5F2030 
 9963      58374646 
 9964              	.LASF395:
 9965 3f2c 5F5F5349 		.ascii	"__SIZEOF_PTRDIFF_T__ 4\000"
 9965      5A454F46 
 9965      5F505452 
 9965      44494646 
 9965      5F545F5F 
 9966              	.LASF519:
 9967 3f43 5F494E54 		.ascii	"_INT32_T_DECLARED \000"
 9967      33325F54 
 9967      5F444543 
 9967      4C415245 
 9967      442000
 9968              	.LASF739:
 9969 3f56 4C50435F 		.ascii	"LPC_CT32B1_BASE (LPC_APB0_BASE + 0x18000)\000"
 9969      43543332 
 9969      42315F42 
 9969      41534520 
 9969      284C5043 
 9970              	.LASF478:
 9971 3f80 5F5F5F69 		.ascii	"___int_least8_t_defined 1\000"
 9971      6E745F6C 
 9971      65617374 
 9971      385F745F 
 9971      64656669 
 9972              	.LASF784:
 9973 3f9a 52464D37 		.ascii	"RFM70_REG_CONFIG 0x00\000"
 9973      305F5245 
 9973      475F434F 
 9973      4E464947 
 9973      20307830 
 9974              	.LASF30:
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 228


 9975 3fb0 5F5F464C 		.ascii	"__FLOAT_WORD_ORDER__ __ORDER_LITTLE_ENDIAN__\000"
 9975      4F41545F 
 9975      574F5244 
 9975      5F4F5244 
 9975      45525F5F 
 9976              	.LASF655:
 9977 3fdd 5343425F 		.ascii	"SCB_DFSR_VCATCH_Msk (1ul << SCB_DFSR_VCATCH_Pos)\000"
 9977      44465352 
 9977      5F564341 
 9977      5443485F 
 9977      4D736B20 
 9978              	.LASF46:
 9979 400e 5F5F5549 		.ascii	"__UINT8_TYPE__ unsigned char\000"
 9979      4E54385F 
 9979      54595045 
 9979      5F5F2075 
 9979      6E736967 
 9980              	.LASF945:
 9981 402b 6770696F 		.ascii	"gpioreg\000"
 9981      72656700 
 9982              	.LASF533:
 9983 4033 5F5F696E 		.ascii	"__int_fast8_t_defined 1\000"
 9983      745F6661 
 9983      7374385F 
 9983      745F6465 
 9983      66696E65 
 9984              	.LASF41:
 9985 404b 5F5F5349 		.ascii	"__SIG_ATOMIC_TYPE__ int\000"
 9985      475F4154 
 9985      4F4D4943 
 9985      5F545950 
 9985      455F5F20 
 9986              	.LASF768:
 9987 4063 4C50435F 		.ascii	"LPC_GPIO2 ((LPC_GPIO_TypeDef *) LPC_GPIO2_BASE )\000"
 9987      4750494F 
 9987      32202828 
 9987      4C50435F 
 9987      4750494F 
 9988              	.LASF88:
 9989 4094 5F5F5348 		.ascii	"__SHRT_WIDTH__ 16\000"
 9989      52545F57 
 9989      49445448 
 9989      5F5F2031 
 9989      3600
 9990              	.LASF252:
 9991 40a6 5F5F4445 		.ascii	"__DEC128_MANT_DIG__ 34\000"
 9991      43313238 
 9991      5F4D414E 
 9991      545F4449 
 9991      475F5F20 
 9992              	.LASF538:
 9993 40bd 494E5450 		.ascii	"INTPTR_MAX (__INTPTR_MAX__)\000"
 9993      54525F4D 
 9993      41582028 
 9993      5F5F494E 
 9993      54505452 
 9994              	.LASF977:
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 229


 9995 40d9 6F666673 		.ascii	"offset\000"
 9995      657400
 9996              	.LASF60:
 9997 40e0 5F5F494E 		.ascii	"__INT_FAST32_TYPE__ int\000"
 9997      545F4641 
 9997      53543332 
 9997      5F545950 
 9997      455F5F20 
 9998              	.LASF184:
 9999 40f8 5F5F4C44 		.ascii	"__LDBL_MIN_10_EXP__ (-307)\000"
 9999      424C5F4D 
 9999      494E5F31 
 9999      305F4558 
 9999      505F5F20 
 10000              	.LASF814:
 10001 4113 6C6F6E67 		.ascii	"long int\000"
 10001      20696E74 
 10001      00
 10002              	.LASF381:
 10003 411c 5F5F4743 		.ascii	"__GCC_ATOMIC_CHAR_LOCK_FREE 1\000"
 10003      435F4154 
 10003      4F4D4943 
 10003      5F434841 
 10003      525F4C4F 
 10004              	.LASF462:
 10005 413a 5F5F4154 		.ascii	"__ATFILE_VISIBLE 1\000"
 10005      46494C45 
 10005      5F564953 
 10005      49424C45 
 10005      203100
 10006              	.LASF283:
 10007 414d 5F5F4C46 		.ascii	"__LFRACT_EPSILON__ 0x1P-31LR\000"
 10007      52414354 
 10007      5F455053 
 10007      494C4F4E 
 10007      5F5F2030 
 10008              	.LASF586:
 10009 416a 57494E54 		.ascii	"WINT_MAX (__WINT_MAX__)\000"
 10009      5F4D4158 
 10009      20285F5F 
 10009      57494E54 
 10009      5F4D4158 
 10010              	.LASF6:
 10011 4182 5F5F5645 		.ascii	"__VERSION__ \"7.2.0\"\000"
 10011      5253494F 
 10011      4E5F5F20 
 10011      22372E32 
 10011      2E302200 
 10012              	.LASF648:
 10013 4196 5343425F 		.ascii	"SCB_CCR_UNALIGN_TRP_Pos 3\000"
 10013      4343525F 
 10013      554E414C 
 10013      49474E5F 
 10013      5452505F 
 10014              	.LASF407:
 10015 41b0 5F5F4152 		.ascii	"__ARM_SIZEOF_MINIMAL_ENUM 1\000"
 10015      4D5F5349 
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 230


 10015      5A454F46 
 10015      5F4D494E 
 10015      494D414C 
 10016              	.LASF410:
 10017 41cc 5F5F6172 		.ascii	"__arm__ 1\000"
 10017      6D5F5F20 
 10017      3100
 10018              	.LASF939:
 10019 41d6 6C706331 		.ascii	"lpc1114\000"
 10019      31313400 
 10020              	.LASF965:
 10021 41de 5F5A3777 		.ascii	"_Z7wait_msj\000"
 10021      6169745F 
 10021      6D736A00 
 10022              	.LASF273:
 10023 41ea 5F5F4652 		.ascii	"__FRACT_EPSILON__ 0x1P-15R\000"
 10023      4143545F 
 10023      45505349 
 10023      4C4F4E5F 
 10023      5F203078 
 10024              	.LASF199:
 10025 4205 5F5F464C 		.ascii	"__FLT32_MIN_10_EXP__ (-37)\000"
 10025      5433325F 
 10025      4D494E5F 
 10025      31305F45 
 10025      58505F5F 
 10026              	.LASF658:
 10027 4220 5343425F 		.ascii	"SCB_DFSR_BKPT_Pos 1\000"
 10027      44465352 
 10027      5F424B50 
 10027      545F506F 
 10027      73203100 
 10028              	.LASF781:
 10029 4234 52464D37 		.ascii	"RFM70_CMD_ACTIVATE 0x50\000"
 10029      305F434D 
 10029      445F4143 
 10029      54495641 
 10029      54452030 
 10030              	.LASF546:
 10031 424c 494E5431 		.ascii	"INT16_MIN (-__INT16_MAX__ - 1)\000"
 10031      365F4D49 
 10031      4E20282D 
 10031      5F5F494E 
 10031      5431365F 
 10032              	.LASF422:
 10033 426b 5F5F4152 		.ascii	"__ARM_FP16_FORMAT_ALTERNATIVE\000"
 10033      4D5F4650 
 10033      31365F46 
 10033      4F524D41 
 10033      545F414C 
 10034              	.LASF749:
 10035 4289 4C50435F 		.ascii	"LPC_GPIO1_BASE (LPC_AHB_BASE + 0x10000)\000"
 10035      4750494F 
 10035      315F4241 
 10035      53452028 
 10035      4C50435F 
 10036              	.LASF824:
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 231


 10037 42b1 53797354 		.ascii	"SysTick_Type\000"
 10037      69636B5F 
 10037      54797065 
 10037      00
 10038              	.LASF238:
 10039 42be 5F5F4445 		.ascii	"__DEC32_MANT_DIG__ 7\000"
 10039      4333325F 
 10039      4D414E54 
 10039      5F444947 
 10039      5F5F2037 
 10040              	.LASF687:
 10041 42d3 436F7265 		.ascii	"CoreDebug_DHCSR_S_LOCKUP_Msk (1ul << CoreDebug_DHCS"
 10041      44656275 
 10041      675F4448 
 10041      4353525F 
 10041      535F4C4F 
 10042 4306 525F535F 		.ascii	"R_S_LOCKUP_Pos)\000"
 10042      4C4F434B 
 10042      55505F50 
 10042      6F732900 
 10043              	.LASF573:
 10044 4316 494E545F 		.ascii	"INT_FAST64_MIN (-__INT_FAST64_MAX__ - 1)\000"
 10044      46415354 
 10044      36345F4D 
 10044      494E2028 
 10044      2D5F5F49 
 10045              	.LASF450:
 10046 433f 5F4D4143 		.ascii	"_MACHINE__DEFAULT_TYPES_H \000"
 10046      48494E45 
 10046      5F5F4445 
 10046      4641554C 
 10046      545F5459 
 10047              	.LASF913:
 10048 435a 5F5A4E35 		.ascii	"_ZN5rfm7011pipe_enableEhb\000"
 10048      72666D37 
 10048      30313170 
 10048      6970655F 
 10048      656E6162 
 10049              	.LASF954:
 10050 4374 74785F62 		.ascii	"tx_buf\000"
 10050      756600
 10051              	.LASF409:
 10052 437b 5F5F4152 		.ascii	"__ARM_ARCH_PROFILE 77\000"
 10052      4D5F4152 
 10052      43485F50 
 10052      524F4649 
 10052      4C452037 
 10053              	.LASF406:
 10054 4391 5F5F4152 		.ascii	"__ARM_FEATURE_SIMD32\000"
 10054      4D5F4645 
 10054      41545552 
 10054      455F5349 
 10054      4D443332 
 10055              	.LASF511:
 10056 43a6 5F5F4C45 		.ascii	"__LEAST64 \"ll\"\000"
 10056      41535436 
 10056      3420226C 
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 232


 10056      6C2200
 10057              	.LASF672:
 10058 43b5 53797354 		.ascii	"SysTick_VAL_CURRENT_Pos 0\000"
 10058      69636B5F 
 10058      56414C5F 
 10058      43555252 
 10058      454E545F 
 10059              	.LASF731:
 10060 43cf 4C50435F 		.ascii	"LPC_APB0_BASE (0x40000000UL)\000"
 10060      41504230 
 10060      5F424153 
 10060      45202830 
 10060      78343030 
 10061              	.LASF622:
 10062 43ec 5343425F 		.ascii	"SCB_ICSR_ISRPREEMPT_Pos 23\000"
 10062      49435352 
 10062      5F495352 
 10062      50524545 
 10062      4D50545F 
 10063              	.LASF355:
 10064 4407 5F5F5544 		.ascii	"__UDQ_FBIT__ 64\000"
 10064      515F4642 
 10064      49545F5F 
 10064      20363400 
 10065              	.LASF401:
 10066 4417 5F5F4152 		.ascii	"__ARM_FEATURE_QRDMX\000"
 10066      4D5F4645 
 10066      41545552 
 10066      455F5152 
 10066      444D5800 
 10067              	.LASF416:
 10068 442b 5F5F4152 		.ascii	"__ARM_ARCH_ISA_THUMB 1\000"
 10068      4D5F4152 
 10068      43485F49 
 10068      53415F54 
 10068      48554D42 
 10069              	.LASF80:
 10070 4442 5F5F4C4F 		.ascii	"__LONG_LONG_MAX__ 0x7fffffffffffffffLL\000"
 10070      4E475F4C 
 10070      4F4E475F 
 10070      4D41585F 
 10070      5F203078 
 10071              	.LASF713:
 10072 4469 436F7265 		.ascii	"CoreDebug_BASE (0xE000EDF0)\000"
 10072      44656275 
 10072      675F4241 
 10072      53452028 
 10072      30784530 
 10073              	.LASF490:
 10074 4485 6C6F6E67 		.ascii	"long\000"
 10074      00
 10075              	.LASF354:
 10076 448a 5F5F5553 		.ascii	"__USQ_IBIT__ 0\000"
 10076      515F4942 
 10076      49545F5F 
 10076      203000
 10077              	.LASF847:
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 233


 10078 4499 7E696E70 		.ascii	"~input_output_pin\000"
 10078      75745F6F 
 10078      75747075 
 10078      745F7069 
 10078      6E00
 10079              	.LASF275:
 10080 44ab 5F5F5546 		.ascii	"__UFRACT_IBIT__ 0\000"
 10080      52414354 
 10080      5F494249 
 10080      545F5F20 
 10080      3000
 10081              	.LASF426:
 10082 44bd 5F5F4152 		.ascii	"__ARM_FEATURE_FMA\000"
 10082      4D5F4645 
 10082      41545552 
 10082      455F464D 
 10082      4100
 10083              	.LASF113:
 10084 44cf 5F5F494E 		.ascii	"__INT8_C(c) c\000"
 10084      54385F43 
 10084      28632920 
 10084      6300
 10085              	.LASF280:
 10086 44dd 5F5F4C46 		.ascii	"__LFRACT_IBIT__ 0\000"
 10086      52414354 
 10086      5F494249 
 10086      545F5F20 
 10086      3000
 10087              	.LASF443:
 10088 44ef 5F5F5665 		.ascii	"__Vendor_SysTickConfig 0\000"
 10088      6E646F72 
 10088      5F537973 
 10088      5469636B 
 10088      436F6E66 
 10089              	.LASF16:
 10090 4508 5F5F5349 		.ascii	"__SIZEOF_INT__ 4\000"
 10090      5A454F46 
 10090      5F494E54 
 10090      5F5F2034 
 10090      00
 10091              	.LASF263:
 10092 4519 5F5F5346 		.ascii	"__SFRACT_EPSILON__ 0x1P-7HR\000"
 10092      52414354 
 10092      5F455053 
 10092      494C4F4E 
 10092      5F5F2030 
 10093              	.LASF390:
 10094 4535 5F5F4743 		.ascii	"__GCC_ATOMIC_POINTER_LOCK_FREE 1\000"
 10094      435F4154 
 10094      4F4D4943 
 10094      5F504F49 
 10094      4E544552 
 10095              	.LASF169:
 10096 4556 5F5F4442 		.ascii	"__DBL_MIN_EXP__ (-1021)\000"
 10096      4C5F4D49 
 10096      4E5F4558 
 10096      505F5F20 
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 234


 10096      282D3130 
 10097              	.LASF665:
 10098 456e 53797354 		.ascii	"SysTick_CTRL_CLKSOURCE_Msk (1ul << SysTick_CTRL_CLK"
 10098      69636B5F 
 10098      4354524C 
 10098      5F434C4B 
 10098      534F5552 
 10099 45a1 534F5552 		.ascii	"SOURCE_Pos)\000"
 10099      43455F50 
 10099      6F732900 
 10100              	.LASF854:
 10101 45ad 5F5A4E34 		.ascii	"_ZN4pins16input_output_pin20direction_set_outputEv\000"
 10101      70696E73 
 10101      3136696E 
 10101      7075745F 
 10101      6F757470 
 10102              	.LASF689:
 10103 45e0 436F7265 		.ascii	"CoreDebug_DHCSR_S_SLEEP_Msk (1ul << CoreDebug_DHCSR"
 10103      44656275 
 10103      675F4448 
 10103      4353525F 
 10103      535F534C 
 10104 4613 5F535F53 		.ascii	"_S_SLEEP_Pos)\000"
 10104      4C454550 
 10104      5F506F73 
 10104      2900
 10105              	.LASF796:
 10106 4621 52464D37 		.ascii	"RFM70_REG_RX_ADDR_P2 0x0C\000"
 10106      305F5245 
 10106      475F5258 
 10106      5F414444 
 10106      525F5032 
 10107              	.LASF779:
 10108 463b 52464D37 		.ascii	"RFM70_CMD_W_TX_PAYLOAD_NOACK 0xB0\000"
 10108      305F434D 
 10108      445F575F 
 10108      54585F50 
 10108      41594C4F 
 10109              	.LASF958:
 10110 465d 63686B73 		.ascii	"chksum\000"
 10110      756D00
 10111              	.LASF801:
 10112 4664 52464D37 		.ascii	"RFM70_REG_RX_PW_P0 0x11\000"
 10112      305F5245 
 10112      475F5258 
 10112      5F50575F 
 10112      50302030 
 10113              	.LASF950:
 10114 467c 5F5A4E32 		.ascii	"_ZN21input_output_pin_lpc13getEv\000"
 10114      31696E70 
 10114      75745F6F 
 10114      75747075 
 10114      745F7069 
 10115              	.LASF197:
 10116 469d 5F5F464C 		.ascii	"__FLT32_DIG__ 6\000"
 10116      5433325F 
 10116      4449475F 
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 235


 10116      5F203600 
 10117              	.LASF875:
 10118 46ad 5F5A4E35 		.ascii	"_ZN5rfm7014register_writeEhh\000"
 10118      72666D37 
 10118      30313472 
 10118      65676973 
 10118      7465725F 
 10119              	.LASF809:
 10120 46ca 52464D37 		.ascii	"RFM70_REG_FEATURE 0x1D\000"
 10120      305F5245 
 10120      475F4645 
 10120      41545552 
 10120      45203078 
 10121              	.LASF889:
 10122 46e1 5F5A4E35 		.ascii	"_ZN5rfm707lna_lowEv\000"
 10122      72666D37 
 10122      30376C6E 
 10122      615F6C6F 
 10122      77457600 
 10123              	.LASF987:
 10124 46f5 5F5A4E34 		.ascii	"_ZN4pins9input_pin3getEv\000"
 10124      70696E73 
 10124      39696E70 
 10124      75745F70 
 10124      696E3367 
 10125              	.LASF673:
 10126 470e 53797354 		.ascii	"SysTick_VAL_CURRENT_Msk (0xFFFFFFul << SysTick_VAL_"
 10126      69636B5F 
 10126      56414C5F 
 10126      43555252 
 10126      454E545F 
 10127 4741 43555252 		.ascii	"CURRENT_Pos)\000"
 10127      454E545F 
 10127      506F7329 
 10127      00
 10128              	.LASF597:
 10129 474e 55494E54 		.ascii	"UINTMAX_C(x) __UINTMAX_C(x)\000"
 10129      4D41585F 
 10129      43287829 
 10129      205F5F55 
 10129      494E544D 
 10130              	.LASF482:
 10131 476a 5F5F4558 		.ascii	"__EXP\000"
 10131      5000
 10132              	.LASF491:
 10133 4770 7369676E 		.ascii	"signed +0\000"
 10133      6564202B 
 10133      3000
 10134              	.LASF193:
 10135 477a 5F5F4C44 		.ascii	"__LDBL_HAS_DENORM__ 1\000"
 10135      424C5F48 
 10135      41535F44 
 10135      454E4F52 
 10135      4D5F5F20 
 10136              	.LASF223:
 10137 4790 5F5F464C 		.ascii	"__FLT64_HAS_QUIET_NAN__ 1\000"
 10137      5436345F 
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 236


 10137      4841535F 
 10137      51554945 
 10137      545F4E41 
 10138              	.LASF131:
 10139 47aa 5F5F5549 		.ascii	"__UINT64_C(c) c ## ULL\000"
 10139      4E543634 
 10139      5F432863 
 10139      29206320 
 10139      23232055 
 10140              	.LASF399:
 10141 47c1 5F5F4152 		.ascii	"__ARM_FEATURE_CRYPTO\000"
 10141      4D5F4645 
 10141      41545552 
 10141      455F4352 
 10141      5950544F 
 10142              	.LASF729:
 10143 47d6 4C50435F 		.ascii	"LPC_FLASH_BASE (0x00000000UL)\000"
 10143      464C4153 
 10143      485F4241 
 10143      53452028 
 10143      30783030 
 10144              	.LASF52:
 10145 47f4 5F5F494E 		.ascii	"__INT_LEAST32_TYPE__ long int\000"
 10145      545F4C45 
 10145      41535433 
 10145      325F5459 
 10145      50455F5F 
 10146              	.LASF783:
 10147 4812 52464D37 		.ascii	"RFM70_CMD_NOP 0xFF\000"
 10147      305F434D 
 10147      445F4E4F 
 10147      50203078 
 10147      464600
 10148              	.LASF693:
 10149 4825 436F7265 		.ascii	"CoreDebug_DHCSR_S_REGRDY_Msk (1ul << CoreDebug_DHCS"
 10149      44656275 
 10149      675F4448 
 10149      4353525F 
 10149      535F5245 
 10150 4858 525F535F 		.ascii	"R_S_REGRDY_Pos)\000"
 10150      52454752 
 10150      44595F50 
 10150      6F732900 
 10151              	.LASF661:
 10152 4868 5343425F 		.ascii	"SCB_DFSR_HALTED_Msk (1ul << SCB_DFSR_HALTED_Pos)\000"
 10152      44465352 
 10152      5F48414C 
 10152      5445445F 
 10152      4D736B20 
 10153              	.LASF750:
 10154 4899 4C50435F 		.ascii	"LPC_GPIO2_BASE (LPC_AHB_BASE + 0x20000)\000"
 10154      4750494F 
 10154      325F4241 
 10154      53452028 
 10154      4C50435F 
 10155              	.LASF944:
 10156 48c1 5F5A4E32 		.ascii	"_ZN21input_output_pin_lpc1C4ERKS_\000"
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 237


 10156      31696E70 
 10156      75745F6F 
 10156      75747075 
 10156      745F7069 
 10157              	.LASF130:
 10158 48e3 5F5F5549 		.ascii	"__UINT_LEAST64_MAX__ 0xffffffffffffffffULL\000"
 10158      4E545F4C 
 10158      45415354 
 10158      36345F4D 
 10158      41585F5F 
 10159              	.LASF270:
 10160 490e 5F5F4652 		.ascii	"__FRACT_IBIT__ 0\000"
 10160      4143545F 
 10160      49424954 
 10160      5F5F2030 
 10160      00
 10161              	.LASF9:
 10162 491f 5F5F4154 		.ascii	"__ATOMIC_ACQUIRE 2\000"
 10162      4F4D4943 
 10162      5F414351 
 10162      55495245 
 10162      203200
 10163              	.LASF608:
 10164 4932 5343425F 		.ascii	"SCB_CPUID_PARTNO_Pos 4\000"
 10164      43505549 
 10164      445F5041 
 10164      52544E4F 
 10164      5F506F73 
 10165              	.LASF89:
 10166 4949 5F5F494E 		.ascii	"__INT_WIDTH__ 32\000"
 10166      545F5749 
 10166      4454485F 
 10166      5F203332 
 10166      00
 10167              	.LASF379:
 10168 495a 5F5F5743 		.ascii	"__WCHAR_UNSIGNED__ 1\000"
 10168      4841525F 
 10168      554E5349 
 10168      474E4544 
 10168      5F5F2031 
 10169              	.LASF26:
 10170 496f 5F5F4F52 		.ascii	"__ORDER_LITTLE_ENDIAN__ 1234\000"
 10170      4445525F 
 10170      4C495454 
 10170      4C455F45 
 10170      4E444941 
 10171              	.LASF910:
 10172 498c 70697065 		.ascii	"pipe_autoack\000"
 10172      5F617574 
 10172      6F61636B 
 10172      00
 10173              	.LASF245:
 10174 4999 5F5F4445 		.ascii	"__DEC64_MANT_DIG__ 16\000"
 10174      4336345F 
 10174      4D414E54 
 10174      5F444947 
 10174      5F5F2031 
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 238


 10175              	.LASF817:
 10176 49af 6C6F6E67 		.ascii	"long long unsigned int\000"
 10176      206C6F6E 
 10176      6720756E 
 10176      7369676E 
 10176      65642069 
 10177              	.LASF563:
 10178 49c6 55494E54 		.ascii	"UINT_LEAST64_MAX (__UINT_LEAST64_MAX__)\000"
 10178      5F4C4541 
 10178      53543634 
 10178      5F4D4158 
 10178      20285F5F 
 10179              	.LASF156:
 10180 49ee 5F5F464C 		.ascii	"__FLT_MIN_10_EXP__ (-37)\000"
 10180      545F4D49 
 10180      4E5F3130 
 10180      5F455850 
 10180      5F5F2028 
 10181              	.LASF829:
 10182 4a07 6F757470 		.ascii	"output\000"
 10182      757400
 10183              	.LASF77:
 10184 4a0e 5F5F5348 		.ascii	"__SHRT_MAX__ 0x7fff\000"
 10184      52545F4D 
 10184      41585F5F 
 10184      20307837 
 10184      66666600 
 10185              	.LASF566:
 10186 4a22 55494E54 		.ascii	"UINT_FAST8_MAX (__UINT_FAST8_MAX__)\000"
 10186      5F464153 
 10186      54385F4D 
 10186      41582028 
 10186      5F5F5549 
 10187              	.LASF839:
 10188 4a46 5F5A4E34 		.ascii	"_ZN4pins9input_pinD4Ev\000"
 10188      70696E73 
 10188      39696E70 
 10188      75745F70 
 10188      696E4434 
 10189              	.LASF338:
 10190 4a5d 5F5F554C 		.ascii	"__ULLACCUM_EPSILON__ 0x1P-32ULLK\000"
 10190      4C414343 
 10190      554D5F45 
 10190      5053494C 
 10190      4F4E5F5F 
 10191              	.LASF616:
 10192 4a7e 5343425F 		.ascii	"SCB_ICSR_PENDSVCLR_Pos 27\000"
 10192      49435352 
 10192      5F50454E 
 10192      44535643 
 10192      4C525F50 
 10193              	.LASF521:
 10194 4a98 5F5F696E 		.ascii	"__int32_t_defined 1\000"
 10194      7433325F 
 10194      745F6465 
 10194      66696E65 
 10194      64203100 
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 239


 10195              	.LASF345:
 10196 4aac 5F5F4451 		.ascii	"__DQ_FBIT__ 63\000"
 10196      5F464249 
 10196      545F5F20 
 10196      363300
 10197              	.LASF464:
 10198 4abb 5F5F474E 		.ascii	"__GNU_VISIBLE 0\000"
 10198      555F5649 
 10198      5349424C 
 10198      45203000 
 10199              	.LASF300:
 10200 4acb 5F5F5341 		.ascii	"__SACCUM_IBIT__ 8\000"
 10200      4343554D 
 10200      5F494249 
 10200      545F5F20 
 10200      3800
 10201              	.LASF352:
 10202 4add 5F5F5548 		.ascii	"__UHQ_IBIT__ 0\000"
 10202      515F4942 
 10202      49545F5F 
 10202      203000
 10203              	.LASF643:
 10204 4aec 5343425F 		.ascii	"SCB_SCR_SLEEPDEEP_Msk (1ul << SCB_SCR_SLEEPDEEP_Pos"
 10204      5343525F 
 10204      534C4545 
 10204      50444545 
 10204      505F4D73 
 10205 4b1f 2900     		.ascii	")\000"
 10206              	.LASF59:
 10207 4b21 5F5F494E 		.ascii	"__INT_FAST16_TYPE__ int\000"
 10207      545F4641 
 10207      53543136 
 10207      5F545950 
 10207      455F5F20 
 10208              	.LASF526:
 10209 4b39 5F55494E 		.ascii	"_UINTMAX_T_DECLARED \000"
 10209      544D4158 
 10209      5F545F44 
 10209      45434C41 
 10209      52454420 
 10210              	.LASF72:
 10211 4b4e 5F5F6370 		.ascii	"__cpp_binary_literals 201304\000"
 10211      705F6269 
 10211      6E617279 
 10211      5F6C6974 
 10211      6572616C 
 10212              	.LASF301:
 10213 4b6b 5F5F5341 		.ascii	"__SACCUM_MIN__ (-0X1P7HK-0X1P7HK)\000"
 10213      4343554D 
 10213      5F4D494E 
 10213      5F5F2028 
 10213      2D305831 
 10214              	.LASF287:
 10215 4b8d 5F5F554C 		.ascii	"__ULFRACT_MAX__ 0XFFFFFFFFP-32ULR\000"
 10215      46524143 
 10215      545F4D41 
 10215      585F5F20 
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 240


 10215      30584646 
 10216              	.LASF404:
 10217 4baf 5F5F4152 		.ascii	"__ARM_FEATURE_CLZ\000"
 10217      4D5F4645 
 10217      41545552 
 10217      455F434C 
 10217      5A00
 10218              	.LASF928:
 10219 4bc1 7472616E 		.ascii	"transmit_message\000"
 10219      736D6974 
 10219      5F6D6573 
 10219      73616765 
 10219      00
 10220              	.LASF525:
 10221 4bd2 5F494E54 		.ascii	"_INTMAX_T_DECLARED \000"
 10221      4D41585F 
 10221      545F4445 
 10221      434C4152 
 10221      45442000 
 10222              	.LASF936:
 10223 4be6 72656365 		.ascii	"receive\000"
 10223      69766500 
 10224              	.LASF39:
 10225 4bee 5F5F4348 		.ascii	"__CHAR16_TYPE__ short unsigned int\000"
 10225      41523136 
 10225      5F545950 
 10225      455F5F20 
 10225      73686F72 
 10226              	.LASF752:
 10227 4c11 4C50435F 		.ascii	"LPC_I2C ((LPC_I2C_TypeDef *) LPC_I2C_BASE )\000"
 10227      49324320 
 10227      28284C50 
 10227      435F4932 
 10227      435F5479 
 10228              	.LASF225:
 10229 4c3d 5F5F464C 		.ascii	"__FLT32X_DIG__ 15\000"
 10229      54333258 
 10229      5F444947 
 10229      5F5F2031 
 10229      3500
 10230              	.LASF702:
 10231 4c4f 436F7265 		.ascii	"CoreDebug_DCRSR_REGWnR_Pos 16\000"
 10231      44656275 
 10231      675F4443 
 10231      5253525F 
 10231      52454757 
 10232              	.LASF744:
 10233 4c6d 4C50435F 		.ascii	"LPC_SYSCON_BASE (LPC_APB0_BASE + 0x48000)\000"
 10233      53595343 
 10233      4F4E5F42 
 10233      41534520 
 10233      284C5043 
 10234              	.LASF836:
 10235 4c97 696E7075 		.ascii	"input_pin\000"
 10235      745F7069 
 10235      6E00
 10236              	.LASF357:
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 241


 10237 4ca1 5F5F5554 		.ascii	"__UTQ_FBIT__ 128\000"
 10237      515F4642 
 10237      49545F5F 
 10237      20313238 
 10237      00
 10238              	.LASF699:
 10239 4cb2 436F7265 		.ascii	"CoreDebug_DHCSR_C_HALT_Msk (1ul << CoreDebug_DHCSR_"
 10239      44656275 
 10239      675F4448 
 10239      4353525F 
 10239      435F4841 
 10240 4ce5 435F4841 		.ascii	"C_HALT_Pos)\000"
 10240      4C545F50 
 10240      6F732900 
 10241              	.LASF333:
 10242 4cf1 5F5F4C4C 		.ascii	"__LLACCUM_EPSILON__ 0x1P-31LLK\000"
 10242      41434355 
 10242      4D5F4550 
 10242      53494C4F 
 10242      4E5F5F20 
 10243              	.LASF551:
 10244 4d10 55494E54 		.ascii	"UINT_LEAST16_MAX (__UINT_LEAST16_MAX__)\000"
 10244      5F4C4541 
 10244      53543136 
 10244      5F4D4158 
 10244      20285F5F 
 10245              	.LASF134:
 10246 4d38 5F5F494E 		.ascii	"__INT_FAST16_MAX__ 0x7fffffff\000"
 10246      545F4641 
 10246      53543136 
 10246      5F4D4158 
 10246      5F5F2030 
 10247              	.LASF472:
 10248 4d56 5F5F6861 		.ascii	"__have_longlong64 1\000"
 10248      76655F6C 
 10248      6F6E676C 
 10248      6F6E6736 
 10248      34203100 
 10249              	.LASF688:
 10250 4d6a 436F7265 		.ascii	"CoreDebug_DHCSR_S_SLEEP_Pos 18\000"
 10250      44656275 
 10250      675F4448 
 10250      4353525F 
 10250      535F534C 
 10251              	.LASF697:
 10252 4d89 436F7265 		.ascii	"CoreDebug_DHCSR_C_STEP_Msk (1ul << CoreDebug_DHCSR_"
 10252      44656275 
 10252      675F4448 
 10252      4353525F 
 10252      435F5354 
 10253 4dbc 435F5354 		.ascii	"C_STEP_Pos)\000"
 10253      45505F50 
 10253      6F732900 
 10254              	.LASF789:
 10255 4dc8 52464D37 		.ascii	"RFM70_REG_RF_CH 0x05\000"
 10255      305F5245 
 10255      475F5246 
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 242


 10255      5F434820 
 10255      30783035 
 10256              	.LASF71:
 10257 4ddd 5F5F4445 		.ascii	"__DEPRECATED 1\000"
 10257      50524543 
 10257      41544544 
 10257      203100
 10258              	.LASF327:
 10259 4dec 5F5F554C 		.ascii	"__ULACCUM_MAX__ 0XFFFFFFFFFFFFFFFFP-32ULK\000"
 10259      41434355 
 10259      4D5F4D41 
 10259      585F5F20 
 10259      30584646 
 10260              	.LASF876:
 10261 4e16 62756666 		.ascii	"buffer_write\000"
 10261      65725F77 
 10261      72697465 
 10261      00
 10262              	.LASF879:
 10263 4e23 5F5A4E35 		.ascii	"_ZN5rfm7010is_presentEv\000"
 10263      72666D37 
 10263      30313069 
 10263      735F7072 
 10263      6573656E 
 10264              	.LASF286:
 10265 4e3b 5F5F554C 		.ascii	"__ULFRACT_MIN__ 0.0ULR\000"
 10265      46524143 
 10265      545F4D49 
 10265      4E5F5F20 
 10265      302E3055 
 10266              	.LASF579:
 10267 4e52 53495A45 		.ascii	"SIZE_MAX (__SIZE_MAX__)\000"
 10267      5F4D4158 
 10267      20285F5F 
 10267      53495A45 
 10267      5F4D4158 
 10268              	.LASF827:
 10269 4e6a 53797374 		.ascii	"SystemAHBFrequency\000"
 10269      656D4148 
 10269      42467265 
 10269      7175656E 
 10269      637900
 10270              	.LASF346:
 10271 4e7d 5F5F4451 		.ascii	"__DQ_IBIT__ 0\000"
 10271      5F494249 
 10271      545F5F20 
 10271      3000
 10272              	.LASF805:
 10273 4e8b 52464D37 		.ascii	"RFM70_REG_RX_PW_P4 0x15\000"
 10273      305F5245 
 10273      475F5258 
 10273      5F50575F 
 10273      50342030 
 10274              	.LASF44:
 10275 4ea3 5F5F494E 		.ascii	"__INT32_TYPE__ long int\000"
 10275      5433325F 
 10275      54595045 
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 243


 10275      5F5F206C 
 10275      6F6E6720 
 10276              	.LASF726:
 10277 4ebb 5F5F5359 		.ascii	"__SYSTEM_LPC11xx_H \000"
 10277      5354454D 
 10277      5F4C5043 
 10277      31317878 
 10277      5F482000 
 10278              	.LASF101:
 10279 4ecf 5F5F5349 		.ascii	"__SIG_ATOMIC_MAX__ 0x7fffffff\000"
 10279      475F4154 
 10279      4F4D4943 
 10279      5F4D4158 
 10279      5F5F2030 
 10280              	.LASF604:
 10281 4eed 5343425F 		.ascii	"SCB_CPUID_VARIANT_Pos 20\000"
 10281      43505549 
 10281      445F5641 
 10281      5249414E 
 10281      545F506F 
 10282              	.LASF587:
 10283 4f06 57494E54 		.ascii	"WINT_MIN (__WINT_MIN__)\000"
 10283      5F4D494E 
 10283      20285F5F 
 10283      57494E54 
 10283      5F4D494E 
 10284              	.LASF522:
 10285 4f1e 5F494E54 		.ascii	"_INT64_T_DECLARED \000"
 10285      36345F54 
 10285      5F444543 
 10285      4C415245 
 10285      442000
 10286              	.LASF724:
 10287 4f31 5F534850 		.ascii	"_SHP_IDX(IRQn) ( ((((uint32_t)(IRQn) & 0x0F)-8) >> "
 10287      5F494458 
 10287      28495251 
 10287      6E292028 
 10287      20282828 
 10288 4f64 32292029 		.ascii	"2) )\000"
 10288      00
 10289              	.LASF929:
 10290 4f69 5F5A4E35 		.ascii	"_ZN5rfm7016transmit_messageEPKhh\000"
 10290      72666D37 
 10290      30313674 
 10290      72616E73 
 10290      6D69745F 
 10291              	.LASF429:
 10292 4f8a 5F5F4152 		.ascii	"__ARM_NEON_FP\000"
 10292      4D5F4E45 
 10292      4F4E5F46 
 10292      5000
 10293              	.LASF891:
 10294 4f98 5F5A4E35 		.ascii	"_ZN5rfm708lna_highEv\000"
 10294      72666D37 
 10294      30386C6E 
 10294      615F6869 
 10294      67684576 
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 244


 10295              	.LASF358:
 10296 4fad 5F5F5554 		.ascii	"__UTQ_IBIT__ 0\000"
 10296      515F4942 
 10296      49545F5F 
 10296      203000
 10297              	.LASF361:
 10298 4fbc 5F5F5341 		.ascii	"__SA_FBIT__ 15\000"
 10298      5F464249 
 10298      545F5F20 
 10298      313500
 10299              	.LASF231:
 10300 4fcb 5F5F464C 		.ascii	"__FLT32X_MAX__ 1.7976931348623157e+308F32x\000"
 10300      54333258 
 10300      5F4D4158 
 10300      5F5F2031 
 10300      2E373937 
 10301              	.LASF603:
 10302 4ff6 5343425F 		.ascii	"SCB_CPUID_IMPLEMENTER_Msk (0xFFul << SCB_CPUID_IMPL"
 10302      43505549 
 10302      445F494D 
 10302      504C454D 
 10302      454E5445 
 10303 5029 454D454E 		.ascii	"EMENTER_Pos)\000"
 10303      5445525F 
 10303      506F7329 
 10303      00
 10304              	.LASF433:
 10305 5036 5F5F4152 		.ascii	"__ARM_EABI__ 1\000"
 10305      4D5F4541 
 10305      42495F5F 
 10305      203100
 10306              	.LASF679:
 10307 5045 53797354 		.ascii	"SysTick_CALIB_TENMS_Msk (0xFFFFFFul << SysTick_VAL_"
 10307      69636B5F 
 10307      43414C49 
 10307      425F5445 
 10307      4E4D535F 
 10308 5078 43555252 		.ascii	"CURRENT_Pos)\000"
 10308      454E545F 
 10308      506F7329 
 10308      00
 10309              	.LASF438:
 10310 5085 5F5F454C 		.ascii	"__ELF__ 1\000"
 10310      465F5F20 
 10310      3100
 10311              	.LASF415:
 10312 508f 5F5F5448 		.ascii	"__THUMBEL__ 1\000"
 10312      554D4245 
 10312      4C5F5F20 
 10312      3100
 10313              	.LASF787:
 10314 509d 52464D37 		.ascii	"RFM70_REG_SETUP_AW 0x03\000"
 10314      305F5245 
 10314      475F5345 
 10314      5455505F 
 10314      41572030 
 10315              	.LASF757:
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 245


 10316 50b5 4C50435F 		.ascii	"LPC_TMR32B0 ((LPC_TMR_TypeDef *) LPC_CT32B0_BASE)\000"
 10316      544D5233 
 10316      32423020 
 10316      28284C50 
 10316      435F544D 
 10317              	.LASF873:
 10318 50e7 5F5A4E35 		.ascii	"_ZN5rfm7011buffer_readEhPhh\000"
 10318      72666D37 
 10318      30313162 
 10318      75666665 
 10318      725F7265 
 10319              	.LASF637:
 10320 5103 5343425F 		.ascii	"SCB_AIRCR_SYSRESETREQ_Msk (1ul << SCB_AIRCR_SYSRESE"
 10320      41495243 
 10320      525F5359 
 10320      53524553 
 10320      45545245 
 10321 5136 54524551 		.ascii	"TREQ_Pos)\000"
 10321      5F506F73 
 10321      2900
 10322              	.LASF340:
 10323 5140 5F5F5151 		.ascii	"__QQ_IBIT__ 0\000"
 10323      5F494249 
 10323      545F5F20 
 10323      3000
 10324              	.LASF966:
 10325 514e 626C696E 		.ascii	"blink\000"
 10325      6B00
 10326              	.LASF823:
 10327 5154 43414C49 		.ascii	"CALIB\000"
 10327      4200
 10328              	.LASF595:
 10329 515a 55494E54 		.ascii	"UINT64_C(x) __UINT64_C(x)\000"
 10329      36345F43 
 10329      28782920 
 10329      5F5F5549 
 10329      4E543634 
 10330              	.LASF329:
 10331 5174 5F5F4C4C 		.ascii	"__LLACCUM_FBIT__ 31\000"
 10331      41434355 
 10331      4D5F4642 
 10331      49545F5F 
 10331      20333100 
 10332              	.LASF38:
 10333 5188 5F5F5549 		.ascii	"__UINTMAX_TYPE__ long long unsigned int\000"
 10333      4E544D41 
 10333      585F5459 
 10333      50455F5F 
 10333      206C6F6E 
 10334              	.LASF227:
 10335 51b0 5F5F464C 		.ascii	"__FLT32X_MIN_10_EXP__ (-307)\000"
 10335      54333258 
 10335      5F4D494E 
 10335      5F31305F 
 10335      4558505F 
 10336              	.LASF545:
 10337 51cd 55494E54 		.ascii	"UINT_LEAST8_MAX (__UINT_LEAST8_MAX__)\000"
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 246


 10337      5F4C4541 
 10337      5354385F 
 10337      4D415820 
 10337      285F5F55 
 10338              	.LASF4:
 10339 51f3 5F5F474E 		.ascii	"__GNUC_MINOR__ 2\000"
 10339      55435F4D 
 10339      494E4F52 
 10339      5F5F2032 
 10339      00
 10340              	.LASF56:
 10341 5204 5F5F5549 		.ascii	"__UINT_LEAST32_TYPE__ long unsigned int\000"
 10341      4E545F4C 
 10341      45415354 
 10341      33325F54 
 10341      5950455F 
 10342              	.LASF865:
 10343 522c 696E6974 		.ascii	"init\000"
 10343      00
 10344              	.LASF405:
 10345 5231 5F5F4152 		.ascii	"__ARM_FEATURE_NUMERIC_MAXMIN\000"
 10345      4D5F4645 
 10345      41545552 
 10345      455F4E55 
 10345      4D455249 
 10346              	.LASF37:
 10347 524e 5F5F494E 		.ascii	"__INTMAX_TYPE__ long long int\000"
 10347      544D4158 
 10347      5F545950 
 10347      455F5F20 
 10347      6C6F6E67 
 10348              	.LASF386:
 10349 526c 5F5F4743 		.ascii	"__GCC_ATOMIC_INT_LOCK_FREE 1\000"
 10349      435F4154 
 10349      4F4D4943 
 10349      5F494E54 
 10349      5F4C4F43 
 10350              	.LASF488:
 10351 5289 73686F72 		.ascii	"short\000"
 10351      7400
 10352              	.LASF659:
 10353 528f 5343425F 		.ascii	"SCB_DFSR_BKPT_Msk (1ul << SCB_DFSR_BKPT_Pos)\000"
 10353      44465352 
 10353      5F424B50 
 10353      545F4D73 
 10353      6B202831 
 10354              	.LASF690:
 10355 52bc 436F7265 		.ascii	"CoreDebug_DHCSR_S_HALT_Pos 17\000"
 10355      44656275 
 10355      675F4448 
 10355      4353525F 
 10355      535F4841 
 10356              	.LASF785:
 10357 52da 52464D37 		.ascii	"RFM70_REG_EN_AA 0x01\000"
 10357      305F5245 
 10357      475F454E 
 10357      5F414120 
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 247


 10357      30783031 
 10358              	.LASF869:
 10359 52ef 72656769 		.ascii	"register_read\000"
 10359      73746572 
 10359      5F726561 
 10359      6400
 10360              	.LASF940:
 10361 52fd 696E7075 		.ascii	"input_output_pin_lpc1\000"
 10361      745F6F75 
 10361      74707574 
 10361      5F70696E 
 10361      5F6C7063 
 10362              	.LASF424:
 10363 5313 5F5F4152 		.ascii	"__ARM_FEATURE_FP16_SCALAR_ARITHMETIC\000"
 10363      4D5F4645 
 10363      41545552 
 10363      455F4650 
 10363      31365F53 
 10364              	.LASF308:
 10365 5338 5F5F5553 		.ascii	"__USACCUM_EPSILON__ 0x1P-8UHK\000"
 10365      41434355 
 10365      4D5F4550 
 10365      53494C4F 
 10365      4E5F5F20 
 10366              	.LASF180:
 10367 5356 5F5F4442 		.ascii	"__DBL_HAS_QUIET_NAN__ 1\000"
 10367      4C5F4841 
 10367      535F5155 
 10367      4945545F 
 10367      4E414E5F 
 10368              	.LASF848:
 10369 536e 5F5A4E34 		.ascii	"_ZN4pins16input_output_pinD4Ev\000"
 10369      70696E73 
 10369      3136696E 
 10369      7075745F 
 10369      6F757470 
 10370              	.LASF569:
 10371 538d 55494E54 		.ascii	"UINT_FAST16_MAX (__UINT_FAST16_MAX__)\000"
 10371      5F464153 
 10371      5431365F 
 10371      4D415820 
 10371      285F5F55 
 10372              	.LASF748:
 10373 53b3 4C50435F 		.ascii	"LPC_GPIO0_BASE (LPC_AHB_BASE + 0x00000)\000"
 10373      4750494F 
 10373      305F4241 
 10373      53452028 
 10373      4C50435F 
 10374              	.LASF975:
 10375 53db 5F5A4E34 		.ascii	"_ZN4pins9input_pinC2Ev\000"
 10375      70696E73 
 10375      39696E70 
 10375      75745F70 
 10375      696E4332 
 10376              	.LASF292:
 10377 53f2 5F5F4C4C 		.ascii	"__LLFRACT_MAX__ 0X7FFFFFFFFFFFFFFFP-63LLR\000"
 10377      46524143 
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 248


 10377      545F4D41 
 10377      585F5F20 
 10377      30583746 
 10378              	.LASF901:
 10379 541c 5F5A4E35 		.ascii	"_ZN5rfm705powerEh\000"
 10379      72666D37 
 10379      3035706F 
 10379      77657245 
 10379      6800
 10380              	.LASF557:
 10381 542e 55494E54 		.ascii	"UINT_LEAST32_MAX (__UINT_LEAST32_MAX__)\000"
 10381      5F4C4541 
 10381      53543332 
 10381      5F4D4158 
 10381      20285F5F 
 10382              	.LASF0:
 10383 5456 5F5F5354 		.ascii	"__STDC__ 1\000"
 10383      44435F5F 
 10383      203100
 10384              	.LASF302:
 10385 5461 5F5F5341 		.ascii	"__SACCUM_MAX__ 0X7FFFP-7HK\000"
 10385      4343554D 
 10385      5F4D4158 
 10385      5F5F2030 
 10385      58374646 
 10386              	.LASF66:
 10387 547c 5F5F494E 		.ascii	"__INTPTR_TYPE__ int\000"
 10387      54505452 
 10387      5F545950 
 10387      455F5F20 
 10387      696E7400 
 10388              	.LASF444:
 10389 5490 5F5F434D 		.ascii	"__CM0_CORE_H__ \000"
 10389      305F434F 
 10389      52455F48 
 10389      5F5F2000 
 10390              	.LASF67:
 10391 54a0 5F5F5549 		.ascii	"__UINTPTR_TYPE__ unsigned int\000"
 10391      4E545054 
 10391      525F5459 
 10391      50455F5F 
 10391      20756E73 
 10392              	.LASF288:
 10393 54be 5F5F554C 		.ascii	"__ULFRACT_EPSILON__ 0x1P-32ULR\000"
 10393      46524143 
 10393      545F4550 
 10393      53494C4F 
 10393      4E5F5F20 
 10394              	.LASF375:
 10395 54dd 5F5F5245 		.ascii	"__REGISTER_PREFIX__ \000"
 10395      47495354 
 10395      45525F50 
 10395      52454649 
 10395      585F5F20 
 10396              	.LASF203:
 10397 54f2 5F5F464C 		.ascii	"__FLT32_MAX__ 3.4028234663852886e+38F32\000"
 10397      5433325F 
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 249


 10397      4D41585F 
 10397      5F20332E 
 10397      34303238 
 10398              	.LASF168:
 10399 551a 5F5F4442 		.ascii	"__DBL_DIG__ 15\000"
 10399      4C5F4449 
 10399      475F5F20 
 10399      313500
 10400              	.LASF517:
 10401 5529 5F55494E 		.ascii	"_UINT16_T_DECLARED \000"
 10401      5431365F 
 10401      545F4445 
 10401      434C4152 
 10401      45442000 
 10402              	.LASF32:
 10403 553d 5F5F474E 		.ascii	"__GNUG__ 7\000"
 10403      55475F5F 
 10403      203700
 10404              	.LASF431:
 10405 5548 5F5F4152 		.ascii	"__ARM_ARCH_6M__ 1\000"
 10405      4D5F4152 
 10405      43485F36 
 10405      4D5F5F20 
 10405      3100
 10406              	.LASF23:
 10407 555a 5F5F5349 		.ascii	"__SIZEOF_SIZE_T__ 4\000"
 10407      5A454F46 
 10407      5F53495A 
 10407      455F545F 
 10407      5F203400 
 10408              	.LASF736:
 10409 556e 4C50435F 		.ascii	"LPC_CT16B0_BASE (LPC_APB0_BASE + 0x0C000)\000"
 10409      43543136 
 10409      42305F42 
 10409      41534520 
 10409      284C5043 
 10410              	.LASF633:
 10411 5598 5343425F 		.ascii	"SCB_AIRCR_VECTKEYSTAT_Msk (0xFFFFul << SCB_AIRCR_VE"
 10411      41495243 
 10411      525F5645 
 10411      43544B45 
 10411      59535441 
 10412 55cb 43544B45 		.ascii	"CTKEYSTAT_Pos)\000"
 10412      59535441 
 10412      545F506F 
 10412      732900
 10413              	.LASF531:
 10414 55da 5F5F696E 		.ascii	"__int_least32_t_defined 1\000"
 10414      745F6C65 
 10414      61737433 
 10414      325F745F 
 10414      64656669 
 10415              	.LASF122:
 10416 55f4 5F5F494E 		.ascii	"__INT64_C(c) c ## LL\000"
 10416      5436345F 
 10416      43286329 
 10416      20632023 
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 250


 10416      23204C4C 
 10417              	.LASF971:
 10418 5609 706F7274 		.ascii	"port\000"
 10418      00
 10419              	.LASF555:
 10420 560e 494E545F 		.ascii	"INT_LEAST32_MIN (-__INT_LEAST32_MAX__ - 1)\000"
 10420      4C454153 
 10420      5433325F 
 10420      4D494E20 
 10420      282D5F5F 
 10421              	.LASF79:
 10422 5639 5F5F4C4F 		.ascii	"__LONG_MAX__ 0x7fffffffL\000"
 10422      4E475F4D 
 10422      41585F5F 
 10422      20307837 
 10422      66666666 
 10423              	.LASF727:
 10424 5652 4E564943 		.ascii	"NVIC_VectTab_RAM (0x10000000)\000"
 10424      5F566563 
 10424      74546162 
 10424      5F52414D 
 10424      20283078 
 10425              	.LASF310:
 10426 5670 5F5F4143 		.ascii	"__ACCUM_IBIT__ 16\000"
 10426      43554D5F 
 10426      49424954 
 10426      5F5F2031 
 10426      3600
 10427              	.LASF973:
 10428 5682 5F5A4E32 		.ascii	"_ZN21input_output_pin_lpc1C2Ejj\000"
 10428      31696E70 
 10428      75745F6F 
 10428      75747075 
 10428      745F7069 
 10429              	.LASF486:
 10430 56a2 756E7369 		.ascii	"unsigned\000"
 10430      676E6564 
 10430      00
 10431              	.LASF653:
 10432 56ab 5343425F 		.ascii	"SCB_DFSR_EXTERNAL_Msk (1ul << SCB_DFSR_EXTERNAL_Pos"
 10432      44465352 
 10432      5F455854 
 10432      45524E41 
 10432      4C5F4D73 
 10433 56de 2900     		.ascii	")\000"
 10434              	.LASF812:
 10435 56e0 73686F72 		.ascii	"short int\000"
 10435      7420696E 
 10435      7400
 10436              	.LASF926:
 10437 56ea 72656365 		.ascii	"receive_fifo_empty\000"
 10437      6976655F 
 10437      6669666F 
 10437      5F656D70 
 10437      747900
 10438              	.LASF606:
 10439 56fd 5343425F 		.ascii	"SCB_CPUID_ARCHITECTURE_Pos 16\000"
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 251


 10439      43505549 
 10439      445F4152 
 10439      43484954 
 10439      45435455 
 10440              	.LASF127:
 10441 571b 5F5F5549 		.ascii	"__UINT16_C(c) c\000"
 10441      4E543136 
 10441      5F432863 
 10441      29206300 
 10442              	.LASF961:
 10443 572b 5F5A4E32 		.ascii	"_ZN21input_output_pin_lpc1C4Ejj\000"
 10443      31696E70 
 10443      75745F6F 
 10443      75747075 
 10443      745F7069 
 10444              	.LASF372:
 10445 574b 5F5F5544 		.ascii	"__UDA_IBIT__ 32\000"
 10445      415F4942 
 10445      49545F5F 
 10445      20333200 
 10446              	.LASF509:
 10447 575b 5F5F4C45 		.ascii	"__LEAST16 \"h\"\000"
 10447      41535431 
 10447      36202268 
 10447      2200
 10448              	.LASF650:
 10449 5769 5343425F 		.ascii	"SCB_SHCSR_SVCALLPENDED_Pos 15\000"
 10449      53484353 
 10449      525F5356 
 10449      43414C4C 
 10449      50454E44 
 10450              	.LASF704:
 10451 5787 436F7265 		.ascii	"CoreDebug_DCRSR_REGSEL_Pos 0\000"
 10451      44656275 
 10451      675F4443 
 10451      5253525F 
 10451      52454753 
 10452              	.LASF992:
 10453 57a4 5F5A3777 		.ascii	"_Z7wait_usj\000"
 10453      6169745F 
 10453      75736A00 
 10454              	.LASF7:
 10455 57b0 5F5F4154 		.ascii	"__ATOMIC_RELAXED 0\000"
 10455      4F4D4943 
 10455      5F52454C 
 10455      41584544 
 10455      203000
 10456              	.LASF680:
 10457 57c3 436F7265 		.ascii	"CoreDebug_DHCSR_DBGKEY_Pos 16\000"
 10457      44656275 
 10457      675F4448 
 10457      4353525F 
 10457      4442474B 
 10458              	.LASF179:
 10459 57e1 5F5F4442 		.ascii	"__DBL_HAS_INFINITY__ 1\000"
 10459      4C5F4841 
 10459      535F494E 
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 252


 10459      46494E49 
 10459      54595F5F 
 10460              	.LASF349:
 10461 57f8 5F5F5551 		.ascii	"__UQQ_FBIT__ 8\000"
 10461      515F4642 
 10461      49545F5F 
 10461      203800
 10462              	.LASF210:
 10463 5807 5F5F464C 		.ascii	"__FLT64_MANT_DIG__ 53\000"
 10463      5436345F 
 10463      4D414E54 
 10463      5F444947 
 10463      5F5F2035 
 10464              	.LASF804:
 10465 581d 52464D37 		.ascii	"RFM70_REG_RX_PW_P3 0x14\000"
 10465      305F5245 
 10465      475F5258 
 10465      5F50575F 
 10465      50332030 
 10466              	.LASF601:
 10467 5835 5F5F494F 		.ascii	"__IO volatile\000"
 10467      20766F6C 
 10467      6174696C 
 10467      6500
 10468              	.LASF696:
 10469 5843 436F7265 		.ascii	"CoreDebug_DHCSR_C_STEP_Pos 2\000"
 10469      44656275 
 10469      675F4448 
 10469      4353525F 
 10469      435F5354 
 10470              	.LASF439:
 10471 5860 5F5F5553 		.ascii	"__USES_INITFINI__ 1\000"
 10471      45535F49 
 10471      4E495446 
 10471      494E495F 
 10471      5F203100 
 10472              	.LASF962:
 10473 5874 5F5A3131 		.ascii	"_Z11Send_PacketR5rfm70hPKhh\000"
 10473      53656E64 
 10473      5F506163 
 10473      6B657452 
 10473      3572666D 
 10474              	.LASF513:
 10475 5890 5F494E54 		.ascii	"_INT8_T_DECLARED \000"
 10475      385F545F 
 10475      4445434C 
 10475      41524544 
 10475      2000
 10476              	.LASF248:
 10477 58a2 5F5F4445 		.ascii	"__DEC64_MIN__ 1E-383DD\000"
 10477      4336345F 
 10477      4D494E5F 
 10477      5F203145 
 10477      2D333833 
 10478              	.LASF710:
 10479 58b9 436F7265 		.ascii	"CoreDebug_DEMCR_VC_CORERESET_Pos 0\000"
 10479      44656275 
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 253


 10479      675F4445 
 10479      4D43525F 
 10479      56435F43 
 10480              	.LASF173:
 10481 58dc 5F5F4442 		.ascii	"__DBL_DECIMAL_DIG__ 17\000"
 10481      4C5F4445 
 10481      43494D41 
 10481      4C5F4449 
 10481      475F5F20 
 10482              	.LASF903:
 10483 58f3 5F5A4E35 		.ascii	"_ZN5rfm7025retransmit_delay_attemptsEhh\000"
 10483      72666D37 
 10483      30323572 
 10483      65747261 
 10483      6E736D69 
 10484              	.LASF473:
 10485 591b 5F5F6861 		.ascii	"__have_long32 1\000"
 10485      76655F6C 
 10485      6F6E6733 
 10485      32203100 
 10486              	.LASF324:
 10487 592b 5F5F554C 		.ascii	"__ULACCUM_FBIT__ 32\000"
 10487      41434355 
 10487      4D5F4642 
 10487      49545F5F 
 10487      20333200 
 10488              	.LASF634:
 10489 593f 5343425F 		.ascii	"SCB_AIRCR_ENDIANESS_Pos 15\000"
 10489      41495243 
 10489      525F454E 
 10489      4449414E 
 10489      4553535F 
 10490              	.LASF851:
 10491 595a 64697265 		.ascii	"direction_set\000"
 10491      6374696F 
 10491      6E5F7365 
 10491      7400
 10492              	.LASF524:
 10493 5968 5F5F696E 		.ascii	"__int64_t_defined 1\000"
 10493      7436345F 
 10493      745F6465 
 10493      66696E65 
 10493      64203100 
 10494              	.LASF105:
 10495 597c 5F5F494E 		.ascii	"__INT16_MAX__ 0x7fff\000"
 10495      5431365F 
 10495      4D41585F 
 10495      5F203078 
 10495      37666666 
 10496              	.LASF612:
 10497 5991 5343425F 		.ascii	"SCB_ICSR_NMIPENDSET_Pos 31\000"
 10497      49435352 
 10497      5F4E4D49 
 10497      50454E44 
 10497      5345545F 
 10498              	.LASF692:
 10499 59ac 436F7265 		.ascii	"CoreDebug_DHCSR_S_REGRDY_Pos 16\000"
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 254


 10499      44656275 
 10499      675F4448 
 10499      4353525F 
 10499      535F5245 
 10500              	.LASF920:
 10501 59cc 6368616E 		.ascii	"channel_payload_size\000"
 10501      6E656C5F 
 10501      7061796C 
 10501      6F61645F 
 10501      73697A65 
 10502              	.LASF504:
 10503 59e1 5F5F4641 		.ascii	"__FAST8 \000"
 10503      53543820 
 10503      00
 10504              	.LASF470:
 10505 59ea 5F5F5853 		.ascii	"__XSI_VISIBLE 0\000"
 10505      495F5649 
 10505      5349424C 
 10505      45203000 
 10506              	.LASF445:
 10507 59fa 5F5F434D 		.ascii	"__CM0_CMSIS_VERSION_MAIN (0x01)\000"
 10507      305F434D 
 10507      5349535F 
 10507      56455253 
 10507      494F4E5F 
 10508              	.LASF607:
 10509 5a1a 5343425F 		.ascii	"SCB_CPUID_ARCHITECTURE_Msk (0xFul << SCB_CPUID_ARCH"
 10509      43505549 
 10509      445F4152 
 10509      43484954 
 10509      45435455 
 10510 5a4d 49544543 		.ascii	"ITECTURE_Pos)\000"
 10510      54555245 
 10510      5F506F73 
 10510      2900
 10511              	.LASF70:
 10512 5a5b 5F5F4758 		.ascii	"__GXX_WEAK__ 1\000"
 10512      585F5745 
 10512      414B5F5F 
 10512      203100
 10513              	.LASF339:
 10514 5a6a 5F5F5151 		.ascii	"__QQ_FBIT__ 7\000"
 10514      5F464249 
 10514      545F5F20 
 10514      3700
 10515              	.LASF103:
 10516 5a78 5F5F5349 		.ascii	"__SIG_ATOMIC_WIDTH__ 32\000"
 10516      475F4154 
 10516      4F4D4943 
 10516      5F574944 
 10516      54485F5F 
 10517              	.LASF947:
 10518 5a90 5F5A4E32 		.ascii	"_ZN21input_output_pin_lpc120direction_set_outputEv\000"
 10518      31696E70 
 10518      75745F6F 
 10518      75747075 
 10518      745F7069 
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 255


 10519              	.LASF219:
 10520 5ac3 5F5F464C 		.ascii	"__FLT64_EPSILON__ 2.2204460492503131e-16F64\000"
 10520      5436345F 
 10520      45505349 
 10520      4C4F4E5F 
 10520      5F20322E 
 10521              	.LASF528:
 10522 5aef 5F55494E 		.ascii	"_UINTPTR_T_DECLARED \000"
 10522      54505452 
 10522      5F545F44 
 10522      45434C41 
 10522      52454420 
 10523              	.LASF453:
 10524 5b04 5F5F474E 		.ascii	"__GNUC_PREREQ__(ma,mi) __GNUC_PREREQ(ma, mi)\000"
 10524      55435F50 
 10524      52455245 
 10524      515F5F28 
 10524      6D612C6D 
 10525              	.LASF374:
 10526 5b31 5F5F5554 		.ascii	"__UTA_IBIT__ 64\000"
 10526      415F4942 
 10526      49545F5F 
 10526      20363400 
 10527              	.LASF772:
 10528 5b41 52464D37 		.ascii	"RFM70_LIB_VERSION \"V1.02 (2011-12-31)\"\000"
 10528      305F4C49 
 10528      425F5645 
 10528      5253494F 
 10528      4E202256 
 10529              	.LASF298:
 10530 5b68 5F5F554C 		.ascii	"__ULLFRACT_EPSILON__ 0x1P-64ULLR\000"
 10530      4C465241 
 10530      43545F45 
 10530      5053494C 
 10530      4F4E5F5F 
 10531              	.LASF979:
 10532 5b89 5F5A3477 		.ascii	"_Z4waitj\000"
 10532      6169746A 
 10532      00
 10533              	.LASF394:
 10534 5b92 5F5F5349 		.ascii	"__SIZEOF_WINT_T__ 4\000"
 10534      5A454F46 
 10534      5F57494E 
 10534      545F545F 
 10534      5F203400 
 10535              	.LASF671:
 10536 5ba6 53797354 		.ascii	"SysTick_LOAD_RELOAD_Msk (0xFFFFFFul << SysTick_LOAD"
 10536      69636B5F 
 10536      4C4F4144 
 10536      5F52454C 
 10536      4F41445F 
 10537 5bd9 5F52454C 		.ascii	"_RELOAD_Pos)\000"
 10537      4F41445F 
 10537      506F7329 
 10537      00
 10538              	.LASF832:
 10539 5be6 6F757470 		.ascii	"output_pin\000"
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 256


 10539      75745F70 
 10539      696E00
 10540              	.LASF118:
 10541 5bf1 5F5F494E 		.ascii	"__INT_LEAST32_MAX__ 0x7fffffffL\000"
 10541      545F4C45 
 10541      41535433 
 10541      325F4D41 
 10541      585F5F20 
 10542              	.LASF437:
 10543 5c11 5F5F4758 		.ascii	"__GXX_TYPEINFO_EQUALITY_INLINE 0\000"
 10543      585F5459 
 10543      5045494E 
 10543      464F5F45 
 10543      5155414C 
 10544              	.LASF188:
 10545 5c32 5F5F4C44 		.ascii	"__LDBL_DECIMAL_DIG__ 17\000"
 10545      424C5F44 
 10545      4543494D 
 10545      414C5F44 
 10545      49475F5F 
 10546              	.LASF321:
 10547 5c4a 5F5F4C41 		.ascii	"__LACCUM_MIN__ (-0X1P31LK-0X1P31LK)\000"
 10547      4343554D 
 10547      5F4D494E 
 10547      5F5F2028 
 10547      2D305831 
 10548              	.LASF132:
 10549 5c6e 5F5F494E 		.ascii	"__INT_FAST8_MAX__ 0x7fffffff\000"
 10549      545F4641 
 10549      5354385F 
 10549      4D41585F 
 10549      5F203078 
 10550              	.LASF207:
 10551 5c8b 5F5F464C 		.ascii	"__FLT32_HAS_DENORM__ 1\000"
 10551      5433325F 
 10551      4841535F 
 10551      44454E4F 
 10551      524D5F5F 
 10552              	.LASF669:
 10553 5ca2 53797354 		.ascii	"SysTick_CTRL_ENABLE_Msk (1ul << SysTick_CTRL_ENABLE"
 10553      69636B5F 
 10553      4354524C 
 10553      5F454E41 
 10553      424C455F 
 10554 5cd5 5F506F73 		.ascii	"_Pos)\000"
 10554      2900
 10555              	.LASF974:
 10556 5cdb 5F5A4E34 		.ascii	"_ZN4pins16input_output_pinC2Ev\000"
 10556      70696E73 
 10556      3136696E 
 10556      7075745F 
 10556      6F757470 
 10557              	.LASF336:
 10558 5cfa 5F5F554C 		.ascii	"__ULLACCUM_MIN__ 0.0ULLK\000"
 10558      4C414343 
 10558      554D5F4D 
 10558      494E5F5F 
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 257


 10558      20302E30 
 10559              	.LASF955:
 10560 5d13 72616469 		.ascii	"radio\000"
 10560      6F00
 10561              	.LASF765:
 10562 5d19 4C50435F 		.ascii	"LPC_SYSCON ((LPC_SYSCON_TypeDef *) LPC_SYSCON_BASE)"
 10562      53595343 
 10562      4F4E2028 
 10562      284C5043 
 10562      5F535953 
 10563 5d4c 00       		.ascii	"\000"
 10564              	.LASF703:
 10565 5d4d 436F7265 		.ascii	"CoreDebug_DCRSR_REGWnR_Msk (1ul << CoreDebug_DCRSR_"
 10565      44656275 
 10565      675F4443 
 10565      5253525F 
 10565      52454757 
 10566 5d80 52454757 		.ascii	"REGWnR_Pos)\000"
 10566      6E525F50 
 10566      6F732900 
 10567              	.LASF502:
 10568 5d8c 5F5F494E 		.ascii	"__INT32 \"l\"\000"
 10568      54333220 
 10568      226C2200 
 10569              	.LASF630:
 10570 5d98 5343425F 		.ascii	"SCB_AIRCR_VECTKEY_Pos 16\000"
 10570      41495243 
 10570      525F5645 
 10570      43544B45 
 10570      595F506F 
 10571              	.LASF988:
 10572 5db1 5F5A4E37 		.ascii	"_ZN7lpc11143pinEjj\000"
 10572      6C706331 
 10572      31313433 
 10572      70696E45 
 10572      6A6A00
 10573              	.LASF706:
 10574 5dc4 436F7265 		.ascii	"CoreDebug_DEMCR_DWTENA_Pos 24\000"
 10574      44656275 
 10574      675F4445 
 10574      4D43525F 
 10574      44575445 
 10575              	.LASF48:
 10576 5de2 5F5F5549 		.ascii	"__UINT32_TYPE__ long unsigned int\000"
 10576      4E543332 
 10576      5F545950 
 10576      455F5F20 
 10576      6C6F6E67 
 10577              	.LASF941:
 10578 5e04 64617461 		.ascii	"data_pointer\000"
 10578      5F706F69 
 10578      6E746572 
 10578      00
 10579              	.LASF691:
 10580 5e11 436F7265 		.ascii	"CoreDebug_DHCSR_S_HALT_Msk (1ul << CoreDebug_DHCSR_"
 10580      44656275 
 10580      675F4448 
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 258


 10580      4353525F 
 10580      535F4841 
 10581 5e44 535F4841 		.ascii	"S_HALT_Pos)\000"
 10581      4C545F50 
 10581      6F732900 
 10582              	.LASF621:
 10583 5e50 5343425F 		.ascii	"SCB_ICSR_PENDSTCLR_Msk (1ul << SCB_ICSR_PENDSTCLR_P"
 10583      49435352 
 10583      5F50454E 
 10583      44535443 
 10583      4C525F4D 
 10584 5e83 6F732900 		.ascii	"os)\000"
 10585              	.LASF454:
 10586 5e87 5F444546 		.ascii	"_DEFAULT_SOURCE\000"
 10586      41554C54 
 10586      5F534F55 
 10586      52434500 
 10587              	.LASF440:
 10588 5e97 5F5F4C50 		.ascii	"__LPC11xx_H__ \000"
 10588      43313178 
 10588      785F485F 
 10588      5F2000
 10589              	.LASF296:
 10590 5ea6 5F5F554C 		.ascii	"__ULLFRACT_MIN__ 0.0ULLR\000"
 10590      4C465241 
 10590      43545F4D 
 10590      494E5F5F 
 10590      20302E30 
 10591              	.LASF631:
 10592 5ebf 5343425F 		.ascii	"SCB_AIRCR_VECTKEY_Msk (0xFFFFul << SCB_AIRCR_VECTKE"
 10592      41495243 
 10592      525F5645 
 10592      43544B45 
 10592      595F4D73 
 10593 5ef2 595F506F 		.ascii	"Y_Pos)\000"
 10593      732900
 10594              	.LASF356:
 10595 5ef9 5F5F5544 		.ascii	"__UDQ_IBIT__ 0\000"
 10595      515F4942 
 10595      49545F5F 
 10595      203000
 10596              	.LASF831:
 10597 5f08 7E6F7574 		.ascii	"~output_pin\000"
 10597      7075745F 
 10597      70696E00 
 10598              	.LASF290:
 10599 5f14 5F5F4C4C 		.ascii	"__LLFRACT_IBIT__ 0\000"
 10599      46524143 
 10599      545F4942 
 10599      49545F5F 
 10599      203000
 10600              	.LASF591:
 10601 5f27 55494E54 		.ascii	"UINT16_C(x) __UINT16_C(x)\000"
 10601      31365F43 
 10601      28782920 
 10601      5F5F5549 
 10601      4E543136 
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 259


 10602              	.LASF291:
 10603 5f41 5F5F4C4C 		.ascii	"__LLFRACT_MIN__ (-0.5LLR-0.5LLR)\000"
 10603      46524143 
 10603      545F4D49 
 10603      4E5F5F20 
 10603      282D302E 
 10604              	.LASF820:
 10605 5f62 75696E74 		.ascii	"uint32_t\000"
 10605      33325F74 
 10605      00
 10606              	.LASF898:
 10607 5f6b 61646472 		.ascii	"address_length\000"
 10607      6573735F 
 10607      6C656E67 
 10607      746800
 10608              	.LASF761:
 10609 5f7a 4C50435F 		.ascii	"LPC_SSP0 ((LPC_SSP_TypeDef *) LPC_SSP0_BASE )\000"
 10609      53535030 
 10609      2028284C 
 10609      50435F53 
 10609      53505F54 
 10610              	.LASF639:
 10611 5fa8 5343425F 		.ascii	"SCB_AIRCR_VECTCLRACTIVE_Msk (1ul << SCB_AIRCR_VECTC"
 10611      41495243 
 10611      525F5645 
 10611      4354434C 
 10611      52414354 
 10612 5fdb 4C524143 		.ascii	"LRACTIVE_Pos)\000"
 10612      54495645 
 10612      5F506F73 
 10612      2900
 10613              	.LASF883:
 10614 5fe9 5F5A4E35 		.ascii	"_ZN5rfm7012mode_receiveEv\000"
 10614      72666D37 
 10614      3031326D 
 10614      6F64655F 
 10614      72656365 
 10615              	.LASF483:
 10616 6003 5F535953 		.ascii	"_SYS__INTSUP_H \000"
 10616      5F5F494E 
 10616      54535550 
 10616      5F482000 
 10617              	.LASF670:
 10618 6013 53797354 		.ascii	"SysTick_LOAD_RELOAD_Pos 0\000"
 10618      69636B5F 
 10618      4C4F4144 
 10618      5F52454C 
 10618      4F41445F 
 10619              	.LASF303:
 10620 602d 5F5F5341 		.ascii	"__SACCUM_EPSILON__ 0x1P-7HK\000"
 10620      4343554D 
 10620      5F455053 
 10620      494C4F4E 
 10620      5F5F2030 
 10621              	.LASF917:
 10622 6049 5F5A4E35 		.ascii	"_ZN5rfm7018receive_address_p1EPKh\000"
 10622      72666D37 
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 260


 10622      30313872 
 10622      65636569 
 10622      76655F61 
 10623              	.LASF574:
 10624 606b 494E545F 		.ascii	"INT_FAST64_MAX (__INT_FAST64_MAX__)\000"
 10624      46415354 
 10624      36345F4D 
 10624      41582028 
 10624      5F5F494E 
 10625              	.LASF457:
 10626 608f 5F504F53 		.ascii	"_POSIX_SOURCE 1\000"
 10626      49585F53 
 10626      4F555243 
 10626      45203100 
 10627              	.LASF442:
 10628 609f 5F5F4E56 		.ascii	"__NVIC_PRIO_BITS 3\000"
 10628      49435F50 
 10628      52494F5F 
 10628      42495453 
 10628      203300
 10629              	.LASF63:
 10630 60b2 5F5F5549 		.ascii	"__UINT_FAST16_TYPE__ unsigned int\000"
 10630      4E545F46 
 10630      41535431 
 10630      365F5459 
 10630      50455F5F 
 10631              	.LASF368:
 10632 60d4 5F5F5548 		.ascii	"__UHA_IBIT__ 8\000"
 10632      415F4942 
 10632      49545F5F 
 10632      203800
 10633              	.LASF313:
 10634 60e3 5F5F4143 		.ascii	"__ACCUM_EPSILON__ 0x1P-15K\000"
 10634      43554D5F 
 10634      45505349 
 10634      4C4F4E5F 
 10634      5F203078 
 10635              	.LASF328:
 10636 60fe 5F5F554C 		.ascii	"__ULACCUM_EPSILON__ 0x1P-32ULK\000"
 10636      41434355 
 10636      4D5F4550 
 10636      53494C4F 
 10636      4E5F5F20 
 10637              	.LASF182:
 10638 611d 5F5F4C44 		.ascii	"__LDBL_DIG__ 15\000"
 10638      424C5F44 
 10638      49475F5F 
 10638      20313500 
 10639              	.LASF937:
 10640 612d 5F5A4E35 		.ascii	"_ZN5rfm707receiveERhPhS0_\000"
 10640      72666D37 
 10640      30377265 
 10640      63656976 
 10640      65455268 
 10641              	.LASF681:
 10642 6147 436F7265 		.ascii	"CoreDebug_DHCSR_DBGKEY_Msk (0xFFFFul << CoreDebug_D"
 10642      44656275 
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 261


 10642      675F4448 
 10642      4353525F 
 10642      4442474B 
 10643 617a 48435352 		.ascii	"HCSR_DBGKEY_Pos)\000"
 10643      5F444247 
 10643      4B45595F 
 10643      506F7329 
 10643      00
 10644              	.LASF852:
 10645 618b 5F5A4E34 		.ascii	"_ZN4pins16input_output_pin13direction_setENS_9direc"
 10645      70696E73 
 10645      3136696E 
 10645      7075745F 
 10645      6F757470 
 10646 61be 74696F6E 		.ascii	"tionE\000"
 10646      4500
 10647              	.LASF95:
 10648 61c4 5F5F5349 		.ascii	"__SIZE_WIDTH__ 32\000"
 10648      5A455F57 
 10648      49445448 
 10648      5F5F2033 
 10648      3200
 10649              	.LASF84:
 10650 61d6 5F5F5749 		.ascii	"__WINT_MIN__ 0U\000"
 10650      4E545F4D 
 10650      494E5F5F 
 10650      20305500 
 10651              	.LASF211:
 10652 61e6 5F5F464C 		.ascii	"__FLT64_DIG__ 15\000"
 10652      5436345F 
 10652      4449475F 
 10652      5F203135 
 10652      00
 10653              	.LASF499:
 10654 61f7 5F494E54 		.ascii	"_INT32_EQ_LONG \000"
 10654      33325F45 
 10654      515F4C4F 
 10654      4E472000 
 10655              	.LASF615:
 10656 6207 5343425F 		.ascii	"SCB_ICSR_PENDSVSET_Msk (1ul << SCB_ICSR_PENDSVSET_P"
 10656      49435352 
 10656      5F50454E 
 10656      44535653 
 10656      45545F4D 
 10657 623a 6F732900 		.ascii	"os)\000"
 10658              	.LASF83:
 10659 623e 5F5F5749 		.ascii	"__WINT_MAX__ 0xffffffffU\000"
 10659      4E545F4D 
 10659      41585F5F 
 10659      20307866 
 10659      66666666 
 10660              	.LASF114:
 10661 6257 5F5F494E 		.ascii	"__INT_LEAST8_WIDTH__ 8\000"
 10661      545F4C45 
 10661      41535438 
 10661      5F574944 
 10661      54485F5F 
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 262


 10662              	.LASF51:
 10663 626e 5F5F494E 		.ascii	"__INT_LEAST16_TYPE__ short int\000"
 10663      545F4C45 
 10663      41535431 
 10663      365F5459 
 10663      50455F5F 
 10664              	.LASF813:
 10665 628d 73686F72 		.ascii	"short unsigned int\000"
 10665      7420756E 
 10665      7369676E 
 10665      65642069 
 10665      6E7400
 10666              	.LASF289:
 10667 62a0 5F5F4C4C 		.ascii	"__LLFRACT_FBIT__ 63\000"
 10667      46524143 
 10667      545F4642 
 10667      49545F5F 
 10667      20363300 
 10668              	.LASF208:
 10669 62b4 5F5F464C 		.ascii	"__FLT32_HAS_INFINITY__ 1\000"
 10669      5433325F 
 10669      4841535F 
 10669      494E4649 
 10669      4E495459 
 10670              	.LASF413:
 10671 62cd 5F5F7468 		.ascii	"__thumb__ 1\000"
 10671      756D625F 
 10671      5F203100 
 10672              	.LASF186:
 10673 62d9 5F5F4C44 		.ascii	"__LDBL_MAX_10_EXP__ 308\000"
 10673      424C5F4D 
 10673      41585F31 
 10673      305F4558 
 10673      505F5F20 
 10674              	.LASF800:
 10675 62f1 52464D37 		.ascii	"RFM70_REG_TX_ADDR 0x10\000"
 10675      305F5245 
 10675      475F5458 
 10675      5F414444 
 10675      52203078 
 10676              	.LASF417:
 10677 6308 5F5F4152 		.ascii	"__ARMEL__ 1\000"
 10677      4D454C5F 
 10677      5F203100 
 10678              	.LASF799:
 10679 6314 52464D37 		.ascii	"RFM70_REG_RX_ADDR_P5 0x0F\000"
 10679      305F5245 
 10679      475F5258 
 10679      5F414444 
 10679      525F5035 
 10680              	.LASF341:
 10681 632e 5F5F4851 		.ascii	"__HQ_FBIT__ 15\000"
 10681      5F464249 
 10681      545F5F20 
 10681      313500
 10682              	.LASF638:
 10683 633d 5343425F 		.ascii	"SCB_AIRCR_VECTCLRACTIVE_Pos 1\000"
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 263


 10683      41495243 
 10683      525F5645 
 10683      4354434C 
 10683      52414354 
 10684              	.LASF86:
 10685 635b 5F5F5349 		.ascii	"__SIZE_MAX__ 0xffffffffU\000"
 10685      5A455F4D 
 10685      41585F5F 
 10685      20307866 
 10685      66666666 
 10686              	.LASF398:
 10687 6374 5F5F4152 		.ascii	"__ARM_FEATURE_SAT\000"
 10687      4D5F4645 
 10687      41545552 
 10687      455F5341 
 10687      5400
 10688              	.LASF834:
 10689 6386 5F5A4E34 		.ascii	"_ZN4pins10output_pinC4ERKS0_\000"
 10689      70696E73 
 10689      31306F75 
 10689      74707574 
 10689      5F70696E 
 10690              	.LASF189:
 10691 63a3 5F5F4C44 		.ascii	"__LDBL_MAX__ 1.7976931348623157e+308L\000"
 10691      424C5F4D 
 10691      41585F5F 
 10691      20312E37 
 10691      39373639 
 10692              	.LASF791:
 10693 63c9 52464D37 		.ascii	"RFM70_REG_STATUS 0x07\000"
 10693      305F5245 
 10693      475F5354 
 10693      41545553 
 10693      20307830 
 10694              	.LASF542:
 10695 63df 55494E54 		.ascii	"UINT8_MAX (__UINT8_MAX__)\000"
 10695      385F4D41 
 10695      5820285F 
 10695      5F55494E 
 10695      54385F4D 
 10696              	.LASF260:
 10697 63f9 5F5F5346 		.ascii	"__SFRACT_IBIT__ 0\000"
 10697      52414354 
 10697      5F494249 
 10697      545F5F20 
 10697      3000
 10698              	.LASF667:
 10699 640b 53797354 		.ascii	"SysTick_CTRL_TICKINT_Msk (1ul << SysTick_CTRL_TICKI"
 10699      69636B5F 
 10699      4354524C 
 10699      5F544943 
 10699      4B494E54 
 10700 643e 4E545F50 		.ascii	"NT_Pos)\000"
 10700      6F732900 
 10701              	.LASF529:
 10702 6446 5F5F696E 		.ascii	"__int_least8_t_defined 1\000"
 10702      745F6C65 
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 264


 10702      61737438 
 10702      5F745F64 
 10702      6566696E 
 10703              	.LASF497:
 10704 645f 6C6F6E67 		.ascii	"long +4\000"
 10704      202B3400 
 10705              	.LASF709:
 10706 6467 436F7265 		.ascii	"CoreDebug_DEMCR_VC_HARDERR_Msk (1ul << CoreDebug_DE"
 10706      44656275 
 10706      675F4445 
 10706      4D43525F 
 10706      56435F48 
 10707 649a 4D43525F 		.ascii	"MCR_VC_HARDERR_Pos)\000"
 10707      56435F48 
 10707      41524445 
 10707      52525F50 
 10707      6F732900 
 10708              	.LASF293:
 10709 64ae 5F5F4C4C 		.ascii	"__LLFRACT_EPSILON__ 0x1P-63LLR\000"
 10709      46524143 
 10709      545F4550 
 10709      53494C4F 
 10709      4E5F5F20 
 10710              	.LASF844:
 10711 64cd 5F5A4E34 		.ascii	"_ZN4pins10output_pin20direction_set_outputEv\000"
 10711      70696E73 
 10711      31306F75 
 10711      74707574 
 10711      5F70696E 
 10712              	.LASF224:
 10713 64fa 5F5F464C 		.ascii	"__FLT32X_MANT_DIG__ 53\000"
 10713      54333258 
 10713      5F4D414E 
 10713      545F4449 
 10713      475F5F20 
 10714              	.LASF436:
 10715 6511 5F5F4152 		.ascii	"__ARM_ASM_SYNTAX_UNIFIED__\000"
 10715      4D5F4153 
 10715      4D5F5359 
 10715      4E544158 
 10715      5F554E49 
 10716              	.LASF786:
 10717 652c 52464D37 		.ascii	"RFM70_REG_EN_RXADDR 0x02\000"
 10717      305F5245 
 10717      475F454E 
 10717      5F525841 
 10717      44445220 
 10718              	.LASF116:
 10719 6545 5F5F494E 		.ascii	"__INT16_C(c) c\000"
 10719      5431365F 
 10719      43286329 
 10719      206300
 10720              	.LASF448:
 10721 6554 5F5F434F 		.ascii	"__CORTEX_M (0x00)\000"
 10721      52544558 
 10721      5F4D2028 
 10721      30783030 
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 265


 10721      2900
 10722              	.LASF74:
 10723 6566 5F5F6370 		.ascii	"__cpp_runtime_arrays 198712\000"
 10723      705F7275 
 10723      6E74696D 
 10723      655F6172 
 10723      72617973 
 10724              	.LASF364:
 10725 6582 5F5F4441 		.ascii	"__DA_IBIT__ 32\000"
 10725      5F494249 
 10725      545F5F20 
 10725      333200
 10726              	.LASF712:
 10727 6591 5343535F 		.ascii	"SCS_BASE (0xE000E000)\000"
 10727      42415345 
 10727      20283078 
 10727      45303030 
 10727      45303030 
 10728              	.LASF932:
 10729 65a7 72656365 		.ascii	"receive_next_pipe\000"
 10729      6976655F 
 10729      6E657874 
 10729      5F706970 
 10729      6500
 10730              	.LASF494:
 10731 65b9 73686F72 		.ascii	"short +1\000"
 10731      74202B31 
 10731      00
 10732              	.LASF795:
 10733 65c2 52464D37 		.ascii	"RFM70_REG_RX_ADDR_P1 0x0B\000"
 10733      305F5245 
 10733      475F5258 
 10733      5F414444 
 10733      525F5031 
 10734              	.LASF755:
 10735 65dc 4C50435F 		.ascii	"LPC_TMR16B0 ((LPC_TMR_TypeDef *) LPC_CT16B0_BASE)\000"
 10735      544D5231 
 10735      36423020 
 10735      28284C50 
 10735      435F544D 
 10736              	.LASF764:
 10737 660e 4C50435F 		.ascii	"LPC_IOCON ((LPC_IOCON_TypeDef *) LPC_IOCON_BASE )\000"
 10737      494F434F 
 10737      4E202828 
 10737      4C50435F 
 10737      494F434F 
 10738              	.LASF11:
 10739 6640 5F5F4154 		.ascii	"__ATOMIC_ACQ_REL 4\000"
 10739      4F4D4943 
 10739      5F414351 
 10739      5F52454C 
 10739      203400
 10740              	.LASF782:
 10741 6653 52464D37 		.ascii	"RFM70_CMD_R_RX_PL_WID 0x60\000"
 10741      305F434D 
 10741      445F525F 
 10741      52585F50 
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 266


 10741      4C5F5749 
 10742              	.LASF342:
 10743 666e 5F5F4851 		.ascii	"__HQ_IBIT__ 0\000"
 10743      5F494249 
 10743      545F5F20 
 10743      3000
 10744              	.LASF170:
 10745 667c 5F5F4442 		.ascii	"__DBL_MIN_10_EXP__ (-307)\000"
 10745      4C5F4D49 
 10745      4E5F3130 
 10745      5F455850 
 10745      5F5F2028 
 10746              	.LASF984:
 10747 6696 31325379 		.ascii	"12SysTick_Type\000"
 10747      73546963 
 10747      6B5F5479 
 10747      706500
 10748              	.LASF627:
 10749 66a5 5343425F 		.ascii	"SCB_ICSR_VECTPENDING_Msk (0x1FFul << SCB_ICSR_VECTP"
 10749      49435352 
 10749      5F564543 
 10749      5450454E 
 10749      44494E47 
 10750 66d8 454E4449 		.ascii	"ENDING_Pos)\000"
 10750      4E475F50 
 10750      6F732900 
 10751              	.LASF746:
 10752 66e4 4C50435F 		.ascii	"LPC_SSP1_BASE (LPC_APB0_BASE + 0x58000)\000"
 10752      53535031 
 10752      5F424153 
 10752      4520284C 
 10752      50435F41 
 10753              	.LASF489:
 10754 670c 5F5F696E 		.ascii	"__int20\000"
 10754      74323000 
 10755              	.LASF722:
 10756 6714 5F5F494E 		.ascii	"__INLINE inline\000"
 10756      4C494E45 
 10756      20696E6C 
 10756      696E6500 
 10757              	.LASF571:
 10758 6724 494E545F 		.ascii	"INT_FAST32_MAX (__INT_FAST32_MAX__)\000"
 10758      46415354 
 10758      33325F4D 
 10758      41582028 
 10758      5F5F494E 
 10759              	.LASF583:
 10760 6748 50545244 		.ascii	"PTRDIFF_MIN (-PTRDIFF_MAX - 1)\000"
 10760      4946465F 
 10760      4D494E20 
 10760      282D5054 
 10760      52444946 
 10761              	.LASF458:
 10762 6767 5F504F53 		.ascii	"_POSIX_C_SOURCE\000"
 10762      49585F43 
 10762      5F534F55 
 10762      52434500 
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 267


 10763              	.LASF98:
 10764 6777 5F5F5549 		.ascii	"__UINTMAX_MAX__ 0xffffffffffffffffULL\000"
 10764      4E544D41 
 10764      585F4D41 
 10764      585F5F20 
 10764      30786666 
 10765              	.LASF167:
 10766 679d 5F5F4442 		.ascii	"__DBL_MANT_DIG__ 53\000"
 10766      4C5F4D41 
 10766      4E545F44 
 10766      49475F5F 
 10766      20353300 
 10767              	.LASF778:
 10768 67b1 52464D37 		.ascii	"RFM70_CMD_REUSE_TX_PL 0xE3\000"
 10768      305F434D 
 10768      445F5245 
 10768      5553455F 
 10768      54585F50 
 10769              	.LASF285:
 10770 67cc 5F5F554C 		.ascii	"__ULFRACT_IBIT__ 0\000"
 10770      46524143 
 10770      545F4942 
 10770      49545F5F 
 10770      203000
 10771              	.LASF896:
 10772 67df 6372635F 		.ascii	"crc_length\000"
 10772      6C656E67 
 10772      746800
 10773              	.LASF25:
 10774 67ea 5F5F4249 		.ascii	"__BIGGEST_ALIGNMENT__ 8\000"
 10774      47474553 
 10774      545F414C 
 10774      49474E4D 
 10774      454E545F 
 10775              	.LASF870:
 10776 6802 5F5A4E35 		.ascii	"_ZN5rfm70C4ERN4pins10output_pinES2_RNS0_9input_pinE"
 10776      72666D37 
 10776      30433445 
 10776      524E3470 
 10776      696E7331 
 10777 6835 53325F53 		.ascii	"S2_S2_PFvjES6_\000"
 10777      325F5046 
 10777      766A4553 
 10777      365F00
 10778              	.LASF878:
 10779 6844 69735F70 		.ascii	"is_present\000"
 10779      72657365 
 10779      6E7400
 10780              	.LASF78:
 10781 684f 5F5F494E 		.ascii	"__INT_MAX__ 0x7fffffff\000"
 10781      545F4D41 
 10781      585F5F20 
 10781      30783766 
 10781      66666666 
 10782              	.LASF53:
 10783 6866 5F5F494E 		.ascii	"__INT_LEAST64_TYPE__ long long int\000"
 10783      545F4C45 
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 268


 10783      41535436 
 10783      345F5459 
 10783      50455F5F 
 10784              	.LASF299:
 10785 6889 5F5F5341 		.ascii	"__SACCUM_FBIT__ 7\000"
 10785      4343554D 
 10785      5F464249 
 10785      545F5F20 
 10785      3700
 10786              		.ident	"GCC: (GNU) 7.2.0"
ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 269


DEFINED SYMBOLS
                            *ABS*:00000000 main.cpp
C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s:71     .text._ZN4pins16input_output_pin13direction_setENS_9directionE:00000000 $t
C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s:78     .text._ZN4pins16input_output_pin13direction_setENS_9directionE:00000000 _ZN4pins16input_output_pin13direction_setENS_9directionE
C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s:117    .text._ZN21input_output_pin_lpc119direction_set_inputEv:00000000 $t
C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s:124    .text._ZN21input_output_pin_lpc119direction_set_inputEv:00000000 _ZN21input_output_pin_lpc119direction_set_inputEv
C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s:124    .text._ZN21input_output_pin_lpc119direction_set_inputEv:00000000 .LTHUNK1
C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s:159    .text._ZN21input_output_pin_lpc119direction_set_inputEv:0000000c _ZThn4_N21input_output_pin_lpc119direction_set_inputEv
C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s:173    .text._ZN21input_output_pin_lpc119direction_set_inputEv:00000018 $d
C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s:178    .text._ZN21input_output_pin_lpc120direction_set_outputEv:00000000 $t
C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s:185    .text._ZN21input_output_pin_lpc120direction_set_outputEv:00000000 _ZN21input_output_pin_lpc120direction_set_outputEv
C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s:212    .text._ZN21input_output_pin_lpc13setEb:00000000 $t
C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s:219    .text._ZN21input_output_pin_lpc13setEb:00000000 _ZN21input_output_pin_lpc13setEb
C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s:241    .text._ZN21input_output_pin_lpc13getEv:00000000 $t
C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s:248    .text._ZN21input_output_pin_lpc13getEv:00000000 _ZN21input_output_pin_lpc13getEv
C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s:248    .text._ZN21input_output_pin_lpc13getEv:00000000 .LTHUNK2
C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s:283    .text._ZN21input_output_pin_lpc13getEv:0000000c _ZThn4_N21input_output_pin_lpc13getEv
C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s:297    .text._ZN21input_output_pin_lpc13getEv:00000018 $d
C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s:302    .text._Z4waitj:00000000 $t
C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s:309    .text._Z4waitj:00000000 _Z4waitj
C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s:392    .text._Z4waitj:00000038 $d
C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s:398    .text._Z7wait_msj:00000000 $t
C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s:405    .text._Z7wait_msj:00000000 _Z7wait_msj
C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s:430    .text._Z7wait_usj:00000000 $t
C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s:437    .text._Z7wait_usj:00000000 _Z7wait_usj
C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s:458    .text._Z14Receive_PacketR5rfm70RN4pins10output_pinE:00000000 $t
C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s:465    .text._Z14Receive_PacketR5rfm70RN4pins10output_pinE:00000000 _Z14Receive_PacketR5rfm70RN4pins10output_pinE
C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s:562    .text._Z14Receive_PacketR5rfm70RN4pins10output_pinE:0000005c $d
C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s:567    .text._Z5blinkRN4pins10output_pinEj:00000000 $t
C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s:574    .text._Z5blinkRN4pins10output_pinEj:00000000 _Z5blinkRN4pins10output_pinEj
C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s:623    .text._Z11Send_PacketR5rfm70hPKhh:00000000 $t
C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s:630    .text._Z11Send_PacketR5rfm70hPKhh:00000000 _Z11Send_PacketR5rfm70hPKhh
C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s:702    .text._Z11Send_PacketR5rfm70hPKhh:00000034 $d
C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s:708    .text.startup.main:00000000 $t
C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s:715    .text.startup.main:00000000 main
C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s:1311   .text.startup.main:00000158 $d
C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s:1335   .rodata._ZTV21input_output_pin_lpc1:00000000 _ZTV21input_output_pin_lpc1
C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s:1332   .rodata._ZTV21input_output_pin_lpc1:00000000 $d
C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s:1353   .bss.receive_led:00000000 receive_led
C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s:1359   .bss.transmit_led:00000000 transmit_led
C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s:1354   .bss.receive_led:00000000 $d
C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s:1360   .bss.transmit_led:00000000 $d
C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s:1365   .rodata._ZL6tx_buf:00000000 _ZL6tx_buf
                     .debug_frame:00000010 $d
                           .group:00000000 wm4.0.c78eeed12c58b02cb443484f13096dde
                           .group:00000000 wm4.LPC11xx.h.22.97bcf1be2c5f6779936b22057a56ffc7
                           .group:00000000 wm4.core_cm0.h.25.00f8ea3d55014cac38a7e13b36921eaf
                           .group:00000000 wm4.features.h.33.863f3be0b2e521e624fcc7d6fa31d2ca
                           .group:00000000 wm4._default_types.h.15.247e5cd201eca3442cbf5404108c4935
                           .group:00000000 wm4._intsup.h.10.cce27fed8484c08a33f522034c30d2b5
                           .group:00000000 wm4._stdint.h.10.c24fa3af3bc1706662bb5593a907e841
                           .group:00000000 wm4.stdint.h.23.d53047a68f4a85177f80b422d52785ed
                           .group:00000000 wm4.core_cm0.h.76.4efc00236d202f2f883d0b40eb2e0180
                           .group:00000000 wm4.system_LPC11xx.h.25.d8f18363fc12024090916ce41adb70c4
                           .group:00000000 wm4.LPC11xx.h.507.a44acb71f91a82d6b50ad849c423f394
                           .group:00000000 wm4.rfm70.h.40.8a1699fd4d2a98c61874101f853a9e36

ARM GAS  C:\Users\Wouter\AppData\Local\Temp\ccqPrBQX.s 			page 270


UNDEFINED SYMBOLS
_ZN5rfm7018receive_fifo_emptyEv
_ZN5rfm7013register_readEh
_ZN5rfm7011buffer_readEhPhh
_ZN5rfm7014register_writeEhh
_ZN5rfm7013mode_transmitEv
_ZN5rfm7012buffer_writeEcPKhh
_ZN5rfm7012mode_receiveEv
_ZN5rfm704initEv
_ZN5rfm707channelEh
_ZN5rfm7010is_presentEv
