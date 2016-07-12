/****************************************************

the Sample of Singleton using C++

****************************************************/
#include <iostream>
using namespace std;

class CSingleton
{
private:

	~CSingleton()
	{
		cout << "exit" << endl;
	}

	CSingleton() :min(0)
	{
		
		cout << "get" << endl;
	}
	CSingleton(const CSingleton &);
	CSingleton & operator = (const CSingleton &);
	  
	int min;
public:
	static CSingleton* GetInstance()
	{
		static CSingleton instance;
		return &instance;
	}

	void speak()
	{
		min++;
		cout << min << endl;
	}
};
