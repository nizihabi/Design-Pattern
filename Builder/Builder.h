
class Builder
{
public:
	Builder(){ cout << "Builder!" << endl; };
	virtual ~Builder(){};
	virtual void BuildPartHamburger() = 0;
	virtual void BuildPartDrink() = 0;
	virtual void BuildPartChips() = 0;
};

class KFCBuilder :public Builder
{
public:
	KFCBuilder() :Builder()
	{
		cout << "Welcome to KFC" << endl;
	}
	~KFCBuilder(){};

	void BuildPartHamburger()
	{
		cout << "KFC Hamburger" << endl;
	}
	void BuildPartDrink()
	{
		cout << "KFC Drink" << endl;
	}
	void BuildPartChips() 
	{
		cout << "KFC Chips" << endl;
	}

};

class MCBuilder :public Builder
{
public:
	MCBuilder() :Builder()
	{
		cout << "Welcome to Mc" << endl;
	}
	~MCBuilder(){};

	void BuildPartHamburger()
	{
		cout << "Mc Hamburger" << endl;
	}
	void BuildPartDrink()
	{
		cout << "Mc Drink" << endl;
	}
	void BuildPartChips()
	{
		cout << "Mc Chips" << endl;
	}

};

enum ProductType
{
	KFC,
	Mc
};

class Director
{
public:
	Director(ProductType t) :builder(NULL)
	{
		switch (t)
		{
		case ProductType::KFC:
			builder = new KFCBuilder();
			break;
		case ProductType::Mc:
			builder = new MCBuilder();
			break;
		default:
			cout << "No such Product" << endl;
			break;
		}
	}
	~Director()
	{
		if (builder)
			delete builder;
		builder = NULL;
	}

	void Create()
	{
		builder->BuildPartHamburger();
		builder->BuildPartDrink();
		builder->BuildPartChips();
	}
private:
	Builder *builder;
};

