

//sort of like a key that allows you to use just the 'int' name insted of the number:
//Making it easier if you have more than one function:

int led = 6;                //The port number the pin is connected to
int brightness = 0;         //The LED brightness
int fadeAmount = 5;         //How many points to fade the LED by


//void will run when reset:
void setup () {
  //pin OUTPUT 6:
  pinMode(led, OUTPUT);
}

//this will repeat the void setup over and over:
void loop () {
   analogWrite(led, 255); //turns the LED to HIGH. Delay in milliseconds:
   delay(50);
   analogWrite(led, 0); //turns the LED to LOW. Delay in milliseconds:
   delay(50);
   
//Changes the brightness for next time through the loop:
   brightness = brightness +fadeAmount;
   
  //changes the direction of the fade, resulting in a fade out:
    if (brightness <= 0 || brightness >= 255){
        fadeAmount = -fadeAmount;
    }

}
