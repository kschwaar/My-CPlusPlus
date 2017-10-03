//Call by reference versus call by value
//by Kevin Schwaar

#include <iostream>
#include <cstdio>
using namespace std;

void intToBinary (long int n);
void intToBinaryByReference(long int *ip);

int main(void){
	long n;
	cout << "Enter positive integer less than 256: " << endl;
	cin >> &n;
	cout << "The original value of n = " << n << endl;
	intToBinary(n);
	cout << "n after intToBinary is " << n << endl;
	cout << "The original value of n = " << n << endl;
	intToBinaryByReference(&n);
	cout << "n after intToBinaryByReference is " << n << endl;
}

void intToBinary(long int n){
	long int remainder; 
    long int binary = 0, i = 1;
     
    while(n != 0) {
        remainder = n%2;
        n = n/2;
        binary= binary + (remainder*i);
        i = i*10;
    }
	n=binary;
	cout << "Input to Binary = " << n << endl;
}

void intToBinaryByReference(long *ip){
	long int remainder; 
    long int binary = 0, i = 1;
     
    while(*ip != 0) {
        remainder = *ip%2;
        *ip = *ip/2;
        binary= binary + (remainder*i);
        i = i*10;
    }
	*ip=binary;
	cout << "Input to Binary = " << *ip << endl;
}