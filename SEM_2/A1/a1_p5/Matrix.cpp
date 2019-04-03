/*
CH08-320143
a1_p5.cpp
Aashish Paudel
a.paudel@jacobs-university.de
*/

#include <iostream>
#include "Vector.h"
#include <fstream>

using namespace std;

/*
 * Constructor Setters and Getters
*/

Matrix::Matrix() {
  this->rows = 0;
  this->columns = 0;

  matrix = new double*[rows];
  for (int i = 0; i < rows; i++) 
    matrix[i] = new double[columns];

}

Matrix::Matrix(int rows, double columns, double **matrix) {
    this->rows = rows;
    this->columns = columns;
    this->matrix = matrix;
}

void Matrix::setRows(int rows) {
  this->rows = rows;
  matrix = new double*[rows];
}

void Matrix::setColumns(int columns) {
  this->columns = columns;
  for (int i = 0; i < rows; i++)
    matrix[i] = new double[columns];
}

/*
******************************************************\/
*/

/*
 * Take input : 
 * @Order: Rows -> Cols -> Comps
*/

ostream& operator<< (ostream& out, const Matrix& mat) {
  for (int i = 0; i < mat.rows; i++) {
    for (int j = 0; j < mat.columns; j++)
      cout << mat.matrix[i][j] << "  ";
    cout << endl;
  }

  return out;
}

// Prints matrix

istream& operator>> (istream& in, Matrix& mat) {
  in >> mat.rows;
  in >> mat.columns;

  mat.matrix = new double*[mat.rows];
  for (int i = 0; i < mat.rows; i++)
     mat.matrix[i] = new double[mat.columns];
 
  for (int i =0; i < mat.rows; i++) 
    for (int j = 0; j < mat.columns; j++) 
      in >> mat.matrix[i][j];

  return in;
}

/*
 * Basic operations with matrices
*/

Matrix Matrix::add(const Matrix& m) {
  Matrix m1;
  m1.setRows(m.rows);
  m1.setColumns(m.columns);

  for (int i = 0; i < rows; i++)
    for (int j = 0; j < columns; j++)
      m1.matrix[i][j] = this->matrix[i][j] + m.matrix[i][j];

  return m1;
}

Matrix Matrix::subtract(const Matrix& m) {
  Matrix m1;
  m1.setRows(m.rows);
  m1.setColumns(m.columns);

  for (int i = 0; i < rows; i++)
    for (int j = 0; j < columns; j++)
      m1.matrix[i][j] = this->matrix[i][j] - m.matrix[i][j];

  return m1;
}

Matrix Matrix::multiply (const Matrix& m) {
  Matrix m1;
  m1.setRows(this->rows);
  m1.setColumns(m.columns);

  if (this->columns != m.rows) {
    cout << "Multiplication not possible!" << endl;
    return m1;
  }
  for (int i = 0; i < this->rows; i++) {
    for (int k = 0; k < this->columns; k++) {
      for (int j = 0; j < m.columns; j++) {
	(m1.matrix)[i][k] += (this->matrix)[i][j] * (m.matrix)[j][k]; 
      }
    }
  }

  return m1;
}

/*
 * @Heart of assignment 
 * @Operation: Matrix * Vector
 * @Root friend function in Vector
*/

Vector operator* (Matrix& m, Vector& v) {
  Vector v1;
  
  if (m.getColumns() != v.getSize()) {
    cout << "No multiplication possible! " << endl;
    return v1;
  }

  v1.setSize(m.getRows());

  double* arr = new double[m.getRows()];
  for (int i = 0; i < m.getRows(); i++) 
    for (int j = 0; j < m.getColumns(); j++) 
      arr[i] += (m.getMatrix())[i][j] * v.getVector()[j];
    

  v1.setVector(arr);

  return v1;
}

//Free the memory!
Matrix::~Matrix() {
  for (int i = 0; i < rows; i++)
    delete[] matrix[i];
  delete[] matrix;
}
