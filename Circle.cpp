#include "Circle.h"

Circle::Circle() {}														
Circle::Circle(double r):radius(r) {}
Circle::~Circle() {}													

void Circle::draw()
{
	cout << "Draw Circle" << endl;
}

double Circle::area()
{
	return PI*radius*radius;
}

void Circle::set_radius(double r)
{
	radius = r;
}
