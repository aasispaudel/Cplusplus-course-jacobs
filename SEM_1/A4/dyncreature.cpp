/*
CH08-320142
a4_p4.cpp
Aashish Paudel
aasispaudel@jacobs-university.de
*/


#include <iostream>
#include "Creature.h"

using namespace std;
int main()
{ 
    cout << "Creating an Creature.\n";
    Creature c;
    c.run();
    cout << endl;

    /*
      Loop as specified by question
      It does specific purposes according to character entered by the user
      Purposes in the quesions
    */
    
    char ch;
    while(1){
      cin >> ch; cin.get();
      if (ch == 'q')
	break;

      if (ch == 'w'){
	cout << "\nCreating a wizard\n";
	Wizard *w = new Wizard();
	w->run();
	w->hover();
	delete w;
      }

      
      else if (ch == '1'){
	cout << "\nCreating a Unicorn\n";
	Unicorn *w = new Unicorn();
	w->run();
	w->jump();
	delete w;
      }

      
      else if (ch == '2'){
	cout << "\nCreating a dragon\n";
	Dragon *w = new Dragon();
	w->run();
	w->breathe();
	delete w;
      }

      else {
	cout << "Please enter a valid character..." << endl;
      }
      
    }
    return 0;
} 


