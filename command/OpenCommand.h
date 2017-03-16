/*
 * OpenCommand.h
 *
 *  Created on: Mar 16, 2017
 *      Author: lmtan91
 */

#ifndef __OPENCOMMAND_H__
#define __OPENCOMMAND_H__

#include "Command.h"

class Application;

class OpenCommand : public Command
{
public:
   OpenCommand(Application*);

   virtual void Execute();
protected:
   virtual const char* AskUser();
private:
   Application* mApplication;
   char*        mResponse;
};
#endif /* __OPENCOMMAND_H__ */
