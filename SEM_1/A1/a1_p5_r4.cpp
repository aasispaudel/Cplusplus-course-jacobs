/*
CH08-320142
a1_p5.cpp
Aashish Paudel
aasispaudel@jacobs-university.de
*/


#include <iostream>
#include <string>

using namespace std;

int main() {
  string str = "";
  char ch;

  while (true) {
    cin >> ch;

    if (ch == 'q') break;

    str = str +  ch;
  }

  cout << str << endl;
  return 0;
}
