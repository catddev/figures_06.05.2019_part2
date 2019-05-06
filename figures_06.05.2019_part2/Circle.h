#pragma once
#include"Point.h"

class Circle : public Point {
private:
	double R;
public:
	Circle();
	Circle(double x, double y, double R);

	void turn_90();
	bool operator==(const Circle&obj);

	friend ostream& operator<<(ostream& os, Circle obj);
};