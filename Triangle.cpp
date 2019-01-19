#include "Triangle.h"

Triangle::Triangle() {}
Triangle::~Triangle() {}
Triangle::Triangle(double height, double base)
{
    main_height = height;
    main_base = base;
}

void Triangle::draw()
{
    cout << "Draw Triangle" << endl;    
}

double Triangle::area()
{
    return (main_base*main_height)/2;
}

void Triangle::set_base(double base)
{
    main_base = base;
}

void Triangle::set_height(double height)
{
    main_height = height;
}

