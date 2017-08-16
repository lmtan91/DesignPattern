/*
 * BomedMazeFactory.cpp
 *
 *  Created on: Aug 16, 2017
 *      Author: Tan.leMinh
 */

#include "BomedMazeFactory.h"
#include "Wall.h"
#include "BomedWall.h"
#include "RoomWithABomb.h"

Wall* BomedMazeFactory::MakeWall() const
{
   return new BomedWall;
}

Room* BomedMazeFactory::MakeRoom( int n ) const
{
   return new RoomWithABomb( n );
}
