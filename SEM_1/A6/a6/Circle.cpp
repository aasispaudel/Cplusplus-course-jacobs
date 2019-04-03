/*
CH08-320142
a6_p4.cpp
Aashish Paudel
apaudel@jacobs-university.de
*/




#include <iostream>
#include <cmath>
#include "Circle.h"

Circle::Circle(const char *n, double a) : Area(n) {
	radius = a;
}

Circle::~Circle() {
}

double Circle::calcArea() const {
	std::cout << "calcArea of Circle...\n";
	return radius * radius * M_PI;
}

double Circle::calcPerimeter() const {
  std::cout << "calcPerimeter of Circle...\n";
  return 2 * M_PI* radius;
}
