/*
CH08-320143
a3_p3.cpp
Aashish Paudel
a.paudel@jacobs-university.de
*/

#include <iostream>
#include <list>
#include <fstream>

using namespace std;

int main() {
  list<int> A, B;

  int i;

  // 1 and 2
  while (true) {
    cin >> i;
    if (i <= 0)
      break;

    // 3 and 3
    A.push_back(i);
    B.push_front(i);
  }

  list<int>::iterator A_iter = A.begin();
  list<int>::iterator B_iter = B.begin();

  /**
   * 5 begins
   */
  while (A_iter!=A.end()) {
    cout << *A_iter << " ";
    A_iter++;
  }
  cout << endl;

  ofstream writer ("listB.txt");
  while (B_iter!=B.end()) {
    writer << *B_iter << " ";
    B_iter++;
  }
  writer << endl;

  /**
   * 5 ends
   */

  // 6 begins
  cout << endl;

  // 7
  A.splice(A.end(), A, A.begin());
  B.splice(B.end(), B, B.begin());


  // 8 begins
  A_iter = A.begin();
  while (A_iter!=A.end()) {
    if (next(A_iter, 1) == A.end()) {
      cout << *A_iter << endl;
      break;
    }
    cout << *A_iter << ",";
    A_iter++;
  }

  B_iter = B.begin();
  while (B_iter!=B.end()) {
    if (next(B_iter, 1) == B.end()) {
      cout << *B_iter << endl;
      break;
    }
    cout << *B_iter << ",";
    B_iter++;
  }

  // 8 ends

  // 9
  cout << endl;

  // 10
  A.merge(B);

  // 11
  A_iter = A.begin();
  while (A_iter != A.end()) {
    cout << *A_iter << " ";
    A_iter++;
  }
  cout << endl;

  return 0;
}
