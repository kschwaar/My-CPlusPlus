//Clean up the punctuation

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <algorithm>
#include <vector>
#include <queue>
#include "utilities.h"
using namespace std;


int main(){
	vector<string> vstr;
	string data = fileToString("./awmt.txt");
	string word;
	stringstream ssin(data);
	
	priority_queue<string> mypq;
	
	for (int i = 0; i < vstr.size(); i++) {
		mypq.push(vstr[i]);
		cout << mypq.top() << endl;
	}
	
	cout << mypq.size() << endl;
	
	
}