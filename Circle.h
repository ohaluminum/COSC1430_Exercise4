#include "Point.h"
#include "Figure.h"
#include <iostream>

using namespace std;

#ifndef CIRCLE_H
#define CIRCLE_H
class Circle : public Figure
{
public:
	Circle(double x = 0, double y = 0, double r = 0) : Figure(x, y), radius(r)
	{

	}

	void draw()
	{
		cout << "A circle with center ";

		//Call the print function of the Point class to print out the coordinates of the center here!!!
		location().print();

		cout << " and radius " << radius << endl;
	}

	void rotate(double add)
	{
		cout << "no effects." << endl;
	}

private:
	double radius;
};
#endif