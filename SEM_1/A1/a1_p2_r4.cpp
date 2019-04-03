/*
JTSK-320111
a1_p2_r4.cpp
Aashish Paudel
a.paudel@jacobs-university.de
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
  int nr; float val; string s;

  cin >> nr; cin.get();
  cin >> val; cin.get();
  getline(cin, s);

  for (int i=0; i < nr; i++)
    cout << nr << " " << s << '\n';
  return 0;
}


