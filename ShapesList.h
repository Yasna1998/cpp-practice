#pragma once
#ifndef SHAPESLIST_H
#define SHAPESLIST_H
#include <iostream>
#include <algorithm>
#include <functional>
#include <vector>
#include "Shape.h"
#include "Circle.h"
#include "Rectangle.h"
#include "Triangle.h"
#include "Square.h"

using namespace std;

class ShapesList
{
private:
    vector<Shape*> shape_list;

public:
    void add(Shape & shape)
    {
        shape_list.push_back(&shape);
    }

    void remove(double area)				
    {
		int shape_index;
        for (auto iter = shape_list.begin(); iter != shape_list.end(); iter++) {
			if ((*iter)->area() == area)
			{
				shape_index = distance(shape_list.begin(), iter);
				shape_list.erase(iter);
				break;
			}
		}
    }


	void find(double area)
	{
		int shape_index;
		for (auto iter = shape_list.begin(); iter != shape_list.end(); iter++) {
			if ((*iter)->area() == area)
			{
				(*iter)->draw();
			}
		}
	}

	struct {
		bool operator()(Shape* first_shape, Shape* second_shape) const
		{
			return first_shape->area() > second_shape->area();
		}
	} sort_order;

	void Sort()
	{
		sort(shape_list.begin(), shape_list.end(), sort_order);
	}

};

#endif 