/* This sketch meets the acceptance criteria of this task https://trello.com/c/ba783WmU/2-blink-an-led */

int pin=13; /* declare pin */

void setup() {
  // put your setup code here, to run once:
  pinMode(pin, OUTPUT);
 
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(pin, HIGH); /* Turns light on */
  delay(4000); /* 4 second delay */
  digitalWrite(pin, LOW); /*Light off */
  delay(4000); /* 4 second delay */
  
}
