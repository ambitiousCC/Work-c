//如何表示一个圆

#include <iostream>

using namespace std;

class Cyclinder
{
	int x;
	int y;
	double radius;
	int height;
public:
	Cyclinder();
	Cyclinder(int x, int y, double d, int h);
	~Cyclinder();

	void setInfo(int x, int y, double d, int h);
	void setX(int x);
	void setY(int y);
	void setRadius(double d);
	void setHeight(int h);

	int getX();
	int getY();
	double getRadius();
	int getHeight();

	void Print();
};

Cyclinder::Cyclinder()
{
	setInfo(0, 0, 0.0, 0);	
}

Cyclinder::Cyclinder(int x, int y, double d, int h)
{
	setInfo(x, y, d, h);
}

Cyclinder::~Cyclinder()
{

}

void Cyclinder::setInfo(int x, int y, double d, int h)
{
	setX(x);
	setY(y);
	setRadius(d);
	setHeight(h);
}

void Cyclinder::setX(int x)
{
	this->x=x;
}

void Cyclinder::setY(int y)
{
	this->y=y;
}

void Cyclinder::setRadius(double d)
{
	radius=d;
}

void Cyclinder::setHeight(int h)
{
	height=h;
}

int Cyclinder::getX()
{
	return x;
}

int Cyclinder::getY()
{
	return y;
}

double Cyclinder::getRadius()
{
	return radius;
}

int Cyclinder::getHeight()
{
	return height;
}

void Cyclinder::Print()
{
	cout << "Cyclinder:(" << getX() << ", " << getY() << ")" << " R= " << getRadius() << " H=" << getHeight() << endl;
}

int main()
{
	Cyclinder p;
	p.Print();
	p.setInfo(10, 10, 0, 0);
	p.Print();
	p.setX(100);
	p.Print();

	return 0;
}