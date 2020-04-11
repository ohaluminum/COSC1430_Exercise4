#include "Figure.h"
#include <iostream>

using namespace std;

class Square : public Figure
{
public:
	Square(double x = 0, double y = 0, double side = 0, double angle = 0) : Figure(x, y), side(side), angle(angle)
	{

	}

	void vertices()
	{
		cout << "The vertices of the square are: " << endl;
		cout << "(" << location().X() - side / 2 << ", " << location().Y() + side / 2 << ")  ";
		cout << "(" << location().X() + side / 2 << ", " << location().Y() + side / 2 << ")" << endl;
		cout << "(" << location().X() - side / 2 << ", " << location().Y() - side / 2 << ")  ";
		cout << "(" << location().X() + side / 2 << ", " << location().Y() - side / 2 << ")" << endl;
	}

	void draw()
	{
		cout << "A square with center ";
		location().print();
		cout << " and side length " << side << endl;
		cout << "The angle between one side and the X-axis is " << angle << endl;
	}

	void rotate(double add)
	{
		angle = angle + add;
		cout << "The angle between one side and the X-axis is " << angle << endl;
	}

private:
	double side;
	double angle;
};