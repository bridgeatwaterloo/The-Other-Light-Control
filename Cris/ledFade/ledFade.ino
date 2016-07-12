
//declare the variable: my pin number, initial brighness is set to 0, and the fade anount can be adjusted
int led = 11;   
int fadeAmount = 5;
int brightness = 0;        

//declare the function that will set the pin to output mode
void setup() {
  pinMode(led, OUTPUT);
  Serial.begin(9600);  
}
//declare a function that will run a loop 
void loop() {
   analogWrite(led, brightness); 
   brightness += fadeAmount;
   if (brightness <= 0 || brightness >= 255){
   fadeAmount =- fadeAmount;
   Serial.print(brightness);
   Serial.print("\n");
   }
   delay (30); 
   }


