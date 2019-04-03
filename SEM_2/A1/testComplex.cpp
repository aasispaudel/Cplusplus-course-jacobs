/*
CH08-320143
a1_p1.cpp
Aashish Paudel
a.paudel@jacobs-university.de
*/

#include <iostream>
#include <fstream>
#include "Complex.h"
#include <cstring>

using namespace std;
int main() {
  Complex c1, c2;

  ifstream file1;
  file1.open("in1.txt");
  file1 >> c1;

  ifstream file2;
  file2.open("in2.txt");
  file2 >> c2;

  /*
    Take inputs
   */

  Complex add = c1 + c2;
  Complex sub = c1 - c2;
  Complex mul = c1 * c2;
  Complex c3 = c1;
  
  ofstream file;
  file.open("output.txt");
  file << add << endl;
  file << sub << endl;
  file << mul << endl;
  file << c3 << endl;
  
  return 0;
}

