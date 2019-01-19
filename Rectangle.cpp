#include "Rectangle.h"

Rectangle::Rectangle() {}
Rectangle::~Rectangle() {}
Rectangle::Rectangle(double length, double width)
{
	main_length = length;
    main_width = width;
}

void Rectangle::draw()
{
	cout << "Draw Rectangle " << endl;
}
double Rectangle::area()
{
	return main_length*main_width;
}


void Rectangle::set_width(double width)
{
	main_width = width;	
}

void Rectangle::set_length(double length)
{
	main_length = length;
}


