/*
 * ObserverTest.cpp
 *
 *  Created on: Mar 9, 2017
 *      Author: lia1hc
 */

#include "ClockTimer.h"
#include "DigitalClock.h"

int main(int argc, char* argv[])
{
    ClockTimer* timer = new ClockTimer();

    DigitalClock* digitalClock = new DigitalClock(timer);
    timer->Run();
}
