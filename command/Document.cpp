/*
 * Document.cpp
 *
 *  Created on: Mar 16, 2017
 *      Author: lmtan91
 */

#include <iostream>

#include "Document.h"

using namespace std;
Document::Document(const char* name)
{
   cout << "Document::Document(const char* name)" << endl;
}

void Document::Open()
{
   cout << "Document::Open()" << endl;
}

void Document::Paste()
{
   cout << "Document::Paste()" << endl;
}
