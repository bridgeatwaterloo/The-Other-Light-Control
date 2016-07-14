/*This is the main file for the interactive light project. 
It will be uploaded to each Arduino.

The code that animates the ligrs is saced in a serprate file 
called lifts.h

The code that reads from the sensor is saved to a separate file 
called sensors
*/

int pin = 9; //set pin to number 9 as variable
int aliCount = 0; // set Ali Count to 0
int oiCount = 0; // set Oi Count to 0

void setup() {
  // put your setup code here, to run once:
  pinMode(pin, OUTPUT);
  pellMorseCode();
}

void loop() {
	delay(2000);
	aliAliAli();
	//fadeToALevel(150); 

}
