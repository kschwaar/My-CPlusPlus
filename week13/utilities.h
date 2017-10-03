//Useful functions for data structures

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>
using namespace std;

#ifndef UTILITIES
#define UTILITIES

string fileToString(string fileName){
	string line;
	string result = "";
	ifstream ifs(fileName.c_str());
	
	if(ifs.is_open()){
		while(getline(ifs,line)){
			result += line;
			
		}
		ifs.close();
	}
	
	return result;
}

string cleanText(string s) {
	string res;
	
	remove_copy_if(s.begin(), s.end(), back_inserter(res),ptr_fun<int,int>(ispunct));
	
	return res;
}

vector<string> fileToStringArray(string fileName) {
	vector<string> vstr;
	string data = fileToString(fileName);
	string str = cleanText(data);
	stringstream ssin(str);
	string word;
	
	while (ssin.good()) {
		ssin >> word;
		vstr.push_back(word);
	}
	
	return vstr;
}


#endif