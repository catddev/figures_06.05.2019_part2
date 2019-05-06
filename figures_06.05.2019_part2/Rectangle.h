#pragma once
#include"Point.h"

class Rectangle : public Point {
private:
	double a;
	double b;
public:
	Rectangle();
	Rectangle(double x, double y, double a, double b);

	void turn_90();
	bool operator==(const Rectangle&obj);

	friend ostream& operator<<(ostream& os, Rectangle obj);
};