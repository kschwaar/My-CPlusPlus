//Clean up the punctuation

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <algorithm>
#include <vector>
#include "utilities.h"
using namespace std;


int main(){
	vector<string> vstr;
	string data = fileToString("./awmt.txt");
	string word;
	stringstream ssin(data);
	
	while (ssin.good()) {
		ssin >> word;
		vstr.push_back(word);
	}
	
	for (int i = 0; i < vstr.size(); i++) {
		cout << vstr[i] << endl;
	}
	
	cout << vstr.size();
}