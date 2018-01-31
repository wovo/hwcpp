#include "mmapGpio.h"
#include "stdio.h"

int main(void){
	mmapGpio rpiGpio; // instantiate an instance of the mmapGpio class
	rpiGpio.setPinDir(17,mmapGpio::OUTPUT); // set GPIO17 to output
	while(1) {// toggle pin as fast as possible
		   rpiGpio.writePinHigh(17);
		   rpiGpio.writePinLow(17); 
	}
		
return 0;
}
