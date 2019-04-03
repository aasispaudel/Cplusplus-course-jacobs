/*
CH08-320143
a3_p6.cpp
Aashish Paudel
a.paudel@jacobs-university.de
*/

#include <iostream>
#include <queue>
#include <vector>

using namespace std;

class Lesser {
public:
  bool operator() (const int& elem1, const int& elem2) {
    return elem1 < elem2;
  };
};

int main() {
  priority_queue<int, vector<int>, Lesser> pq;

  // pq.push()
  pq.push(5);
  pq.push(4);
  pq.push(3);
  pq.push(9);

  // Size
  cout << "Size: " << pq.size() << endl;
  // Is empty
  cout << "Is empty" << pq.empty() << endl;

  cout << "Elements!!" << endl;
  // Now printing the queue and popping elements elem_wise
  while(! pq.empty()) {
    // Printing top element
    cout << pq.top() << endl;
    // Popping the elements
    pq.pop();
  }
  
  return 0;
}
