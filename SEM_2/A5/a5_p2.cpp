/*
CH08-320143
a5_p2.cpp
Aashish Paudel
a.paudel@jacobs-university.de
*/

#include <iostream>
#include <exception>
#include <cstring>

using namespace std;

// Ownexception class

class OwnException :public exception{
private:
  char message[80];
  string str;

public:
  OwnException(string str) {
    this->str = str;
    strncpy(message, "OwnExceptionX\n", 80);
  }

  virtual const char* what() const throw() {
    return message;
  }

  virtual ~OwnException(){};
};

// Our throw_exception function : throws the respective
// exceptions according to the question
void throw_exception(int);

int main() {
  for (int i = 1; i < 5; i++) {
    try {
      // Pass respective i
      throw_exception(i);
    }

    /**
     * Catch respective exception
     */
    catch (const int n) {
      cerr << "Caught in main: " << n << endl;
    }
    catch (const char ch) {
      cerr << "Caught in main: " << ch << endl;
    }
    catch (const bool bl) {
      cerr << "Caught in main: " << bl << endl;
    }
    catch (exception& e) {
      cerr << "Cought in main: " << e.what() << endl;
    }

  }
  return 0;
}

void throw_exception(int n) {
  if (n == 1)
    throw 'a';
  else if (n == 2)
    throw 12;
  else if (n == 3)
    throw true;
  else
    throw OwnException("Default case exception");

  return;
}
