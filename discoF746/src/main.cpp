#include <Arduino.h>

void setup() {
  pinMode(LED_GREEN, OUTPUT);
}

void loop() {
  digitalToggle(LED_GREEN);
  delay(500);
}