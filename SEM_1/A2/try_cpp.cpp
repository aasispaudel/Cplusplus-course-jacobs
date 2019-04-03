#include <iostream>

using namespace std;

int main() {
  int a = 5;
  {
    int *b = new int(6);
    cout << b << endl;
  }
  cout << b << endl;
  cout << a << endl;
  
  return 0;
}
