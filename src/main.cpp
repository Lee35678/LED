#include <Arduino.h>

const short int LED1 = 2;

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
