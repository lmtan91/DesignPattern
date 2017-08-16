/*
 * RoomWithABomb.cpp
 *
 *  Created on: Aug 16, 2017
 *      Author: Tan.leMinh
 */
#include "RoomWithABomb.h"

RoomWithABomb::RoomWithABomb( int n, bool bomed ) :
      Room( n ), _bomb( bomed )
{

}

RoomWithABomb::RoomWithABomb( const RoomWithABomb& other ) :
      Room( other )
{
   _bomb = other._bomb;
}

bool RoomWithABomb::HasBomb()
{
   return _bomb;
}
