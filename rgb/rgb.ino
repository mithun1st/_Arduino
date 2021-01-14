int red=10,green=9,blue=8;

void setup(){
  pinMode(red,OUTPUT);
  pinMode(green,OUTPUT);
  pinMode(blue,OUTPUT);
}

void loop(){
  
  fn(255,0,0);
  delay(1000);
  fn(0,255,0);
  delay(1000);
  fn(0,0,255);
  delay(1000);


  fn(0,255,255);
  delay(1000);
  fn(255,0,255);
  delay(1000);
  fn(255,255,0);
  delay(1000);

  fn(255,255,255);
  delay(5000);
  
}

void fn(int r,int g,int b){
  r=255-r;
  g=255-g;
  b=255-b;

  analogWrite(red,r);
  analogWrite(green,g);
  analogWrite(blue,b);
  }
