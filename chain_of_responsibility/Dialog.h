/*
 * Dialog.h
 *
 *  Created on: Mar 16, 2017
 *      Author: lia1hc
 */

#ifndef __DIALOG_H__
#define __DIALOG_H__

#include "Widget.h"

class Dialog : public Widget
{
public:
    Dialog(HelpHandler* h, Topic t = NO_HELP_TOPIC);

    virtual void HandleHelp();

    ~Dialog();
};

#endif /* __DIALOG_H__ */
