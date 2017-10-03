#include <iostream>
#include <cstdio> // this is C's stdio.h

using namespace std;
void getExample ();

int main(){
	getExample();
	int SIZE = 180;
	char buffer[SIZE];
	
	for(int i=1; i<=10; i++){
		cin.getline(buffer,SIZE);
		cout << "The string read with cin.getline was: " << buffer << endl;
	}
}

void getExample(){
	int SIZE = 80;
	char buffer[SIZE];
	cout << "Enter a sentence:" << endl;
	cin.get(buffer,SIZE);
	
	cout << endl << "The string read with cin.get was: " << buffer << endl << endl;
	
}