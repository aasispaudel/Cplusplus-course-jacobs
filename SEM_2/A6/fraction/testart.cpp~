#include "Fraction.h"
#include <iostream>

using namespace std;

int main() {
  Fraction f ("5/6");

  int num;
  int den;

  Fraction f1;


  char ch;
  while (1) {
    try {
      cin >> f1;

      cout << "FRaction :: ";
      cout << f1 << endl;

      cout << "Relative operators test" << endl;
      cout << (f < f1) << endl;
      cout << (f > f1) << endl;
      cout << (f <= f1) << endl;
      cout << (f >= f1) << endl;
      cout << (f == f1) << endl;
      cout << (f != f1) << endl;

      // Arithmetic operators
      cout << "Arithemetic operators test" << endl;
      cout << (f + f1) << endl;
      cout << (f-f1) << endl;
      cout << (f * f1) << endl;
      cout << (f / f1) << endl;

    }

    catch  (logic_error& e) {
      cerr << "Error: " << e.what() << endl;
    }

    catch (exception& e) {
      cerr << "Error: " << e.what() << endl;
    }

    cout << "Wanna continue (y/n)??" << endl;
    cin >> ch;
    if (ch == 'n')
      break;
  }
  
  return 0;
}
