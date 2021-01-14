int buz=7;

void setup(){
  pinMode(buz,OUTPUT);
}

void loop(){
  for(int i=0;i<=255;i+=10){
    analogWrite(buz,i);
    Serial.println(i);
    delay(1000);
  }
}

