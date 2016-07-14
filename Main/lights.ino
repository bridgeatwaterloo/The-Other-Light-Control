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
	void threeFlashes(){
		count = count +1;
	   	analogWrite(pin,255);
	     delay(500);	    
	     analogWrite(pin,0);
	     delay(500);
	     if (/* condition */count==3)
	     {
	     	delay(2000);
	     }


	 } 
