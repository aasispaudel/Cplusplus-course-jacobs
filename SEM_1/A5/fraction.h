/*
CH08-320142
a6_p2.cpp
Aashish Paudel
apaudel@jacobs-university.de
*/


// simple class for fractions

#ifndef FRACTION_H_
#define FRACTION_H_

#include <iostream>

class Fraction {

private:						// internal implementation is hidden
	int num;					// numerator
	int den;					// denominator

	int gcd(int a, int b);		// calculates the gcd of a and b
	int lcm(int a, int b);

public:
	Fraction();					// empty constructor
	Fraction(int, int = 1); 	// constructor taking values for fractions and
								// integers. Denominator by default is 1

	//Copy constructor

	Fraction(const Fraction&);
	
	friend std::ostream& operator<<(std::ostream& out, const Fraction& frac);	// Overloading the << operator

	friend std::istream& operator>>(std::istream& in, Fraction& frac);      // Overloading the >> operator


	//Overloading * and / operators
	Fraction operator*(const Fraction& frac);
	Fraction operator/(const Fraction& frac);

	//Overloading + and - operators
	Fraction operator+(const Fraction&);
	Fraction operator-(const Fraction&);

	//Overloading < and > operators
	bool operator<(const Fraction&);
	bool operator>(const Fraction&);
};



#endif
/* FRACTION_H_ */
