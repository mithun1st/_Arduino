#include<LiquidCrystal.h>

LiquidCrystal lcd1(42,44,46,48,50,52);
String s="Mahadi Hassan";
void setup(){
  lcd1.begin(16,2);
 
  lcd1.setCursor(1,0);
  lcd1.print(s);
  delay(2000);
  
  lcd1.setCursor(4,1);
  lcd1.print("MITHUN");
  delay(1000);

  lcd1.clear();
}

void loop(){
  lcd1.setCursor(3,0);
  lcd1.print("Mh Mithun");
  lcd1.setCursor(0,1);
  lcd1.print("Count-");
  lcd1.setCursor(7,1);
  lcd1.print(millis()/1000);
}

