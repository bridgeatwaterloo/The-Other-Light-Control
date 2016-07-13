
int led = 6;
int brightness = 0;
int fadeamount = 5;

void setup() {
  // put your setup code here, to run once:
  pinMode(led,OUTPUT);
  Serial.begin(9600);  //set up serial monitor
}

void loop() {
  // put your main code here, to run repeatedly:
  fade();//will call a method that will change the brightness so that it fades
  //blink();//will call a method to change the brightness so that it blinks
  analogWrite(led,brightness); 
  Serial.print(brightness);//print to the serial monitor
  Serial.print(" \n");
}

void blink(){ //this method changes the brightness and add delays that give a blink effect
    if(brightness == 0){ //if light is off then set light to on
        brightness=255;
    }else{ //if light is not off (light is on) then turn light off
        brightness=0;
    }
    delay(100);// wait for 100 miliseconds
}

void fade(){//this method changes the brightness and add delaysthat give a fade effect
      brightness = brightness + fadeamount; //change brightness by the fadeamount
      if(brightness<=0||brightness>=255){//if the brightness is off or full then reverse the direction of fade
          fadeamount= -fadeamount;
      }
      delay(20);//delay for 20 miliseconds
}

  

