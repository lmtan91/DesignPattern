/*
 * main.cpp
 *
 *  Created on: Aug 16, 2017
 *      Author: lia1hc
 */


#include "MazeGame.h"
#include "BomedMazeFactory.h"

int main()
{
   MazeGame game;
   BomedMazeFactory bombFact;

   game.CreateMaze(bombFact);
}
