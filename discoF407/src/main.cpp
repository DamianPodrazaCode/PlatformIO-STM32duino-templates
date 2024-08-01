#include <Arduino.h>
#include <USBDevice.h>

void setup() {
    pinMode(LED_BLUE, OUTPUT);
    pinMode(LED_GREEN, OUTPUT);
    pinMode(LED_ORANGE, OUTPUT);
    pinMode(LED_RED, OUTPUT);
}

void loop() {
    digitalToggle(LED_BLUE);
    delay(100);
    digitalToggle(LED_GREEN);
    delay(100);
    digitalToggle(LED_ORANGE);
    delay(100);
    digitalToggle(LED_RED);
    delay(100);
}