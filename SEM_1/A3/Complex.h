/*
CH08-320142
a3_p6.cpp
Aashish Paudel
aasispaudel@jacobs-university.de
*/


class Complex{
 public:
  //Constructors
  Complex();
  Complex(double, double=0);
  //Destructor
  ~Complex();
  //Setters
  void setReal(double);
  void setImag(double);
  //Getters
  double getReal();
  double getImag();
  //Operators
  Complex find_conjugate();
  Complex add(Complex);
  Complex subtract(Complex); 
  Complex multiply(Complex);
  //Print stuff
  void print();

  
 private:
  //Parameters
  double real;
  double imag;

};
