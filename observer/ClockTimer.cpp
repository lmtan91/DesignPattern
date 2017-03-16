/*
 * ClockTimer.cpp
 *
 *  Created on: Mar 9, 2017
 *      Author: lia1hc
 */

#include "ClockTimer.h"

//ClockTimer::ClockTimer()
//{
//}

int ClockTimer::GetHour()
{
    return mCurrentTime.tm_hour;
}

int ClockTimer::GetMinute()
{
    return mCurrentTime.tm_min;
}

int ClockTimer::GetSecond()
{
    return mCurrentTime.tm_sec;
}

void ClockTimer::Tick()
{
    Notify();
}

void ClockTimer::Run()
{
    static int hour;
    static int min;
    static int sec;
    time_t t = time(NULL);
    tm curT = *localtime(&t);
    hour = curT.tm_hour;
    min = curT.tm_min;
    sec = curT.tm_sec;
    do
    {
        t = time(NULL);
        curT = *localtime(&t);
        if (curT.tm_sec > sec || curT.tm_min > min || curT.tm_hour > hour)
        {
            hour = curT.tm_hour;
            min = curT.tm_min;
            sec = curT.tm_sec;

            mCurrentTime = curT;
            Tick();
        }
    } while (1);
}
