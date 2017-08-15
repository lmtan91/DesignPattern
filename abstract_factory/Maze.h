/*
 * Maze.h
 *
 *  Created on: Aug 15, 2017
 *      Author: lia1hc
 */

#ifndef _MAZE_H_
#define _MAZE_H_

#include <vector>
#include "Room.h"
class Maze
{
public:
   Maze();
   Room* RoomNo(int n) const;
   void AddRoom(Room *room);
   virtual Maze* Clone() const;
private:
   std::vector<Room*> *mRoomVec;
};

#endif /* _MAZE_H_ */
