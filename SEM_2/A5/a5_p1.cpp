/*
CH08-320143
a5_p1.cpp
Aashish Paudel
a.paudel@jacobs-university.de
*/

#include <iostream>
#include <vector>
#include <exception>

using namespace std;

int main() {
  vector<int> vint;

  // Pushing elements of vector
  for (int i = 0; i < 20; i++)
    vint.push_back(8);

  // Try
  try {
    vint.at(21);
  }
  // Catch
  catch (const out_of_range& e) {
    cerr << e.what() << endl;
  }
  
  return 0;
}
