
void setup() { // initialize digital pin 6 as an output.
  pinMode(6, OUTPUT); //pinMode is a function sets the mode of the pin.There are two states input and output
}
void loop() {//the void Loop is a function with infinite loop until you remove the power
  digitalWrite(6, HIGH); // digitalWrite takes two arguments the led and HIGH/LOW voltage level
  delay(1000);  // delay is the duration..in this case a second
  digitalWrite(6, LOW);// LOW voltage turn off the led
  delay(1000); // for a second // the result of this program it will blink
}
