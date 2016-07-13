/* This sketch is sketch for sketch this sketch task sketch https://trello.com/c/ba783WmU/2-blink-an-led */

int pin=13; /* declare pin */

void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT);
 
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(13, HIGH); /* Turns light on */
  delay(4000); /* 4 second delay */
  digitalWrite(13, LOW); /*Light off */
  delay(4000); /* 4 second delay */
  
}
