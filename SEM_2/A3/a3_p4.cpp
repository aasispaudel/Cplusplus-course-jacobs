/*
CH08-320143
a3_p4.cpp
Aashish Paudel
a.paudel@jacobs-university.de
*/

#include <iostream>
#include <deque>

using namespace std;

int main() {
  // Subproblem:  1
  deque<double> A;

  double i;
  
  // Subproblem:  2
  while (true) {
    cin >> i;
    if (i == 0)
      break;

    // Subproblem:  3
    if (i > 0)
      A.push_back(i);
    else
      A.push_front(i);
  }

  // Subproblem:  4
  deque<double>::iterator diter = A.begin();
  while (diter!=A.end()) {
    cout << *diter << " ";
    diter++;
  }
  cout << endl;

  // Subproblem:  5
  cout << endl;

  // Subproblem:  6
  diter = A.begin();
  while (*diter<0) {
    cout << "G" << endl;
    diter++;
  }
  A.insert(diter, 0);

  // Subproblem:  7
  diter = A.begin();
  while (diter!=A.end()) {
    if (next(diter, 1) == A.end()){
      cout << *diter << endl;
      break;
    }
    cout << *diter << ";";
    diter++;
  }
  return 0;
}
