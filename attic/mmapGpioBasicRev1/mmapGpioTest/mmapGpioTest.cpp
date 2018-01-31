#include "mmapGpio.h"
#include "stdio.h"

int main(void){
	unsigned int val = 10;
	mmapGpio rpiGpio; // instantiate an instance of the mmapGpio class
	rpiGpio.setPinDir(4,mmapGpio::OUTPUT); // set GPIO4 to output
	rpiGpio.setPinDir(17,mmapGpio::INPUT); // set GPIO17 to input
	while(val > 0) {
		usleep(500000); //delay for 0.5 seconds
		if(rpiGpio.readPin(17) == mmapGpio::HIGH) // read pin state (no debounce to make code more readable)
			printf("Button not pressed\n"); // if GPIO17 is HIGH button not pressed (due to pull-up resistor)
		else{
			printf("Button is pressed....toggling LED\n"); //else if GPIO17 is low button is pressed
		    while(rpiGpio.readPin(17) == mmapGpio::LOW ){ // repeat toggling of GPIO4 until GPIO17 goes back to HIGH i.e. button de-pressed
				rpiGpio.writePinHigh(4); // write GPIO4 pin high
				usleep(500000);
                rpiGpio.writePinLow(4); // write GPIO4 pin low
                usleep(500000);
			}
			printf("Button not pressed anymore....toggling LED stopped\n");
		}
        val--;
	}
		

return 0;
}
