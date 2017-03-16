/*
 * Dialog.cpp
 *
 *  Created on: Mar 16, 2017
 *      Author: lia1hc
 */

#include <iostream>
#include "Dialog.h"
#include "Widget.h"

using namespace std;

Dialog::Dialog(HelpHandler* h, Topic t) : Widget(0)
{
    SetHandler(h, t);
}

void Dialog::HandleHelp()
{
    if (HasHelp())
    {
        cout << "Offering help on the dialog." << std::endl;
    }
    else
    {
        HelpHandler::HandleHelp();
    }
}

Dialog::~Dialog()
{
    cout << "~Dialog" << endl;
}
