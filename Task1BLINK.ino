/*This sketch meets the Acceptance criteria of this task: https://trello.com/c/ba783WmU/2-blink-an-led
*/
 
void setup() {

  pinMode (13, OUTPUT);
}


void loop() { /* this function runs untill you press off*/ 

  digitalWrite(13, HIGH);/*light on*/ 
  delay(1000); /*1 second delay*/
  digitalWrite(13, LOW);/*light off*/ 
  delay(2000); /* 2 second delay*/ 
}


