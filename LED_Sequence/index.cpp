int r = 5;
int g = 6;
int b = 7;
int o = 8;
int y = 9;

int red = A0;
int green = A1;
int blue = A2;

int btn = 3;

int valor = 0;

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
  pinMode(btn, OUTPUT);
}

void loop()
{
  while(valor<5){
    if (digitalRead(btn) == HIGH) {
      valor++;
    }
    if (valor == 1) {
      set1();
    }
    if (valor == 2) {
      set2();
    }
    if (valor == 3) {
      set3();
      set4();
    }
    if (valor == 5) {
      valor=0;
    }
  }
}

void set1 (){
  int i;

    if(i<10){
    for(i=4; i<11; i++){
        digitalWrite(i, HIGH);
        delay(1000); 
      }     
    }

  if(i>5){
    for(i; i>4;i--){
      digitalWrite(i, LOW);
      delay(1000); 
      }
  }
}


void set2 (){
    for(int i=5; i<11; i++){
        digitalWrite(i, HIGH);
        digitalWrite(i-1, LOW);
        delay(1000); 
    }
}

void set3 (){
        digitalWrite(r, HIGH);
        digitalWrite(g, HIGH);
        digitalWrite(b, HIGH);
        digitalWrite(o, HIGH);
        digitalWrite(y, HIGH);
        delay(1000); 
}

void set4 (){
        digitalWrite(r, LOW);
        digitalWrite(g, LOW);
        digitalWrite(b, LOW);
        digitalWrite(o, LOW);
        digitalWrite(y, LOW);
        delay(1000); 
}