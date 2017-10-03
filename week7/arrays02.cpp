//Explicitly using pointers to point at things.
//g++ -std=gnu++0x arrays01.cpp -o arrays01

#include <iostream>
#include <iomanip>
#include <string>
#include <array>
using namespace std;

int main(){
	array<int,5> n = {32,27,64,18,95};
	
	cout << "element" << setw(14) << "Value" << endl;
	
	for(int i=0; i<n.size(); i++){
		cout << setw(5) << i << setw(14) << n[i] << endl;
	}
	
}