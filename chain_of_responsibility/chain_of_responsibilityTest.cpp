/*
 * chain_of_responsibilityTest.cpp
 *
 *  Created on: Mar 16, 2017
 *      Author: lia1hc
 */


#include "Application.h"
#include "Button.h"
#include "Dialog.h"

int main(int argc, char* argv[])
{
    const Topic PRINT_TOPIC = 1;
    const Topic PAPER_ORIENTATION_TOPIC = 2;
    const Topic APPLICATION_TOPIC = 3;

    // CASE 1
    Application* app = new Application(APPLICATION_TOPIC);
    Dialog* dialog = new Dialog(app, PRINT_TOPIC);
    Button* button = new Button(dialog, PAPER_ORIENTATION_TOPIC);

    button->HandleHelp();

    // delete Button will delete all objects it references, otherwise not
    delete button;
    //delete dialog;
    //delete app;

    // CASE 2
    app = new Application(APPLICATION_TOPIC);
    dialog = new Dialog(app, PRINT_TOPIC);
    button = new Button(dialog);

    button->HandleHelp();

    delete button;

    // CASE 3
    app = new Application(APPLICATION_TOPIC);
    dialog = new Dialog(app);
    button = new Button(dialog);

    button->HandleHelp();

    delete button;

    return 0;
}
