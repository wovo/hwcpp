HwCpp Getting Started
===

<!-- update table_of_contents( input ) -->
 - [xIntroduction](#toc-anchor-0)

 - [Download and install](#toc-anchor-1)

 - [First use](#toc-anchor-2)

 - [Bmptk](#toc-anchor-3)

 - [CodeLite](#toc-anchor-4)

<!-- update end -->

<a name="toc-anchor-0"></a>
# Introduction

HwCpp is (only) a library. 
To build and dowload an application you need, 
besides HwCpp and your application code, 
the folling:
 - a toolchain (compiler, linker, and associated tools)
 - the header files for the target device (in most cases provided by the vendor)
 - a linker script suitable for the target device
 - a download, communication and/or debug tool for the target device
 - scripts to invoke the various tools with appropriate parameters
 - (optionally) an IDE to edit the source and invoke the scripts

This document explains how to get started with HwCpp using bmptk and CodeLite,
for now only for windows.

<a name="toc-anchor-1"></a>
# Download and install

Download and install using the default settings:
 - Python : http://www.python.org I used 3.6
 - CodeLite : https://codelite.org I used 11.0.0
 - Git : https://git-scm.com/download/win

Download and install the GCC toolchains (at least 7.2.0 required).
 - GCC for windows native : https://mingw-w64.org/doku.php/download/mingw-builds 
 - GCC for avr8 : http://blog.zakkemble.co.uk/avr-gcc-builds/ 
 - GCC for arm/cortex : http://gnutoolchains.com/arm-eabi/ 

Create a directory of your choice. 
Go there, and clone (git clone ...) these repositories:
 - github/wovo/bmptk
 - github/wovo/hwcpp

Add the bmptk/tools directory to your PATH.

<a name="toc-anchor-2"></a>
# First use

<a name="toc-anchor-3"></a>
## Bmptk

 - Open the hwcpp/demos/native/hello directory in windows explorer.
 
 - right-click in the files area and open a 'Git Bash Here' window.  
   - If that option doesn't show, Git wasn't installed correctly.
   
 - In the git window, give the command 'bmptk-make build'
   - If bmptk-make can't be found, you didn't add the bmptk/tools directory to your PATH.
   - If you get a 'The system cannot find the path specified' error you either 
   didn't install thge MingW toolchain, or the ....

<a name="toc-anchor-4"></a>
## CodeLite

 - Open the hwcpp/demos/native directory in windows explorer.

 - Run (double-click) the update_codelite_workspace.bat file.
This should produce a message window that shows that bmptk projects are created for each subdirectory.
Press return to close the window.
 - Run (double-click) the _codelite.workspace file. If windows doesn't know how to open a
 file with this extension, associate it with the CodelIte executable. Now CodeLite starts.
 - When 
