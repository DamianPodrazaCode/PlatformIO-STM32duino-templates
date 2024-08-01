#include <Arduino.h>
#include <USBDevice.h>

void setup() {
  pinMode(LED_BLUE, OUTPUT);
  pinMode(LED_GREEN, OUTPUT);
  pinMode(LED_RED, OUTPUT);
}

void loop() {
  digitalToggle(LED_BLUE);
  HAL_Delay(100);
  digitalToggle(LED_GREEN);
  HAL_Delay(100);
  digitalToggle(LED_RED);
  HAL_Delay(100);
}