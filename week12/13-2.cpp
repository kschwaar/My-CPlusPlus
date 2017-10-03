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
vector<string> swa;
vector<string> letter;
void myFilter01 (string s);
void myFilter02 (string s);
void myFilter03 (string s);
void myFilter04 (string s);
set<string>::iterator it;
set<string> setUnion (set<string> s1, set<string> s2);
set<string> setIntersection (set<string> s1, set<string> s2);
set<string> setDifference (set<string> s1, set<string> s2);

int main(){
	vector<string> words = fileToStringArray("./awmt.txt");
	set<string> A;
	set<string> B;
	set<string> C;
	set<string> D;
	set<string> E;
	
	for_each(words.begin(), words.end(), myFilter01);
	for_each(words.begin(), words.end(), myFilter02);
	for_each(words.begin(), words.end(), myFilter03);
	for_each(words.begin(), words.end(), myFilter04);
	
	cout << "The file has this many words: " << words.size() << endl;
	
	cout << "The file has this many words greater than 4: " << gt4.size() << endl;
	cout << "The file has this many words less than 8: " << lt8.size() << endl;
	cout << "The file has this many words that starts with a or b: " << swa.size() << endl;
	
	for (int i = 0; i < swa.size(); i++) {
		A.insert(swa[i]);
	}
	for (int i = 0; i < letter.size(); i++) {
		B.insert(letter[i]);
	}
	
	cout << "The size of A: " << A.size() << endl;
	cout << "The size of B: " << B.size() << endl;
	C = setIntersection(A,B);
	
	D = setDifference(A,B);

	E = setUnion(A,B);
	
	cout << "The size of the Union of A and B is: " << E.size() << endl;
	cout << "The size of the Intersection of A and B is: " << C.size() << endl;
	cout << "The size of the Difference of A and B is: " << D.size() << endl;
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

void myFilter03 (string s) {
	tolower(s[0]);
	if (s[0] == 'a' || s[0] == 'b' || s[0] == 'c' || s[0] == 'd'){
		swa.push_back(s);
	}
}

void myFilter04 (string s) {
	tolower(s[0]);
	if (s[0] == 'c' || s[0] == 'd' || s[0] == 'e' || s[0] == 'f'){
		letter.push_back(s);
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

set<string> setIntersection (set<string> s1, set<string> s2) {
	set<string> s3;
	
	set_intersection(s1.begin(),s1.end(),s2.begin(),s2.end(), inserter(s3, s3.begin()));
	
	return s3;
}

set<string> setDifference (set<string> s1, set<string> s2) {
	set<string> s3;
	
	set_difference(s1.begin(),s1.end(),s2.begin(),s2.end(), inserter(s3, s3.begin()));
	
	return s3;
}






