// Clean up the punctuation

#include <iostream>
#include <fstream> // file stream
#include <string>
#include <algorithm>
#include "utilities.h"
using namespace std;

int main(){
	string data = fileToString("./awmt.txt");
	string result;
	
	result=cleanText(data);	
		
	cout << result << endl;
}

