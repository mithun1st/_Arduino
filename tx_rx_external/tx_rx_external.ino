int led=13;

/*
 * Serial1 = rx1, tx1;
 * Serial2 = rx2, tx2;
 * Serial3 = rx3, tx3;
 */ 


void setup(){
  pinMode(led,OUTPUT);
  Serial.begin(9600);
  Serial3.begin(9600);
}

void loop(){
  String inp="";
  
  while(Serial3.available()){
    inp+=(char)Serial3.read();
    delay(5);
  }
  
  Serial.println(inp);
  
  if(inp=="on"){
    digitalWrite(led,1);
  }
  else if(inp=="off"){
    digitalWrite(led,0);
  }
  delay(500);
}
