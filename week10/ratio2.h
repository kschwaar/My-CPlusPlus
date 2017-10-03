

#include <iostream>
#include <string>
#include <sstream>
using namespace std;

class Ratio { // First you describe an abstract data type
	friend Ratio operator*(Ratio &x, Ratio &y); //Friend means that this operator can access all the member methods below.
	friend Ratio operator+(Ratio &x, Ratio &y);
	friend Ratio operator-(Ratio &x, Ratio &y);
	friend Ratio operator/(Ratio &x, Ratio &y);
	friend bool operator<(Ratio &x, Ratio &y);
	friend bool operator>(Ratio &x, Ratio &y);
	friend bool operator==(Ratio &x, Ratio &y);
	friend bool operator!=(Ratio &x, Ratio &y); 
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

Ratio operator*(Ratio &x, Ratio &y){ // don't need the scope operator(::) because it's not a member fucntion.
	Ratio z(x.num*y.num, x.den*y.den);
	z.reduce();
	return z;
}

Ratio operator+(Ratio &x, Ratio &y){//overloaded operators for adding. 
	Ratio z(x.num*y.den+y.num*x.den, x.den*y.den);
	z.reduce();
	return z;
}

Ratio operator-(Ratio &x, Ratio &y){
	Ratio z(x.num*y.den-y.num*x.den, x.den*y.den);
	z.reduce();
	return z;
}

Ratio operator/(Ratio &x, Ratio &y){
	Ratio z(x.num*y.den, x.den*y.num);
	z.reduce();
	return z;
}

bool operator<(Ratio &x, Ratio &y){
	if(x.num*y.den < y.num*x.den){
		return true;
	}
	else{
		return false;
	}
}

bool operator>(Ratio &x, Ratio &y){
	if(x.num*y.den > y.num*x.den){
		return true;
	}
	else{
		return false;
	}
}

bool operator==(Ratio &x, Ratio &y){
	x.reduce();
	y.reduce();
	if(x.num==y.num && x.den==y.den){
		return true;
	}
	else{
		return false;
	}
}

bool operator!=(Ratio &x, Ratio &y){
	x.reduce();
	y.reduce();
	if(x.num==y.num && x.den==y.den){
		return false;
	}
	else{
		return true;
	}
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

void Ratio::reduce(){
	int d = num;
	while(d!=1){
		if(num%d==0 && den%d==0){
			break;
		}
		else{
			d--;
		}
	}
	num=num/d;
	den=den/d;
}
