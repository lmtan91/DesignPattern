/*
 * Maze.cpp
 *
 *  Created on: Aug 15, 2017
 *      Author: lia1hc
 */

#include <iostream>
#include <vector>
#include "Maze.h"

Maze::Maze()
: mRoomVec(new std::vector<Room*>)
{
   std::cout << "Maze::Maze()" << std::endl;
}

Room* Maze::RoomNo(int n) const
{
   std::vector<Room*>::const_iterator it = mRoomVec->begin();
   for ( ; it != mRoomVec->empty(); ++it)
   {
      if ( (*it)->GetRoomNumber() == n )
      {
         return (*it);
         break;
      }
   }
   return 0;
}

void Maze::AddRoom(Room *room)
{
   mRoomVec->push_back(room);
}

Maze* Maze::Clone() const
{
   return new Maze(*this);
}
