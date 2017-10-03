//
#include <iostream>
#include "Stack.h"
using namespace std;

int main() {
	Stack s;
	
	//boolalpha turns the int output of a boolean to "true" or "False".
	cout << boolalpha << "is s empty? " << s.empty() << endl;
	
	for(int i=1; i<=20; i++) {
		s.push(i*i);
	}
	
	cout << boolalpha << "is s empty? " << s.empty() << endl;
	
	cout << "Top value: " << s.peek() << endl;
	while (!s.empty()) {
		cout << s.peek() << " ";
		s.pop();
	}
	cout << boolalpha << "is s empty? " << s.empty() << endl;
}