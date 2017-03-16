/*
 * ClockTimer.h
 *
 *  Created on: Mar 9, 2017
 *      Author: lia1hc
 */

#ifndef __CLOCKTIMER_H__
#define __CLOCKTIMER_H__

#include <time.h>
#include "Subject.h"

class ClockTimer : public Subject
{
public:
    ClockTimer(){};

    virtual ~ClockTimer(){};

    virtual int GetHour();
    virtual int GetMinute();
    virtual int GetSecond();

    void Tick();

    void Run();
private:

    tm mCurrentTime;
};



#endif /* __CLOCKTIMER_H__ */
