/*
 * DigitalClock.cpp
 *
 *  Created on: Mar 9, 2017
 *      Author: lia1hc
 */

#include <iostream>
#include "DigitalClock.h"
#include "ClockTimer.h"

DigitalClock::DigitalClock(ClockTimer* clockTimer)
{
    mSubject = clockTimer;
    mSubject->Attach(this);
}

DigitalClock::~DigitalClock()
{
    mSubject->Detach(this);
}

void DigitalClock::Update(Subject* changedSub)
{
    if (changedSub == mSubject)
    {
        Draw();
    }
}

void DigitalClock::Draw()
{
    int hour = mSubject->GetHour();
    int min = mSubject->GetMinute();
    int sec = mSubject->GetSecond();
    std::cout << hour << ":" << min << ":" << sec << std::endl;
}
