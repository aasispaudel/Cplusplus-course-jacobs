/*
CH08-320142
a2_p3.cpp
Aashish Paudel
aasispaudel@jacobs-university.de
*/
#ifndef _CITY_H
#define _CITY_H

#include <iostream>

using namespace std;

class City{
 public:
  //The setters according to the Question
  void setName(string n);
  void setNoCitizens(int n);
  void setLocation(string n);
  void setPOI(string n);

  //The getters this time
  string getName();
  int getNoCitizens();
  string getLocation();
  string getPOI();

 private:
  //All the features
  
  string name;
  int no_citizens;
  string location;
  string POI;
  
  
};

#endif
