//Explicitly using pointers to point at things.

#include <iostream>
#include <string>
using namespace std;

int main(){
	string *strPtr;
	
	strPtr = new string("Hello");
	cout << "The string is: " << *strPtr << endl;
	*strPtr += " World!";
	cout << "Now the string is: " << *strPtr << endl;	
}