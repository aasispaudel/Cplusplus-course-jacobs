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

int main () {
  try {
    Fraction f1 ("5/0");
    test (false);
  }
  catch (LogicException& e) {
    test (true);
  }

  try {
    Fraction f1 (3, 4);
    Fraction f2 (0, 5);

    Fraction (f1/f2);
    test (false);
  }

  catch (LogicException& e) {
    test (true);
  }

  
  cout << "Tests" << pass+fail << "Passes: " << pass
       << "Fails: " << fail << endl;
  
  
  return 0;
}
