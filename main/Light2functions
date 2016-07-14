/* This is the main file for the interactive light project. It will be uploaded to each Arduino. 

The code that animates light is saved in a seperate file called lights.h 

The code that reads from the sensor is saved in a seperate file called sensors.h 

*/ 

/*This is the code to create a blinking led flowing pattern in which three lights will consecutively turn on in different colours. */

/* Using analog labelled pins for both analog and digital purposes.*/ 


 	//declaring the variables//
int yellowled = 12;
int greenled = 10;
int redled = 6;

int brightness = 0; //set initial brightness level//	
int fadeAmount = 5; //set initial fadeAmount level//


	// My setup code to run once:
void setup () {

	// Activate the digital pin as an output.
	pinMode (yellowled, OUTPUT);
	pinMode (greenled, OUTPUT); 
	pinMode (redled, OUTPUT);


	digitalWrite(yellowled, HIGH);// turn the LED on (HIGH is the voltage level)
	delay(1000); //1 second delay*/
	digitalWrite (yellowled, LOW);//turns lED off 

	digitalWrite(greenled,HIGH);//repeat above// 
	delay(1000);
	digitalWrite(greenled,LOW);

	digitalWrite(redled, HIGH);
	delay(1000);
	digitalWrite(redled, LOW);

	delay(1500);//longer delay for prettier pattern//

}
	// My code to run repeatedly:
void loop () {

	//set each color to brightness//
    analogWrite(yellowled, brightness);
    analogWrite(greenled, brightness);
    analogWrite(redled, brightness); /*light on*/ 
  
    brightness = brightness + fadeAmount; /*change the brightness for next time through the loop*/

	/*reverse the direction of the fading at the ends of the fade*/
    if (brightness <= 0 || brightness >= 255){ 
     fadeAmount = -fadeAmount;
  }

    /*wait for 30 milliseconds to see the dimming effect*/
    delay(100);/*milliseconds*/
  }
