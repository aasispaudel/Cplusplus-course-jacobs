/*
CH08-320143
a1_p2.cpp
Aashish Paudel
a.paudel@jacobs-university.de
*/

#include <iostream>
#include <fstream>

using namespace std;

int main () {
  int n;
  cin >> n;

  // To store all the filenames entered by the user
  char fileNames[n][50];
  for (int i = 0; i < n; i++) {
    cin >> fileNames[i];
  }

  ifstream file;
  // To write the file
  ofstream writer ("concatn.txt", ios::out | ios::binary);
  
  long size;
  for (int i = 0; i < n; i++) {
    file.open(fileNames[i], ios::in | ios::binary);

    if (file.is_open()) {
      // To find the size of the file to write
      file.seekg(0, ios::end);
      size = file.tellg();
      file.seekg(0, ios::beg);

      // Make our buffer the size of our file
      char* buffer = new char[size];

      // READ the file
      file.read(buffer, size);

      // Print the content being read
      cout << buffer;

      // WRITE to the file
      writer.write(buffer, size);
      
      file.close();

      delete[] buffer;

      }
  }
  

  writer.close();
  
  return 0;
}
