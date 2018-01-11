HwCpp Getting Started
===

<!-- update table_of_contents( input ) -->

 - [ Introductionx](#toc-anchor-0)
 - [ Download and install](#toc-anchor-1)
 - [ First use](#toc-anchor-2)

<!-- update end -->

<a name="toc-anchor-0"></a>
# Introduction

This document explains how to get started with HwCpp,
for now only for windows.

<a name="toc-anchor-1"></a>
# Download and install

Download and install using the default settings:
 - Python : http://www.python.org I used 3.6
 - CodeLite : https://codelite.org I used 11.0.0
 - Git : https://git-scm.com/download/win

Download and install the GCC toolchains (at least 7.2.0 required).
 - for windows native : https://mingw-w64.org/doku.php/download/mingw-builds 
 - for avr8 : http://blog.zakkemble.co.uk/avr-gcc-builds/ 
 - for arm/cortex : http://gnutoolchains.com/arm-eabi/ 

Create a directory of your choice. 
Go there, and clone (git clone ...) these repositories:
 - github/wovo/bmptk
 - github/wovo/hwcpp

Add the bmptk/tools directory to your PATH.

<a name="toc-anchor-2"></a>
# First use

## Bmptk

 - Open the hwcpp/demos/native/hello directory in windows explorer.
 
 - right-click in the files area and open a 'Git Bash Here' window.  
   - If that option doesn't show, Git wasn't installed correctly.
   
 - In the git window, give the command 'bmptk-make build'
   - If bmptk-make can't be found, you didn't add the bmptk/tools directory to your PATH.
   - If you get a 'The system cannot find the path specified' error you either 
   didn't install thge MingW toolchain, or the ....

## CodeLite

 - Open the hwcpp/demos/native directory in windows explorer.

 - Run (double-click) the update_codelite_workspace.bat file.
This should produce a message window that shows that bmptk projects are created for each subdirectory.
Press return to close the window.
 - Run (double-click) the _codelite.workspace file. If windows doesn't know how to open a
 file with this extension, associate it with the CodelIte executable. Now CodeLite starts.
 - When 
