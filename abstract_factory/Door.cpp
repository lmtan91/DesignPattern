/*
 * Door.cpp
 *
 *  Created on: Aug 15, 2017
 *      Author: lia1hc
 */

#include <iostream>
#include "Door.h"

Door::Door()
{
   std::cout << "Door::Door()" << std::endl;
}

Door::Door(Room* r1, Room* r2)
: _room1(r1), _room2(r2)
{
   std::cout << "Door::Door(Room* r1, Room* r2)" << std::endl;
}

Door::Door(const Door& other)
{
   _room1 = other._room1;
   _room2 = other._room2;
}

Door::~Door()
{

}

void Door::Initialize (Room* r1, Room* r2)
{
    _room1 = r1;
    _room2 = r2;
}

Door* Door::Clone() const
{
   return new Door(*this);
}

void Door::Enter()
{
   std::cout << "Door::Enter()" << std::endl;
}
