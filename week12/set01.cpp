//Using C++ containers to do all the work for us

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <algorithm>
#include <vector>
#include <set>
#include "utilities.h"
using namespace std;


int main(){
	vector<string> words = fileToStringArray("./awmt.txt");
	set<string> mySet;
	
	for (int i = 0; i < words.size(); i++) {
		mySet.insert(words[i]);
	}
	
	cout << "The file has this many words: " << words.size() << endl;
	cout << "The file has this many distinct words: " << mySet.size() << endl;
}