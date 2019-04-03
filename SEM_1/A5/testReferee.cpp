/*
CH08-320142
a5_p4.cpp
Aashish Paudel
apaudel@jacobs-university.de
*/

#include <iostream>
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

  //Creation of referee

  Referee referee("A", "B", "2018-03-23", 1.7, 80);


  //Testing the functionality
  cout << "Yellow to lionel messi "
       << referee.addToYellowCardList(&messi) << endl;  
  cout << "Yellow for: " << endl << referee.yellowCardList[0]->getlName() << endl;
  cout << "No of yellows: " << referee.getYellowCardCount() << endl;

  cout << "Red to gerad pique "
       << referee.addToRedCardList(&pique) << endl;
  cout << "Red for: " << referee.redCardList[0]->getlName() << endl;
  cout << "No of reds: " << referee.getRedCardCount() << endl;

  cout << "Second yellow to lionel messi "  
       << referee.addToYellowCardList(&messi) << endl;
  cout << "Red for: " << referee.redCardList[1]->getlName() << endl;
  cout << "No of red: " << referee.getRedCardCount() << endl;

  return 0;
}




