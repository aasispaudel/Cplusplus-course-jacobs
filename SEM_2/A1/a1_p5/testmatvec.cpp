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
 * in1.txt -> vector
 * in2.txt -> matrix
 * out1.txt <- vector * matraix
 * outt2.txt <- matrix * vector

 *******************************************

 * in3.txt -> matrix
 * cout <- vector * matrix (No multiplication possible!)
 * cin -> Vector
 * cout <- matrix * vector

*/

int main() {
  ifstream reader1;
  reader1.open("in1.txt", ios::in);

  ifstream reader2;
  reader2.open("in2.txt", ios::in);

  Vector v1;
  reader1 >> v1;
  cout << "The vector: " << endl << v1;
  
  Matrix m1;
  reader2 >> m1; 
  cout << "The matrix: " << endl << m1;


  reader1.close();
  reader2.close();
  
  ofstream writer1, writer2;
  writer1.open("out1.txt", ios::out);
  writer2.open("out2.txt", ios::out);
  
  cout << "Vector * Matrix: " << endl << v1 * m1;
  cout << "Matrix * vector: " << endl << m1 * v1;

  writer1 << "Vector * Matrix: " << endl << v1 * m1;
  writer2 << "Matrix * vector: " << endl << m1 * v1;


  writer1.close();
  writer2.close();

  cout << "hello" << endl;
  
  ifstream reader ("in3.txt");
  Matrix mat;
  cout << "hello" << endl;
  reader >> mat;
  cout << "Matrix: mat =" << endl << mat;
  cout << v1 * mat;
  
  Vector vec2;
  cout << "Vector please-> Size -> Comp_s (This"
    " vector will be multiplied by mat!!!)" << endl;
  cin >> vec2;

  cout << mat * vec2;
  return 0;
}
