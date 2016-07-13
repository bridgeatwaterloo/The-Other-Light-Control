/* This is function that turns the LED on at the start */
void turnOnAndOff() {
  digitalWrite(pin, 1);	// This turns the LED on
  delay(200);				    // This is the time in ms for the LED to turn on
  digitalWrite(pin, 0);	// This turns the LED off
  delay(200);				    // This is the time in ms for the LED to turn off
}

/* This is the function that makes the LED fade */
void fadeTheLightsToALevel() {
  brightness = brightness + fadeLevel; //This is the command that increases the brightness

  if (brightness <= 0 || brightness >= 255) {	 //This is the logic that decides whether the brightness should increase or decrease after a certain critera is met
	 fadeLevel = -fadeLevel;
	}
  analogWrite(pin, brightness);	// This is the initial brightness of the LED

  delay(20);	// This is the time in ms for the LED to fade
}

/* This is the function that makes the LED blink */
void blinkLights() {
  for (int i=0; i<4; i++) {		// This is the logic that repeats the function 4 times
	 digitalWrite(pin, 1);			// This turns the LED on
	 delay(500);								// This is the time in ms for the LED to turn on
	 digitalWrite(pin, 0);			// This turns the LED off
	 delay(500);								// This is the time in ms for the LED to turn off
	}
  delay(5000);								// This is the time in ms for the loop to continue
}