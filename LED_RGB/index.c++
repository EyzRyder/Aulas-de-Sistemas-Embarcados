int r=8;
int g=10;
int b=9;

int temp = 1000;

void setup()
{
  pinMode(r, OUTPUT);
  pinMode(g, OUTPUT);
  pinMode(b, OUTPUT);

}

void loop()
{
  
  setColor(0,250,0);
 

  setColor(250,250,0);
  
  
  setColor(250,0,0);

}

void setColor(int red, int green, int blue) {
  analogWrite(r, red);
  analogWrite(g, green);
  analogWrite(b, blue);
  delay(temp); 
}