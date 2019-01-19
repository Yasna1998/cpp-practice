
#pragma once
#ifndef RECTANGLE_H
#define RECTANGLE_H
#include <iostream>
#include "Shape.h"

using namespace std;

class Rectangle: public Shape
{
private:
	double main_length;
	double main_width;
public:
	Rectangle();
	~Rectangle();
	Rectangle(double length, double width);
	void draw();
	double area();
	void set_width(double width);
	void set_length(double length);	
};

#endif