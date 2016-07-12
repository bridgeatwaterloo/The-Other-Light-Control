//declare the variable: my pin number is 11
int led = 11;           

//declare the function that will set the pin to output mode
void setup() {
   pinMode(led, OUTPUT);
}
//declare a function that will run a loop 
void loop() {
   digitalWrite(led, HIGH); //a function that commands the pin to be on
   delay (100); //this tells the led for how long is should be on (1000 = 1second)
   digitalWrite(led,LOW); //a function that tells the led to be off
   delay(100); //this is the delay time for the led to be off
   }



