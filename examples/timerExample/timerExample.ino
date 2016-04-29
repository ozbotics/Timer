#include <Timer.h>

Timer timer;

const unsigned long duration = 1000;
unsigned long remaining;

void setup()
{
  Serial.begin(9600);

  Serial.print(F("Starting Timer, with duration: "));  
  Serial.println(duration);  
  
  timer.start(duration);
  
  for (byte i=0; i<5; i++) {
    remaining = timer.remaining();

    Serial.print(F("remaining after "));  
    Serial.print(i * 25);  
    Serial.print(F("%: "));  
    Serial.print(remaining);  
    Serial.print(F(", isComplete: "));  
    Serial.println((timer.isComplete()) ? "True" : "False" ); 
    
    delay(duration / 4);
  }
  
}

void loop()
{
}