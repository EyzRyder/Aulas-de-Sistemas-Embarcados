#include "Servo.h"

Servo servo1;

int valorLDR=0;
int angulo = 0;

const int redled = 13;
const int greenled = 12;

const int pinLDR = A5;

void setup()
{
  pinMode(pinLDR, INPUT);

  pinMode(redled, OUTPUT);
  pinMode(greenled, OUTPUT);

  Serial.begin(9600);
  servo1.attach(A0);
}

void loop()
{

  valorLDR = analogRead(pinLDR);

  angulo = map(valorLDR, 0, 1023, 6, 679);

  Serial.println(valorLDR);

  if(valorLDR<300){
      servo1.write(angulo);

    delay(500);
    digitalWrite(redled, HIGH);
      delay(500);
    digitalWrite(redled, LOW);

    digitalWrite(greenled, LOW);

  }else{
   servo1.write(0);
   digitalWrite(greenled, HIGH);
   digitalWrite(redled, LOW);
}
}