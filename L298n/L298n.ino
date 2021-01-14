int a = 7, b = 8, c = 9;


void setup() {
  // put your setup code here, to run once:
  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

  analogWrite(c,10);

  
  digitalWrite(a, 1);
  digitalWrite(b, 0);
  
  


}
