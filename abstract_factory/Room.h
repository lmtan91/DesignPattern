/*
 * Room.h
 *
 *  Created on: Aug 15, 2017
 *      Author: lia1hc
 */

#ifndef _ROOM_H_
#define _ROOM_H_
#include "MapSite.h"
#include "MazeTypes.h"


class Room : MapSite
{
public:
   Room(int n = 0);

   virtual Room* Clone() const;

   void SetSide(Direction direction, MapSite* ms);

   int GetRoomNumber();

   virtual void Enter();

private:
   MapSite* _side[4];
   int _roomNumber;
};



#endif /* _ROOM_H_ */
