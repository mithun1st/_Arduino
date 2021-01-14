const int r=10,g=9,b=8,d=1000;

void setup(){
  pinMode(r,OUTPUT);
  pinMode(g,OUTPUT);
  pinMode(b,OUTPUT);
}

void loop(){
  f(1,0,0);
  delay(d);
  f(0,1,0);
  delay(d);
  f(0,0,1);
  delay(d);

  
  f(0,1,1);
  delay(d);
  f(1,0,1);
  delay(d);
  f(1,1,0);
  delay(d);

  f(0,0,0);
  delay(2000);
}

void f(int aa,int bb,int cc){
  digitalWrite(r,aa);
  digitalWrite(g,bb);
  digitalWrite(b,cc);
}
