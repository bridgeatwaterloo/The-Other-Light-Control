/*This sketch meets the Acceptance criteria of this task: https://trello.com/c/ba783WmU/2-blink-an-led
*/

int led = 13; /*declare pin*/ 

/*the setup routine runs once when you press reset*/
void setup() {

  pinMode (led, OUTPUT);
}

void loop() { /* this function runs untill you press off*/ 

  digitalWrite(led, HIGH);/*light on*/ 
  delay(1000); /*1 second delay*/
  digitalWrite(led, LOW);/*light off*/ 
  delay(2000); /* 2 second delay*/ 
}
