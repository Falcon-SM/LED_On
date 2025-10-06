#include <Arduino.h>

//Set Digital Pin 1 as LED Pin
const int LED_PIN = 1;

void setup() {
  // put your setup code here, to run once:

  //Set LED Pin as Output
  pinMode(LED_PIN, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  //Turn ON the LED for 1 second, then turn it OFF for 1 second
  
  digitalWrite(LED_PIN, HIGH);
  delay(1000);
  digitalWrite(LED_PIN, LOW);
  delay(1000);
}
