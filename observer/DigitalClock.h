/*
 * DigitalClock.h
 *
 *  Created on: Mar 9, 2017
 *      Author: lia1hc
 */

#ifndef __DIGITALCLOCK_H__
#define __DIGITALCLOCK_H__

#include "Widget.h"
#include "Observer.h"

class ClockTimer;
class Subject;

class DigitalClock : public Widget, public Observer
{
public:
    DigitalClock(ClockTimer*);
    virtual ~DigitalClock();

    virtual void Update(Subject*);

    virtual void Draw();

private:
    ClockTimer* mSubject;
};
#endif /* __DIGITALCLOCK_H__ */
