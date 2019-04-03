/*
CH08-320142
a3_p6.cpp
Aashish Paudel
aasispaudel@jacobs-university.de
*/


#include <iostream>
#include "Complex.h"
#include <cstring>

using namespace std;
int main() {
  Complex c1, c2;


  /*
    Take inputs
   */
  
  cout << "Creating first instance." << endl;

  double real, imag;

  cout << "Real part?? ";
  cin >> real; cin.get();
  c1.setReal(real);
  cout << "\n";

  cout << "Imaginary par?? ";
  cin >> imag; cin.get();
  c1.setImag(imag);
  cout << "\n";

  cout << "The first instance: ";
  c1.print();

  cout << "Creating second instance..." << endl;
  cout << "Real part?? ";
  cin >> real; cin.get();
  c2.setReal(real);
  cout << "\n";

  cout << "Imaginary par?? ";
  cin >> imag; cin.get();
  c2.setImag(imag);
  cout << "\n";

  cout << "The second instance: ";
  c2.print();


  /*
    Do the operations and print them on the screen
   */

  cout << endl << endl;
  
  Complex conjugate, sum, product, difference;

  conjugate = c1.find_conjugate();
  sum = c1.add(c2);
  difference = c1.subtract(c2);
  product = c1.multiply(c2);

  cout << "The conjugate of the first instance: ";
  conjugate.print();
  
  cout << "The sum: ";
  sum.print();

  cout << "The differnece: ";
  difference.print();

  cout << "The product: ";
  product.print();
  return 0;
}

