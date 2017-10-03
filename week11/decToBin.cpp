// Decimal to binary conversion: 
//convert n in decimal notation to its binary equivalent

//repeat the following:
//take n mod 2, push onto a stack
//then repeat with n/2

#include <iostream>
#include "Stack.h"
using namespace std;

int main() {
	Stack s;
	int x;
	cout << "Type an integer" << endl;
	cin >> x;
	while(x>0){
		s.push(x%2);
		x/=2;
	}
	while(!s.empty()){
		cout << s.peek();
		s.pop();
	}
}