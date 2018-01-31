
CXX=g++

TARGET=mmapGpioToggle

INCLUDEDIR = ./  ../mmapGpioLib
LIBSOURCEDIR = ../mmapGpioLib
INCDIR  = $(patsubst %,-I%,$(INCLUDEDIR))

OPT = -O3
DEBUG = -g
WARN= -Wall

CXXFLAGS= $(OPT) $(DEBUG) $(WARN) $(INCDIR)

SRCMAIN =   mmapGpioToggle.cpp
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
