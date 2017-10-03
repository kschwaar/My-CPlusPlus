//Operations wit sets
//Union

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <algorithm>
#include <vector>
#include <set>
#include "utilities.h"
using namespace std;

vector<string> gt4;
vector<string> lt8;
void myFilter01 (string s);
void myFilter02 (string s);
set<string>::iterator it;
set<string> setUnion (set<string> s1, set<string> s2);

int main(){
	vector<string> words = fileToStringArray("./awmt.txt");
	set<string> A;
	set<string> B;
	set<string> C;
	set<int> D;
	set<int>::iterator it;
	
	for_each(words.begin(), words.end(), myFilter01);
	for_each(words.begin(), words.end(), myFilter02);
	
	cout << "Using size and insert: " << endl;
	
	for (int i = 0; i < gt4.size(); i++) {
		A.insert(gt4[i]);
	}
	for (int i = 0; i < lt8.size(); i++) {
		B.insert(lt8[i]);
	}
	
	
	cout << A.size() << endl;
	A.clear();
	cout << "Using Clear: " << endl;
	cout << A.size() << endl;
	
	cout << "Using swap: " << endl;
	A.swap(B);
	cout << A.size() << endl;
	
	cout << "Using Erase and Find: " << endl;
	A.erase(A.find("the"));
	cout << A.size() << endl;
	
	
	cout << "Using Count: " << endl;
	for(int i = 0; i < 1; i++){
		D.insert(i);
		if(D.count(i) != 1){
			cout << "This is not 9" << endl;
		}
		else {
			cout << "This is not 1" << endl;
		}
	}
	
}

void myFilter01 (string s) {
	if (s.length() > 4) {
		gt4.push_back(s);
	}
}

void myFilter02 (string s) {
	if (s.length() < 8) {
		lt8.push_back(s);
	}
}

set<string> setUnion (set<string> s1, set<string> s2) {
	set<string> U;
	
	for(it = s1.begin(); it != s1.end(); it++){
		U.insert(*it);
	}
	
	for(it = s2.begin(); it != s2.end(); it++){
		U.insert(*it);
	}
	
	return U;
}





















