#pragma once
#ifndef TRIANGLE_H
#define TRIANGLE_H
#include <iostream>
#include "Shape.h"

using namespace std;

class Triangle: public Shape
{
private:
	double main_height;
	double main_base;
public:
	Triangle();
	~Triangle();
	Triangle(double height, double base);
	void draw();
	double area();
	void set_base(double base);
	void set_height(double height);	
};

#endif 