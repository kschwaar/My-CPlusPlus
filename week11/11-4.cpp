// Clean up the punctuation

#include <iostream>
#include <fstream> // file stream
#include <string>
#include <algorithm>
#include "utilities.h"
#include <cctype>
using namespace std;

int main(){
	string data = fileToString("./PP523Public.txt");
	string result;
	
	result=cleanText(data);	
	cout << result << endl;
	
	int wordCount=0;
	//list<int>::iterator it=b.begin(); it!=b.end(); it++
	for(string::iterator it=result.begin(); it!=result.end(); it++){
		if(isspace(*it)){
			wordCount++;
		}
	}
	
	cout << "The number of words in this file is: " << wordCount << endl;
}

