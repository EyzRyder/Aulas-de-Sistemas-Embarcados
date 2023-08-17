int pinoPotEsq=A0;
int pinoPotDir=A1;

int motorEsq = 6;
int motorDir = 11;

int in1 = 10;
int in2 = 9;

int in3 = 8;
int in4 = 7;

int frente = 3;
int tras = 2;

void setup()
{
  pinMode(motorEsq, OUTPUT);
  pinMode(motorDir, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);

  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);
  digitalWrite(in4, LOW);

  Serial.begin(600);
  pinMode(frente, INPUT_PULLUP);
  pinMode(tras, INPUT_PULLUP);
}

void loop()
{
 delay(50);
  analogWrite(motorEsq, map(analogRead(pinoPotEsq), 0, 1023, 0, 255));

  delay(50);
  analogWrite(motorDir, map(analogRead(pinoPotDir), 0, 1023, 0, 255));

  if (digitalRead(frente) == 0) {
    digitalWrite(in1, LOW);
    digitalWrite(in2, HIGH);
  }

  if (digitalRead(tras) == 0) {
    digitalWrite(in1, HIGH);
    digitalWrite(in2, LOW);
  }

  if (digitalRead(frente) == 0) {
    digitalWrite(in3, HIGH);
    digitalWrite(in4, LOW);
  }
  if (digitalRead(tras) == 0) {
    digitalWrite(in3, LOW);
    digitalWrite(in4, HIGH);
  }
}