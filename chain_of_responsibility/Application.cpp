/*
 * Application.cpp
 *
 *  Created on: Mar 16, 2017
 *      Author: lia1hc
 */


#include <iostream>

#include "Application.h"
#include "HelpHandler.h"

using namespace std;

Application::Application(Topic t) : HelpHandler(0, t)
{
    cout << "Application" << endl;
}
void Application::HandleHelp()
{
    cout << "Show a list of help topics for the application." << std::endl;
}

Application::~Application()
{
    cout << "~Application" << endl;
}
