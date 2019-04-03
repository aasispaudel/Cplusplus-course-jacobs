/*
CH08-320142
a4_p1.cpp
Aashish Paudel
aasispaudel@jacobs-university.de
*/

#include <iostream>
#include "Box.h"

using namespace std;
int main() {
  int no;
  cout << "No of boxes?? " << endl;
  cin >> no; cin.get();

  //The array of boxes
  Box *box = new Box[no];

  //Loop to take inputs and set the values
  double height, width, depth;
  for(int i = 0; i < no; i++) {
    cout << "Box " << i << " Working" << endl;
    cout << "Height? " << endl; cin >> height; cin.get();
    cout << "Width? " << endl; cin >> width; cin.get();
    cout << "Depth? " << endl; cin >> depth; cin.get();

    box[i].setHeight(height);
    box[i].setWidth(width);
    box[i].setDepth(depth);
  }
  
  //Loop to get the values and print the volumes
  double total_volume = 0;
  for(int i = 0; i < no; i++) {
    double h = box[i].getHeight();
    double w = box[i].getWidth();
    double d = box[i].getDepth();

    double volume = h * w * d;
    
    cout << "Volume of box" << i << "= " << volume << endl;

    total_volume += volume;
  }

  cout << endl << "Sum of volumes= " << total_volume << endl;

  //Free the dynamically allocated memory
  delete[] box;
  
  return 0;
}

