/*
CH08-320142
a4_p1.cpp
Aashish Paudel
aasispaudel@jacobs-university.de
*/

#include <iostream>
#include "Box.h"

using namespace std;

//Constructors
Box::Box(){
  cout << "No parameter constructor called" << endl;
}

Box::Box(double h, double w, double d) {
  cout << "All parameters constructor called" << endl;
  height = h;
  width = w;
  depth = d;
}


  //Destructor
Box::~Box() {
  cout << "Destructor called" << endl;
}

//Setters
void Box::setHeight(double h) {
  height = h;
}

void Box::setWidth(double w) {
  width = w;
}

void Box::setDepth(double d) {
  depth = d;
}

//Getters
double Box::getHeight() {
  return height;
}

double Box::getWidth() {
  return width;
}

double Box::getDepth() {
  return depth;
}
