/*
CH08-320143
a4_p5.cpp
Aashish Paudel
a.paudel@jacobs-university.de
*/

#include <iostream>
#include <map>
#include <fstream>

using namespace std;

int main() {
  ifstream writer ("data.txt");

  map<string, string> db;


  string names;
  string b_dates;
  
  if (writer.is_open()) {
    while (getline(writer, names)) {
      
      getline(writer, b_dates);

      db[names] = b_dates;

    }
  }

  string name;
  getline(cin, name);

  for (auto i: db) {
    if (i.first == name) {
      cout << "Hello " << name << " ";
      cout << i.second << endl;
      exit(0);
    }
  }

  cout << "No name found!" << endl;
  return 0;
}
