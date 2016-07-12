
int led = 6;
//set led pin to pin 6
int brightness=0;
int fadeamount=5;
void setup() {
  // put your setup code here, to run once:
  pinMode(led,OUTPUT);
  Serial.begin(9600);  
}

void loop() {
  // put your main code here, to run repeatedly:
  //choose method to run
  fade();
  //run fade method
  analogWrite(led,brightness);
  
  Serial.print(brightness);
  Serial.print(" \n");
  //output to led with current brightness
}
void blink(){
    if(brightness == 0){
        brightness=255;
    }else{
        brightness=0;
    }
        delay(100);
  }

 void fade(){
      brightness=brightness+fadeamount;
      if(brightness<=0||brightness>=255){
          fadeamount= -fadeamount;
      }
      delay(20);
  }

  

