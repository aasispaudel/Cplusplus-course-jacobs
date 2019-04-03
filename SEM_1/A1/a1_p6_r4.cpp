/*
CH08-320142
a2_p3.cpp
Aashish Paudel
aasispaudel@jacobs-university.de
*/

#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {
  srand ( static_cast <unsigned>(time(0)));
  int randomNo = rand() % 100 + 1;
  cout << "Guess a no? (between 1 an 20)";

  while (true) {
     int no;
     cin >> no; cin.get();

     if (no == randomNo) {
       cout << "Congrats!!!" << endl;
	 break;
     }

     else if ((no - randomNo) > 50) cout << "Sorry, Too high!! Guess again ";
     else if ((no - randomNo < (-50))) cout << "Sorry, Too low!! Guess again ";
     else cout << "Close enough, Guess again ";
  }
  
  
  return 0;
}
