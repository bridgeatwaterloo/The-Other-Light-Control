

//sort of like a key that allows you to use just the 'int' name insted of the number. 
//Making it easier if you have more than one function:

int led = 6;
int brightness = 0;
int fadeAmount = 5;


//void will run when reset:
void setup () {
  pinMode(led, OUTPUT);
}

//this will repeat the void setup
void loop () {
   analogWrite(led, 255); //turns the LED to HIGH. delay in milliseconds:
   delay(50);
   analogWrite(led, 0); //turns the LED to LOW. delay in milliseconds:
   delay(50);

   brightness = brightness +fadeAmount;
   
  //changes the direction of the fade, resulting in a fade out:
    if (brightness <= 0 || brightness >= 255){
        fadeAmount = -fadeAmount;
    }

}
