/*
CH08-320143
a6_p3.cpp
Aashish Paudel
a.paudel@jacobs-university.de
*/

#include <iostream>
#include <exception>

using namespace std;

// Motor class: throws string

class Motor {
public:
  Motor() {
    string str = "This motor has problems";
    throw str;
  }
};

// Car class: catches the same exception and throws it again

class Car {  
public:
  Car() {
    try {
      Motor motor;
    }
    catch (string e){
      throw e;
    }
  }
};

// Catches this particular exception but throws another string exception

class Garage {
public:
  Garage() {
    try {
      Car car;
    }

    catch (string e){
      string str = "The car in this garange has problems with the motor";
      throw str;
    }
  }
};

// Catches and prints exception thrown by Garage class

int main () {
  try {
    Garage garage;
  }

  catch (string str) {
    cout << "Caught in main: " << str << endl;
  }
  
  return 0;
}
