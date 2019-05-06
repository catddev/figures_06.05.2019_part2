#include "Rectangle.h"

Rectangle::Rectangle()
{
	a = 0;
	b = 0;
}

Rectangle::Rectangle(double x, double y, double a, double b)
{
	this->x = x;
	this->y = y;
	this->a = a;
	this->b = b;
}

void Rectangle::turn_90()
{
	//double c = a;
	//a = b;
	//b = c;
	//OR:
	a = b + a;
	b = a - b;
	a = a - b;
}

bool Rectangle::operator==(const Rectangle & obj)
{
	return (a*b == obj.a*obj.b);
}

ostream & operator<<(ostream & os, Rectangle obj)
{
	cout << "(" << obj.x << ", " << obj.y <<")" << "["<<obj.a <<", "<<obj.b<< "]" << endl;
	return os;
}
