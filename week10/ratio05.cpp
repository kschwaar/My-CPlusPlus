//Now we've created ratio as a header file, we can delete most of the methods
//we've used and just include the header file.

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
}