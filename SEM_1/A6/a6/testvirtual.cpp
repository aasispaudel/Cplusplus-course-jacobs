/*
CH08-320142
a6_p4.cpp
Aashish Paudel
apaudel@jacobs-university.de
*/


#include <iostream>
#include <random>
#include <cstdlib>
#include <string>
#include <cstring>
using namespace std;
#include "Area.h"
#include "Circle.h"
#include "Ring.h"
#include "Rectangle.h"
#include "Square.h"


/*
  Extra method to return random colors: RED GREEN BLUE YELLOW
*/
string chooseRandomColor();



/*
                                      The class structure
                   -----------------------------------------------------------

		                     Area(ABSTRACT CLASS)
                                               |
                                --------------- --------------------
                                |                                  |
                              Circle                            Rectangle   
                                |                                  |
                              Ring                               Square

**/

const int num_obj = 20;  //It has changed to 20 now.
int main() {
  Area *list[num_obj];						// (1)
  /*
                                                                    The list of pointers of the objects to the class Area is created.It will                                                                     contain 6 pointers.
**/
 	int index = 0;								// (2) integer index is declared and assigned to 0.
	double sum_area = 0.0;                                         // (3)  double sum_area is created and assigned to 0.0
	double sum_perimeter = 0.0;

	// Let's create objects
	srand(static_cast<unsigned int>(time(0))); //Create random sseed
	for (int i = 0; i < num_obj; i++) {
	  const char* rand_color = chooseRandomColor().c_str(); //RANDOM COLOR (String -> char*)
	  
	  int decideRandomObj = rand() % 4; //RANDOM NO

	  //Random doubles generator to create double values for parameters

	  //Create a random double generating engine
	  uniform_real_distribution<double> unif(0, 50); //all values are between 0 and 50
	  default_random_engine createRe;
	  

	  //Creation of circle
	  if (decideRandomObj == 0) {
	    double rand_radius = unif(createRe); //Creating a random double for circle's radius
	    cout << "Creating a circle" << endl;
	    list[i] = new Circle("rand_color", rand_radius);
	  }
	  else if (decideRandomObj == 1) {
	    double r1 = unif(createRe);
	    double r2 = unif(createRe);

	    cout << "Creating a ring" << endl;
	    list[i] = new Ring(rand_color, (r1>r2 ? r1 : r2), (r1<r2 ? r1 : r2)); //Little operation to always pass the bigger number
	                                                                          //first and smaller later
	  }
	  else if (decideRandomObj == 2) {
	    double rand_l = unif(createRe);
	    double rand_b = unif(createRe);

	    cout << "Creating a rectangle" << endl;
	    list[i] = new Rectangle(rand_color, rand_l, rand_b); 
	  }
	  else {
	    double rand_side = unif(createRe);

	    cout << "Creating a square" << endl;
	    list[i] = new Square(rand_color, rand_side);
	  }
	}

	while (index < num_obj) {					// (7)
	  (list[index])->getColor();
	  double perimeter = list[index++]->calcPerimeter();
	  sum_perimeter += perimeter;
	  
	  double area = list[index++]->calcArea();
	  sum_area += area;
	}
	cout << "\nThe total area is "
			<< sum_area << " units " << endl;
	cout << "\nThe total perimeter is "
             << sum_perimeter << " units" << endl;
}

string chooseRandomColor() {
  int randomNo;
  string colors[] = {"RED", "GREEN", "BLUE", "YELLOW"};
  
  //srand(static_cast<unsigned int>(time(0)));
  randomNo = rand() % 4; //Generate random no between 0 and 4 (4 excluded)

  return colors[randomNo]; //Choose from array
  
}
