#include <iostream>
#include <deque>
#include "WindGauge.h"
#include <algorithm>

using namespace std;

WindGauge::WindGauge(int period) {
  (this->period) = period;
}

void WindGauge::currentWindSpeed(int speed) {
  if (this->history.size() == 12) 
    this->history.erase(this->history.begin());
  this->history.push_back(speed);
}

int WindGauge::highest() const {
  return *max_element((this->history).begin(), (this->history).end());
}

int WindGauge::lowest() const {
  return *min_element((this->history).begin(), (this->history).end());
}

int WindGauge::average() const {
  int sum = 0;

  for (auto it = (this->history).begin(); it != (this->history).end(); it++)
    sum += *it;

  return sum/(this->history).size();
}

