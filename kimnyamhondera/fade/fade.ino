
int led = 6; /* declare pin */
int brightness = 0; /* set initial brightness level */
int fadeAmount = 5; /* set initial fadeAmount */

void setup() {
  // put your setup code here, to run once:
  pinMode(led, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  analogWrite(led, brightness);
  brightness = brightness +fadeAmount;

  if (brightness <= 0 || brightness >= 255) {
    fadeAmount = -fadeAmount; 
    }
    
  delay(50);
}
