// Count the frequency of words in a file.

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <map>
#include "utilities.h"
using namespace std;

int main(){
	vector<string> words = fileToStringArray("./awmt.txt");
	map<string,int> wordMap;
	map<string,int>::iterator it;
	string key;
	int value;
	
	
	for(int i = 0; i < words.size(); i++) {
		
		key = words[i];
		value = wordMap[key];
		it = wordMap.find(key);
		if (it == wordMap.end()) {
			wordMap.insert(pair<string,int>(key,1));
		}
		else {
			wordMap[key] = value + 1;
		}
	}
	
	for (it = wordMap.begin(); it != wordMap.end(); it++){
		cout << "[" << it->first << ", " << it->second << "]" << endl; 
	}
}

















