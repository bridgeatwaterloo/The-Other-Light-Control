
//declare the variable: my pin number, initial brighness is set to 0, and the fade anount can be adjusted
int led = 11;   
int fadeAmount = 5;
int brightness = 0;        

//declare the function that will set the pin to output mode
void setup() {
  pinMode(led, OUTPUT);
  Serial.begin(9600); //the print syntax used to begin the serial monitior 
}
//declare a function that will run a loop 
void loop() {
   analogWrite(led, brightness); //sets the LED brightness to the initial brighness (0)
   brightness += fadeAmount; //changes the brightness by the fadeAmount
   if (brightness <= 0 || brightness >= 255){ //if the condition is met and the brightness is either 0 or 255
      fadeAmount =- fadeAmount; //it will change the sign for fadeAmount and depending on what it was previously, it will either decrease or increase the fadeAmount
   }
   Serial.print(brightness); //the print syntax used to display serial monitior details from the loop 
   Serial.print("\n"); //this line will display each print in a new line
   
   delay (30); 
}


