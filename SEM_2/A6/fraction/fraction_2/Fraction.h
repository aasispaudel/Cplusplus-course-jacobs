#ifndef FRACTION_H_
#define FRACTION_H_

#include <iostream>
#include <exception>

class Fraction{
 private:
  int num;
  int den;

  int lcm (int, int);
  int gcd (int, int);
 public:
  
  // Constructors
  Fraction() {num=0; den=0;};
  Fraction(int, int);
  Fraction(std::string);

  // Copy constructor
  Fraction(const Fraction&);

  // Overloading relational operators
  bool operator< (const Fraction&);
  bool operator<= (const Fraction&);
  bool operator> (const Fraction&);
  bool operator>= (const Fraction&);
  bool operator== (const Fraction&);
  bool operator!= (const Fraction&);

  // Overloading I/O operators
  Fraction operator+ (const Fraction&);
  Fraction operator- (const Fraction&);
  Fraction operator* (const Fraction&);
  Fraction operator/ (const Fraction&);

  //I/O operators
  friend std::ostream& operator<< (std::ostream&, const Fraction&);
  friend std::istream& operator>> (std::istream&, Fraction&);
};

// LogicException class

class LogicException : public std::logic_error {
 public:
  LogicException(const std::string& str) : std::logic_error(str)
  { };
};
#endif
