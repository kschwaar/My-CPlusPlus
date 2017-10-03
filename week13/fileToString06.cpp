// Parse file and insert words into vector (similar to array in Java)

#include <iostream>
#include <fstream> // file stream
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>
#include "utilities.h" // This is using the old utilities.h from last week.
// We have now added this code into the new utilities.h
using namespace std;

int main(){
	vector<string> vstr;
	string data = fileToString("./awmt.txt");
	string word;
	stringstream ssin(data); // by itself will read a word and stop at a space
	
	while (ssin.good()){
		ssin >> word; // Stream from vector class- overloaded >> operator
		vstr.push_back(word);
	}
	
	for (int i = 0; i < vstr.size(); i++){
		cout << vstr[i] << endl;
	}
	cout << vstr.size();
}