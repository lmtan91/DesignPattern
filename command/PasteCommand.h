/*
 * PasteCommand.h
 *
 *  Created on: Mar 16, 2017
 *      Author: lmtan91
 */

#ifndef __PASTECOMMAND_H__
#define __PASTECOMMAND_H__

#include "Command.h"

class Document;

class PasteCommand : public Command
{
public:
   PasteCommand(Document*);

   virtual void Execute();

private:
   Document* mDocument;
};


#endif /* __PASTECOMMAND_H__ */
