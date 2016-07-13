
int led = 6; /* declare pin */
int brightness = 0; /* set initial brightness level */
int fadeAmount = 5; /* set initial fadeAmount */

void setup() {
  // put your setup code here, to run once:
  pinMode(led, OUTPUT); /* setting up  pin 6 to turn on */
} 

void loop() {
  // put your main code here, to run repeatedly:
  analogWrite(led, brightness); /* remember that in fade this has changed to analog because of the different levels of lighting available in analog */ 
  brightness = brightness +fadeAmount; /* the light's brightness will start from 0 and the fade amount then will continue to add 5 to the current brightness level */

  if (brightness <= 0 || brightness >= 255) { /* conditiion, if brightness is fully on or off, the fade amount will decreade by the fade amount number */
    fadeAmount = -fadeAmount; 
    }
    
  delay(50);
}
