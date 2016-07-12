/*This sketch meets the Acceptance criteria of this task: https://trello.com/c/OvXraD7u/1-fade-an-led-in-and-out */

  int led = 13; /*declare pin*/ 
  int brightness = 0;
  int fadeAmount = 5;

 void setup() {

  pinMode (led, OUTPUT);

  }

/* this function runs untill you press off*/ 
 void loop() {

  analogWrite(led, brightness);/*light on*/ 
  
  brightness = brightness + fadeAmount;

  if (brightness <= 0 || brightness >= 255){ 
     fadeAmount = -fadeAmount;
  }
    
  delay(40);/*milliseconds*/
  
  }









  


