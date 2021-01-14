int le1=8;
int le2=9;
int ri1=10;
int ri2=11;

void setup() {
  pinMode(le1,OUTPUT);
  pinMode(le2,OUTPUT);
    pinMode(ri1,OUTPUT);
  pinMode(ri2,OUTPUT);
}

void loop() {

    digitalWrite(ri1,0);
  digitalWrite(ri2,0);
    digitalWrite(le1,0);
  digitalWrite(le2,0);
  delay(1000);
//slow forword-----------------speed slow on analogwrite (100)
    analogWrite(ri1,100);
  digitalWrite(ri2,0);
    analogWrite(le1,100);
  digitalWrite(le2,0);
  delay(3000);

    digitalWrite(ri1,0);
  digitalWrite(ri2,0);
    digitalWrite(le1,0);
  digitalWrite(le2,0);
  delay(1000);

     digitalWrite(ri1,0);
  digitalWrite(ri2,1);
     digitalWrite(le1,0);
  digitalWrite(le2,1);
  delay(3000);

}
