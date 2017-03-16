/*
 * Observer.h
 *
 *  Created on: Mar 9, 2017
 *      Author: lia1hc
 */

#ifndef __OBSERVER_H__
#define __OBSERVER_H__

class Subject;

class Observer
{
public:
    virtual ~Observer(){};
    virtual void Update(Subject* changedSub) = 0;
protected:
    //Observer();
};



#endif /* __OBSERVER_H__ */
