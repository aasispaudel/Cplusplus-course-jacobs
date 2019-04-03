#include <iostream>
#include <set>

using namespace std;

// Class interface from question

class Access {
public:
  void activate (unsigned int);
  void deactivate (unsigned int);
  bool isactive (unsigned int) const;

private:
  set<unsigned int> codes;
};


// Func definitions
void Access::activate (unsigned int code) {
  this->codes.insert(code);
}

void Access::deactivate (unsigned int code) {
  this->codes.erase(code);
}

bool Access:: isactive (unsigned int code) const {
  for (auto i: codes)
    if (i == code)
      return true;
  return false;
}


int main() {
  Access user;

  user.activate(1234);
  user.activate(9999);
  user.activate(9876);

  // Asking user for pin
  unsigned int code;
  while (true) {
    cin >> code;

    if (user.isactive(code)) {
      cout << "Successufl entry" << endl;
      break;
    }
    
    cout << "Sorry, wrong pin enter again" << endl;
  }


  user.deactivate(code);

  // Again!
  while (true) {
    cin >> code;

    if (user.isactive(code)) {
      cout << "Successufl entry" << endl;
      break;
    }
    
    cout << "Sorry, wrong pin enter again" << endl;
  }

  
  
  
  return 0;
}
