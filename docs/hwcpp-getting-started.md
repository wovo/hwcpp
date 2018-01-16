HwCpp Getting Started
===

<!-- update table_of_contents( input ) -->

<!-- update end -->

# 1 Introduction

HwCpp is (only) a library. 
To build and dowload an application you need, 
besides HwCpp and your application code, 
at least the following:
 - a toolchain (compiler, linker, and associated tools) for your target(s)
 - the header files for the target device (in most cases provided by the vendor)
 - a linkerscript suitable for the target device
 - a download, communication and/or debug tool for the target device
 - scripts to invoke the various tools with appropriate parameters
 - (optionally) an IDE to edit the source and invoke the scripts

This document explains how to get started with HwCpp using bmptk and CodeLite,
for now only for windows.

# 2 Download and install

Download and install:
 - Python 3.6 from http://www.python.org to C:/python36
 - CodeLite from https://codelite.org (I used 11.0.0)
 - Git from https://git-scm.com/download/win
 - GCC for windows native from https://mingw-w64.org/doku.php/download/mingw-builds to
 - GCC for avr8 from http://blog.zakkemble.co.uk/avr-gcc-builds/ to
 - GCC for arm/cortex from http://gnutoolchains.com/arm-eabi/ to
 - ST-LINK tool from http://www.st.com/content/st_com/en/products/development-tools/stm32-programmers/stsw-link004.html 
   to C:/Program Files (x86)/STMicroelectronics/STM32 ST-LINK Utility


Create a directory of your choice. 
Go there, and clone (right-click in the explorer, "Git Bash Here", git clone ...) these repositories:
 - github/wovo/bmptk
 - github/wovo/hwcpp

Add the bmptk/tools directory to your PATH.

When you installed on of the applications to a different directory, you
must edit hwcpp/

# 3 First use

## 3.1 Bmptk

 - Open the hwcpp/demos/native/hello directory in windows explorer.
 
 - right-click in the files area and open a 'Git Bash Here' window.  
   - If that option doesn't show, Git wasn't installed correctly.
   
 - In the git window, give the command 'bmptk-make build'
   - If bmptk-make can't be found, you didn't add the bmptk/tools directory to your PATH.
   - If you get a 'The system cannot find the path specified' error you either 
   didn't install thge MingW toolchain, or the ....

## 3.2 CodeLite

 - Open the hwcpp/demos/native directory in windows explorer.

 - Run (double-click) the update_codelite_workspace.bat file.
This should produce a message window that shows that bmptk projects are created for each subdirectory.
Press return to close the window.
 - Run (double-click) the _codelite.workspace file. If windows doesn't know how to open a
 file with this extension, associate it with the CodelIte executable. Now CodeLite starts.




