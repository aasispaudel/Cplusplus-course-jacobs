/*
CH08-320142
a6_p4.cpp
Aashish Paudel
apaudel@jacobs-university.de
*/

#include <iostream>
#include <cmath>
#include "Ring.h"

Ring::Ring(const char *n, double outer, double inner) 
					: Circle(n, outer) {
	innerradius = inner;
}

Ring::~Ring() {
}

double Ring::calcArea() const {
	std::cout << "calcArea of Ring...\n";
	return (Circle::calcArea()-
		(innerradius * innerradius * M_PI));
}

double Ring::calcPerimeter() const {
  std::cout << "calcPerimter of Ring...\n";
  return (Circle::calcPerimeter() +
	  (2 * innerradius * M_PI));
}
