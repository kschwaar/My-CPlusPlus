/* C++ has generic programming with templates. Also has classes. Has namespaces and operator overloading
Standard Template Library (equivalent of the Java classes)

Classes: do similar to Java (java was after and used these)
Fields, Constructors, Functions

Let's build a ratio class
*/

#include <iostream>
using namespace std;

class Ratio { // First you describe an abstract data type
	public:
		void assign(int,int); // Just put in signatures, to make it easy to read
		double convert();
		void invert();
		void print();
		
	private:
		int num;
		int den;	
};

int main() {
	Ratio x;
	x.assign(22,7);
	cout << "x = ";
	x.print();
	cout << " = " << x.convert() << endl;
	x.invert();
	cout << "1/x = ";
	x.print();
	cout << endl;
	
}

void Ratio::assign(int numerator, int denominator){ // scope assignment ::
	num = numerator;
	den = denominator;

}

double Ratio::convert() {
	return double(num)/den;
}

void Ratio::invert(){ // Swapping in C++ we don't need pointers?
	int temp = num;
	num = den;
	den = temp;
}

void Ratio::print(){
	cout << num << '/' << den;
}


