/*This is the main file for the interacctive light project.
It will be uploaded to each Arduino.

The code that animates the lights is saved in a seperate file called lights.h

The code that reads from the sensor is saved to a seperate file called sensors
*/




int pin = 9; //set pin to number 9 as a variable

void setup() {
	//put your setup code here, to run once:
	pinMode(pin, OUTPUT);
}

void loop(){
	fadeToALevel(150);
}
