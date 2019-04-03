/*
CH08-320143
a1_p5.cpp
Aashish Paudel
a.paudel@jacobs-university.de
*/



#ifndef VECTOR_H_
#define VECTOR_H_

#include "Matrix.h"

class Vector {
 public:
  //Constructors
  Vector();
  Vector(int, double*);
  //Copy contructor
  Vector(const Vector&);
  ~Vector(); //Destructor

  //Setters
  void setSize(int);
  void setVector(double*);

  //Getters
  int getSize();
  double* getVector();

  //Print method
  void print();
  //Additional methods
  double norm() const;
  Vector add(const Vector) const;
  Vector subtract(const Vector) const;
  double dot(const Vector) const;

  // Overloaded >> and << operators
  friend std::ostream& operator<< (std::ostream&, const Vector&);
  friend std::istream& operator>> (std::istream&, Vector&);

  // Overload * operator (For matrix and vector)
  Vector operator* (Matrix&);

  // Overload * operator (For vector and matrix)
  friend Vector operator* (Matrix&, Vector&);

 private:
  int size;
  double* comp;
};


#endif
