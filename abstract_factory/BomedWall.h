/*
 * BomedWall.h
 *
 *  Created on: Aug 16, 2017
 *      Author: Tan.leMinh
 */

#ifndef ABSTRACT_FACTORY_BOMEDWALL_H_
#define ABSTRACT_FACTORY_BOMEDWALL_H_

#include "Wall.h"

class BomedWall: public Wall {
public:
   BomedWall();
   BomedWall( const BomedWall& );

   virtual Wall* Clone() const;
   bool HasBome();
private:
   bool _bomb;
};

#endif /* ABSTRACT_FACTORY_BOMEDWALL_H_ */
