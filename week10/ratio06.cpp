//Copy Constructor:  Lets us create an exact copy of an existing object/structure.
//Java has clone, not quite a copy constructor.
//easier in C++

#include <iostream>
#include "ratio.h"
using namespace std;

int main() {
	ostringstream oss;
	Ratio x(22,7);
	cout << "x = ";
	x.print();
	cout << " = " << x.convert() << endl;
	x.invert();
	cout << "1/x = ";
	x.print();
	cout << endl;
	x.setNum(1111);
	x.setDen(2222);
	cout << x.getNum() << endl;
	cout << x.getDen() << endl;
	x.print();
	cout << " " << endl;
	//x.reduce();
	x.print();
	
	Ratio y(x);//This is how you copy construct.
	cout << "After the copy constructor: " << endl;
	y.print();
}