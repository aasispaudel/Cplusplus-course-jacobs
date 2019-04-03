/*
CH08-320142
a2_p1.cpp
Aashish Paudel
apaudel@jacobs-university.de
*/

#include <iostream>

using namespace std;

int myfirst(int array[], int n);
double myfirst(double array[], int n);
char myfirst(char array[], int n);

int main() {
  int int_array[] = {1, 2, 3, 4, 5};
  double double_array[] = {1.2, 32.4, 6.0, 4.};
  char char_array[] = {'c', 'v', 'b', 'n', 'm'};

  cout << myfirst(int_array, 5) << endl;
  cout << myfirst(double_array, 4) << endl;
  cout << myfirst(char_array, 5) << endl;
  
  return 0;
}

int myfirst(int array[], int n) {
  for (int i = 0; i < n; i++) {
    if ((array[i] > 0) && (array[i] % 2 == 1)) return array[i];
  }
  return -1;
    }

double myfirst(double array[], int n) {
  for (int i = 0; i < n;i++) {
    if ((array[i] > 0) && (array[i] == (int) array[i]))
      return array[i];
  }
  return 1.1;
}

char myfirst(char *array, int n) {
  for (int i =0; i < n; i++) {
    //int ASCII = (int) (toupper(char[i]))
    char ch = tolower(array[i]);
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
      return ch;
  }
  return '0';
}
