/*
CH08-320142
a5_p3.cpp
Aashish Paudel
apaudel@jacobs-university.de
*/


#include <iostream>
#include <string>
#include "TournamentMember.h"

using namespace std;
int main() {

  //Creation of players
  Player messi("Lionel", "Messi", "2018-11-28", 1.7, 99, 10, "RF", 'L', 35);
  messi.print(); cout << endl;
  Player suarez("Louis", "Suarez", "2018-11-27", 1.8, 95, 9, "CF", 'A', 25);
  suarez.print(); cout << endl;
  Player pique("Gerad", "pique", "1999-12-23", 1.85, 80, 3, "CB", 'R', 3);
  pique.print(); cout << endl;


  //TEstting of score method
  messi.score(); messi.score(); suarez.score();
  cout << "After scoring.." << endl;
  cout << "Messi goals: " << messi.getNoGoals() << endl;
  cout << "Suarez goals: " << suarez.getNoGoals() << endl;

  //Setting location to Bremen
  cout << endl;
  Player::setLocation("Bremen");
  cout << "After setting location to Bremen..." << endl;
  cout << "Messi location: " << messi.getLocation() << endl <<
    "Suarez location: " << suarez.getLocation() << endl <<
    "Pique loaction: " << pique.getLocation() << endl;
  cout << endl;
  
  
  return 0;
}



