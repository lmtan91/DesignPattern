/*
 * RoomWithABomb.h
 *
 *  Created on: Aug 16, 2017
 *      Author: Tan.leMinh
 */

#ifndef ABSTRACT_FACTORY_ROOMWITHABOMB_H_
#define ABSTRACT_FACTORY_ROOMWITHABOMB_H_

#include "Room.h"

class RoomWithABomb: public Room {
public:
   RoomWithABomb( int = 0, bool bomed = false );
   RoomWithABomb( const RoomWithABomb& );
   bool HasBomb();
private:
   bool _bomb;
};

#endif /* ABSTRACT_FACTORY_ROOMWITHABOMB_H_ */
