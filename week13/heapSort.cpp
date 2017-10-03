// Using C++ containers  to do all the work for us

#include <iostream>
#include <fstream> // file stream
#include <string>
#include <vector>
#include <sstream>
#include <queue> // Priority Queue based on a heap
#include <algorithm>
#include "utilities.h" // This is using the old utilities.h from last week.
// We have now added this code into the new utilities.h
using namespace std;

int main(){
	vector<string> words = fileToStringArray("./awmt.txt");
	priority_queue<string> myHeap;
	
	
	for (int i = 0; i < words.size(); i++){
		myHeap.push(words[i]); // push all data into the priority queue
	}
	
	while (!myHeap.empty()){
		cout << myHeap.top() << endl; // just looks at the top value, doesn't remove
		myHeap.pop(); // Remove
	}
	//cout << words.size();
}