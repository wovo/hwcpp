HWCPP := .
include Makefile.inc

CLANG := "C:/Program Files/LLVM/bin/clang++"
STANDARDESE := "C:/Program Files/standardese/standardese.exe"
MINGW := C:\Program Files\mingw-w64\x86_64-7.2.0-posix-seh-rt_v5-rev1\mingw64

ARGS += -fconcepts-ts
ARGS += -Iinclude
ARGS += -Iinclude/core
ARGS += -Iinclude/targets
ARGS += -Iinclude/chips
ARGS += -Iinclude/shields

ARGS += -I "$(MINGW)\lib\gcc\x86_64-w64-mingw32\7.2.0\include\c++"
ARGS += -I "$(MINGW)\lib\gcc\x86_64-w64-mingw32\7.2.0\include\c++\x86_64-w64-mingw32"
ARGS += -I "$(MINGW)\x86_64-w64-mingw32\include"

doc:
	$(STANDARDESE) $(ARGS) include/core/hwcpp-all.hpp
	
clang:
	$(CLANG) $(ARGS) include/core/hwcpp-all.hpp
	
#STANDARDESE += -I "C:/Program Files/LLVM/lib/clang/5.0.0/include"
#STANDARDESE += -I "C:\SysGCC\arm-eabi\arm-eabi\include\c++\7.2.0"	