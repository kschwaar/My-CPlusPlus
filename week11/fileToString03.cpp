// Read a text file into a string

#include <iostream>
#include <fstream> // file stream
#include <string>
#include "utilities.h"
using namespace std;

int main(){
	string data = fileToString("./PP523Public.pdf");
	cout << data << endl;
	
}

