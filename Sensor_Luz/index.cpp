const int pinLed = 13;
const int pinLDR = A5;
int valorLDR=0;

void setup()
{
  pinMode(pinLed, OUTPUT);
  pinMode(pinLDR, INPUT);
  Serial.begin(9600);
}

void loop()
{
  valorLDR=analogRead(pinLDR);
  Serial.println(valorLDR);
  delay(15);
  if(valorLDR<500){
    digitalWrite(pinLed, HIGH);
  }else{
    digitalWrite(pinLed, LOW);
}
}