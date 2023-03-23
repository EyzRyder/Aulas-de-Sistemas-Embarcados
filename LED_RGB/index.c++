int r=8;
int g=10;
int b=9;


void setup()
{
  pinMode(r, OUTPUT);
  pinMode(g, OUTPUT);
  pinMode(b, OUTPUT);

}

void loop()
{
  analogWrite(r, 0);
  analogWrite(g, 250);
  analogWrite(b, 154);

  delay(1000); // Wait for 1000 millisecond(s)
  
  analogWrite(r, 0);
  analogWrite(g, 0);
  analogWrite(b, 0);

  delay(1000); // Wait for 1000 millisecond(s)

}