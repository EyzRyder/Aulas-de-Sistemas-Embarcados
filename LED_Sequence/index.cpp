int r = 5;
int g = 6;
int b = 7;
int o = 8;
int y = 9;

int red = A0;
int green = A1;
int blue = A2;

int btn = 11;

int valor = 1;

void setup()
{
  pinMode(r, OUTPUT);
  pinMode(g, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(o, OUTPUT);
  pinMode(y, OUTPUT);
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(blue, OUTPUT);
  pinMode(btn, INPUT);
}

void loop()
{

  set1on();
  set1off();

  for(int loop=1;loop<=10;loop++){
    set3();
    set4();
  }

  set2();

  for(int loop=1;loop<=5;loop++){
    set3();
    set4();
  }

  set4();

}

void set1on (){
    for(int i=5; i<=10; i++){
        digitalWrite(i, HIGH);
        delay(500); 
      }     
}

void set1off (){
  for(int i=10; i>=5;i--){
    digitalWrite(i, LOW);
    delay(500); 
  }
}



void set2 (){
  for(int i2=5; i2<11; i2++){
    digitalWrite(i2, HIGH);
    digitalWrite(i2-1, LOW);
    delay(500); 
  }
}

void set3 (){
  digitalWrite(r, HIGH);
  digitalWrite(g, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(o, HIGH);
  digitalWrite(y, HIGH);
  delay(500); 
}

void set4 (){
  digitalWrite(r, LOW);
  digitalWrite(g, LOW);
  digitalWrite(b, LOW);
  digitalWrite(o, LOW);
  digitalWrite(y, LOW);
  delay(500); 
}