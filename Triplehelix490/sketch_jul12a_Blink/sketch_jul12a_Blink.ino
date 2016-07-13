//change these factors to change the characteristics of the blink.
int pin = 9;
int brightness = 0;
int fadeAmount = 5;
int timeOn = 104;
int timeOff = 100;

//setup code; this code pulls the "setup" code from the pre-program within the Arduino board.
 void setup() {
  pinMode(pin, OUTPUT);
}
 
//main code; this code produces all the differet out comes off the circuit, such as when the component should have an input and when it should stop.
void loop (){
digitalWrite(pin, HIGH);
delay(timeOn);
digitalWrite(pin, LOW);
delay(timeOff);
}
