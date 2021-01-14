int led = 22;

void setup() {
  pinMode(led, OUTPUT);
  pinMode(A0, INPUT);

  Serial.begin(9600);
}

void loop() {
  //sending operation
  if (digitalRead(A0) == 1) {
    Serial.print("onM2u");
  }
  else {
    Serial.print("offM2u");
  }
  delay(50); //delay for sending data

  //receiving operation
  String s = "";
  while (Serial.available()) {
    s += (char)Serial.read();
    delay(5);
  }
  if (s == "onU2m") {
    digitalWrite(led, 1);
  }
  else if (s == "offU2m") {
    digitalWrite(led, 0);
  }
}
