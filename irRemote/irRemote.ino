#include <IRremote.h>

#define led 13

int IRpin = 2;
IRrecv irrecv(IRpin);
decode_results results;


void setup() {
  pinMode (led, OUTPUT);

  Serial.begin(9600);
  irrecv.enableIRIn(); // Start the receiver
}
void loop() {
  if (irrecv.decode(&results)) {
    Serial.println(results.value, HEX); // Print the Serial 'results.value'
    delay(5);

    if (results.value == 0xFFA25D) {
      digitalWrite(led, 1);
    }
    else if (results.value == 0xFF629D) {
      digitalWrite(led, 0);
    }

    irrecv.resume();   // Receive the next value
  }
}
