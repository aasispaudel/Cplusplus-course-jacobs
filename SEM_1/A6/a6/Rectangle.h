/*
CH08-320142
a6_p4.cpp
Aashish Paudel
apaudel@jacobs-university.de
*/

#ifndef _RECTANGLE_H
#define _RECTANGLE_H
#include "Area.h"

class Rectangle : public Area {
	public:
		Rectangle(const char *n, double a, double b);
		~Rectangle();
		double calcArea() const;

		//Calculates perimeter :: Defined virtual in Area class
		double calcPerimeter() const;
		
	private:
		double length;
		double width;
};

#endif
