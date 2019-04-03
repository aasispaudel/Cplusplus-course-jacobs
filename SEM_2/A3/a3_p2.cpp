/*
CH08-320143
a3_p2.cpp
Aashish Paudel
a.paudel@jacobs-university.de
*/

#include <iostream>
#include <vector>

using namespace std;

int main() {
  vector<string> vstr;
  string str;
  // Take input
  while (true) {
    getline(cin, str);
    
    if (str == "END")
      break;

    vstr.push_back(str);
  }

  // SWAPPING
  if (vstr.size() >= 5) {
    string temp = vstr[1];
    vstr[1] = vstr[4];
    vstr[4] = temp;
  }

  // REPACING with ???
  vstr[vstr.size()-1] = "???";

  // Printing with index
  for (unsigned int i = 0; i < vstr.size(); i++) {
    cout << vstr[i];
    if (i != vstr.size()-1)
      cout << ",";
  }
  cout << endl;


  // Printing with iterator
  vector<string>::iterator viter = vstr.begin();
  while (viter!=vstr.end()) {
    if (viter == vstr.end()-1) {
      cout << *viter << endl;
      break;
    }

    cout << *viter << ";";
    viter++;
  }


  // Printing reverse
  for (viter = vstr.end()-1; viter>=vstr.begin(); viter--)
    cout << *viter << " ";
  cout << endl;
  
  return 0;
}
