/*
 * Button.cpp
 *
 *  Created on: Mar 16, 2017
 *      Author: lia1hc
 */

#include <iostream>

#include "Button.h"
#include "Widget.h"

using namespace std;

Button::Button(Widget* d, Topic t) : Widget(d, t)
{
    cout << "Button" << endl;
}

void Button::HandleHelp()
{
    if (HasHelp())
    {
        cout << "Offering help on the button." << std::endl;
    }
    else
    {
        HelpHandler::HandleHelp();
    }
}

Button::~Button()
{
    cout << "~Button" << endl;
}
