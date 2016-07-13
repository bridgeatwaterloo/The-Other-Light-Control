
void fadeToALevel(int fadeLevel) {
	analogWrite(pin,fadeLevel);
}

void pellMorseCode() {
	// Letter P
	analogWrite(pin, 255); //Pin on
	delay(300); //dot
	analogWrite(pin, 0); //Pin off
	delay(150); //off length
	analogWrite(pin, 255); //Pin on
	delay(500); //dash
	analogWrite(pin, 0); //Pin off
	delay(150);  //off length
	analogWrite(pin, 255); //Pin on
	delay(500); //dash
	analogWrite(pin, 0); //Pin off
	delay(150); //off length
	analogWrite(pin, 255); //Pin on
	delay(300); //dot
	analogWrite(pin, 0); //Pin off
	delay(150); //off length
	delay(600); //Space between letters

	// Letter E
	analogWrite(pin, 255); //Pin on
	delay(300); //dot
	analogWrite(pin, 0); //Pin off
	delay(150); //off length
	delay(600); //Space between letters

	// Letter L
	analogWrite(pin, 255);
	delay(300); //dot
	analogWrite(pin, 0); //Pin off
	delay(150); //off length
	analogWrite(pin, 255);
	delay(500); //dash
	analogWrite(pin, 0); //Pin off
	delay(150); //off length
	analogWrite(pin, 255);
	delay(300); //dot
	analogWrite(pin, 0); //Pin off
	delay(150); //off length
	analogWrite(pin, 255);
	delay(300); //dot
	analogWrite(pin, 0); //Pin off
	delay(150); //off length
	delay(600); //Space between letters

	// Letter L
	analogWrite(pin, 255);
	delay(300); //dot
	analogWrite(pin, 0); //Pin off
	delay(150); //off length
	analogWrite(pin, 255);
	delay(500); //dash
	analogWrite(pin, 0); //Pin off
	delay(150); //off length
	analogWrite(pin, 255);
	delay(300); //dot
	analogWrite(pin, 0); //Pin off
	delay(150); //off length
	analogWrite(pin, 255);
	delay(300); //dot
	analogWrite(pin, 0); //Pin off
	delay(150); //off length
	delay(600); //Space between letters

}