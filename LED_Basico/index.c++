int led5 = 5;
int led6 = 6;
int led7 = 7;
int temp = 250;
void setup()
{
  pinMode(led5, OUTPUT);
  pinMode(led6, OUTPUT);
  pinMode(led7, OUTPUT);

}

void loop()
{
  digitalWrite(led5, HIGH);
  delay(temp); 
  digitalWrite(led5, LOW);
  delay(temp); 
  digitalWrite(led6, HIGH);
  delay(temp); 
  digitalWrite(led6, LOW);
  delay(temp);   
  digitalWrite(led7, HIGH);
  delay(temp); 
  digitalWrite(led7, LOW);
  delay(temp); 
  digitalWrite(led5, HIGH);
  digitalWrite(led6, HIGH);
  digitalWrite(led7, HIGH);
  delay(temp); 
  digitalWrite(led5, LOW);
  digitalWrite(led6, LOW);
  digitalWrite(led7, LOW);
  delay(temp); 
  
}