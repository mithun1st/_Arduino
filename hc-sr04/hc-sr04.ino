int d,t=22,e=A7;

void setup() {
  Serial.begin(9600);
  pinMode(t,OUTPUT);
  pinMode(e,INPUT);
}

void loop() {
  digitalWrite(t,0);
  delay(2);
  
  digitalWrite(t,1);
  delay(10);
  digitalWrite(t,0);
  
  d=pulseIn(e,1);

  int cm=d*0.034/2;
  int inc=d*0.0133/2;
  
  Serial.println(inc);
  delay(100);
}
