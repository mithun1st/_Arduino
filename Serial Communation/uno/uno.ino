int led = 8;

void setup() {
  pinMode(led, OUTPUT);
  pinMode(A1, INPUT);

  Serial.begin(9600);
}

void loop() {
  //receiving operation
  String s="";
  while(Serial.available()){
    s+=(char)Serial.read();
    delay(5);
  }
  if(s=="onM2u"){
    digitalWrite(led,1);
  }
  else if (s=="offM2u"){
    digitalWrite(led,0);
  }

  //sending operation
  if(digitalRead(A1)==1){
    Serial.print("onU2m");
  }
  else{
    Serial.print("offU2m");
  }
  delay(50); //delay for sending data
}
