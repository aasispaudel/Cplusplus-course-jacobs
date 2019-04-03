/*
CH08-320142
a4_p5.cpp
Aashish Paudel
aasispaudel@jacobs-university.de
*/


#include "Shapes.h"
#include <iostream>

using namespace std;

int main(int argc, char** argv) {

  Circle circle("Circle", 4, 5, 5);
  circle.printName(); cout << " created!!!" << endl;
  cout << "The area: " << circle.area() << endl;
  cout << "The perimeter: " << circle.perimeter() << endl;

  Rectangle rect("Rectangle", 4, 5, 5, 10);
  rect.printName(); cout << " created!!!" << endl;
  cout << "The area: " << rect.area() << endl;
  cout << "The perimeter: " << rect.perimeter() << endl;

  Square square("Square", 4, 5, 5);
  square.printName(); cout << " created!!!" << endl;
  cout << "The area: " << square.area() << endl;
  cout << "The perimeter: " << square.perimeter() << endl;


 
}
