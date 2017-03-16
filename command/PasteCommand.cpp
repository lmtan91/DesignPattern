/*
 * PasteCommand.cpp
 *
 *  Created on: Mar 16, 2017
 *      Author: lmtan91
 */

#include "PasteCommand.h"
#include "Document.h"

PasteCommand::PasteCommand(Document* doc)
{
   mDocument = doc;
}

void PasteCommand::Execute()
{
   mDocument->Paste();
}
