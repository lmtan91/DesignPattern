/*
 * Widget.h
 *
 *  Created on: Mar 15, 2017
 *      Author: lmtan91
 */

#ifndef __WIDGET_H__
#define __WIDGET_H__


#include "HelpHandler.h"

class Widget : public HelpHandler
{
public:
   ~Widget();
protected:
   Widget(Widget* parent, Topic t = NO_HELP_TOPIC);

private:
   Widget* mParent;
};



#endif /* __WIDGET_H__ */
