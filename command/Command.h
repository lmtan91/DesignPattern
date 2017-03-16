/*
 * Command.h
 *
 *  Created on: Mar 16, 2017
 *      Author: lmtan91
 */

#ifndef __COMMAND_H__
#define __COMMAND_H__

class Command
{
public:
   virtual ~Command();

   virtual void Execute() = 0;

protected:
   Command();

};



#endif /* __COMMAND_H__ */
