These directories contain the hwcpp files

Subdirectories:
   - chips   : support for chips external to the micro-controller
   - core    : the target and hardware independent parts of the library
   - targets : the HALs for the supported taregts
   - shields : support for some arduino shields
   
Files:
   - hwcpp.hpp : the main file to include
   - readme.md : this file

-----------------------------------------------------------------------------

The normal way to use HwCpp is to include the hwcpp.hpp file, 
and specify the target in a command-line define.
Aternately, the user could include 
one of the target/target-*.hpp files directly.