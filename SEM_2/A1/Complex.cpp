/*
CH08-320143
a1_p1.cpp
Aashish Paudel
a.paudel@jacobs-university.de
*/

#include <iostream>
#include <cstring>
#include "Complex.h"
#include <fstream>

using namespace std;

Complex::Complex(){
  //cout << "No parameter constructor being called." << endl;
  real = 0;
  imag = 0;
}

Complex::Complex(double r, double i){
  //cout << "All parameter constructor being called." << endl;
  real =r;
  imag = i;
}

Complex::~Complex(){
  //cout << "Destructor being called..." << endl;
}


//Setters
void Complex::setReal(double r){
  real = r;
}

void Complex::setImag(double i) {
  imag = i;
}


//Getters
double Complex::getReal(){
  return real;
}

double Complex::getImag(){
  return imag;
}

//Printing method
void Complex::print() {
  if (imag >= 0)
    cout << real << "+" << imag << "i" << endl;
  else
    cout << real << imag << "i" << endl;
}

//Operation methods

Complex Complex::find_conjugate() {
  Complex conjugate(real, (-imag));
  return conjugate;
}

// Operator overloadings
Complex Complex::operator+(const Complex& a) {
  Complex sum(real+a.real, imag+a.imag);
  
  return sum;
}

Complex Complex::operator-(const Complex& a) {
  Complex difference(real-a.real, imag-a.imag);
  
  return difference;
}

Complex Complex::operator*(const Complex& a) {
  Complex product((real*a.real-imag*a.imag), (real*a.imag+imag*a.real));
  
  return product;
}

// Overload the << operator

ostream& operator<<(ostream& os, const Complex& a) {

  if (a.imag < 0)
    os << a.real << a.imag << "i" << endl;

  else
    os << a.real << "+" << a.imag << "i" << endl;

  return os;
}

// Overload the >> operator

istream& operator>>(istream& is, Complex& a) {

  is >> a.real >> a.imag;

  return is;
}
