void fadeToALevel(int fadeLevel) {


analogWrite(pin, fadeLevel);


}


void blinkOnFadeOut() {

	analogWrite(pin, brightness);
	do {analogWrite(pin,brightness); // we have set the brightness on the pinNumber:
		 brightness=brightness-fadeDuration;
		 delay(100);
		 Serial.print (brightness);
		 Serial.print ('\n');

 
	} while(brightness <=255 && brightness >=0);
	brightness = 0;
}