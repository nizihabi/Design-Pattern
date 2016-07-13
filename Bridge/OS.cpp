#include "OS.h"
#include <iostream>

using namespace std;

IOS::IOS() :OS()
{

}

IOS::~IOS()
{

}

void IOS::Work()
{
	cout << "I'm working with IOS " << endl;
}


Windows::Windows() :OS()
{

}

Windows::~Windows()
{

}

void Windows::Work()
{
	cout << "I'm working with Windows " << endl;
}