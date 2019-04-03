/*
CH08-320143
a1_p3.cpp
Aashish Paudel
a.paudel@jacobs-university.de
*/

#include<iostream>
using namespace std;

/*
 * When D inherits the class B and C
 * and object of datatype D calls print()
 * function, it becomes ambiguos whether
 * to to use setX(10) or setX(20) for print()
 * We solved the error using virtual keyword
 * Now, the error is gone and x is assigned to 20
 * JUST BECAUSE we inherit Class C later and its
 * constsructor assigns x = 20 later.
*/

/*
 *WE LEAVE THE OUTPUT AS IT IS BECAUSE QN DOES NOT 
 * SAY ANYTHING ABOUT THIS
*/

class A
{
  int x;
public:
  void setX(int i) {x = i;}
  void print() { cout << x; }
};


// We inherit base class with virtual for unambiguity
class B:  virtual public A
{
public:
  B()  { setX(10); }
};

// We inherit base class with virtual for unambiguity
class C:  virtual public A  
{
public:
  C()  { setX(20); }
};
 
class D: public B, public C {
};
 
int main()
{
    D d;
    d.print();
    return 0;
}
