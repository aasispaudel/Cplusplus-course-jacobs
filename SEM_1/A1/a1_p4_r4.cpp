#include <iostream>
using namespace std;

int sign(int x);

int main() {
  int x;
  cin >> x; cin.get();
  
  cout << sign(x) << endl;
  return 0;
}

int sign(int x) {
  if (x > 0) return 1;
  else if (x < 0) return -1;
  else return 0;
}
