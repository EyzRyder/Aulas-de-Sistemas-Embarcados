#include "Servo.h"

Servo servo1;
Servo servo2;

const int pinoBot = A0;
int valorPot = 0;
int angulo = 0;

int ledLeft = 13;
int ledRight = 2;

void setup()
{
  pinMode(pinoBot, INPUT);
  pinMode(ledLeft, OUTPUT);
  pinMode(ledRight, OUTPUT);
  servo1.attach(A1);  
  servo2.attach(A2);
}

void loop()
{
  valorPot = analogRead(pinoBot);
  angulo = map(valorPot, 0, 1023, 0, 180);
  servo1.write(angulo);
  servo2.write(angulo);
  
  if (angulo >= 90) {
    digitalWrite(ledLeft, HIGH);
    digitalWrite(ledRight, LOW);
  } else {
    digitalWrite(ledLeft, LOW);
    digitalWrite(ledRight, HIGH);
  }
  delay(15);
}