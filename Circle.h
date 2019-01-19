#pragma once
#ifndef CIRCLE_H
#define	CIRCLE_H
#include <iostream>
#include "Shape.h"
#define PI 3.14
using namespace std;

class Circle: public Shape
{
private:
	double radius;
public:
	Circle();
	Circle(double radius);													
	~Circle();
	void draw();														
	double area();
	void set_radius(double r);
	
};
#endif 