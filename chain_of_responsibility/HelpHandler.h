/*
 * HelpHandler.h
 *
 *  Created on: Mar 15, 2017
 *      Author: lmtan91
 */

#ifndef __HELPHANDLER_H__
#define __HELPHANDLER_H__

typedef int Topic;
const Topic NO_HELP_TOPIC = -1;

class HelpHandler
{
public:
   HelpHandler(HelpHandler* = 0, Topic = NO_HELP_TOPIC);

   virtual bool HasHelp();

   virtual void SetHandler(HelpHandler*, Topic);

   virtual void HandleHelp();

   virtual ~HelpHandler();
private:
   HelpHandler* mSuccessor;
   Topic        mTopic;
};

#endif /* __HELPHANDLER_H__ */
