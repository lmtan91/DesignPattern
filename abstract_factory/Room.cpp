/*
 * Room.cpp
 *
 *  Created on: Aug 15, 2017
 *      Author: lia1hc
 */

#include <iostream>
#include "Room.h"

Room::Room(int n)
: _roomNumber(n)
{
   std::cout << "Room::Room" << std::endl;
}

void Room::SetSide(Direction direction, MapSite* ms)
{
   _side[direction] = ms;
}

int Room::GetRoomNumber()
{
   return _roomNumber;
}

Room* Room::Clone() const
{
   return new Room(*this);
}

void Room::Enter()
{
   std::cout << "Room::Enter" << std::endl;
}
