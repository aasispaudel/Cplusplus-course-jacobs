/*
CH08-320143
a2_p1.cpp
Aashish Paudel
a.paudel@jacobs-university.de
*/

#include <iostream>

using namespace std;

// Defining Complex class
class Complex {
private:
  double real;
  double imag;

public:
  // Constructors
  Complex() {real = 0; imag = 0;};
  Complex(double real, double imag=0) {
    this->real = real;
    this->imag = imag;
  };

  
  //Setters
  void setReal(double r){
    real = r;
  };

  void setImag(double i) {
    imag = i;
  };


  // Most important thing: Overloaded == operator to use in array_search
  // Function
  int operator==(Complex& c2) {
    if (real == c2.real && imag == c2.imag)
      return 1;
    return 0;
  }
};

// Template function
/*
 *This function is a normal array search that sees if the valur provided is]
 * equal to some element in the array!
 * If it finds the element returns the index else -1
 * The only difference however is that it uses general datatype T
*/

template <class T>
int array_search(T arr[], T val, int size) {
  for (int i = 0; i < size; i++) {
    if (arr[i] == val) 
      return i;
  }
  return -1;
}

int main() {

  /* Just using int complex and double to see if our array_search works!
  // The integer is found at index 2!
  // The complex at 4!
  // The double is not in the array thus -1!
  // LEt's see if this works! 
  */
  
  int SIZE = 10;
  int arr[SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  cout << array_search(arr, 3, SIZE) << endl;

  Complex arr_complex[SIZE];
  for (int i = 0; i < SIZE; i++) {
    arr_complex[i].setReal(i);
    arr_complex[i].setImag(i*2);
  }
  cout << array_search(arr_complex, arr_complex[4], SIZE) << endl;

  double arr_double[SIZE] = {1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9, 10.1};
  cout << array_search(arr_double, 3.4, SIZE) << endl;
  
  return 0;
}
