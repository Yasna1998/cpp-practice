#include "Square.h"

Square::Square() {}														
Square::Square(double length):main_length(length) {}
Square::~Square() {}													

void Square::draw()
{
	cout << "Draw Square" << endl;
}

double Square::area()
{
	return main_length * main_length;
}

void Square::set_length(double length)
{
	main_length = length;
}
