/*
CH08-320143
a6_p2.cpp
Aashish Paudel
a.paudel@jacobs-university.de
*/

#include <iostream>
#include <sstream>
using namespace std;

void foo(int *array, int n, int &positives) {
	for(int i=0; i<n; i++)
		if (array[i]>0)
			positives++;
}

class Test {
	private:
		int *a;
		int n;
	public:
		Test() {
			a=NULL;
			n=0;
		}
		Test(int *a, int n) {
			this->n = n;
			if (this->a != NULL) {
				delete this->a;
			}
			this->a = new int[n];
			for(int i=0; i<n; i++)
				this->a[i] = a[i];
		}
		string toString() {
			ostringstream ss;
			ss << "Length: " << n << endl << "Elements: ";
			for(int i=0; i<n; i++)
				ss << a[i] << " ";
			ss << endl;
			return ss.str();
		}
		~Test() {
			delete a;
		}
};

/**
 * All warinings are given in terminal while running
 * That is how you can get there
 * And fix them accordingly
*/

/**
 * Using the break point at the line where foo is called
 * stepped into foo function and executed the loop
 * with step
 * We can see that the value of *positives reaches an 
 * unusual value
 * This is because we are trying to add the value of 
 * positives (address) and 1 and storing it in *positives
 * (Illegal in c++)
 * Fixed it by using c++ style reference
 */


 /**
 * Now for memory related error
 * @gdb
 * run -> Code exitted abnormally
 * break 68
 * run -> Code exitted abormally
 * break 87
 * run -> n -> Program received signal error...
 * Error is at line 87
 * We are trying to free the memory statically assigned
 * Fix it by commenting the line
 * clear
 * run -> Code exitted abnormally
 * break 89
 * run -> code run
 * next -> code exitted abnormally
 * Next error at 89
 * Fix it by using new Test (initialize it dynamically)
*/

int main() {
	int v[3] = {1, 2, 3};
	int p=0;
	foo(v, 3, p);
	cout << "Amount of positive values in the array=" << p << endl;
	Test arr[5];
	Test *obj1;
	obj1=&arr[0];
	Test *obj2=new Test(v, 3);
	Test *obj3 = new Test;
	cout << obj1->toString();
	cout << obj2->toString();
	cout << obj3->toString();
	// delete obj1;
	delete obj2;
	delete obj3;
	return 0;
}
