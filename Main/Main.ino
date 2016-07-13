/*This is the main file for the interactive light project. 
It will be uploaded to each Arduino.

The code that animates the ligrs is saced in a serprate file 
called lifts.h

The code that reads from the sensor is saved to a separate file 
called sensors
*/

int pin = 9; //set pin to number 9 as variable

void setup() {
  // put your setup code here, to run once:
  pinMode(pin, OUTPUT);
  pellMorseCode();
}

void loop() {
  //fadeToALevel(150); 

}
