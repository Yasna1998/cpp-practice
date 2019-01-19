#pragma once
#ifndef SHAPE_H
#define SHAPE_H
#include <iostream>

using namespace std;


class Shape
{
public:
	virtual	void draw() = 0;
	virtual double area() = 0;	
};

#endif 