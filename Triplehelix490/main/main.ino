/*
This is the main file for the interactive light project. IT will be uploaded to Arduino.

The code that animates the light is saved in a separate file called lights.ino

This code that reads the sensor is saved in a separate file called sensors.ino
*/



int pin = 9;  //sort pin 9 as a variable

void setup() {
  // put your setup code here, to run once:
 pinMode(pin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
	fadeToALevel(150);
}
