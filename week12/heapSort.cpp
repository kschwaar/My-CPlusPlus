//Using C++ containers to do all the work for us

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
	vector<string> words = fileToStringArray("./awmt.txt");
	priority_queue<string> myHeap;
	
	for (int i = 0; i < words.size(); i++) {
		myHeap.push(words[i]);
	}
	
	while (!myHeap.empty()) {
		cout << myHeap.top() << endl;
		myHeap.pop();
	}
	
}