/*
CH08-320143
a4_p1.cpp
Aashish Paudel
a.paudel@jacobs-university.de
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  vector<int> vec;

  // add tp vector
  for (int i = 1; i <= 30; i++)
    vec.push_back(i);
  vec.push_back(5);

  // reverse from algorithm
  reverse(vec.begin(), vec.end());

  // Print it out
  for (auto it = vec.begin(); it != vec.end(); it++)
    cout << *it << " ";
  cout << endl;

  //replace from algorithm
  replace(vec.begin(), vec.end(), 5, 129);
  // Print it out
  for (auto it = vec.begin(); it != vec.end(); it++)
    cout << *it << " ";
  cout << endl;
  
  return 0;
}
