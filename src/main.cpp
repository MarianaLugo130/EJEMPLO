#include <Arduino.h>

//Agregar este cambio
//Mi cambio
//Otro cambio
//Y otro cambio

int led = 13;

void setup() {
  pinMode(led, OUTPUT);
}

void loop() {
  digitalWrite(led, HIGH);
  delay(1000);
  digitalWrite(led, LOW);
  delay(1000);
}