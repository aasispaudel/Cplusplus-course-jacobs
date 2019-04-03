/*
CH08-320142
a5_p1.cpp
Aashish Paudel
apaudel@jacobs-university.de
*/

// please refer to shapes.h for methods documentation

#include <cmath>
#include <iostream>
#include "Shapes.h"

using namespace std; 

Shape::Shape(const string& n) : name(n) {
}

void Shape::printName() const {
	cout << name << endl;
}

CenteredShape::CenteredShape(const string& n, double nx, double ny): Shape(n) {
	x = nx;
	y = ny;
}

RegularPolygon::RegularPolygon(const string& n, double nx, double ny, int nl) :
	CenteredShape(n,nx,ny) 
{
	EdgesNumber = nl;
}

//Manually added later
RegularPolygon::RegularPolygon(const RegularPolygon& r)  {
  x = r.x;
  y = r.y;
  EdgesNumber = r.EdgesNumber;
}

Circle::Circle(const string& n, double nx, double ny, double r) : 
  CenteredShape(n,nx,ny) 
{
	Radius = r;
}

void Hexagon::print() {
  cout << "A hexagon with side" << side << " and color " << color << endl;
}

double Hexagon::findPerimeter() {
  return (side*6);
}

double Hexagon::findArea() {
  return ((3*sqrt(3))/2)*(side*side);
}
