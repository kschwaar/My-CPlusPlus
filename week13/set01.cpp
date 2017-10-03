// Using C++ containers  to do all the work for us

#include <iostream>
#include <fstream> // file stream
#include <string>
#include <vector>
#include <sstream>
#include <set> // Set Class
#include <algorithm>
#include "utilities.h" // This is using the old utilities.h from last week.
// We have now added this code into the new utilities.h
using namespace std;

int main(){
	vector<string> words = fileToStringArray("./awmt.txt");
	set<string> mySet;
	
	
	for (int i = 0; i < words.size(); i++){
		mySet.insert(words[i]); // push all data into the set
	}
	
	cout << "The file has this many words: " << words.size() << endl;
	cout << "The file has this many distinct words: " << mySet.size() << endl;
	
}