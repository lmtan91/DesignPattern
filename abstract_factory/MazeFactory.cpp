/*
 * MazeFactory.cpp
 *
 *  Created on: Aug 16, 2017
 *      Author: Tan.leMinh
 */

#include "MazeFactory.h"
#include "BomedMazeFactory.h"
#include "Maze.h"
#include "Wall.h"
#include "Room.h"
#include "Door.h"
#include <iostream>
#include <cstring>
#include <cstdlib>

MazeFactory* MazeFactory::_instance = 0;
MazeFactory::MazeFactory()
{

}

MazeFactory* MazeFactory::Instance()
{
   if (_instance == 0)
   {
      const char* mazeStyle = getenv( "MAZESTYLE" );
      if (strcmp( mazeStyle, "bombed" ) == 0)
      {
         _instance = new BomedMazeFactory;
      } else
      {
         _instance = new MazeFactory;
      }
   }

   return _instance;
}

Maze* MazeFactory::MakeMaze() const
{
   return new Maze;
}

Wall* MazeFactory::MakeWall() const
{
   return new Wall;
}

Room* MazeFactory::MakeRoom( int n ) const
{
   return new Room( n );
}

Door* MazeFactory::MakeDoor( Room* r1, Room* r2 ) const
{
   return new Door( r1, r2 );
}
