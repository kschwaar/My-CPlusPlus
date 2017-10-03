//Overloading Operators TESTER.  Overloaded Operators declared in ratio2.h

#include <iostream>
#include "ratio2.h"
using namespace std;

int main() {
	Ratio x(2,3);
	Ratio y(2,5);
	Ratio z(0,1);
	cout << "x= "; x.print(); cout << endl;
	cout << "y= "; y.print(); cout << endl;
	cout << "z= "; z.print(); cout << endl;
	z= x*y;
	cout << "x*y= "; z.print(); cout << endl;
	z=x+y;
	cout << "x+y= "; z.print(); cout << endl;
	z=x-y;
	cout << "x-y= "; z.print(); cout << endl;
	z=x/y;
	cout << "x/y= "; z.print(); cout << endl;
	bool output = x<y;
	cout << boolalpha << "Is x<y? " << output << endl;
	output = x>y;
	cout << boolalpha << "Is x>y? " << output << endl;
}