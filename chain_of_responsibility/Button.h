/*
 * Button.h
 *
 *  Created on: Mar 16, 2017
 *      Author: lia1hc
 */

#ifndef __BUTTON_H__
#define __BUTTON_H__

#include "Widget.h"

class Button : public Widget
{
public:
    Button(Widget* w, Topic t = NO_HELP_TOPIC);

    virtual void HandleHelp();

    ~Button();
};


#endif /* __BUTTON_H__ */
