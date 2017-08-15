/*
 * Wall.cpp
 *
 *  Created on: Aug 15, 2017
 *      Author: lia1hc
 */

#include <iostream>
#include "Wall.h"

Wall::Wall()
{
   std::cout << "Wall::Wall" << std::endl;
}

Wall::Wall(Wall const &)
{
   std::cout << "Wall::Wall(Wall const &)" << std::endl;
}

Wall* Wall::Clone() const
{
   return new Wall(*this);
}

void Wall::Enter()
{
   std::cout << "Wall::Enter" << std::endl;
}
