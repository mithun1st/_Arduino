String s;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial2.begin(9600);
  Serial3.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  s="";
  while(Serial3.available()){
    s+=(char)Serial3.read();
    delay(5);
  }
  while(Serial2.available()){
    s+=(char)Serial2.read();
    delay(5);
  }

  delay(1000);
}
