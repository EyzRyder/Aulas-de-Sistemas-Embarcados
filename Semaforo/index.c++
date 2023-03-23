int cemafero1 = 8;
int cemafero2 = 5;


void setup()
{
  pinMode(cemafero1, OUTPUT);
  pinMode(cemafero2, OUTPUT);
}

void loop()
{
    redGreen(cemafero1,cemafero2);
    redGreen(cemafero2,cemafero1);
}

void redGreen(int light1, int light2)
{
    // green
    digitalWrite(light2, LOW);
    digitalWrite(light2+2, HIGH);

    //red
    digitalWrite(light1+1, LOW);
    digitalWrite(light1, HIGH);
    delay(1000);

    //yellow
    digitalWrite(light2+2, LOW);
    digitalWrite(light2+1, HIGH);
    delay(1000);

}
