/*
CH08-320142
a6_p2.cpp
Aashish Paudel
apaudel@jacobs-university.de
*/

#include <iostream>
#include "fraction.h"

using namespace std;
Fraction::Fraction()
{
	num = 1;
	den = 1;
}

Fraction::Fraction(int n, int d)
{
	int tmp_gcd = gcd(n, d);

	num = n / tmp_gcd;
	den = d / tmp_gcd;
}

Fraction::Fraction(const Fraction& frac) {
  num = frac.num;
  den = frac.den;
}


/*
  It is a recursive function based on euclid's algorithm for 
  finding gcd.
*/
int Fraction::gcd(int a, int b)
{
  //Implement the gcd
  if (a == 0) {
    if (b >= 0)
      return b;
    else
      return (-1) * b;
  }
  
  return gcd(b % a, a);
}

int Fraction::lcm(int a, int b)
{
  return (int) (a * b / gcd(a, b));

}

ostream& operator<<(ostream& out, const Fraction &frac) {
  out << frac.num << "/" << frac.den << endl;
  return out;
}

istream& operator>>(istream& in, Fraction &frac) {
  in >> frac.num >> frac.den;
  return in;
}


/*
  These are the overloading operators for multiplication and division.
*/
Fraction Fraction::operator*(const Fraction& frac) {
  int num = (this->num * frac.num);
  int den = (this->den * frac.den);

  Fraction product((num/gcd(num, den)), (den/gcd(num, den)));
  return product;
}
Fraction Fraction::operator/(const Fraction& frac) {
  int num = (this->num * frac.den);
  int den = this->den * frac.num;
  
  Fraction division((num/gcd(num, den)), (den/gcd(num, den)));
  return division;
}

/*
  These are overloading operators for addition and subtraction
*/

Fraction Fraction::operator+(const Fraction& frac) {
  //using the formula from the question
  int lcmul = lcm(this->den, frac.den);
  int num = this->num*(lcmul/this->den) + frac.num*(lcmul/frac.den);

  Fraction sum(num/gcd(num, lcmul), lcmul/gcd(num, lcmul));
  return sum;
}


Fraction Fraction::operator-(const Fraction& frac) {
  //using the formula from the question
  int lcmul = lcm(this->den, frac.den);
  int num = this->num*(lcmul/this->den) - frac.num*(lcmul/frac.den);

  Fraction difference(num/gcd(num, lcmul), lcmul/gcd(num, lcmul));
  return difference;
}

/*
  These are the overloading operators for comparision
*/

bool Fraction::operator<(const Fraction& frac) {  
  return ((float) this->num/this->den)<((float) frac.num/frac.den);
}

bool Fraction::operator>(const Fraction& frac) {
  return ((float) this->num/this->den)>((float) frac.num/frac.den);
}
