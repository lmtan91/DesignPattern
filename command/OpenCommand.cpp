/*
 * OpenCommand.cpp
 *
 *  Created on: Mar 16, 2017
 *      Author: lmtan91
 */

#include "OpenCommand.h"
#include "Application.h"
#include "Document.h"

OpenCommand::OpenCommand(Application* a)
{
   mApplication = a;
}

void OpenCommand::Execute()
{
   const char* name = AskUser();

   if (name != 0)
   {
      Document* doc = new Document(name);
      mApplication->Add(doc);
      doc->Open();
   }
}

const char* OpenCommand::AskUser()
{
   return "SomeFileName";
}
