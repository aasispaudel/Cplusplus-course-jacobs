#include <iostream>
#include "First.h"

//using namespace First;

void First::setId(int x) {
  First::id = x;
  
  return;
}

int First::getId() {
  return id;
}

void First::doubleId(int x) {
  id *= 2;
  
  return;
}

int main() {
  First c();
  c.setId(4);
  std::cout << c.getId() << std::endl;

}
