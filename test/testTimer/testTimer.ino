#line 2 "testTimer.ino"
#include <ArduinoUnit.h>
#include <Timer.h>


test(complete_by_default)
{
  Timer timer;

  assertTrue(timer.isComplete());
}

test(not_complete_after_starting)
{
  Timer timer;
  
  timer.start(1000);
  assertFalse(timer.isComplete());
}

test(remaining_as_expected_1000)
{
  const unsigned long duration = 1000;
  
  Timer timer;
  unsigned long remaining;
  
  timer.start(duration);
  remaining = timer.remaining();
  
  assertEqual(remaining, duration);
}

test(remaining_as_expected_100000)
{
  const unsigned long duration = 100000;
  
  Timer timer;
  unsigned long remaining;
  
  timer.start(duration);
  remaining = timer.remaining();
  
  assertEqual(remaining, duration);
}

test(remaining_as_expected_4294967295)
{
  const unsigned long duration = 4294967295;
  
  Timer timer;
  unsigned long remaining;
  
  timer.start(duration);
  remaining = timer.remaining();
  
  assertEqual(remaining, duration);
}

test(complete_after_duration)
{
  const unsigned long duration = 1000;

  Timer timer;
  unsigned long remaining;

  timer.start(duration);
  delay(duration + 2);
  
  assertTrue(timer.isComplete());
}

test(remaining_as_expected_after_complete)
{
  const unsigned long duration = 1000;
  
  Timer timer;
  unsigned long remaining;
  
  timer.start(duration);
  delay(duration + 2);

  remaining = timer.remaining();
  
  assertEqual(remaining, 0);
}


void setup()
{
  Serial.begin(9600);
  while(!Serial); // for the Arduino Leonardo/Micro only
}

void loop()
{
  Test::run();
}