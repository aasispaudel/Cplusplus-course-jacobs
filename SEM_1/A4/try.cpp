#include <iostream>
#include <string>

using namespace std;

class A{
private:
  double* comp;

public:
  A(double* d) {
    comp = new double[4];
    comp = d;
  }
  void print() {
    cout << comp[0] << endl;
  }

  double* getC() {
    return comp;
  }

};

int main() {
  double* a = new double[0];
  a[1] = 5;

  cout << a[1] << endl;

  delete[] a;
  
  return 0;
}
