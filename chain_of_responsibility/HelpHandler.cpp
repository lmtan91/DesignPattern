/*
 * HelpHandler.cpp
 *
 *  Created on: Mar 15, 2017
 *      Author: lmtan91
 */

#include <iostream>
#include <stdio.h>
#include "HelpHandler.h"

using namespace std;
HelpHandler::HelpHandler(HelpHandler* h, Topic t)
            : mSuccessor(h), mTopic(t)
{
    cout << "HelpHandler" << "Topic: " << t << endl;
}

bool HelpHandler::HasHelp()
{
   return (mTopic != NO_HELP_TOPIC);
}

void HelpHandler::SetHandler(HelpHandler* h, Topic t)
{
   if (h != NULL)
   {
      mSuccessor = h;
      mTopic = t;
   }
}

void HelpHandler::HandleHelp()
{
   if (mSuccessor != NULL)
   {
      mSuccessor->HandleHelp();
   }
}

HelpHandler::~HelpHandler()
{
   if (mSuccessor != NULL)
   {
       cout << "~HelpHandler" << endl;
      delete mSuccessor;
      cout << "~HelpHandler END" << endl;
   }
}
