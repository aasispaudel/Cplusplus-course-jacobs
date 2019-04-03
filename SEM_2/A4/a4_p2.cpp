/*
CH08-320143
a4_p2.cpp
Aashish Paudel
a.paudel@jacobs-university.de
*/

#include <iostream>
#include <set>
#include <ctime>

using namespace std;

int main() {
  set<int> lucky_numbers;

  // For random nos 
  srand(time(NULL));

  // Add random no until size 6
  while (lucky_numbers.size() < 6) {
    lucky_numbers.insert(rand() % 49 + 1);
  }

  // Time to print
  for (auto it = lucky_numbers.begin(); it != lucky_numbers.end(); it++)
    cout << *it << " ";
  cout << endl;
  
  return 0;
}
