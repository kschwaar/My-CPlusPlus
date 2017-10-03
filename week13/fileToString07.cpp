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
	vector<string> words = fileToStringArray("./awmt.txt");
	
	for (int i = 0; i < words.size(); i++){
		cout << words[i] << endl;
	}
	cout << words.size();
}