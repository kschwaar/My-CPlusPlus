#include <iostream>
using namespace std;

class Ratio { // First you describe an abstract data type
	public:
		Ratio(int n,int d); // Here we use a constructor, getters, and setters
		int getNum();
		int getDen();
		void setNum(int n);
		void setDen(int d);
		double convert();
		void invert();
		void print();
		int gcd();
		void reduce(int d);
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
	x.setNum(1111);
	x.setDen(2222);
	cout << x.getNum() << endl;
	cout << x.getDen() << endl;
	x.print();
	x.gcd();
	cout << " The gcd is " << x.gcd() << endl;
	x.reduce(x.gcd());
	x.print();
}

Ratio::Ratio(int n, int d){
	num = n;
	den = d;
}

int Ratio::getNum(){
	return num;
}

int Ratio::getDen(){
	return den;
}

void Ratio::setNum(int n){
	num = n;
}

void Ratio::setDen(int d){
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

int Ratio::gcd(){
	int test = num;
	while(test!=1){
		if(num%test==0 && den%test==0){
			break;
		}
		else{
			test--;
		}
	}
	return test;
}

void Ratio::reduce(int d){
	num=num/d;
	den=den/d;
}