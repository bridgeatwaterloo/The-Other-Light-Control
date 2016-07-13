/* This is the main file for the interactive light project. 
 uploaded to each Arduino.
The code that animates the lights is saved in a separate file called lights.h
The code that reads from the sensor is saved in a separate file called sensor.h
*/

int pin = 9;// I set pin to number 9
int fadeDuration = 7;//this is how much the fade goes up or down by:
int brightness = 255;//set brightness of light to max
int count = 0;//  I set the count to 0

void setup() {
  // put your setup code here, to run once:
  pinMode(pin, OUTPUT);
  Serial.begin(9600);
  threeFlashes();
}


void loop() {
  // put your main code here, to run repeatedly:
  //fadeToALevel(150);
    threeFlashes();
	Serial.print (brightness);
	Serial.print ('\n');

}


