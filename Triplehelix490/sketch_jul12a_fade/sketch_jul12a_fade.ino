
int pin = 9;
int brightness = 0;
int fadeAmount = 255;
int timeOn = 4000;
int timeOff = 2000;

//setup code: 
void setup() {
    pinMode(pin, OUTPUT);
}
  
//main code

void loop (){

    analogWrite(pin, HIGH);
    brightness = brightness + fadeAmount
      delay(timeOn);
       analogWrite(pin, LOW);
          delay(timeOff);


}
