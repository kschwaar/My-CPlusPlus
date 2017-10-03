// Find the GCD of two numbers

#include <iostream>
using namespace std;

int main() {
	int n1, n2, test;
	cout << "Enter two numbers: ";
	cin >> n1 >> n2;
	
	test = n1;
	while(test!=1){
		if(n1%test==0 && n2%test==0){
			break;
		}
		else{
			test--;
		}
	}
	
	cout << "Greatest Common Denomonator = " << test << endl;
	return 0;
}