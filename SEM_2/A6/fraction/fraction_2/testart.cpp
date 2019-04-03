#include "Fraction.h"
#include <iostream>

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
  Fraction f1 ("1/2");
  Fraction f2 (1, 2);
  Fraction f3 (1, 1);
  Fraction f4 (1, 4);
  
  test ((f1+f2) == f3);
  test ((f3-f2) == f1);
  test ((f1*f2) == f4);
  test ((f1/f2) == f3);


  
  cout << "Tests: " << pass + fail << "Passes: " << pass
       << "Fails: " << fail << endl;
  
  return 0;
}
