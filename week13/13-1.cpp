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
	priority_queue<string> pqueue;
	
	// swap
	
	cout << "Testing Push method by pusing words from a vector onto the priority queue." << endl;
	for (int i = 0; i < words.size(); i++) {
		pqueue.push(words[i]);
	}
	
	cout << "Testing Size" << endl;
	cout << pqueue.size() << endl;
	priority_queue<string> other;
	cout << "Other queue created.  Size is: " << other.size() << endl;
	
	cout << "Testing swap method." << endl;
	
	swap(pqueue, other);
	cout << "Size of Other is: " << other.size() << endl;
	cout << "Size of pqueue is: " << pqueue.size() << endl;
	
	cout << "Swapping back" << endl;
	swap(other, pqueue);
	cout << "Size of Other is: " << other.size() << endl;
	cout << "Size of pqueue is: " << pqueue.size() << endl;
	
	
	//empty, top, pop.
	cout << "Testing methods top and pop." << endl;
	for(int i=0; i<5; i++){
		cout <<pqueue.top()<<endl;
		pqueue.pop();
	}


	cout << "Testing empty function." << endl;
	while (!pqueue.empty()) {
		pqueue.pop();
	}
	
	cout << "Size of pqueue now is: " << pqueue.size() << endl;
	
}