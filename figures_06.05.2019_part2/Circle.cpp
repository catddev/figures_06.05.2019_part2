#include "Circle.h"

Circle::Circle()
{
	R = 0;
}

Circle::Circle(double x, double y, double R)
{
	this->x = x;
	this->y = y;
	this->R = R;
}

void Circle::turn_90()
{
	//nothing happens
}

bool Circle::operator==(const Circle & obj)
{
	return (this->R==obj.R);
}

ostream & operator<<(ostream & os, Circle obj)
{
	cout << "(" << obj.x << ", " << obj.y << ", " << obj.R << ")" << endl;
	return os;
}
