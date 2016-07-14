
void fadeToALevel(int fadeLevel) {

	analogWrite(pin, fadeLevel);


}

// Ali's function that turns the light on and off
void turnLightOnThenOff(){
	analogWrite(pin, 255); // set the pin to be on full
	delay(1000);
	analogWrite(pin, 0);

}

// Levon's function that turns the light on and off three times

void turnLightOnandOff() {
	analogWrite(pin, 250); // set the pin to be on full 
	delay(150);
	analogWrite(pin,0);
    }