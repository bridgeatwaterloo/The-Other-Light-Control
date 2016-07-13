/* This sketch meets the acceptance criteria of this task https://trello.com/c/ba783WmU/2-blink-an-led */

/* This is the value I have set for the pin and how it refers to the circuit board */
int pin = 9;

/* This is the setup for the pin number and what it is doing */ 
void setup() {
  pinMode(pin,OUTPUT);
}

/* This is the pin turning on and off with a delay of 500ms looping endlessly */
void loop() {
  digitalWrite(pin,1);
  delay(500);
  digitalWrite(pin,0);
  delay(500);
}

