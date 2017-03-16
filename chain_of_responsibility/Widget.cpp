/*
 * Widget.cpp
 *
 *  Created on: Mar 16, 2017
 *      Author: lmtan91
 */
#include <stdio.h>
#include <iostream>
#include "Widget.h"

using namespace std;
Widget::Widget(Widget* w, Topic t) : HelpHandler(w, t)
{
   if (w != NULL)
   {
      cout << "Widget " << "Topic: " << t << endl;
      mParent = w;
   }
}

Widget::~Widget()
{
    cout << "~Widget " << endl;

}
