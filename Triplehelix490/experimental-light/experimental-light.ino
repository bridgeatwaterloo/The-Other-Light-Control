// the elements which create the charicteristics of the code \/\/\/\/\/\/
int pin = 9;
int brightness = 0;
int fadeAmount = 5;
int time = 100;
int flash = 3;

// the setup pre-program \/
void setup() {
  // which pin will be the output \/
  pinMode(pin, OUTPUT);
  	Serial.begin(9600);
}
// the loop \/
void loop() {
  // the brightness of the output component aswell the type of signal sent \/
  analogWrite(pin, brightness);
  // change the brightness for the next loop \/
  brightness = brightness + fadeAmount;
  // this reverses the direction of the fading at the end of each fading phase\/
  		if (brightness <= 0 || brightness >= 255) {
   		 fadeAmount = -fadeAmount;
 		 }
  // this adds the blinking effect into the slow fade \/
 			if( divisibleByFive(brightness) == true) {
				analogWrite(pin, HIGH);   
				delay(flash);
				analogWrite(pin, LOW);
				delay(flash);
			}
  // the time for the dimming effect in millseconds \/
  delay(time);
			Serial.print(brightness);
           Serial.print('\n');
} 
 // the int represents the inputed number of when a multiple of 5 will equal 0 exactly or the previous statement will not be true \/
boolean divisibleByFive (int number) {
	if (number%5==0) { 
		return true;
	} else {
		return false;
	}
}




