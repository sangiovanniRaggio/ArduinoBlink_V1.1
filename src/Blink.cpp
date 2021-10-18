/*
 * Blink
 * Turns on an LED on for one second,
 * then off for one second, repeatedly.
 */

#include <Arduino.h>

void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);

  Serial.begin(9600);
  Serial.println("Comenzando programa..");
}

void loop()
{
  Serial.println("Prendiendo Led");
  digitalWrite(LED_BUILTIN, HIGH);
  delay(1000);
  Serial.println("Apagando Led");
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000);
}