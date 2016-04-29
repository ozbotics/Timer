# Timer

The Timer library provides a non-blocking Timer class for Arduino projects.

The Timer class allows you to test for timer completion while allowing other operations to occur. Unlike the delay() function that ties up the CPU until it is complete.


## Installation

Clone the git repository into your Arduino/libraries directory


## Usage

Include the Timer library
```
#include <Timer.h>
```

Define an instance of Timer
```
Timer timer();
```

Start the timer. The duration is expressed in milliseconds
```
timer.start(1000);
```

Test if timer is complete
```
if (timer.isComplete()) {
  // do something
}
else {
  // do something else
}
```

Note: isComplete() willl return true if the timer has never been started

Check how much time is remaining
```
  unsigned long remaining = timer.remaining();
```


## Example
```
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
    Serial.print(F(" remaining"));
  }
  
  // do something else
}
```


First 
## Copyright

Timer is provided Copyright © 2016 Ozbotics under MIT License.