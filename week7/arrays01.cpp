//Explicitly using pointers to point at things.
//g++ -std=gnu++0x arrays01.cpp -o arrays01

#include <iostream>
#include <iomanip>
#include <array>
using namespace std;

int main(){
	array<int,5> n;
	
	for(int i=0; i<n.size(); i++){
		n[i]=0;
	}
	
	cout << "element" << setw(14) << "Value" << endl;
	
	for(int i=0; i<n.size(); i++){
		cout << setw(5) << i << setw(14) << n[i] << endl;
	}	
}