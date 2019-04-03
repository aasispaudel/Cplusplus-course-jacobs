/*
CH08-320142
a2_p3.cpp
Aashish Paudel
aasispaudel@jacobs-university.de
*/

#include <iostream>

using namespace std;

void add_min(int *x, int n);
void deallocate(int *x);

int main() {
  int n;
  cin >> n; cin.get();

  int* x = new int[n];

  for(int i = 0; i < n; i++)
    cin >> x[i];

  add_min(x, n);

  for (int i = 0; i < n; i++)
    cout << x[i] << endl;

  cout << x << endl;
  deallocate(x);
  
  return 0;
}

void add_min(int* x, int n) {
  int min = x[0];
  for (int i = 0; i < n; i++)
    if (min > x[i]) min = x[i];

  for (int i = 0; i < n; i++)
    x[i] += min;

}

void deallocate(int* x) {
  delete[] x;
}
