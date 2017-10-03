//This creates a min priority queue.

#include <iostream>
#include <queue>
#include <string>
using namespace std;

int main(){
	priority_queue<string> pq;//uses generics just like Java.
	
	pq.push("One");
	pq.push("Two");
	pq.push("Three");
	pq.push("Four");
	
	//size
	cout << "The size of pq is: " << pq.size() << endl;
		
	//top
	cout << "The top element of pq is: " << pq.top() << endl;
	
	//pop
	pq.pop();
	cout << "After pop, the tope element of pq is: " << pq.top() << endl;
	
	//push
	cout << "pushing 'Yours', 'Mine', and 'Ours': " << endl;
	pq.push("Yours");
	pq.push("Mine");
	pq.push("Ours");
	cout << "Now removing all elements of the priority_queue" << endl;
	while(!pq.empty()){
		cout << pq.top() << endl;
		pq.pop();
	}
	
	//swap
	priority_queue<string> other;
	pq.push("One");
	pq.push("Two");
	pq.push("Three");
	cout << "priority_queue other has the following elements:" << endl;
	cout << "First\n" << "Second\n" << "Third\n" << endl;
	other.push("First");
	other.push("Second");
	other.push("Third");
	swap(pq,other);
	cout << "The top element of pq is now: " << pq.top() << endl;
	
	//empty
	cout << "Is pq empty?: " << pq.empty() << endl;
	while(!pq.empty()){
		pq.pop();
	}
	cout << "Is pq empty now?? " << pq.empty() << endl;	
	
}