#include <iostream>
#include <string>

using namespace std;

class A{
public:
  string name;
  int ab;
  int bc;
public:
  A() {};
  A(string name) {
    this->name = name;
  };

  void changeName(string newName) {
    name = newName;
  }

  string getName() {
    return name;
  };

  int getA() {
    return ab;
  };
  A returnShit() {
    return *this;
  };

  friend istream& operator>>(istream& in, const A& a);
};

/*
  It is a recursive function based on euclid's algorithm for 
  finding gcd.
*/
int gcd(int a, int b)
{
  //Implement the gcd
        if (a == 0) 
	     return b; 
        return gcd(b % a, a);
}


int main() {
  cout << gcd(-1, 6) << endl;
  
  return 0;
  
}
