/*
CH08-320142
a5_p4.cpp
Aashish Paudel
apaudel@jacobs-university.de
*/

#include <iostream>
#include <string>
#include "TournamentMember.h"

using namespace std;

void TournamentMember::print() {
  cout << fName << " " << lName << endl;
  cout << "=================================" << endl;
  cout << "Location: " << location << endl <<
    "DOB: " << DOB << endl <<
    "Height: " << height << endl <<
    "Rating: " << rating << endl << endl;
}

void TournamentMember::setLocation(string loc) {
  location = loc;
}

string TournamentMember::getLocation() {
  return location;
}

void Player::print() const {
  cout << fName << " " << lName << endl;
  cout << "=================================" << endl;
  cout << "Location: " << location << endl <<
    "DOB: " << DOB << endl <<
    "Height: " << height << endl <<
    "Rating: " << rating << endl <<
    "JerseyNo: " << jerseyNo << endl <<
    "Position: " << position << endl <<
    "No of goals: " << noGoals << endl <<
    "Preferred foot: " << foot << endl;
}

void Player::score() {
    noGoals++;
}

bool Player::isin(Player* (*list), int size) {
  for (int i = 0; i < size; i++) {
    if (this->fName == list[i]->fName) {
      return true;
    }
  }
  return false;
}

bool Referee::addToYellowCardList(Player *p) {
  if (p->isin(yellowCardList, yellowCardCount)) {
    this->addToRedCardList(p);
    yellowCardCount--;
    return false;
  }
  else {
    yellowCardList[yellowCardCount] = p;
    yellowCardCount++;
    return true;
  }
}

bool Referee::addToRedCardList(Player *p) {
  if (p->isin(redCardList, redCardCount)) 
    return false;

  redCardList[redCardCount] = p;
  redCardCount++;
  return true;
  
}
string TournamentMember::location = "Barcelona";




