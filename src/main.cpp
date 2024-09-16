#include <Arduino.h>


void setup() {
  pinMode(LED1, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LED1, LOW);
  delay(500);
  digitalWrite(LED1, HIGH);
  delay(500);
}
