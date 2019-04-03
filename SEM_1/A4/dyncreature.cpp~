/*
CH08-320142
a4_p4.cpp
Aashish Paudel
aasispaudel@jacobs-university.de
*/

#include <string>
#include <iostream>
using namespace std;

class Creature {
	public:
		Creature();  
		void run() const;
                ~Creature();

	protected:
		int distance;
};

class Wizard : public Creature {
	public:
		Wizard();
                ~Wizard();
		void hover() const;

	private:
		int distFactor;
};

/*class Unicorn
It has jump method and height as its parameter
*/

class Unicorn : public Creature {
public:
  Unicorn();
  ~Unicorn();
  void jump() const;
private:
  int height;
};


/*
Class Dragon
It has breathe as its function and fire as its parameter
*/

class Dragon : public Creature {
public:
  Dragon();
  ~Dragon();
  void breathe() const;
private:
  string fire;
};

