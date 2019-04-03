/*
CH08-320142
a6_p4.cpp
Aashish Paudel
apaudel@jacobs-university.de
*/

#include <iostream>
#include "Rectangle.h"

Rectangle::Rectangle(const char *n, double a, double b) : Area(n) {
    length = a;
    width = b;
}

Rectangle::~Rectangle() {
}

double Rectangle::calcArea() const {
	std::cout << "calcArea of Rectangle...\n";
	return length*width;
}

double Rectangle::calcPerimeter() const {
  std::cout << "calcPerimeter of Rectangle...\n";
  return 2 * (length+width);
}
