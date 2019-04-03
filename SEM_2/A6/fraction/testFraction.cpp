/*
CH08-320143
a6_p3.cpp
Aashish Paudel
a.paudel@jacobs-university.de
*/



#include "Fraction.h"
#include <iostream>

using namespace std;

int pass = 0;
int fail = 0;

void test (bool a) {
  if (a) {
    pass++;
  }
  else {
    fail++;
    cout << "Causing fail" << endl;
  }
}


int main() {
  // For relative operators

  Fraction f1(1, 4);
  Fraction f2(1, 2);
  Fraction f3("1/4");

  // TEST
  test (f1 < f2);
  test (f2 > f1);
  test (f1 == f3);
  test (f1 <= f3);
  test (f2 >= f1);
  test (f1 != f2);
  
  // For arithmetic tests

  Fraction f1a ("1/2");
  Fraction f2a (1, 2);
  Fraction f3a (1, 1);
  Fraction f4a (1, 4);
  
  test ((f1a+f2a) == f3a);
  test ((f3a-f2a) == f1a);
  test ((f1a*f2a) == f4a);
  test ((f1a/f2a) == f3a);

  Fraction f5a = f1a;
  test (f5a == f1a);

  
  // For io tests
  Fraction f1c;
  Fraction f2c ("4/5");
  try {
    cin >> f1c;
    test (true);
  }
  catch (logic_error& e) {
    test (false);
  }
  try {
    cout << f2c << endl;
    test (true);
  }
  catch (logic_error& e) {
    test (false);
  }

  // exceptions tests

  try {
    Fraction f1d ("5/0");
    test (false);
  }
  catch (logic_error& e) {
    test (true);
  }

  try {
    Fraction f1d (3, 4);
    Fraction f2d (0, 5);

    Fraction (f1d/f2d);
    test (false);
  }

  catch (logic_error& e) {
    test (true);
  }

  // Fails vs passes
  
  cout << "Tests " << pass+fail << " Passes: " << pass
       << " Fails: " << fail << endl;

  
  
  return 0;
}
