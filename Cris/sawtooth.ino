int fadeAmount = 10; // amount of brightness increase at each step
int maxBrightness = 255;
int sawtoothCount = 3; // how many peaks
int sawtoothIncrease = maxBrightness / sawtoothCount; // 
int stepDelay = 30; //ms to show one brightness
int brightness = 0;
int sawtoothPeak = sawtoothIncrease; // setting target to first peak
int led = 11;

void setup() {
  pinMode(led, OUTPUT);
}

void loop() {
  if (brightness >= sawtoothPeak) { // at the peak
    brightness = 0; // over the hump


    // updating the peak target


    if (sawtoothPeak < maxBrightness) {
      sawtoothPeak += sawtoothIncrease; // increase peak
    } else {
      sawtoothPeak = sawtoothIncrease; // first peak
    }
  } else {
    brightness += fadeAmount; // increasing brightness
  }
  
  analogWrite(led, brightness);
  delay(stepDelay);
}