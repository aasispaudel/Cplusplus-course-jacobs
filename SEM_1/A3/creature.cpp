/*
CH08-320142
a4_p2.cpp
Aashish Paudel
aasispaudel@jacobs-university.de
*/

#include <iostream>
#include <string>

using namespace std;

class Creature {
	public:
		Creature();  
		void run() const;
                ~Creature();

	protected:
		int distance;
};

Creature::Creature(): distance(10)
{cout << "Calling constructor:: Creature" << endl;}    

Creature::~Creature(){
  cout << "Calling destructor:: Creature" << endl;
}

void Creature::run() const
{ 
    cout << "running " << distance << " meters!\n";
}  

class Wizard : public Creature {
	public:
		Wizard();
                ~Wizard();
		void hover() const;

	private:
		int distFactor;
};

Wizard::Wizard() : distFactor(3)
{cout << "Constructor called: Wizard" << endl;}

Wizard::~Wizard(){
  cout << "Destructor called : Wizard" << endl;
}

void Wizard::hover() const
{
    cout << "hovering " << (distFactor * distance) << " meters!\n";
}

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

Unicorn::Unicorn(): height(6) {
  cout << "Constructor called: Unicorn" << endl;
}

Unicorn::~Unicorn() {
  cout << "Destructor called: unicorn" << endl;
}

void Unicorn::jump() const {
  cout << "Jumping " << height << " meters High and " << distance << " meters long" << endl;
}

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

Dragon::Dragon(): fire("Fire") {
  cout << "Constructor called: Dragon" << endl;
}

Dragon::~Dragon() {
  cout << "Destructor called: Dragon" << endl;
}

void Dragon::breathe() const {
  cout << "Breathing " << fire << endl;
}

int main()
{ 
    cout << "Creating an Creature.\n";
    Creature c;
    c.run();

    cout << "\nCreating a Wizard.\n";
    Wizard w;
    w.run();
    w.hover();

    cout << "\nCreating a Unicorn.\n";
    Unicorn u;
    u.run();
    u.jump();

    cout<< "\nCreating a Dragon\n";
    Dragon d;
    d.run();
    d.breathe();
    
    return 0;
} 

