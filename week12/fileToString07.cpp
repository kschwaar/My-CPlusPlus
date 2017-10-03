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
	vector<string> words = fileToStringArray("./awmt.txt");
	
	for (int i = 0; i < words.size(); i++) {
		cout << words[i] << endl;
	}
	
}