int enA = 11;
int in1 = 10;
int in2 = 9;
int frente = 3;
int tras = 2;

void setup()
{
  pinMode(enA, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  // INICIANDO COM O MOTOR DESLIGADO
  digitalWrite(in1,LOW);
  digitalWrite(in2,LOW);
  pinMode(frente, INPUT_PULLUP);
  pinMode(tras, INPUT_PULLUP);
}

void loop()
{
  delay(50);
  analogWrite(enA, 255);

  if(digitalRead(frente)==0){
    digitalWrite(in1, HIGH);
    digitalWrite(in2, LOW);
    digitalWrite(12, HIGH);
    digitalWrite(13, LOW);
  }

  if(digitalRead(tras)==0){
    digitalWrite(in1, LOW);
    digitalWrite(in2, HIGH);
    digitalWrite(12, LOW);
    digitalWrite(13, HIGH);
  }
}