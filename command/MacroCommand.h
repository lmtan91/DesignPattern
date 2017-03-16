/*
 * MacroCommand.h
 *
 *  Created on: Mar 16, 2017
 *      Author: lmtan91
 */

#ifndef __MACROCOMMAND_H__
#define __MACROCOMMAND_H__

#include "Command.h"
#include "List.h"

class MacroCommand : public Command
{
public:
   MacroCommand();
   virtual ~MacroCommand();

   virtual void Add(Command*);
   virtual void Remove(Command*);

   virtual void Execute();

private:
   List<Command*>* mCmds;
};

#endif /* __MACROCOMMAND_H__ */
