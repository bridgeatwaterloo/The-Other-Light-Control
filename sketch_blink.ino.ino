
/*this fade sketch meets the Acceptance Criteria https://trello.com/c/HQigFpAG */

int pin = 9;
int shine = 0;
int fadeAmount = 5.9;
int flashon = 258;
int flashoff = 250;

  /*setup used the run once*/
  void setup() {

    /*the print syntax used to begin the serial monitior*/
    Serial.begin(9600);
    
    /*LED pin stored as a variable*/
    pinMode(pin, OUTPUT);
}

  /*used for a repeated routine*/
  void loop() {

    /*the print syntax used to display serial monitior details from the loop*/
    Serial.print(shine);
    Serial.print('\n');
 
  /*intensifies the voltage to pin 9*/
  digitalWrite(pin, HIGH);

  /*wait for 15 milliseconds to see the blind effect on*/
  delay(flashon);

  /*changes the brightness for the next loop*/
  digitalWrite(pin, LOW);

  /*wait for 15 milliseconds to see the blink effect off*/
  delay(flashoff);
}  






