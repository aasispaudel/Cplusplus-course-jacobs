/*
CH08-320143
a1_p1.cpp
Aashish Paudel
a.paudel@jacobs-university.de
*/


#include <fstream>
#include <iostream>

class Complex{
 public:
  //Constructors
  Complex();
  Complex(double, double=0);
  //Destructor
  ~Complex();
  //Setters
  void setReal(double);
  void setImag(double);
  //Getters
  double getReal();
  double getImag();
  //Operators
  Complex find_conjugate();
  Complex operator+(const Complex&);
  Complex operator-(const Complex&); 
  Complex operator*(const Complex&);
  Complex operator=(const Complex&);

  friend std::ostream& operator<<(std::ostream&, const Complex&); 
  friend std::istream& operator>>(std::istream&, Complex&);
  //Print stuff
  void print();

  
 private:
  //Parameters
  double real;
  double imag;

};
