#include "Timer.h"

void Timer::start(unsigned long dur) {
  _startTime = millis();
  _duration = dur;
  
  _started = true;
  _complete = false;
}

bool Timer::isComplete() {
  unsigned long now;

  if (_started && !_complete) {
    now = millis();
    
    if ((now - _startTime) > _duration) 
    {
      _complete = true;
      _started = false;
    }
  }
  
  return _complete;
}

unsigned long Timer::remaining() {
  return _duration - millis() - _startTime;
}