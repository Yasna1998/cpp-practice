#pragma once
#ifndef SQUARE_H
#define	SQUARE_H
#include <iostream>
#include "Shape.h"
using namespace std;

class Square: public Shape
{
private:
	double main_length;
public:
	Square();														
	~Square();
	Square(double length);	
	void draw();														
	double area();
	void   set_length(double length);
	
};
#endif 