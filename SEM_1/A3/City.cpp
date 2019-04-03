/*
CH08-320142
a3_p1.cpp
Aashish Paudel
aasispaudel@jacobs-university.de
*/

#include <iostream>
#include "City.h"

using namespace std;

//The setters just assign the corresponding values when called
void City::setName(string n) {
  name = n;
}

void City::setNoCitizens(int n) {
  no_citizens = n;
}

void City::setLocation(string n) {
  location = n;
}

void City::setPOI(string n) {
  POI = n;
}

string City::getName() {
  return name;
}

int City::getNoCitizens() {
  return no_citizens;
}

string City::getLocation() {
  return location;
}

string City::getPOI() {
  return POI;
}



