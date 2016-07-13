/* this is the main file for the interactive light project  and will be uploaded to each arduino
the code that animate the light is saved in a separate file called lights.h
the code that reads from the sensor is saved in a separate file called sensors.h
*/
 // pull in all the code for our light animation
 int analogPin = 6;
 int digitalPin=10;    
const int threshold = 170;
int analogValue =0;
int fadeAmount=5;
void setup() {
  // put your setup code here, to run once:
 pinMode(analogPin, OUTPUT);
 pinMode(digitalPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  fadeToALevel();
  if (analogValue> threshold) {
  	digitalWrite(digitalPin, HIGH);
  }else {
  	digitalWrite(digitalPin, LOW);
  }
  Serial.println(analogValue);
  delay(1);
}