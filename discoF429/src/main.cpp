#include <Arduino.h>

void setup() {
    pinMode(LED_GREEN, OUTPUT);
    pinMode(LED_RED, OUTPUT);
}

void loop() {
    digitalToggle(LED_GREEN);
    delay(100);
    digitalToggle(LED_RED);
    delay(100);
}