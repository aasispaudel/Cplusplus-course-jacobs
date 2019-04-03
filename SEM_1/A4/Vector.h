/*
CH08-320142
a4_p6.cpp
Aashish Paudel
aasispaudel@jacobs-university.de
*/

class Vector {
 public:
  //Constructors
  Vector();
  Vector(int, double*);
  //Copy contructor
  Vector(const Vector&);
  ~Vector(); //Destructor

  //Setters
  void setSize(int);
  void setVector(double*);

  //Getters
  int getSize();
  double* getVector();

  //Print method
  void print();
  //Additional methods
  double norm() const;
  Vector add(const Vector) const;
  Vector subtract(const Vector) const;
  double dot(const Vector) const;
  
 private:
  int size;
  double* comp;
};


