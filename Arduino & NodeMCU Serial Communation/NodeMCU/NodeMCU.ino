

#define BLYNK_PRINT Serial


#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>


char auth[] = "XO5tPgy2O6-kgNplfXXy35rTgtWdWQ_a";


char ssid[] = "Rs....1st";
char pass[] = "10010001";

void setup()
{

  Serial.begin(9600);

  Blynk.begin(auth, ssid, pass);

}



BLYNK_WRITE(V1)
{
  String pinValue = param.asStr(); 
  Serial.print(pinValue);
}

void loop()
{
  Blynk.run();

}
