/*
CH08-320142
a2_p3.cpp
Aashish Paudel
aasispaudel@jacobs-university.de
*/



#include <iostream>
#include "City.h"

using namespace std;

int main() {

  //Instance Bremen
  City Bremen;

  Bremen.setName("Bremen");
  Bremen.setNoCitizens(10000000);
  Bremen.setLocation("Bremen");
  Bremen.setPOI("Vegesack");

  cout << Bremen.getName() << endl <<
    Bremen.getNoCitizens() << endl <<
    Bremen.getLocation() << endl <<
    Bremen.getPOI() << endl;

  //Instance Hamburg
  City Hamburg;
  
  Hamburg.setName("Hamburg");
  Hamburg.setNoCitizens(30000000);
  Hamburg.setLocation("Hamburg");
  Hamburg.setPOI("Rathaus");
  
  cout << Hamburg.getName() << endl <<
    Hamburg.getNoCitizens() << endl <<
    Hamburg.getLocation() << endl <<
    Hamburg.getPOI() << endl;


  //Instance Berlin
  City Berlin;
  
  Berlin.setName("Berlin");
  Berlin.setNoCitizens(90000000);
  Berlin.setLocation("Berlin");
  Berlin.setPOI("Berlin Square");

  cout << Berlin.getName() << endl <<
    Berlin.getNoCitizens() << endl <<
    Berlin.getLocation() << endl <<
    Berlin.getPOI() << endl;
  
  return 0;
}
