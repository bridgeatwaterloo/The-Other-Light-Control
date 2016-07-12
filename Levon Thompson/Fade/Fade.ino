
int led =9;
int brigntness = 0;
int fadeAmount =5;
void setup() {
/* This is a fade code that make the light up*/ 
pinMode(led, OUTPUT);
}
/*This is the loop function that controls whether the LED fades in or out */
void loop() {
  // Set the brigntness of pin 9; 
  analogWrite(led, brigntness); 
// change the brigntness for next time through the loop:
brigntness = brigntness + fadeAmount; 

// reverse the direction of the fading at the ends of the fade: 
if (brigntness <=0|| brigntness >= 255)    {
  fadeAmount= - fadeAmount; 
}
// wait for 30 milliseconds to see the dimming effect 
 delay(30);
}

