/*
CH08-320142
a5_p2.cpp
Aashish Paudel
apaudel@jacobs-university.de
*/

#include <iostream>
#include <string>
#include "TournamentMember.h"

using namespace std;

int main() {
  TournamentMember messi("Lionel", "Messi", "2018-11-28", 1.7, 99);
  messi.print();
  TournamentMember suarez("Louis", "Suarez", "2018-11-27", 1.8, 95);
  suarez.print();

  //DOB chhanged
  cout << "Setting DOB for messi" << endl;
  messi.setDOB("2022-22-22");
  cout <<"DOB Messi: " << messi.getDOB() << endl;
  cout << "DOB Suarez: " << suarez.getDOB() << endl;
  cout << "Look!! only DOB MEssi changed!!\n\n";

  cout << "Setting location for messi" << endl;
  messi.setLocation("Barcelona");
  cout << "Location MEssi: " << messi.getLocation() << endl;
  cout << "Location Suarez: " << suarez.getLocation() << endl;
  cout << "Look!! Both changed\n";
  return 0;
}




