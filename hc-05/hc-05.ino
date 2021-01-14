
int led=13;
String input;

void setup(){
  Serial.begin(9600);
  pinMode(led,OUTPUT);
}


void loop(){
    input="";
    
    while(Serial.available()){
      input+=(char)Serial.read();
      delay(5);
  }

  if(input=="on"){
    digitalWrite(led,1);
    Serial.println("Led On");
  }
  else if(input=="off"){
    digitalWrite(led,0);
    Serial.println("Led Off");
    
  }
}
