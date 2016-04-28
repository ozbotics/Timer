#ifndef _TIMER_H
  #define _TIMER_H
  
#include <Arduino.h>

class Timer  {
  protected:
    unsigned long _startTime;
    unsigned long _duration;
    bool _started = false;
    bool _complete = true;
    
  public:
    void start(unsigned long dur);
    bool isComplete();
    unsigned long remaining();
};

#endif // _TIMER_H
