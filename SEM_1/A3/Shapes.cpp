/*
CH08-320142
a4_p5.cpp
Aashish Paudel
aasispaudel@jacobs-university.de
*/


// please refer to shapes.h for methods documentation

#include <iostream>
#include "Shapes.h"

using namespace std; 

Shape::Shape(const string& n) : name(n) {
}

Shape::Shape(){
  name = "Shape_x";
}

Shape::Shape(const Shape& n) {
  name = n.name;
}
void Shape::printName() const {
	cout << name << " ";
}

void Shape::setName(string name) {
  this->name = name;
}

string Shape::getName() const {
  return this->name;
}


CenteredShape::CenteredShape(const string& n, double nx, double ny): Shape(n) {
	x = nx;
	y = ny;
}

CenteredShape::CenteredShape() : Shape() {
  //Default value origin
  x = 0;
  y = 0;
}

CenteredShape::CenteredShape(const CenteredShape& n): Shape(n) {
  x = n.x;
  y = n.y;
}

void CenteredShape::setX(double x) {
  this->x = x;
}

void CenteredShape::setY(double y) {
  this->y = y;
}

double CenteredShape::getX() const {
  return this->x;
}


double CenteredShape::getY() const {
  return this->y;
}

RegularPolygon::RegularPolygon(const string& n, double nx, double ny, int nl) :
	CenteredShape(n,nx,ny) 
{
	EdgesNumber = nl;
}

RegularPolygon::RegularPolygon() : CenteredShape()
{
  //Default value 3 :: Traingle
  EdgesNumber = 3;
}

RegularPolygon::RegularPolygon(const RegularPolygon& rp): CenteredShape(rp) {
  EdgesNumber = rp.EdgesNumber;
}

void RegularPolygon::setEdgesNumber(int no) {
  EdgesNumber = no;
}

int RegularPolygon::getEdgesNumber() const {
  return EdgesNumber;
}

Circle::Circle(const string& n, double nx, double ny, double r) : 
  CenteredShape(n,nx,ny) 
{
	Radius = r;
}

Circle::Circle() : CenteredShape()
{
  //Circle with a radius 0
  Radius = 0;
}

Circle::Circle(const Circle& c): CenteredShape(c){
  Radius = c.Radius;
}

double Circle::perimeter() {
  return (1 * 3.14 * Radius);
}

double Circle::area() {
  return (3.14 * Radius * Radius);
}

void Circle::setRadius(double r) {
  Radius = r;
}

double Circle::getRadius() const{
  return Radius;
}

Rectangle::Rectangle(const string& n, double nx, double ny, double nwidth, double nheight) : RegularPolygon(n, nx, ny, 4)
{
  width = nwidth;
  height = nheight;
}

Rectangle::Rectangle() : RegularPolygon()
{
  //Default width and heigth both 0
  width = 0;
  height = 0;
}

Rectangle::Rectangle(const Rectangle& r): RegularPolygon(r) {
  width = r.width;
  height = r.height;
}

double Rectangle::perimeter() {
  return (2*(width+height));
}

double Rectangle::area() {
  return width*height;
}

void Rectangle::setWidth(double width) {
  this->width = width;
}

double Rectangle::getWidth() const {
  return width;
}

void Rectangle::setHeight(double height) {
  this->height = height;
}

double Rectangle::getHeight() const {
  return height;
} 

Square::Square(const string& n, double nx, double ny, double nside) : Rectangle(n, nx, ny, nside, nside) {}

Square::Square() : Rectangle() {/*Default parameter side 0.*/}


Square::Square(const Square& s): Rectangle(s) {} 

void Square::setSide(double side) {
  //Set the width and height from our parent class both to the side
  this->width = side;
  this->height = side;
}

double Square::getSide() const {
  //Return one of the width or height (in this case width)
  return this->width;
}
