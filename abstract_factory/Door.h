/*
 * Door.h
 *
 *  Created on: Aug 15, 2017
 *      Author: lia1hc
 */

#ifndef _DOOR_H_
#define _DOOR_H_

#include <iostream>
#include "MapSite.h"
#include "Room.h"

class Door : public MapSite
{
public:
   Door();
   Door(Room* r1, Room* r2);
   Door(const Door&);

   virtual void Initialize(Room*, Room*);
   virtual Door* Clone() const;

   virtual void Enter();
   Room* OtherSideFrom(Room*);

private:
   Room* _room1;
   Room* _room2;
};



#endif /* _DOOR_H_ */
