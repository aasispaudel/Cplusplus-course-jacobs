// program below demonstrates the 
// merge function in c++ 
#include <iostream>
#include <deque>

using namespace std; 
  
int main() 
{ 
  deque<int> dq;

  dq.push_back(4);
  dq.push_back(5);

  dq.resize(4);
  
  for (auto i: dq)
    cout << i << endl;
  
} 
