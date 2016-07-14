/*This is the main file for the interacctive light project.
It will be uploaded to each Arduino.

The code that animates the lights is saved in a seperate file called lights.h

The code that reads from the sensor is saved to a seperate file called sensors
*/




int pin = 9; //set pin to number 9 as a variable

void setup() {
	//put your setup code here, to run once:
	pinMode(pin, OUTPUT);
	turnLightOnThenOff();
}

void loop() {
	// fadeToALevel(5);
	for (int i=0; i < 6; i++){//
      analogWrite(pin, 255);//on	
      delay(1000);//amount of time light is on
      analogWrite(pin, 0);//off
      delay(100);//amount of time light is off
	}
	delay(1000);//time between each set of 6 flashes
}

