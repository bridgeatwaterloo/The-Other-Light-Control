/*

Fade

This sketch meets the Acceptance Criteria of
this task: https://trello.com/c/OvXraD7u/1-fade-an-led-in-and-out

Based entirely on: https://www.arduino.cc/en/Tutorial/Fade

*/

int led = 9;           // the PWM pin the LED is attached to
int brightness = 0;    // how bright the LED is
int fadeAmount = 5;    // how many points to fade the LED by

// the setup routine runs once when you press reset:
void setup() {

  // declare pin 9 to be an output:
  pinMode(led, OUTPUT);

  // open the serial port at 9600 bps:
  Serial.begin(9600);
}

// the loop routine runs over and over again forever:
void loop() {
  // set the brightness of pin 9:
  analogWrite(led, brightness);

  // change the brightness for next time through the loop:
  brightness = brightness + fadeAmount;

  // Let's look at our brightness value
  printToSerial(brightness);

  // reverse the direction of the fading at the ends of the fade:
  if (brightness == 0 || brightness == 255) {
    fadeAmount = -fadeAmount ;
  }
  // wait for 30 milliseconds to see the dimming effect
  delay(30);
}

// This function prints a value to serial followed by a new line
void printToSerial(int valueToPrint) {
  Serial.print(valueToPrint);
  Serial.print("\n");
}
