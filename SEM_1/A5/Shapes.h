/*
CH08-320142
a5_p1.cpp
Aashish Paudel
apaudel@jacobs-university.de
*/


/* 
	Classic shape examples: an inheritance tree in a geometric context
*/
#ifndef __SHAPES_H
#define __SHAPES_H
#include <string>
#include <iostream>


//Parameters changed to protected to access them from classes below in inheritence hirarchy
//Each default constructor changed to inline and empty because when called from a class below they should respond

class Shape {			// base class
	protected:   				// private access modifier: could also be protected
		std::string name;   // every shape will have a name
	public:
		Shape(const std::string&);  // builds a shape with a name
		Shape() {};					// empty shape
		Shape(const Shape&);		// copy constructor
		void printName() const ;  	// prints the name  
};

class CenteredShape : public Shape {  // inherits from Shape
	protected: 
		double x,y;  // the center of the shape
	public:
		CenteredShape(const std::string&, double, double);  // usual three constructors
		CenteredShape() {};
		CenteredShape(const CenteredShape&);
		void move(double, double);	// moves the shape, i.e. it modifies it center
};

class RegularPolygon : public CenteredShape { // a regular polygon is a centered_shape with a number of edges
	private: 
		int EdgesNumber;
	public:
		RegularPolygon(const std::string&, double, double, int);
		RegularPolygon();
		RegularPolygon(const RegularPolygon&);
};

class Circle : public CenteredShape {  // a Circle is a shape with a center and a radius
	private:
		double Radius;
	public:
		Circle(const std::string&, double, double, double);
		Circle();
		Circle(const Circle&);
};

class Hexagon : public RegularPolygon {
 private:
  double side;
  std::string color;
 public:
  //Constructors and destructor: inline
 Hexagon() : RegularPolygon(){};
 Hexagon(std::string name, double x, double y, double side, std::string color) : RegularPolygon(name, x, y, 6) {
    this->side = side;
    this->color = color;
  };
  ~Hexagon(){};

  //Copy constructor : Inline
 Hexagon(const Hexagon& h) : RegularPolygon(h) {
    side = h.side;
    color = h.color;
  };
  
  //Setters : Inline
  void setSide(double side) {this->side = side;};
  void setColor(std::string color) {this->color = color;};
  
  //Getters : Inline
  double getSide() {return side;};
  std::string getColor() {return color;};

  //Print method : Defined manually at shapes.cpp
  void print();
  
  //Operation methods : Defined manually at shapes.cpp
  double findPerimeter();
  double findArea();
  
};
    
#endif

