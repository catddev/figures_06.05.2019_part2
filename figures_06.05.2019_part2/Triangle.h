#pragma once
#include"Point.h"

class Triangle :public Point {
private:
	double a;
	double b;
	double c;
public:
	Triangle();
	Triangle(double x, double y, double a, double b, double c);
	double area();

	void turn_90();
	void turn_180();
	bool operator==(Triangle &obj);//not const because method area() is used in realization

	friend ostream& operator<<(ostream& os, Triangle obj);

};