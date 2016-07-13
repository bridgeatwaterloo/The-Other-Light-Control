/* 
This is the main file for the interactive light project which
will be uploaded to the Arduino.

The code that will animate the lights is saved in a file called 
lights.ino

The code that will read from the sensor will be saved in a file
called sensors.ino
*/

int pin = 9;				// This is the value of the pin
int brightness = 0;			// This is the value of the brightness
int fadeLevel = 5;			// This is the value of the fadeLevel

/* This is the setup of the pin and what it is doing */
void setup() {
  pinMode(pin, OUTPUT);
  turnOnAndOff();			// This is the function that turns the LED on/off at the start
}

/* This is the function that loops the lights fading then blinking
after a certain period of time */
void loop() {
  fadeTheLightsToALevel();	// This is the function that makes the LED fade
  if(brightness == 0) {		// This is the logic that decides when the LED should blink
    delay(500);
    blinkLights();
  }
}
