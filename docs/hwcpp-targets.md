HwCpp Targets
===

<!--
TO DO list
- complete board descriptions
- add foto's
- add links to external info
- format the TOC better? hierarchical TOC's?
- other name for blue brick
- blue brick resources
- http://en.mxchip.com/product/wifi_product/38
- other due/sam uarts
- uno timer
- dac's
- uarts are also a service, not just two pins!
-->

<style>
table{
    border-collapse: collapse;
    border-spacing: 0;
    border:2px solid #ff0000;
}

th{
    border:2px solid #000000;
}

td{
    border:1px solid #000000;
}
</style>

<!-- update table_of_contents( input ) -->
  - [1 Introduction](#toc-anchor-0)

  - [2 Native](#toc-anchor-1)

  - [3 Chip targets](#toc-anchor-2)

    - [3.1 atMega328](#toc-anchor-3)

      - [3.1.1 Specifying this target](#toc-anchor-4)

      - [3.1.2 Target properties](#toc-anchor-5)

      - [3.1.3 Clock](#toc-anchor-6)

      - [3.1.4 IO items](#toc-anchor-7)

      - [3.1.5 example](#toc-anchor-8)

      - [3.1.6 Resources](#toc-anchor-9)

    - [3.2 atSam3x8e](#toc-anchor-10)

      - [3.2.1 Specifying this target](#toc-anchor-11)

      - [3.2.2 Target properties](#toc-anchor-12)

      - [3.2.3 Clock](#toc-anchor-13)

      - [3.2.4 IO items](#toc-anchor-14)

      - [3.2.5 example](#toc-anchor-15)

      - [3.2.6 Resources](#toc-anchor-16)

    - [3.3 STM32F103C8](#toc-anchor-17)

      - [3.3.1 Specifying this target](#toc-anchor-18)

      - [3.3.2 Target properties](#toc-anchor-19)

      - [3.3.3 Clock](#toc-anchor-20)

      - [3.3.4 IO items](#toc-anchor-21)

      - [3.3.5 example](#toc-anchor-22)

      - [3.3.6 Resources](#toc-anchor-23)

  - [4 Board targets](#toc-anchor-24)

    - [4.1 Arduino Uno](#toc-anchor-25)

      - [4.1.1 Specifying this target](#toc-anchor-26)

      - [4.1.2 Target properties](#toc-anchor-27)

      - [4.1.3 Clock](#toc-anchor-28)

      - [4.1.4 IO items](#toc-anchor-29)

      - [4.1.5 example](#toc-anchor-30)

      - [4.1.6 Resources](#toc-anchor-31)

    - [4.2 Arduino Due](#toc-anchor-32)

      - [4.2.1 Specifying this target](#toc-anchor-33)

      - [4.2.2 Target properties](#toc-anchor-34)

      - [4.2.3 Clock](#toc-anchor-35)

      - [4.2.4 IO items](#toc-anchor-36)

      - [4.2.5 Resources](#toc-anchor-37)

    - [4.3 Blue Pill](#toc-anchor-38)

      - [4.3.1 Specifying this target](#toc-anchor-39)

      - [4.3.2 Resources](#toc-anchor-40)

    - [4.4 Blue Brick](#toc-anchor-41)

      - [4.4.1 Specifying this target](#toc-anchor-42)

      - [4.4.2 Resources](#toc-anchor-43)

<!-- update end -->

<!-- -------------------------------------------------------------------- -->
<!-- -------------------------------------------------------------------- -->

<a name="toc-anchor-0"></a>

# 1 Introduction

This document describes the targets supported by HwCpp.
A target is either a (micro-controller) chip, 
or a board with such a chip and probably some other things.

The preferred way to use HwCpp is to include hwcpp.hpp in
the (single) source file, and specify the target on the
compiler command line as -DHWCPP_TARGET_*target_name*

When bmptk is used, the target is specified in the Makefile as
```
TARGET := *target_name*
```
and bmptk will put the appropriate define on the command line.

Alternatively, the application source file can include the 
targets/hwcpp-chip-*target-name*.hpp file directly.


<!-- -------------------------------------------------------------------- -->
<!-- -------------------------------------------------------------------- -->

<a name="toc-anchor-1"></a>

# 2 Native

HwCpp can build for the native target.
This might be useful for module tests, but is otherwise of little use.
Currently, HwCpp offers nothing specific to the native target.


<!-- -------------------------------------------------------------------- -->
<!-- -------------------------------------------------------------------- -->

<a name="toc-anchor-2"></a>

# 3 Chip targets

<!-- -------------------------------------------------------------------- -->
<!-- -------------------------------------------------------------------- -->

<a name="atmega328"></a>
<a name="toc-anchor-3"></a>

## 3.1 atMega328

![atMega328 chip](images/atmega328.png)

<a name="toc-anchor-4"></a>

### 3.1.1 Specifying this target

<table>
<tr><td>  bmptk makefile line           </td>
   <td>      TARGET := atmega328                  </td></tr>
<tr><td>  compiler command line define  </td>
   <td>      -DHWCPP_TARGET_atmega328             </td></tr>
<tr><td>  direct include                </td>
   <td>      #include "hwcpp-target-atmega328"    </td></tr>
</table>

<a name="toc-anchor-5"></a>

### 3.1.2 Target properties

<table>
<tr><td>   RAM     </td><td>   2k          </td></tr>
<tr><td>   FLASH   </td><td>  32k          </td></tr>
<tr><td>   EEPROM  </td><td>   1k          </td></tr>
<tr><td>   GPIO    </td><td>   23          </td></tr>
<tr><td>   CPU     </td><td>   8 bit AVR   </td></tr>
<tr><td>   CLOCK   </td>
   <td>   up to 8 MHz internal, up to 20 MHz Xtal    </td></tr>
</table>

This is an 8-bit AVR chip, popularized by the Arduino Uno.
The AVR architecture has separate code and data address spaces.
At C++ level this means that const data ends up in RAM because
pointers can only point into RAM, not into ROM.
You can still store constant data in ROM (using 
[PROGMEM](http://www.nongnu.org/avr-libc/user-manual/pgmspace.html) ), 
but you must copy it to RAM before use, 
or address it using special functions. 

<a name="toc-anchor-6"></a>

### 3.1.3 Clock

The clock can be either internal (1 MHz or 8 Mhz) or external
(Xtal up to 20 MHz). This is done in the configuration fuses,
which are NOT under program control.
Hence the clock frequency has no default (it must specified explicitly), 
and HwCpp assumes that you do this correctly.

<table>
<tr><td rowspan="3"> supported clock parameter values </td>
       <td> 1'000'000  </td></tr>
   <tr><td> 16'000'000 </td></tr>
   <tr><td> 20'000'000 </td></tr>
</table>

At the moment, only busy waiting is available.

<table>
<tr>
   <th> Item name </th> 
   <th> HwCpp type </th>
</tr>  
<tr><td> timing   </td><td> waiting </td></tr>
<tr><td> waiting  </td><td> waiting </td></tr>
</table>

<a name="toc-anchor-7"></a>

### 3.1.4 IO items

<table>
<tr>
   <th> Service </th>
   <th> Item name </th> 
   <th> HwCpp type </th>
   <th> Shares GPIO </th>
</tr>  
<tr><td> GPIO  </td><td> b0 .. b7, c0 .. c6, d0 .. d7  </td>
   <td> pin_in_out </td><td></td></tr>
<tr><td> ADC   </td><td> a0 .. a5  </td>
   <td> adc<10>    </td><td> c0 .. c5 </td></tr>
<tr><td rowspan="4" > SPI  </td>
      <td> sck   </td><td> pin_out </td><td> b5  </td></tr>
  <tr><td> miso  </td><td> pin_in  </td><td> b4  </td></tr>  
  <tr><td> mosi  </td><td> pin_out </td><td> b3  </td></tr>  
  <tr><td> ss    </td><td> pin_out </td><td> b2  </td></tr>  
<tr><td rowspan="2"> I2C   </td>
      <td> scl   </td><td> pin_oc  </td><td> c5  </td></tr>
  <tr><td> sda   </td><td> pin_oc  </td><td> c4  </td></tr>
<tr><td rowspan="2"> UART  </td>
      <td> tx   </td><td> pin_out  </td><td> d1  </td></tr>
  <tr><td> rx   </td><td> pin_in   </td><td> d0  </td></tr>
</table>

<a name="toc-anchor-8"></a>

### 3.1.5 example

=> TBW

<a name="toc-anchor-9"></a>

### 3.1.6 Resources

- [Wikipedia page](https://en.wikipedia.org/wiki/ATmega328)
- [Manufacturer's page](https://www.microchip.com/wwwproducts/en/ATmega328)
- [Summary datasheet](http://ww1.microchip.com/downloads/en/DeviceDoc/Atmel-42735-8-bit-AVR-Microcontroller-ATmega328-328P_Summary.pdf)
- [Complete datasheet](http://ww1.microchip.com/downloads/en/DeviceDoc/Atmel-42735-8-bit-AVR-Microcontroller-ATmega328-328P_Datasheet.pdf)
- [GCC for AVR8](http://blog.zakkemble.co.uk/avr-gcc-builds/)


<!-- -------------------------------------------------------------------- -->
<!-- -------------------------------------------------------------------- -->

<a name="atsam3x8e"></a>
<a name="toc-anchor-10"></a>

## 3.2 atSam3x8e

![atsam3x8e chip](images/atsam3x8e.png)

<a name="toc-anchor-11"></a>

### 3.2.1 Specifying this target

<table>
<tr><td>  bmptk makefile line           </td>
   <td>      TARGET := atsam3x8e                  </td></tr>
<tr><td>  compiler command line define  </td>
   <td>      -DHWCPP_TARGET_atsam3x8e             </td></tr>
<tr><td>  direct include                </td>
   <td>      #include "hwcpp-target-atsam3x8e"    </td></tr>
</table>

<a name="toc-anchor-12"></a>

### 3.2.2 Target properties

<table>
<tr><td>   RAM     </td><td>   96k               </td></tr>
<tr><td>   FLASH   </td><td>  256k               </td></tr>
<tr><td>   GPIO    </td><td>   103               </td></tr>
<tr><td>   CPU     </td><td>  32 bit Cortex-M3   </td></tr>
<tr><td>   CLOCK   </td>
   <td>   8 MHz internal, up to 84 MHz with Xtal and PLL  </td></tr>
</table>

This is a 32-bit Cortex-M3 chip, popularized by the Arduino Due.

<a name="toc-anchor-13"></a>

### 3.2.3 Clock

The chip starts on the 8 Mhz internal clock.
With a 12 Mhz crystal and the PLL the clock bet set to 84 MHz
by the application.
The clock frequency has no default (it must specified explicitly).

<table>
<tr><td rowspan="2"> supported clock parameter values </td>
       <td> 8'000'000                           </td></tr>
   <tr><td> 84'000'000 (assumes 12MHz crystal)  </td></tr>
</table>

Both busy waiting and clock-based waiting are available.
Both use the SysTick timer.

<table>
<tr>
   <th> Item name </th> 
   <th> HwCpp type </th>
</tr>  
<tr><td> timing    </td><td> clocking  </td></tr>
<tr><td> waiting   </td><td> waiting   </td></tr>
<tr><td> clocking  </td><td> clocking  </td></tr>
</table>

<a name="toc-anchor-14"></a>

### 3.2.4 IO items

=> TBW

<a name="toc-anchor-15"></a>

### 3.2.5 example

=> TBW

<a name="toc-anchor-16"></a>

### 3.2.6 Resources

- [Manufacturer's page](http://www.microchip.com/wwwproducts/en/ATsam3x8e)
- [SAM3X/SAM3A series datasheet](http://ww1.microchip.com/downloads/en/DeviceDoc/Atmel-11057-32-bit-Cortex-M3-Microcontroller-SAM3X-SAM3A_Datasheet.pdf)
- [GCC for ARM/Cortex](http://gnutoolchains.com/arm-eabi/)


<!-- -------------------------------------------------------------------- -->
<!-- -------------------------------------------------------------------- -->

<a name="stm32f103c8"></a>
<a name="toc-anchor-17"></a>

## 3.3 STM32F103C8

![STM32F103C8 chip](images/stm32f103c8.png)

<a name="toc-anchor-18"></a>

### 3.3.1 Specifying this target

<table>
<tr><td>  bmptk makefile line           </td>
   <td>      TARGET := stm32f103c8                </td></tr>
<tr><td>  compiler command line define  </td>
   <td>      -DHWCPP_TARGET_stm32f103c8           </td></tr>
<tr><td>  direct include                </td>
   <td>      #include "hwcpp-target-stm32f103c8"  </td></tr>
</table>

<a name="toc-anchor-19"></a>

### 3.3.2 Target properties

<table>
<tr><td>   RAM     </td><td>   20k               </td></tr>
<tr><td>   FLASH   </td><td>   64k               </td></tr>
<tr><td>   GPIO    </td><td>    37               </td></tr>
<tr><td>   CPU     </td><td>  32 bit Cortex-M3   </td></tr>
<tr><td>   CLOCK   </td>
   <td>   8 MHz internal, up to 72 MHz with Xtal and PLL  </td></tr>
</table>

This is a 32-bit Cortex-M3 chip, popularized by the Arduino Maple,
and used in al sorts of cheap Chinese boards, like the Blue Pill.

<a name="toc-anchor-20"></a>

### 3.3.3 Clock

The chip starts on the 8 Mhz internal clock.
With an 8 Mhz crystal and the PLL the clock bet set to 72 MHz
by the application.
The clock frequency has no default (it must specified explicitly).

<table>
<tr><td rowspan="2"> supported clock parameter values </td>
       <td> 8'000'000                            </td></tr>
   <tr><td> 72'000'000 (assumes 12MHz crystal)   </td></tr>
</table>

Both busy waiting and clock-based waiting are available.
Both use the SysTick timer.

<table>
<tr>
   <th> Item name </th> 
   <th> HwCpp type </th>
</tr>  
<tr><td> timing    </td><td> clocking  </td></tr>
<tr><td> waiting   </td><td> waiting   </td></tr>
<tr><td> clocking  </td><td> clocking  </td></tr>
</table>

<a name="toc-anchor-21"></a>

### 3.3.4 IO items

=> TBW

<a name="toc-anchor-22"></a>

### 3.3.5 example

=> TBW

<a name="toc-anchor-23"></a>

### 3.3.6 Resources

- [Manufacturer's page](http://www.st.com/en/microcontrollers/stm32f103c8.html)
- [STM32F103C8 datasheet](http://www.st.com/content/ccc/resource/technical/document/datasheet/33/d4/6f/1d/df/0b/4c/6d/CD00161566.pdf/files/CD00161566.pdf/jcr:content/translations/en.CD00161566.pdf)
- [STM32F103C8 product specification](http://www.st.com/content/ccc/resource/technical/document/datasheet/33/d4/6f/1d/df/0b/4c/6d/CD00161566.pdf/files/CD00161566.pdf/jcr:content/translations/en.CD00161566.pdf)
- [GCC for ARM/Cortex](http://gnutoolchains.com/arm-eabi/)


<!-- -------------------------------------------------------------------- -->
<!-- -------------------------------------------------------------------- -->

<a name="toc-anchor-24"></a>

# 4 Board targets

<!-- -------------------------------------------------------------------- -->
<!-- -------------------------------------------------------------------- -->

<a name="toc-anchor-25"></a>

## 4.1 Arduino Uno

![Arduino Uno board](images/arduino-uno.png)

<a name="toc-anchor-26"></a>

### 4.1.1 Specifying this target

<table>
<tr><td>  bmptk makefile line           </td>
   <td>      TARGET := arduino_uno                </td></tr>
<tr><td>  compiler command line define  </td>
   <td>      -DHWCPP_TARGET_arduino_uno           </td></tr>
<tr><td>  direct include                </td>
   <td>      #include "hwcpp-target-arduino-uno"  </td></tr>
</table>

<a name="toc-anchor-27"></a>

### 4.1.2 Target properties

<table>
<tr><td>  Micro-controller  </td><td> [atmega328](#atmega328)    </td></tr>
<tr><td>  Clock             </td><td> Xtal 16 MHz                </td></tr>
<tr><td>  Digital IO pins   </td><td> d0 .. d19 (5V)             </td></tr>
<tr><td>  Analog input pins </td><td> a0 .. a5 (overlap)         </td></tr>
<tr><td>  Downloading       </td><td> USB bootloader, 2x3 ISP    </td></tr>
<tr><td>  Power             </td><td> USB, barrel connector      </td></tr>
<tr><td>  Peripherals       </td><td> LED                        </td></tr>
</table>

This is the modern version of the original, 
still tremendously popular Arduino board.
There are various clones of this board, which are equivalent but 
different in small details, for instance the USB-to-serial chip.

The connector pin names are the Arduino pin names, which
have no relation with the chip pin names.

The chip can be programmed directly through the 2x3 ICSP pin header,
or through the USB-to-serial converter, using the 
pre-programmed Arduino bootloader. 
This is a hands-off processes: 
the target chip is forced to reset and into bootload mode 
by the RTS and DTR lines of the serial interface.

<a name="toc-anchor-28"></a>

### 4.1.3 Clock

The atMega328 chip runs from the 16 Mhz crystal,
hence this is the default frequency.
You could specify another frequency supported
by the [atMega328](#atmega328) target.

<table>
<tr><td rowspan="1"> default clock parameter values </td>
       <td> 16'000'000                            </td></tr>
</table>

At the moment, only busy waiting is available.

<table>
<tr>
   <th> Item name </th> 
   <th> HwCpp type </th>
</tr>  
<tr><td> timing   </td><td> waiting </td></tr>
<tr><td> waiting  </td><td> waiting </td></tr>
</table>

<a name="toc-anchor-29"></a>

### 4.1.4 IO items

<table>
<tr>
   <th> Service </th>
   <th> Item name </th> 
   <th> HwCpp type </th>
   <th> Shares GPIO </th>
</tr>  
<tr><td> GPIO  </td><td> d0 .. d19  </td>
   <td> pin_in_out </td><td></td></tr>
<tr><td> ADC   </td><td> a0 .. a5  </td>
   <td> adc<10>    </td><td> d14 .. d19 </td></tr>
<tr><td rowspan="2"> UART  </td>
      <td> tx   </td><td> pin_out  </td><td> d1  </td></tr>
  <tr><td> rx   </td><td> pin_in   </td><td> d0  </td></tr>
<tr><td> LED </td>
      <td> led   </td><td> pin_out  </td><td> d13  </td></tr>  
</table>

<a name="toc-anchor-30"></a>

### 4.1.5 example

=> TBW

<a name="toc-anchor-31"></a>

### 4.1.6 Resources

- [atMega328 target](#atmega328)
- [Uno page at arduino.cc](https://store.arduino.cc/usa/arduino-uno-rev3)
- [Reference schematic from arduino.cc](https://www.arduino.cc/en/uploads/Main/arduino-uno-schematic.pdf)
- [Uno pinout](images/arduino-uno.png)


<!-- -------------------------------------------------------------------- -->
<!-- -------------------------------------------------------------------- -->



<a name="toc-anchor-32"></a>

## 4.2 Arduino Due

![Arduino Due board](images/arduino-due.png)

<a name="toc-anchor-33"></a>

### 4.2.1 Specifying this target

<table>
<tr><td>  bmptk makefile line           </td>
   <td>      TARGET := arduino_due                </td></tr>
<tr><td>  compiler command line define  </td>
   <td>      -DHWCPP_TARGET_arduino_due           </td></tr>
<tr><td>  direct include                </td>
   <td>      #include "hwcpp-target-arduino-due"  </td></tr>
</table>

<a name="toc-anchor-34"></a>

### 4.2.2 Target properties

<table>
<tr><td>  Micro-controller  </td><td> [atsam3x8e](#atsam3x8e)    </td></tr>
<tr><td>  Clock             </td><td> Xtal 12 MHz => 84 MHz      </td></tr>
<tr><td>  Digital IO pins   </td><td> d0 .. d76 (3.3V)           </td></tr>
<tr><td>  Analog input pins </td><td> a0 .. a11 (overlap)        </td></tr>
<tr><td>  Downloading       </td><td> USB bootloader, 2x3 ISP    </td></tr>
<tr><td>  Power             </td><td> 2 x USB, barrel connector  </td></tr>
<tr><td>  Peripherals       </td><td> LED                        </td></tr>
</table>

This Arduino board has the same form factor as the Arduino Mega, 
but uses the much more powerful atSam3xa Cortex-M3 micro-controller.
Note that unlike the Mega the IO voltage of the Due is 3.3V.

The connector pin names are the Arduino pin names, which
have no relation with the chip pin names.

The Due has two USB connectors. Both can be used to power the board.
The 'native' USB connector connects directly to the atsam3x8e USB interface. 
The 'programming' USB connector connects to an dedicated AVR chip 
that takes care of programming the atsam3x8e.
This programming process is started by setting the USB-serial interface
to 1200 baud, so take care not to use that baudrate in your application.
The programming process can be done hands-off. 

When an Arduino Due is powered, it does NOT automatically run the 
programmed application: a reset is required.

<a name="toc-anchor-35"></a>

### 4.2.3 Clock

The chip starts on the 8 Mhz internal clock.
With a 12 Mhz crystal and the PLL the clock bet set to 84 MHz,
which is the default.

<table>
<tr><td rowspan="2"> supported clock parameter values </td>
       <td> 8'000'000                           </td></tr>
   <tr><td> 84'000'000 (default              )  </td></tr>
</table>

Both busy waiting and clock-based waiting are available.
Both use the SysTick timer.

<table>
<tr>
   <th> Item name </th> 
   <th> HwCpp type </th>
</tr>  
<tr><td> timing    </td><td> clocking  </td></tr>
<tr><td> waiting   </td><td> waiting   </td></tr>
<tr><td> clocking  </td><td> clocking  </td></tr>
</table>

<a name="toc-anchor-36"></a>

### 4.2.4 IO items

<table>
<tr>
   <th> Service </th>
   <th> Item name </th> 
   <th> HwCpp type </th>
   <th> Shares GPIO </th>
</tr>  
<tr><td> GPIO  </td><td> d0 .. d76  </td>
   <td> pin_in_out </td><td></td></tr>
<tr><td> ADC   </td><td> a0 .. a11  </td>
   <td> adc<12>    </td><td> d54 .. d65 </td></tr>
<tr><td rowspan="2"> UART </td>
      <td> tx   </td><td> pin_out  </td><td> d1  </td></tr>
  <tr><td> rx   </td><td> pin_in   </td><td> d0  </td></tr>
<tr><td rowspan="4"> I2C </td>
      <td> scl   </td><td> pin_oc   </td><td> d21  </td></tr>
  <tr><td> sda   </td><td> pin_oc   </td><td> d20  </td></tr>
  <tr><td> scl1  </td><td> pin_oc   </td><td> d71  </td></tr>
  <tr><td> sda1  </td><td> pin_oc   </td><td> d70  </td></tr>
<tr><td rowspan="4"> SPI </td>
      <td> sck   </td><td> pin_out  </td><td> d74  </td></tr>
  <tr><td> miso  </td><td> pin_in   </td><td> d76  </td></tr>
  <tr><td> mosi  </td><td> pin_out  </td><td> d75  </td></tr>
  <tr><td> cs0   </td><td> pin_out  </td><td> d10  </td></tr>
  <tr><td> cs1   </td><td> pin_out  </td><td> d4  </td></tr>
<tr><td> LED </td>
      <td> led   </td><td> pin_out  </td><td> d13  </td></tr>
</table>

<a name="toc-anchor-37"></a>

### 4.2.5 Resources

- [atsam3x8e target](#atsam3x8e)
- [Due page at arduino.cc](https://store.arduino.cc/arduino-due)
- [Reference schematic from arduino.cc](https://www.arduino.cc/en/uploads/Main/arduino-Due-schematic.pdf)
- [Due pinout](images/arduino-due.png)


<!-- -------------------------------------------------------------------- -->
<!-- -------------------------------------------------------------------- -->

<a name="toc-anchor-38"></a>

## 4.3 Blue Pill

![Blue Pill board](images/blue-pill.png)

<a name="toc-anchor-39"></a>

### 4.3.1 Specifying this target

<table>
<tr><td>  bmptk makefile line           </td>
   <td>      TARGET := blue_pill                  </td></tr>
<tr><td>  compiler command line define  </td>
   <td>      -DHWCPP_TARGET_blue_pill             </td></tr>
<tr><td>  direct include                </td>
   <td>      #include "hwcpp-target-blue-pill"    </td></tr>
</table>

This is a popular and very cheap board with the 
STM32F103C8 micro-controller. 

The board has a micro-usb connector which is connected to the
chip's USB slave pins and can power the board,  but
this connector can't be used for hands-off bootloading.

There is a reset button and  pins that determine the bootmode are 
available on two jumpers, hence chip can be programmed by
in any way supported by the chip, but this would require fiddling with
the jumpers and pressing the reset button.

My preferred way to program this board is using a 
(clone) ST-LINK V2 programmer.
This requires a four-wire connection, which is (unfortunately)
not straight, check the pictures.

<a name="toc-anchor-40"></a>

### 4.3.2 Resources

- [stm32f103c8 target](#stm32f103c8]
- [Wiki page](http://wiki.stm32duino.com/index.php?title=Blue_Pill)
- [Programming with an ST-LINK V2](https://github.com/rogerclarkmelbourne/Arduino_STM32/wiki/Programming-an-STM32F103XXX-with-a-generic-"ST-Link-V2"-programmer-from-Linux)
- [Reference schematic](images/blue-pill-circuit.png)
- [Blue pill pinout](images/blue-pill-pinout.png)


<!-- -------------------------------------------------------------------- -->
<!-- -------------------------------------------------------------------- -->

<a name="toc-anchor-41"></a>

## 4.4 Blue Brick

![Blue Brick board](images/blue-brick.png)

<a name="toc-anchor-42"></a>

### 4.4.1 Specifying this target

<table>
<tr><td>  bmptk makefile line           </td>
   <td>      TARGET := blue_brick                 </td></tr>
<tr><td>  compiler command line define  </td>
   <td>      -DHWCPP_TARGET_blue_brick            </td></tr>
<tr><td>  direct include                </td>
   <td>      #include "hwcpp-target-blue-brick"   </td></tr>
</table>

reset button, power LED
button, LED, 24C02 eeprom, coin battery
TF-card, 8-pin FLASH chip, 
ESP8266, NRF24L01, SW1053/W5500, OLED/TFT, bluetooth serial

This is a non-name board that is available on various sites. 
It uses the same STM32F103C8 chip as the Blue Pill, hence
I call it the Blue Brick. 
The main attraction of this board it that it some on-board 
peripherals (which can either be present or be unpopulated),
and connectors for a range of peripheral boards.

The board has a micro-usb connector which is connected to the
chip's USB slave pins and can power the board,  but
this connector can't be used for hands-off bootloading.

There is a reset button and  pins that determine the bootmode are 
available on two jumpers, hence chip can be programmed by
in any way supported by the chip, but this would require fiddling with
the jumpers and pressing the reset button.

My preferred way to program this board is using a 
(clone) ST-LINK V2 programmer.
This requires a four-wire connection, which is (unfortunately)
not straight, check the pictures.

<a name="toc-anchor-43"></a>

### 4.4.2 Resources

- [stm32f103c8 target](#stm32f103c8]
- [Wiki page](http://wiki.stm32duino.com/index.php?title=Blue_Pill)
- [Programming with an ST-LINK V2](https://github.com/rogerclarkmelbourne/Arduino_STM32/wiki/Programming-an-STM32F103XXX-with-a-generic-"ST-Link-V2"-programmer-from-Linux)
- [Reference schematic](images/blue-pill-circuit.png)
- [Blue pill pinout](images/blue-pill-pinout.png)