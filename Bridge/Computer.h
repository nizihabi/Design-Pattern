#pragma once 

class OS;

class Computer
{
public:
	Computer(){};
	virtual ~Computer(){};
	
	virtual void InstallOS(OS *os) = 0;

protected:
	OS *operaSystem;
};


class Apple :public Computer
{
public :
	Apple();
	~Apple();

	void InstallOS(OS *os);

};


class Microsoft :public Computer
{
public:
	Microsoft();
	~Microsoft();

	void InstallOS(OS *os);

};