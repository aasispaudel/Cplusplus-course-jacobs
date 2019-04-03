/*
CH08-320143
a4_p3.cpp
Aashish Paudel
a.paudel@jacobs-university.de
*/

#include <iostream>
#include <set>
#include <algorithm>

using namespace std;

template <class T>
void print_set(T s) {
  for (auto it = s.begin(); it != s.end(); it++)
    cout << *it << " ";
  cout << endl;
}

int main () {
  // Subproblems:  1
  set<int> A;
  multiset<int> B;

  int val;
  // Subproblems:  2
  while (true) {
    cin >> val;
    if (val < 0)
      break;

    // Subproblems:  3 and 4
    A.insert(val);
    B.insert(val);
  }
  // Subproblems:  5
  print_set(A);
  cout << endl;
  print_set(B);
  
  // Subproblems:  6
  cout << endl;

  // Subproblems:  7
  A.erase(5);
  B.erase(5);

  // Subproblems:  8
  print_set(A);
  cout << endl;
  print_set(B);


  // Just for clarity an empty line
  cout << endl;
  
  // Subproblems:  9
  A.insert(14);
  A.insert(198);

  // Subproblems:  10
  multiset<int> C;
  set_union (A.begin(), A.end(), B.begin(), B.end(), inserter(C, C.begin()));

  print_set(C);

  // Subproblems:  11
  set<int> D;
  set_intersection (A.begin(), A.end(), B.begin(), B.end(), inserter(D, D.begin()));
  print_set (D);

  // Subproblem : 12
  set<int> E;
  set_difference (A.begin(), A.end(), B.begin(), B.end(), inserter(E, E.begin()));
  print_set(E);

  // Subproblem: 13
  set<int> F;
  set_symmetric_difference (A.begin(), A.end(), B.begin(), B.end(), inserter(F, F.begin()));
  
  return 0;
}
