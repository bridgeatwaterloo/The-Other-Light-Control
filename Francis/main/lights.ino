void fadeTheLights(int fadeLevel){


}
void dot(){
	digitalWrite(led,HIGH);
	delay(unit);
	digitalWrite(led,LOW);
	delay(unit);
}
void dash(){
	digitalWrite(led,HIGH);
	delay(3*unit);
	digitalWrite(led,LOW);
	delay(unit);
}
