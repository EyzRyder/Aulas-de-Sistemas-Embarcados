int red = 5;
int blue = 6;
int green = 9;

const int potentiometer0 = A0;
const int potentiometer1 = A1;
const int potentiometer2 = A2;

int potentiometerValor0 = 0;
int potentiometerValor1 = 0;
int potentiometerValor2 = 0;

int IntenseRed = 0;
int IntenseBlue = 0;
int IntenseGreen = 0;

void setup()
{
  pinMode(potentiometer0, INPUT);
  pinMode(potentiometer1, INPUT);
  pinMode(potentiometer2, INPUT);
  pinMode(red, OUTPUT);
  pinMode(blue, OUTPUT);
  pinMode(green, OUTPUT);
}

void loop()
{
  potentiometerValor0 = analogRead(potentiometer0);
  IntenseRed = map(potentiometerValor0, 0, 1023, 0, 255);
  
  potentiometerValor1 = analogRead(potentiometer1);
  IntenseBlue = map(potentiometerValor1, 0, 1023, 0, 255);
  
  potentiometerValor2 = analogRead(potentiometer2);
  IntenseGreen = map(potentiometerValor2, 0, 1023, 0, 255);
  
  changeColor(IntenseRed,IntenseGreen,IntenseBlue);
  delay(15);
}

void changeColor(int r, int g , int b){
    analogWrite(red, r);
    analogWrite(green, g);
    analogWrite(blue, b);
}