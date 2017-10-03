// Useful functions for data structures

#include <iostream>
#include <fstream> // file stream
#include <string>
#include <algorithm>
using namespace std;

#ifndef UTILITIES // if not declared somewhere else
#define UTILITIES

string fileToString (string fileName){
	string line;
	string result = "";
	ifstream ifs(fileName.c_str()); // c_str look in the string class, he calls this goofy
	// standard streams do not accept standard string 
	
	if (ifs.is_open()){
		while (getline(ifs, line)){
			result += line;
		}
		ifs.close();
	}
	
	return result;
}

string cleanText (string input){
	string output;
	remove_copy_if(input.begin(), input.end(), back_inserter(output), ptr_fun<int,int>(ispunct));
	return output;
}

#endif
