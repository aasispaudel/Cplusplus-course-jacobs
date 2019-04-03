/*
CH08-320143
a1_p4.cpp
Aashish Paudel
a.paudel@jacobs-university.de
*/

#include <iostream>
#include "LinkedList.h"

using namespace std;

int main() {
  // Test of different methods for ints
  List <int>list;

  list.push_back(5);
  list.push_back(10);
  cout << list.get_front() << endl;
  cout << list.get_last() << endl;

  list.push_front(7);
  list.push_front(8);
  cout << list.r_front() << endl;
  cout << list.get_front() << endl;

  // Now for doubles
  List <double>list1;

  list1.push_back(2.8);
  list1.push_back(3.5);
  cout << list1.get_front() << endl;
  cout << list1.get_last() << endl;

  list1.push_front(7.6);
  list1.push_front(8.6);
  cout << list1.r_last() << endl;
  cout << list1.get_last() << endl;

  return 0;
}
