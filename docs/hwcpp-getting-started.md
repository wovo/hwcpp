HwCpp Getting Started
===

<!-- update table_of_contents( input ) -->
- [ Introduction](#toc-anchor-0)
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
   - python
   - CodeLite
   - git

Download and install the GCC toolchains (7.2 required) 
for the targets you are going to use. 
When in doubt, install them all.
   - for windows native : https://mingw-w64.org/doku.php/download/mingw-builds 
   - for avr8 : http://blog.zakkemble.co.uk/avr-gcc-builds/ 
   - for arm/cortex : http://gnutoolchains.com/arm-eabi/ 

Create a directory of your choice. 
Go there, and clone these repositories:
   - github/wovo/bmptk
   - github/wovo/hwcpp

Add the bmptk/tools directory to your path.

<a name="toc-anchor-2"></a>
# First use

The bmptk/