/*
 * TracerTest.cpp
 *
 *  Created on: Mar 15, 2017
 *      Author: lia1hc
 */
#include <string>
#include <iostream>
#include <vector>
#include <sstream>

using namespace std;
struct Tracer
{
    string mess;
    Tracer(const string& s) :mess(s) { cout << mess;}
    ~Tracer() {cout << "~" << mess;}
};

void f(const vector<int>& v)
{
    Tracer tr("in f()\n");
    for (auto x:v)
    {
        Tracer tr(string{"v loop "} + to_string(x) + '\n');
    }
}

int main(int argc, char* argv[])
{
    vector<int> v{2,3,5};
    f(v);
}
