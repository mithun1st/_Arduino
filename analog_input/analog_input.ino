int led=12;

int se=A7;

void setup(){
  pinMode(led,OUTPUT);
  pinMode(se,INPUT);
  Serial.begin(9600);
}

void loop(){
  int a=analogRead(se);
  Serial.println(a);
  analogWrite(led,a);
  delay(20);
}

