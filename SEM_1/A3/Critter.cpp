/*
CH08-320142
a3_p4.cpp
Aashish Paudel
aasispaudel@jacobs-university.de
*/

#include <iostream>
#include "Critter.h"

using namespace std;

Critter::Critter() {
  cout << "No parameter costructor called" << endl;
  name = "critter";
  height = 10;
  boredom = 0;
  hunger = 0;//No need to call func here. The result will be 0.
  thirst = hunger;
}

Critter::Critter(string n) {
  cout << "Name Parameter constructor called" << endl;
  name = n;
  height = 10;
  boredom = 0;
  hunger = 0;//No need to call func here. The result will be 0.
  thirst = hunger;
}

Critter::Critter(string n, int h, double b, double hgt) {
  cout << "All parameter constructor called" << endl;
  name = n;
  
  double labeled_hunger = func_1(h);
  hunger = func_2(labeled_hunger);
  
  boredom = b;
  height = hgt;
  thirst = hunger;
}

Critter::Critter(string n, int h, double b, double hgt, double t) {
  cout << "Final (added for qn no 4) parameter constructor called" << endl;
  name = n;
  
  double labeled_hunger = func_1(h);
  hunger = func_2(labeled_hunger);
  
  boredom = b;
  height = hgt;
  thirst = t;
}

double Critter::func_1(int h){
  return h/10.0;
}

int Critter::func_2(double labeled_h){
  return (int) (labeled_h*100);
}
