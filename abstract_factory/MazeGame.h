/*
 * MazeGame.h
 *
 *  Created on: Aug 16, 2017
 *      Author: Tan.leMinh
 */

#ifndef ABSTRACT_FACTORY_MAZEGAME_H_
#define ABSTRACT_FACTORY_MAZEGAME_H_

#include "Maze.h"
#include "Room.h"
#include "Wall.h"
#include "Door.h"

class MazeFactory;
class MazeGame {
public:
   Maze* CreateMaze();

   Maze* CreateMaze( MazeFactory* fact );

   virtual Maze* MakeMaze() const
   {
      return new Maze;
   }
   virtual Room* MakeRoom( int n ) const
   {
      return new Room( n );
   }
   virtual Wall* MakeWall() const
   {
      return new Wall;
   }
   virtual Door* MakeDoor( Room* r1, Room* r2 ) const
   {
      return new Door( r1, r2 );
   }
};



#endif /* ABSTRACT_FACTORY_MAZEGAME_H_ */
