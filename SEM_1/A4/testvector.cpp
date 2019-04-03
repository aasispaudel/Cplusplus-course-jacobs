/*
CH08-320142
a4_p6.cpp
Aashish Paudel
aasispaudel@jacobs-university.de
*/

#include <iostream>
#include "Vector.h"

using namespace std;
int main() {
  //Instance 1
  double* arr = new double[5] {1, 2, 3, 4, 5};
  Vector v1(5, arr);

  //Instance 2
  Vector v2;
  v2 = v1;
  cout << v2.norm() << endl; //Norm

  //Instance 3
  double* arr1 = new double[5] {1, 2, 3, 4, 5};
  Vector v3(5, arr1);

  //Necessary tasks
  (v1.add(v3)).print();
  (v1.subtract(v3)).print();
  cout << v1.dot(v3) << endl;

  delete[] arr;
  delete[] arr1;
  return 0;
}

