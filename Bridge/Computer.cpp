#include "OS.h"
#include "Computer.h"
#include <iostream>

using namespace std;

Apple::Apple() :Computer()
{
	cout << "I'm Mac!" << endl;
}

Apple::~Apple()
{
	if (operaSystem)
		delete operaSystem;
}

void Apple::InstallOS(OS *os)
{
	operaSystem = os;
	operaSystem->Work();
}

Microsoft::Microsoft() :Computer()
{
	cout << "I'm Microsoft!" << endl;
}

Microsoft::~Microsoft()
{
	if (operaSystem)
		delete operaSystem;
}

void Microsoft::InstallOS(OS *os)
{
	operaSystem = os;
	operaSystem->Work();
}