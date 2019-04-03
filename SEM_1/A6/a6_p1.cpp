/*
CH08-320142
a6_p1.cpp
Aashish Paudel
apaudel@jacobs-university.de
*/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

string choose_random();

int main() {
  srand(static_cast<unsigned int>(time(0)));
  for (int i = 0; i < 10; i++) {
    cout << choose_random() << endl;
  }
  
  return 0;
}

string choose_random() {
  int randomNo;
  string colors[] = {"RED", "GREEN", "BLUE", "YELLOW"};
  
  //srand(static_cast<unsigned int>(time(0)));
  randomNo = rand() % 4; //Generate random no between 0 and 4 (4 excluded)

  return colors[randomNo]; //Choose from array
  
}


