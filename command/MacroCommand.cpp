/*
 * MacroCommand.cpp
 *
 *  Created on: Mar 16, 2017
 *      Author: lmtan91
 */

#include "MacroCommand.h"
#include "Command.h"
#include "ListIterator.h"
#include "List.h"

void MacroCommand::Execute()
{
   ListIterator<Command*> i(mCmds);

   for (i.First(); !i.IsDone(); i.Next())
   {
      Command* c = i.CurrentItem();
      c->Execute();
   }
}

void MacroCommand::Add(Command* c)
{
   mCmds->Append(c);
}

void MacroCommand::Remove(Command* c)
{
   mCmds->Remove(c);
}
