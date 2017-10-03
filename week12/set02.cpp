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

vector<string> shortwords;
vector<string> longwords;
void myFilter01 (string s);
void myFilter02 (string s);

int main(){
	vector<string> words = fileToStringArray("./awmt.txt");
	
	for_each(words.begin(), words.end(), myFilter01);
	for_each(words.begin(), words.end(), myFilter02);
	
	cout << "The file has this many words: " << words.size() << endl;
	cout << "The file has this many short words: " << shortwords.size() << endl;
	cout << "The file has this many long words: " << longwords.size() << endl;
}

void myFilter01 (string s) {
	if (s.length() < 5) {
		shortwords.push_back(s);
	}
}

void myFilter02 (string s) {
	if (s.length() > 4) {
		longwords.push_back(s);
	}
}