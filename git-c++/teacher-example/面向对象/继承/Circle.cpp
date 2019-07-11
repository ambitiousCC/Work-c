//如何表示一个圆

#include <iostream>

using namespace std;

class Circle
{
	int x;
	int y;
	double radius;
public:
	Circle();
	Circle(int x, int y, double d);
	~Circle();

	void setInfo(int x, int y, double d);
	void setX(int x);
	void setY(int y);
	void setRadius(double d);

	int getX();
	int getY();
	double getRadius();

	void Print();
};

Circle::Circle()
{
	setInfo(0, 0, 0.0);	
}

Circle::Circle(int x, int y, double d)
{
	setInfo(x, y, d);
}

Circle::~Circle()
{

}

void Circle::setInfo(int x, int y, double d)
{
	setX(x);
	setY(y);
	setRadius(d);
}

void Circle::setX(int x)
{
	this->x=x;
}

void Circle::setY(int y)
{
	this->y=y;
}

void Circle::setRadius(double d)
{
	radius=d;
}

int Circle::getX()
{
	return x;
}

int Circle::getY()
{
	return y;
}

double Circle::getRadius()
{
	return radius;
}

void Circle::Print()
{
	cout << "Circle:(" << getX() << ", " << getY() << ")" << " R= " << getRadius() << endl;
}

int main()
{
	Circle p;
	p.Print();
	p.setInfo(10, 10, 0);
	p.Print();
	p.setX(100);
	p.Print();

	return 0;
}