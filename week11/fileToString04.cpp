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
	
	// remove_copy_if  part of the algorithm library
	remove_copy_if(data.begin(), data.end(), back_inserter(result), ptr_fun<int,int>(ispunct));
	
	cout << result << endl;

}

