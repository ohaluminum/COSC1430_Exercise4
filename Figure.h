#include "Point.h"
#include <iostream>

using namespace std;

#ifndef FIGURE_H
#define FIGURE_H

class Figure
{
public:
	Figure(double x = 0, double y = 0) : center(Point(x, y))
	{

	}

	Point location()
	{
		return center;
	}

	void move(Point newCenter)
	{
		center.set_coord(newCenter.X(), newCenter.Y());
		draw();
	}

	virtual void draw() = 0;
	virtual void rotate(double add) = 0;

private:
	Point center;
};

#endif