#include "OS.h"
#include "Computer.h"

int main()
{
	Computer *lenovo = new Microsoft();
	lenovo->InstallOS(new Windows());

	Computer *Mac = new Apple();
	Mac->InstallOS(new IOS());

	delete lenovo;
	delete Mac;
	
}