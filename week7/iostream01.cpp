//Explicitly using pointers to point at things.

#include <iostream>
#include <cstdio> // this is C's stdio.h

using namespace std;

int main(){
	int character;
	
	cout << "Before input, cin.eof() is " << cin.eof() << endl << "Enter a sentence followed by end-of-file:" << endl;
	while ((character = cin.get()) != EOF) {
		cout.put(character);
	}
	
	cout << endl << "EOF in this system is: " << character << endl;
	cout << "After input of EOF, cin.eof() is: " << cin.eof() << endl;
	
	
}