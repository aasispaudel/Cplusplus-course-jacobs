#include <iostream>
#include <cstdlib>
#include <random>

using namespace std;
int main() {
  srand(static_cast<unsigned int>(time(0)));
  uniform_real_distribution<double> unif(0, 50);
  default_random_engine re;

  double random = unif(re);

  cout << random << endl;
  
  return 0;
}
