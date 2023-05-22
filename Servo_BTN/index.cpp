#include <Servo.h>
Servo meuServo;

void setup()
{
   meuServo.attach(12);
  pinMode(2, INPUT);
}

void loop()
{
  if(digitalRead(2)==1)
  {
	meuServo.write(90);
    delay(50);
  }
  else
  {
    meuServo.write(0);
    delay(50);
  }
   delay(10);

  }