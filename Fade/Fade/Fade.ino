
/*
 * This sketch meets the criteria of https://trello.com/c/ba783WmU/2-blink-an-led
 */
 
int pinNumber = 6;//the pin number has been set to 6:
int fadeDuration = 7;//this is how much the fade goes up or down by:
int brightness = 5;// i have set the starting number of brightness:

void setup() {
 pinMode (pinNumber, OUTPUT);//this makes the LED light flash on and off:
 Serial.begin(9600);
}

void loop() {
 analogWrite(pinNumber, brightness);// we have set the brightness on the pinNumber:
 brightness = brightness + fadeDuration;
 Serial.print (brightness);
 Serial.print ('\n');

  if( brightness <=0 || brightness >=255){
    fadeDuration = -fadeDuration;
  }

}

