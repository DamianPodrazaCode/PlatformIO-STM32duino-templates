#include <Arduino.h>
#include <USBDevice.h>

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  digitalToggle(LED_BUILTIN);
  delay(500);
}