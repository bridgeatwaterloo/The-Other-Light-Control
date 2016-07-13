/* This is the main file for the interactive light project. It will be uploaded to each Arduino. 

The code that animates light is saved in a seperate file called lights.h 

The code that reads from the sensor is saved in a seperate file called sensors.h 

*/ 

int pin= 9; //declaring the variable//

void setup() {
  // put your setup code here, to run once:
	pinMode (pin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
	fadeTheLights();
}
