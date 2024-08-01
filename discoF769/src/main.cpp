#include <Arduino.h>
#include <USBDevice.h>

void setup() {
    pinMode(LED_RED, OUTPUT);
    pinMode(LED_GREEN1, OUTPUT);
    pinMode(LED_GREEN2, OUTPUT);
}
void loop() {
    digitalToggle(LED_RED);
    delay(100);
    digitalToggle(LED_GREEN1);
    delay(100);
    digitalToggle(LED_GREEN2);
    delay(100);
}