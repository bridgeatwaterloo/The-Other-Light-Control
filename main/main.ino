
/* 
	Main file foor interactive light project. 
	It will be upoaded to each arduino.
	
	The code that animates thr lights is saved in 
	a seperate file called lights.h

	The code that reads from the sensor is 
	saved in a separate file called sensors.h
*/

int led1 = 12;  //led stored as a variable
int led2 = 13;


void setup() {
  // set up the two pins as OUTPUT:
	pinMode(led1, OUTPUT);
	pinMode(led2, OUTPUT);
}

void loop() {

	// When maultiple tasks are running'delay' passes control to 
	//other tasks while waiting and ensuring they get completed:
	digitalWrite(led1, HIGH);
	digitalWrite(led2, LOW);
	delay(1000);

	digitalWrite(led1, LOW);
	digitalWrite(led2, HIGH);
	delay(1000);
}






//goal: As one light turns on the other will turn off (an alternating board).