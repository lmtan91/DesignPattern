/*
 * MazeFactory.h
 *
 *  Created on: Aug 15, 2017
 *      Author: lia1hc
 */

#ifndef _MAZEFACTORY_H_
#define _MAZEFACTORY_H_

class Maze;
class Wall;
class Room;
class Door;

class MazeFactory
{
public:
   static MazeFactory* Instance();

   virtual Maze* MakeMaze() const;
   virtual Wall* MakeWall() const;
   virtual Room* MakeRoom( int n ) const;
   virtual Door* MakeDoor(Room* r1, Room* r2) const;

protected:
   MazeFactory();

private:
   static MazeFactory* _instance;
};

#endif /* _MAZEFACTORY_H_ */
