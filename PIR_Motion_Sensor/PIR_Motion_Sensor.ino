const int s=A8;
const int led=12;

void setup() {
  // put your setup code here, to run once:
  pinMode(s,INPUT);
  pinMode(led,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(s)){
    Serial.println("Moving  . . .");
    digitalWrite(led,1);
  }
  else{
    Serial.println("Calculate");   
    digitalWrite(led,0); 
  }
  delay(100);
}
