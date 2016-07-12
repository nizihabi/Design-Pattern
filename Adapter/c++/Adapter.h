class Shape
{
public:
	Shape(){};
	virtual ~Shape(){};

	virtual void Display() = 0;
};

///Already Exited Circle
class Mycircle
{
public:
	Mycircle(){};
	~Mycircle(){};

	void Draw()
	{
		cout << "My Draw" << endl;
	}
};


//Adapter
class Circle :public Shape
{
public:
	Circle() :Shape()
	{
		circle = new Mycircle();
	}

	~Circle(){};

	void Display()
	{
		circle->Draw();
	}

private:
	Mycircle *circle;
};

