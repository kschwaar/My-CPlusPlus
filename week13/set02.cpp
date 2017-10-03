// Filter- a boolean function that sees if something is in or not

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

vector<string> shortwords;
vector<string> longwords;
void myFilter01(string s);
void myFilter02(string s);

int main(){
	vector<string> words = fileToStringArray("./awmt.txt");
	
	for_each(words.begin(), words.end(), myFilter01);
	for_each(words.begin(), words.end(), myFilter02);
	
	cout << "The file has this many words: " << words.size() << endl;
	cout << "The file has this many short words: " << shortwords.size() << endl;
	cout << "The file has this many long words: " << longwords.size() << endl;
}

void myFilter01 (string s){
	if (s.length() < 5){
		shortwords.push_back(s);
	}
}

void myFilter02 (string s){
	if (s.length() > 4){
		longwords.push_back(s);
	}
}
