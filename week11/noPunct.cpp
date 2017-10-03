// Clean up the punctuation

#include <iostream>
#include <string>
#include "utilities.h"
using namespace std;

int main(){
	string data = fileToString("./awmt.txt");
	string result = cleanText(data);
	cout << result << endl;
}

