/*This sketch meets the Acceptance criteria of this task: https://trello.com/c/OvXraD7u/1-fade-an-led-in-and-out */

  int led = 6; /*declare pin*/ 
  int brightness = 0; /*how bright the LED is*/
  int fadeAmount = 5; /* how many points to fade the LED by*/


  
 /*the setup routine runs once when you press reset*/ 
 void setup() {

    pinMode (led, OUTPUT);
    //random comment

  }
/* this function runs until you press off*/ 
 void loop() {

    analogWrite(led, brightness); /*light on*/ 
  
    brightness = brightness + fadeAmount; /*change the brightness for next time through the loop*/

/*reverse the direction of the fading at the ends of the fade*/
    if (brightness <= 0 || brightness >= 255){ 
     fadeAmount = -fadeAmount;
  }

    /*wait for 30 milliseconds to see the dimming effect*/
    delay(40);/*milliseconds*/
  }
  
