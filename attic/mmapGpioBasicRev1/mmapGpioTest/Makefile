
CXX=g++

TARGET=mmapGpioTest

INCLUDEDIR = ./  ../mmapGpioLib
LIBSOURCEDIR = ../mmapGpioLib
INCDIR  = $(patsubst %,-I%,$(INCLUDEDIR))

OPT = -O0
DEBUG = -g
WARN= -Wall

CXXFLAGS= $(OPT) $(DEBUG) $(WARN) $(INCDIR)

SRCMAIN =   mmapGpioTest.cpp
SRCLIB = $(LIBSOURCEDIR)/mmapGpio.cpp

OBJMAIN = $(SRCMAIN:.cpp=.o)
OBJLIB = $(SRCLIB:.cpp=.o)

all: $(OBJLIB) $(OBJMAIN)
	    $(CXX)  $(OBJLIB) $(OBJMAIN) -o $(TARGET)

%$.o:%.cpp
	    $(CXX) $(CXXFLAGS)  -c $<  
		 
clean:
	    -rm *.o
		-rm $(LIBSOURCEDIR)/*.o
		-rm $(TARGET)
