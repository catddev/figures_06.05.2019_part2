#pragma once
#include"Point.h"

class Triangle :public Point {
private:
	double a;
	double b;
	double c;
	int turn;
public:
	Triangle();
	Triangle(double x, double y, double a, double b, double c);
	double area();

	void turn_90();
	bool operator==(Triangle &obj);//not const because method area() is used in realization

	friend ostream& operator<<(ostream& os, Triangle obj);

};