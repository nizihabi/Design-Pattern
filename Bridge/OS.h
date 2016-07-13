#pragma once 

class OS
{
public:
	OS(){};
	virtual ~OS(){};
	
	virtual void Work() = 0;
};


class Windows :public OS
{
public:
	Windows();
	~Windows();

	void Work();
};

class IOS :public OS
{
public:
	IOS();
	~IOS();

	void Work();
};