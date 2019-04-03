#include <iostream>

using namespace std;

int main () {
  int** matrix = new int*[5];

  for (int i = 0; i < 5; i++) {
    matrix[i] = new int[8];
  }

  for (int i =0; i < 5; i++)
    for (int j = 0; j < 10; j++)
      matrix[i][j] = i*j;

  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 10; j++) {
      cout << matrix[i][j] << " ";
      
    }
    cout << endl;
  }

  int** matrix2;

  matrix2 = matrix;

  
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 10; j++) {
      cout << matrix2[i][j] << " ";
      
    }
    cout << endl;
  }

  return 0;
}
