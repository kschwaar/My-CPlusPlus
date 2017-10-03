// Count the frequency of words in a file.

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <map>
#include "utilities.h"
using namespace std;

bool Greater (pair<int,string>a, pair<int, string>b) { return (a.first > b.first); }

int main(){
	vector<string> words = fileToStringArray("./awmt.txt");
	map<string,int> wordMap;
	map<string,int>::iterator it;
	vector<pair<int,string> >::iterator VecIT;
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
	
	vector<pair<int,string> > sorted;

	for (it = wordMap.begin(); it != wordMap.end(); it++){
		sorted.push_back(pair<int,string>(it->second, it->first));
	}
	
	sort(sorted.begin(), sorted.end(), Greater);
	
	for(VecIT = sorted.begin(); VecIT != sorted.end(); VecIT++){
		cout << "[" << VecIT->first << ", " << VecIT->second << "]" << endl;
	}
}

















