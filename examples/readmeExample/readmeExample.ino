#include <Timer.h>

Timer timer;

void setup() {
  Serial.begin(9600);
  
  timer.start(1000);
}

void loop() {
  if (timer.isComplete()) {
    Serial.println(F("Timer is complete"));
  }
  else {
    Serial.print(F("Timer is not complete, "));
    Serial.print(timer.remaining());
    Serial.println(F(" remaining"));
  }
  
  // do something else
}