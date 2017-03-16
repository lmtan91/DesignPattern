/*
 * Subject.h
 *
 *  Created on: Mar 9, 2017
 *      Author: lia1hc
 */

#ifndef __SUBJECT_H__
#define __SUBJECT_H__

#include <List.h>
#include "Observer.h"

class Subject
{
public:
    virtual ~Subject();
    virtual void Attach(Observer*);
    virtual void Detach(Observer*);
    virtual void Notify();

protected:
    Subject();

private:
    List<Observer*> *mObservers;
};



#endif /* __SUBJECT_H__ */
