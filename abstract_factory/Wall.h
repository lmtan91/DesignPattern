/*
 * Wall.h
 *
 *  Created on: Aug 15, 2017
 *      Author: lia1hc
 */

#ifndef _WALL_H_
#define _WALL_H_

class Wall : public MapSite
{
public:
   Wall();
   Wall(const Wall&);
   virtual Wall* Clone() const;
   virtual void Enter();
};



#endif /* _WALL_H_ */
