/*
CH08-320143
a4_p6.cpp
Aashish Paudel
a.paudel@jacobs-university.de
*/

#include <iostream>
#include <map>

using namespace std;

// Class interface from question

class Access {
public:
  void activate (unsigned int, unsigned int);
  void deactivate (unsigned int);
  bool isactive (unsigned int, unsigned int) const;

private:
  map<unsigned int, unsigned int> codes;
};


// Func definitions
void Access::activate (unsigned int code, unsigned int level) {
  this->codes[code] = level;
}

void Access::deactivate (unsigned int code) {
  this->codes.erase(code);
}

bool Access:: isactive (unsigned int code, unsigned int level) const {
  for (auto i: codes)
    if (i.first == code && i.second >= level)
      return true;
  return false;
}


int main() {
  Access user;

  user.activate(1234, 1);
  user.activate(9999, 5);
  user.activate(9876, 9);

  // Asking user for pin
  unsigned int code;
  while (true) {
    cin >> code;

    if (user.isactive(code, 5)) {
      cout << "Successufl entry" << endl;
      break;
    }
    
    cout << "Sorry, wrong pin enter again" << endl;
  }


  // Changing the access level of 9999 if it exists!
  if (user.isactive(9999, 5)) {
    user.deactivate(9999);
    user.activate(9999, 8);
  }
  
  // Creating 1111 with access level 7
  user.activate(1111, 7);

  
  // Again but with level 7!
  while (true) {
    cin >> code;

    if (user.isactive(code, 7)) {
      cout << "Successufl entry" << endl;
      break;
    }
    
    cout << "Sorry, wrong pin enter again" << endl;
  }
  
  return 0;
}
