/** @file Timer.h 
  *  Copyright (c) 2016 Ozbotics 
  *  Distributed under the MIT license (see LICENSE)
  */ 
#ifndef _TIMER_H
  #define _TIMER_H

#include <Arduino.h>

 /**
  *  Timer class. 
  *  Non-blocking Timer class for Arduino projects
 */
class Timer  {
  protected:
    unsigned long _startTime;   /**< protected variable _startTime. millis() at the time of starting */ 
    unsigned long _duration;    /**< protected variable _duration. number of millis the timer should run for */
    bool _started = false;      /**< protected variable _started. timer is started flag */
    bool _complete = true;      /**< protected variable _complete. timer is complete flag. Note: is true even if timer has never been started */
    
  public:
   /**
    * start the timer, completing in dur milliseconds
    *
    * @param dur milliscends
    */  
    void start(unsigned long dur);
    
   /**
    * is the timer complete?
    *
    * @return true if timer is complete
    */  
    bool isComplete();
    
   /**
    * how many milliseconds are remaining?
    *
    * @return the number of milliseconds until the timer is complete
    */  
    unsigned long remaining();
};

#endif // _TIMER_H
