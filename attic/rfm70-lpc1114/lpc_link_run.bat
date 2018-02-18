@ echo off

rem LPC-link download script
rem Wouter van Ooijen - wouter@voti.nl
rem license: zlib

rem the exits seems not to work :(
make
if not errorlevel 0 (
   echo make failed
   goto :exit
)

set bin=c:\nxp\lpcxpresso_4.1.0_190\lpcxpresso\bin
set img=out\project.bin

if not exist %bin%\crt_emu_lpc11_13_nxp.exe (
   echo. 
   echo LPCXpresso software not found: 
   echo install it and/or change the batch file for the correct location
   goto :exit
)

rem use 'winusb' for XP, 'hid' for later versions:

VER | FINDSTR /IL "5.1." > NUL
IF %ERRORLEVEL% EQU 0 SET wire=-wire=winusb

VER | FINDSTR /IL "6.0." > NUL
IF %ERRORLEVEL% EQU 0 SET wire=-wire=hid

VER | FINDSTR /IL "6.1." > NUL
IF %ERRORLEVEL% EQU 0 SET wire=-wire=hid

set start=%bin%\scripts\bootLPCXpresso 
set cmd=%bin%\crt_emu_lpc11_13_nxp %wire% -pLPC1114/302 -flash-load-exec=%img% -load-base=0x0000

%cmd%
if errorlevel 1 (
   echo download failed, so try to boot the LPC-link first
   %start%
   echo a short delay to let the USB re-enumerate
   timeout 3
   %cmd%
)

:exit
