#include <iostream>
#include "Fraction.h"

using namespace std;

int pass = 0;
int fail = 0;

void test (bool a) {
  if (a) {
    pass++;
  }
  else
    fail++;
}

int main() {
  Fraction f1(3, 4);
  Fraction f2(5, 6);
  Fraction f3("3/4");

  // TEST
  test (f1 < f2);
  test (f2 > f1);
  test (f1 == f3);
  test (f1 <= f3);
  test (f2 >= f1);
  
  cout << "Tests" << pass+fail << "Passes: " << pass
       << "Fails: " << fail << endl;
  return 0;
}
