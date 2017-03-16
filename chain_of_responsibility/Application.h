/*
 * Application.h
 *
 *  Created on: Mar 16, 2017
 *      Author: lia1hc
 */

#ifndef __APPLICATION_H__
#define __APPLICATION_H__

#include "HelpHandler.h"

class Application : public HelpHandler
{
public:
    Application(Topic t);

    virtual void HandleHelp();

    ~Application();
};

#endif /* __APPLICATION_H__ */
