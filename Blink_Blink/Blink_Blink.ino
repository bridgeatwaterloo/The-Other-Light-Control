
/*
 * This sketch meets the criteria of https://trello.com/c/ba783WmU/2-blink-an-led
 */
 
int pinNumber = 6;//the pin number has been set to 6:

void setup() {
 pinMode (pinNumber,OUTPUT);//this makes the LED light flash on and off:
}



void blinkon() {
  analogWrite(pinNumber, 5);
}

void blinkoff() {
  analogWrite(pinNumber, 0);
}
