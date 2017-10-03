#include <iostream>
using namespace std;

class Ratio { // First you describe an abstract data type
	public:
		Ratio(int n,int d); // Here we use a constructor
		double convert();
		void invert();
		void print();
		
	private:
		int num;
		int den;	
};

int main() {
	Ratio x(22,7);
	
	cout << "x = ";
	x.print();
	cout << " = " << x.convert() << endl;
	x.invert();
	cout << "1/x = ";
	x.print();
	cout << endl;
	
}

Ratio::Ratio(int n, int d){
	num = n;
	den = d;

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
