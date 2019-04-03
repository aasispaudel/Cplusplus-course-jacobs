/*
CH08-320142
a5_p1.cpp
Aashish Paudel
apaudel@jacobs-university.de
*/

#include <iostream>
#include <string>
#include "Shapes.h"

using namespace std;
int main() {
  Hexagon red("Hexa 1", 0, 0, 2, "Red");
  Hexagon yellow("Hexa 2", 0, 0, 10, "Yellow");

  Hexagon copy(yellow);

  //Computation and printing of perimeter and area
  //Red hexagon
  cout << "The perimeter of red: " << red.findPerimeter() << endl;
  cout << "The ara of red: " << red.findArea() << endl;

  //Yellow hexagon
  cout << "The perimeter of yellow: " << yellow.findPerimeter() << endl;
  cout << "The ara of yellow: " << yellow.findArea() << endl;

  //Copy object
  cout << "The perimeter of copy: " << copy.findPerimeter() << endl;
  cout << "The ara of copy: " << copy.findArea() << endl;
  return 0;
}



