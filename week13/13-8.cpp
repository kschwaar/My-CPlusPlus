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
	vector<pair<int,string> > Hundred;
	vector<pair<int,string> > Fifty;
	vector<pair<int,string> > Ten;
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
		if(VecIT->first > 100){
			Hundred.push_back(pair<int,string>(VecIT->first, VecIT->second));
		}
		if(VecIT->first > 50){
			Fifty.push_back(pair<int,string>(VecIT->first, VecIT->second));
		}
		if(VecIT->first > 10){
			Ten.push_back(pair<int,string>(VecIT->first, VecIT->second));
		}
	}
	
	cout << "Printing out words listed more than 100 times:" << endl;
	for(VecIT = Hundred.begin(); VecIT != Hundred.end(); VecIT++){
		cout << "[" << VecIT->first << ", " << VecIT->second << "]" << endl;
	}
	
	cout << "Printing out words listed more than 50 times:" << endl;
	for(VecIT = Fifty.begin(); VecIT != Fifty.end(); VecIT++){
		cout << "[" << VecIT->first << ", " << VecIT->second << "]" << endl;
	}
	
	cout << "Printing out words listed more than 10 times:" << endl;
	for(VecIT = Ten.begin(); VecIT != Ten.end(); VecIT++){
		cout << "[" << VecIT->first << ", " << VecIT->second << "]" << endl;
	}
	
}

















