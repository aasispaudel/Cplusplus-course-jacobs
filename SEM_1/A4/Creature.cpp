/*
CH08-320142
a4_p4.cpp
Aashish Paudel
aasispaudel@jacobs-university.de
*/

#include <iostream>
#include <string>
#include "Creature.h"

using namespace std;

//Methods for Creature
Creature::Creature(): distance(10)
{cout << "Calling constructor:: Creature" << endl;}    

Creature::~Creature(){
  cout << "Calling destructor:: Creature" << endl;
}

void Creature::run() const
{ 
    cout << "running " << distance << " meters!\n";
}  

//Methods for Wizard

Wizard::Wizard() : distFactor(3)
{cout << "Constructor called: Wizard" << endl;}

Wizard::~Wizard(){
  cout << "Destructor called : Wizard" << endl;
}

void Wizard::hover() const
{
    cout << "hovering " << (distFactor * distance) << " meters!\n";
}


//Methods for Unicorn

Unicorn::Unicorn(): height(6) {
  cout << "Constructor called: Unicorn" << endl;
}

Unicorn::~Unicorn() {
  cout << "Destructor called: unicorn" << endl;
}

void Unicorn::jump() const {
  cout << "Jumping " << height << " meters High and " << distance << " meters long" << endl;
}

//Methods for Dragon
Dragon::Dragon(): fire("Fire") {
  cout << "Constructor called: Dragon" << endl;
}

Dragon::~Dragon() {
  cout << "Destructor called: Dragon" << endl;
}

void Dragon::breathe() const {
  cout << "Breathing " << fire << endl;
}

