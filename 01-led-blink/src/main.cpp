#include <Arduino.h>

#define LED_BLINK 2

void setup() {
  pinMode(LED_BLINK, OUTPUT);
}

void loop() {
  digitalWrite(LED_BLINK, HIGH); // turn the LED on (HIGH is the voltage level)
  delay(1000);                   // wait for a second
  digitalWrite(LED_BLINK, LOW);  // turn the LED off by making the voltage LOW
  delay(1000);                   // wait for a second
}