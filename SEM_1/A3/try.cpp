#include <iostream>

using namespace std;

class Car
{

public:
  double s1;
  int m1;
  double p1;
  
  Car(double speed, int milage=5) {
    s1 = speed;
    m1 = milage;
    cout << "Inside car 1  " << milage << endl;
    //call_1();
  }

  Car(double speed, int milage, int price) {
    //p1 = price;
    //cout << price << endl;
    //call_2();
  }

  Car returnObj() {
    Car car(5.0, 6, 7);
    return car;
    
  }

  void print() {
    cout << "Brand new car with " << s1 << "speed." << endl;
  }

private:
  void call_1(){
    cout << "1 called" << endl;
  }

  void call_2(){
    cout << "2 called" << endl;
  }
  
};


int main() {
  Car car1(3, 400000
	   );
  Car car2();


  Car car  =  car1.returnObj();
  car.print();

  int i = 4;

  cout << -i << endl;

  
  
  return 0;
  
} 
