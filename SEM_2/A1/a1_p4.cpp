/*
CH08-320143
a1_p4.cpp
Aashish Paudel
a.paudel@jacobs-university.de
*/

#include<iostream>
using namespace std;

/*
 * @error use of deleted funciton 'D::D()'
 * 
 * @reason virtual inheritance of base class 
 *         does not call its parent class from constructor 
 *         for its own base class
 * @soulution call class A from D in its own constructor
 *            along with B and C
 * @extra We remove ambiguity with this approach in case two 
 *        parent classes share same variable that base class 
          uses!
*/

class A
{
  int x;
public:
  A(int i) { x = i; }
  void print() { cout << x; }
};
 
class B: virtual public A
{
public:
  B():A(10) {  }
};
 
class C:  virtual public A 
{
public:
  C():A(10) {  }
};
 
class D: public B, public C {
public:
  // Our change
  D(): A(10), B(), C() {}
};
 
int main()
{
    D d;
    d.print();
    return 0;
}
