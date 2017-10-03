//cin just reads up to the first space character.
//use cin.get() to read the whole line!

#include <iostream>
#include <cstdio> // this is C's stdio.h

using namespace std;

int main(){
	int SIZE = 80;
	char buffer[SIZE];
	
	//Use this to only get the first word!  Use what's underneath to get the whole line.
	/*cout << "Enter a sentence:" << endl;
	cin >> buffer;
	
	cout << endl << "The string read with cin was: " << buffer << endl << endl;
	*/
	cout << "Enter a sentence:" << endl;
	cin.get(buffer,SIZE);
	
	cout << endl << "The string read with cin.get was: " << buffer << endl << endl;
}