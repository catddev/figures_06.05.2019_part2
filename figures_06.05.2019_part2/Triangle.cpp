#include "Triangle.h"
#include<math.h>

Triangle::Triangle()
{
	a = 0;
	b = 0;
	c = 0;
}

Triangle::Triangle(double x, double y, double a, double b, double c)
{
	this->x = x;
	this->y = y;
	this->a = a;
	this->b = b;
	this->c = c;
}

double Triangle::area()
{
	double p = (a + b + c) / 2;
	double area = sqrt((p*(p-a)*(p-b)*(p-c)));

	return area;
}

void Triangle::turn_90()
{
	//??? also nothing happens?
}

void Triangle::turn_180()
{
	double tmp = a;
	a = c;
	c = b;
	b = tmp;
}

bool Triangle::operator==(Triangle & obj)
{
	return (area()==obj.area());
}

ostream & operator<<(ostream & os, Triangle obj)
{
	cout << "(" << obj.x << ", " << obj.y << ")" << "[" << obj.a << ", " << obj.b << ", " << obj.c << "]" << endl;
	return os;
}
