/*
 * BomedMazeFactory.h
 *
 *  Created on: Aug 16, 2017
 *      Author: Tan.leMinh
 */

#ifndef ABSTRACT_FACTORY_BOMEDMAZEFACTORY_H_
#define ABSTRACT_FACTORY_BOMEDMAZEFACTORY_H_

#include "MazeFactory.h"
class Wall;
class Room;

class BomedMazeFactory: public MazeFactory {
public:
   Wall* MakeWall() const;
   Room* MakeRoom( int n ) const;
};



#endif /* ABSTRACT_FACTORY_BOMEDMAZEFACTORY_H_ */
