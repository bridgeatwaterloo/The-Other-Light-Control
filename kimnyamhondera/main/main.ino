

//To multicolour the lights//

//Using analog pins so that we can include fade multicolour pins once blink multicolour has been mastered//




//declaring the pins and colours//
int yellowled = 12;
int greenled = 10;
int redled = 6;

int brightness = 0; /* set initial brightness level */
int fadeAmount = 5; /* set initial fadeAmount */

//setting each coloured light as the output//
void setup() {
	pinMode(yellowled, OUTPUT);
	pinMode(greenled, OUTPUT);
	pinMode(redled, OUTPUT);

	digitalWrite(yellowled, HIGH); //yellow turns on//
	delay(1000); //delays for a second//
	digitalWrite(yellowled, LOW); //yellow turns off//

	digitalWrite(greenled, HIGH); //green turns on//
	delay(1000); //delays for a second//
	digitalWrite(greenled, LOW); //green turns off//

	digitalWrite(redled, HIGH); //red turns on//
	delay(1000); //delays for a second//
	digitalWrite(redled, LOW); //red turns off//

	delay(2000); //longer delay//
}

void loop() {
  // put your main code here, to run repeatedly:

	//set each colour to brightness//
  analogWrite(yellowled, brightness);
  analogWrite(greenled, brightness);
  analogWrite(redled, brightness); 
  
  brightness = brightness +fadeAmount; //brightness number increases by the fade amount each time//

  if (brightness <= 0 || brightness >= 255) { /* conditiion, if brightness is fully on or off, the fade amount will decrease by the fade amount number */
    fadeAmount = -fadeAmount; 
    }
    
  delay(50);
}
