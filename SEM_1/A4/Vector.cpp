/*
CH08-320142
a4_p6.cpp
Aashish Paudel
aasispaudel@jacobs-university.de
*/

#include <iostream>
#include <cmath>
#include "Vector.h"

using namespace std;

Vector::Vector() {
  size = 0;
  comp = new double[size];
}

Vector::Vector(int size, double* c) {
  this->size = size;
  comp = new double[size];
  comp = c;
}

//Copy constructor
Vector::Vector(const Vector& v) {
  size = v.size;
  comp = new double[v.size];
  comp = v.comp;
}

//Setters
void Vector::setSize(int size) {
  this->size = size;
}

void Vector::setVector(double* c) {
  comp = new double[size];
  comp = c;
}

//Getters
int Vector::getSize() {
  return size;
}

double* Vector::getVector() {
  return comp;
}

//Print the vector
void Vector::print() {
  cout << "{";
  for (int i = 0; i < size; i++) {
    if (i == size-1)
      cout << comp[i];
    else
      cout << comp[i] << ", ";
  }
  cout << "}" << endl;
}

//Additional methods (Vector operations)

//Finds the norm
double Vector::norm() const {
  double norm = 0;
  for (int i = 0; i < size; i++) {
    norm += comp[i] * comp[i];
  }
  return sqrt(norm);
}

//Adds two vectors
Vector Vector::add(const Vector v1) const {
  double* arr = new double[size];
  for (int i = 0; i < size; i++) {
    arr[i] = comp[i] + v1.comp[i];
  }
  Vector v2(size, arr);

  delete[] arr;
  return v2;
}

//Subtract vectors
Vector Vector::subtract(const Vector v1) const {
  double* arr = new double[size];
  for (int i = 0; i < size; i++) {
    arr[i] = comp[i] - v1.comp[i];
  }
  Vector v2(size, arr);

  delete[] arr;
  return v2;
}

//Find and return scalar product
double Vector::dot(const Vector v1) const {
  double product = 0;
  for (int i = 0; i < size; i++) {
    product += comp[i] * v1.comp[i];
  }
  
  return product;
}

//Destructor
Vector::~Vector() {
  delete[] comp;
}


