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
	vector<string> words = fileToStringArray("./awmt.txt");
	
	priority_queue<string> mypq;
	
	cout << "Using push and size: " << endl;
	
	for (int i = 0; i < words.size(); i++) {
		mypq.push(words[i]);	
	}
	
	cout << mypq.size() << endl;
	
	cout << "Using empty and pop: " << endl;
	
	while(!mypq.empty()){
		mypq.pop();
	}
	
	cout << mypq.size() << endl;
	
	cout << "Using top: " << endl;
	
	mypq.push("Hello");
	cout << mypq.top() << endl;
	
	priority_queue<string> mypq1;
	mypq1.push("world");
	
	cout << "Before using Swap: " << endl;
	cout << "mypq contains: " << mypq.top() << endl;
	cout << "mypq1 contains: " << mypq1.top() << endl;
	
	cout << "After using Swap: " << endl;
	swap(mypq,mypq1);
	cout << "mypq1 contains: " << mypq.top() << endl;
	cout << "mypq2 contains: " << mypq1.top() << endl;
	
	

	
	
	
}