void fadeToALevel(int fadeLevel){
	analogWrite(pin,fadeLevel);
}
//the led should blink three times 
void threeFlashes(){
	count+=1;
	analogWrite(pin, 255); //swith on the led
	delay(1000);        //time one second
	analogWrite(pin, 0);//switch off the led
	delay(1000);	//one second
	if(count== 3); //when the led blink three time
		delay(2000); //wait 2 sec
		count+= 0 
} 
