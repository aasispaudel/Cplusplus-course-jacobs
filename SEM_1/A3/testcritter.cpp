/*
CH08-320142
a3_p4.cpp
Aashish Paudel
aasispaudel@jacobs-university.de
*/

#include <iostream>
#include "Critter.h"

using namespace std;
int main() {
  //Instance 1
  Critter crit_1;

    //Print the parameters:: crit_1
  cout << crit_1.name << endl<<
    crit_1.hunger << endl<<
    crit_1.boredom << endl<<
    crit_1.height << endl <<
    crit_1.thirst << endl;
  
  //Instance 2
  Critter crit_2("Nasty");

  //Print the parameters:: crit_2
  cout << crit_2.name << endl<<
    crit_2.hunger << endl<<
    crit_2.boredom << endl<<
    crit_2.height << endl <<
    crit_2.thirst << endl;

  
  //Instance 3
  Critter crit_3("Nasty", 9, 4.5);

  //Print the parameters:: crit_4
  cout << crit_3.name << endl<<
    crit_3.hunger << endl<<
    crit_3.boredom << endl<<
    crit_3.height << endl <<
    crit_3.thirst << endl;
  
  //Instance 4
  Critter crit_4("Bug", 4, 3.0, 5);
  
  //Print the parameters:: crit_4
  cout << crit_4.name << endl<<
    crit_4.hunger << endl<<
    crit_4.boredom << endl<<
    crit_4.height << endl <<
    crit_4.thirst << endl;

  //Instance 5
  Critter crit_5("Critter5", 5, 4.0, 6, 8);

  //Print the parameters:: crit_5
  cout << crit_5.name << endl <<
    crit_5.hunger << endl <<
    crit_5.boredom << endl <<
    crit_5.height << endl <<
    crit_5.thirst << endl;

  return 0;
}

