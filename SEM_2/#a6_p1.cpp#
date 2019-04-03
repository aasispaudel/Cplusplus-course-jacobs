/*
CH08-320143
a6_p1.cpp
Aashish Paudel
a.paudel@jacobs-university.de
*/

#include <iostream>
using namespace std;

/**
 * @sum 
 * @gdb list 28
 *      break 73
 *      run
 *      ...
 *      n
 *      p result (some random negative value displayed)
 *      
 *      list 5
 *      break 31
 *      run
 *      4 3 3 3 3 (4 values)
 *      n -> p i -> n -> p i -> n -> p i -> n -> p i
 *              1         2           3           4
 *      Wait! No index 4 should be there!!!
*/

int sum(int a[], int nr) {
	int s=0;
	for(int i=0; i<nr; i++)
		s+=a[i];
	return s;
}

/**
 * @difference
 * @gdb
 * list *
 * break 80
 * run
 * ... 5 4
 * n -> p difference(x, y) -> gives 1
 *
 * run
 * ... 3 5
 * n -> p difference(x, y) -> gives 8856675
 * 
 * break 59
 * run
 * ... 3 4
 * n-> p (a-b) -> gives 86568766
 * What!
 * Okay, unsigned can not be negative
 * cast them to int 
 */

unsigned int difference(unsigned int a, unsigned int b) {
        if ((int)(a-b) < 0)
		return b-a;
	else
		return a-b;
}

int main() {
	int n;
	cout << "n=";
	cin >> n;
	int v[n];
	cout << "Enter values for the array" << endl;
	for(int i=0; i<n; i++)
		cin >> v[i];
	int result = sum(v, n);
	cout << "Result=" << result << endl;
	int x, y;
	cout << "x=";
	cin >> x;
	cout << "y=";
	cin >> y;
	cout << "Difference=" << difference(x, y) << endl;
	return 0;
}
