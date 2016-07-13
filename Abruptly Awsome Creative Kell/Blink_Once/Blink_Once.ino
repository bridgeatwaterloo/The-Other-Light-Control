int pinNumber = 6; //set pin number to 6:

void setup() {
  pinMode(pinNumber,OUTPUT); //set pin to output 
  blink(); //call blink function
}

void blink() {
 analogWrite(pinNumber,50); //turn light on
 delay(300);  //wait a 300ms
 analogWrite(pinNumber,0);  //turn light off
}

void loop() {
  // put your main code here, to run repeatedly. But I want no loop so its blank

}
