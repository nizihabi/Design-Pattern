
//声明一个虚拟基类，所有的原型都从这个基类继承，
class prototype
{
public:
	prototype(){}
	virtual ~prototype(){}
	virtual prototype* clone() = 0;//纯虚函数，需要供继承者自行实现
};

// 派生自Prototype,实现Clone方法
class concreateprototype1:public prototype
{
public:
	concreateprototype1();
	concreateprototype1(const concreateprototype1&);
	virtual ~concreateprototype1();
	virtual prototype* clone();
};

// 派生自Prototype,实现Clone方法
class concreateprototype2:public prototype
{
public:
	concreateprototype2();
	concreateprototype2(const concreateprototype2&);
	virtual ~concreateprototype2();
	virtual prototype* clone();
};
