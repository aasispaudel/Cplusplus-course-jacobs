/*
CH08-320142
a6_p4.cpp
Aashish Paudel
apaudel@jacobs-university.de
*/

#ifndef _SQUARE_H
#define _SQUARE_H

#include "Rectangle.h"

class Square : public Rectangle {
 public:
  Square(const char *n, double side);
  ~Square();

  //The following methods calculate area and perimeter of square
  double calcArea() const;
  double calcPerimeter() const;

};

#endif
