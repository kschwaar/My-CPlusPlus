//cin just reads up to the first space character.
//use cin.get() to read the whole line and then stop.  Use cin.getline() to see multiple lines.
//What's the difference between get and getline? ^^


#include <iostream>
#include <cstdio> // this is C's stdio.h

using namespace std;

int main(){
	int SIZE = 180;
	char buffer[SIZE];
	
	for(int i=1; i<=10; i++){
		cin.getline(buffer,SIZE);
		cout << "The string read with cin.get was: " << buffer << endl;
	}
	
}