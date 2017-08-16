/*
 * BomedWall.cpp
 *
 *  Created on: Aug 16, 2017
 *      Author: Tan.leMinh
 */

#include "BomedWall.h"

BomedWall::BomedWall() :
      Wall()
{

}

BomedWall::BomedWall( const BomedWall& other ) :
      Wall( other )
{
   _bomb = other._bomb;
}

Wall* BomedWall::Clone() const
{
   return new BomedWall( *this );
}
