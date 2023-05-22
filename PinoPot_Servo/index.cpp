#include "Servo.h"
Servo meuServo;
const int pinoPot=A0;
int valorPot=0;
int angulo=0;

void setup()
{
   meuServo.attach(3);
  pinMode(pinoPot, INPUT);
}

void loop()
{
valorPot=analogRead(pinoPot);
  angulo=map(valorPot,0,1023,0,180);
  meuServo.write(angulo);
  delay(15);
}