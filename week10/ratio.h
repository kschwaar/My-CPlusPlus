

#include <iostream>
#include <string>
#include <sstream>
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
		int gcd(int m, int n);
		void reduce();
	private:
		int num;
		int den;	
};

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
