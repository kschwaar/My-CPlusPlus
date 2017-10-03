//Add, Subtract, multiply, divide, raise to int powers

#include <iostream>
#include <cmath>
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
		void reduce();
		void add(Ratio m);
		void subtract(Ratio m);
		void multiply(Ratio m);
		void divide(Ratio m);
		void power(int p);
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
	cout << endl;
	x.reduce();
	x.print();
	Ratio y(3,5);
	cout << endl << "y = ";
	y.print();
	cout << endl << "Adding y to x" << endl;
	x.add(y);
	x.reduce();
	x.print();
	cout <<endl<< "y = ";
	y.print();
	cout <<endl<< "Subtracting y from x";
	x.subtract(y);
	x.reduce();
	cout << endl << "x = ";
	x.print();
	cout <<endl<< "x*y = ";
	x.multiply(y);
	x.reduce();
	x.print();
	cout <<endl<< "x/y = ";
	x.divide(y);
	x.reduce();
	x.print();
	cout <<endl<< "x/y = ";
	x.divide(y);
	x.reduce();
	x.print();
	cout <<endl<< "x squared is: ";
	x.power(2);
	x.reduce();
	x.print();
	cout << endl << "x cubed is: ";
	x.power(3);
	x.reduce();
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


void Ratio::add(Ratio m){
	int x=m.getDen();
	int y = den;
	num=num*x;
	den=den*x;
	m.setDen(m.getDen()*y);
	m.setNum(m.getNum()*y);
	num=num+m.getNum();
}

void Ratio::subtract(Ratio m){
	int x=m.getDen();
	int y = den;
	num=num*x;
	den=den*x;
	m.setDen(m.getDen()*y);
	m.setNum(m.getNum()*y);
	num=num-m.getNum();
}

void Ratio::multiply(Ratio m){
	num=num*m.getNum();
	den=den*m.getDen();
}

void Ratio::divide(Ratio m){
	num=num*m.getDen();
	den=den*m.getNum();
}

void Ratio::power(int p){
	num=(int)pow(num,p);
	den=(int)pow(den,p);
}