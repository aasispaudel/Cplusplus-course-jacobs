/*
CH08-320142
a6_p2.cpp
Aashish Paudel
apaudel@jacobs-university.de
*/

#include <iostream>
#include "fraction.h"

using namespace std;

int main(void)
{
        Fraction a, b;

	//Taking three inputs from our overloaded operator
	cin >> a >> b;

	//For formatting
	cout << endl;

	//Get output from our overloaded operator
	cout << a << endl;
	cout << b << endl; 

	//Multiplication and division from our overloaded operator
	cout << "Multiplication: " << a * b << endl;
	cout << "Division: " << a/b << endl;

	//Addition and subraction from our overloaded operator
	cout << "Addition: " << a + b << endl;
	cout << "Subtraction: " << a - b << endl;

	//Comparision test from our overloaded operator
	cout << "a > b?: " << (a > b) << endl;
	cout << "a < b?: " << (a < b) << endl;

	return 0;
}
