/*
CH08-320142
a4_p1.cpp
Aashish Paudel
aasispaudel@jacobs-university.de
*/

#include <iostream>

using namespace std;
class Box{
 public:
  Box();
  Box(double, double, double);
  ~Box();

  //Setters
  void setHeight(double);
  void setWidth(double);
  void setDepth(double);

  //Getters
  double getHeight();
  double getWidth();
  double getDepth();
  
 private:
  double height;
  double width;
  double depth;
};


