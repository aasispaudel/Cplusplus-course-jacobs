/*
CH08-320143
a3_p1.cpp
Aashish Paudel
a.paudel@jacobs-university.de
*/

#include <iostream>
#include <vector>

using namespace std;

int main() {
  vector<string> vint;
  string str;

  int counter = 0;
  while(true) {
    cin >> str;
    if (str == "END")
      break;
    
    vint.push_back(str);
    counter++;
  }

  for (int i = 0; i < counter; i++)
    cout << vint[i] << " ";

  cout << endl;
  
  vector<string>::iterator viter = vint.begin();
  int i = 0;
  while (viter != vint.end()) {
    if (i < counter-1)
      cout << *viter << ",";
    else
      cout << *viter;
    viter++;
    i++;
  }
  cout << endl;
  
  return 0;
}
