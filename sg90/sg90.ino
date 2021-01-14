
#include <Servo.h>

int servoPin=44;
Servo s1,s2;


void setup() {
    s1.attach(servoPin);
    s2.attach(9);
}

void loop() {

    s1.write(0);
    s2.write(0);
    delay(3000);

    s1.write(90); 
    s2.write(180);
    delay(3000);

    fn();
    
}


void fn(){
  for(int i=0;i<180;i+=5){
  s1.write(i);
  delay(50);
}
}

