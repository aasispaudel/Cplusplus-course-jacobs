/*
CH08-320142
a4_p5.cpp
Aashish Paudel
aasispaudel@jacobs-university.de
*/


/* 
	Classic shape examples: an inheritance tree in a geometric context
*/
#ifndef __SHAPES_H
#define __SHAPES_H
#include <string>

class Shape {			// base class
	private:   				// private access modifier: could also be protected
		std::string name;   // every shape will have a name
	public:
		Shape(const std::string&);  // builds a shape with a name
		Shape();					// empty shape
		Shape(const Shape&);		// copy constructor
		void printName() const ;// prints the name

		//Getters and setters
		void setName(std::string name);
		std::string getName() const;
		
};

class CenteredShape : public Shape {  // inherits from Shape
	private: 
		double x,y;  // the center of the shape
	public:
		CenteredShape(const std::string&, double, double);  // usual three constructors
		CenteredShape();
		CenteredShape(const CenteredShape&);
		void move(double, double);	// moves the shape, i.e. it modifies it center

		//Getters and setters
		void setX(double);
		void setY(double);
		double getX() const;
		double getY() const;
};

class RegularPolygon : public CenteredShape { // a regular polygon is a centered_shape with a number of edges
	private: 
		int EdgesNumber;
	public:
		RegularPolygon(const std::string&, double, double, int);
		RegularPolygon();
		RegularPolygon(const RegularPolygon&);

		//Getters and setters
		void setEdgesNumber(int);
		int getEdgesNumber() const;
};

class Circle : public CenteredShape {  // a Circle is a shape with a center and a radius
	private:
		double Radius;
	public:
		Circle(const std::string&, double, double, double);
		Circle();
		Circle(const Circle&);
		double perimeter();
		double area();

		//Getters and //Setters

		void setRadius(double);
		double getRadius() const;
};

class Rectangle : public RegularPolygon {   // Rectangle is a regular polygon with 4 sides and opposite side equal and parallel.
 protected: //Because we are going to access them from square multiple times
  double width, height;
 public:
  Rectangle();
  Rectangle(const std::string& n, double nx, double ny, double nwidth, double nheight);
  Rectangle(const Rectangle&);
  double perimeter();
  double area();

  //Getters and Setters
  void setWidth(double);
  double getWidth() const;

  void setHeight(double);
  double getHeight() const;
};

class Square: public Rectangle {//A square is a rectangle with all the sides equal in length
 public:
  Square();
  Square(const std::string& n, double nx, double ny, double nside);
  Square(const Square&);


  //Getters and setters
  void setSide(double);
  double getSide() const;
};

#endif
