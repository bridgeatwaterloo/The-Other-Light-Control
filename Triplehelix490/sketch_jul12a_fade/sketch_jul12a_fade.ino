//    ||||||||||
//    \/\/\/\/\/change these factors to change the characteristics of the components.
int pin = 9;
int brightness = 0;
int fadeAmount = 5;
int timeOn = 400;


//setup code: this pulls the program from the Arduino pre-program
void setup(){
  pinMode(pin, OUTPUT);
}

//main code: the main code which produce the desired effects for the components
void loop(){
      analogWrite(pin, brightness);
        brightness = brightness + fadeAmount;
             if ( brightness <= 0||brightness >= 255){
                 fadeAmount = - fadeAmount;
              }
       delay(timeOn);
}       
