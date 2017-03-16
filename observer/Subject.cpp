/*
 * Subject.cpp
 *
 *  Created on: Mar 9, 2017
 *      Author: lia1hc
 */

#include "Subject.h"
#include "Observer.h"

Subject::Subject()
{
    mObservers = new List<Observer*>;
}

Subject::~Subject()
{
    delete[] mObservers;
}

void Subject::Attach(Observer* observer)
{
    if (observer != NULL)
    {
        mObservers->Append(observer);
    }
}

void Subject::Detach(Observer* observer)
{
    if (observer != NULL)
    {
        mObservers->Remove(observer);
    }
}

void Subject::Notify()
{
    ListIterator<Observer*> i(mObservers);

    for (i.First(); !i.IsDone(); i.Next())
    {
        i.CurrentItem()->Update(this);
    }
}
