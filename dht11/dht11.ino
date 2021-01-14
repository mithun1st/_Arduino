#include <dht.h>

dht d;

const int a= A0;

void setup(){
  Serial.begin(9600);
}

void loop()
{
  d.read11(a);

  Serial.print("Temperature = ");
  Serial.println(d.temperature);
  Serial.print("Humidity = ");
  Serial.println((String)d.humidity+"\n");

  delay(1000);
}
