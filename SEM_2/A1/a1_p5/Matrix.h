/*
CH08-320143
a1_p5.cpp
Aashish Paudel
a.paudel@jacobs-university.de
*/

#ifndef MATRIX_H_
#define MATRIx_H_
#include "Vector.h"

class Matrix
{
 private:
  int rows;
  int columns;
  double **matrix;

 public:
  Matrix();
  Matrix(int, double, double**);
  
  // Setters
  void setRows(int row);
  void setColumns(int column);
  void setMatrix(double** mat) {matrix = mat;};

  // Getters
  int getRows() {return rows;};
  int getColumns() {return columns;};
  double** getMatrix() {return matrix;};
 
  // Overload << and >> operators
  friend std::ostream& operator<< (std::ostream&, const Matrix&);
  friend std::istream& operator>> (std::istream&, Matrix&);

  // Basic operations:: Addition, Subtraciton, Division
  Matrix add (const Matrix&);
  Matrix subtract (const Matrix&);
  Matrix multiply (const Matrix&);
  

  // Destructor
  ~Matrix();
};

#endif
