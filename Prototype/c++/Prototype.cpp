#include "prototype.h"
#include <iostream>
using namespace std;
concreateprototype1::concreateprototype1()
{
	cout<<"concreteprototype1 create"<<endl;
}

concreateprototype1::concreateprototype1(const concreateprototype1 &contype )
{
	cout<<"copy the concreteprototype1"<<endl;
}
concreateprototype1::~concreateprototype1()
{
	cout<<"destruction of concreteprototype1"<<endl;
}
prototype* concreateprototype1::clone()
{
	return new concreateprototype1(*this);
}

concreateprototype2::concreateprototype2()
{
	cout<<"concreteprototype2 create"<<endl;
}

concreateprototype2::concreateprototype2(const concreateprototype2 &contype )
{
	cout<<"copy the concreteprototype2"<<endl;
}
concreateprototype2::~concreateprototype2()
{
	cout<<"destruction of concreteprototype2"<<endl;
}
prototype* concreateprototype2::clone()
{
	return new concreateprototype2(*this);
}