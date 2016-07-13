
void fadeToALevel(){
  analogWrite(analogPin, analogValue);

// change the brightness for next time through the loop:
  analogValue = analogValue + fadeAmount;

// reverse the direction of the fading at the ends of the fade:
  if (analogValue <= 0 || analogValue >= 255) {
    fadeAmount = -fadeAmount;
 }
  // wait for 30 milliseconds to see the dimming effect
  delay(30);

}
