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
  Fraction f1;
  Fraction f2 ("4/5");
  try {
    cin >> f1;
    test (true);
  }
  catch (logic_error& e) {
    test (false);
  }
  try {
    cout << f2 << endl;
    test (true);
  }
  catch (logic_error& e) {
    test (false);
  }


  cout << "Tests" << pass+fail << "Passes: " << pass
       << "Fails: " << fail << endl;
}
