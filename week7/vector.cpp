

#include <iostream>
#include <vector>
using namespace std;

int main(){
	vector<int> squares;//uses generics just like Java.
	
	for(int i=0; i<= 10; i++){
		squares.push_back(i*i);
	}
	
	for(int i=0; i<squares.size(); i++){
		cout << squares[i] << endl;
	}
	
	//Begin - Returns the iterrator to the beginning
	vector<int>::iterator it = squares.begin();
	cout << "begin() gives you: " << *it << endl;
	
	//End - Sends the iterator past the last element.
	it = squares.end();
	cout << "end() gives you: " << *it << endl;
	
	//Size
	cout << "Size gives you: " << squares.size() << endl;
	//resize
	cout << "Resize to 15, fill with 5's. " << endl;
	squares.resize(15,5);
	for(int i=0; i<squares.size(); i++){
		cout << squares[i] << endl;
	}
	
	//empty - Returns true if size=0;
	cout << boolalpha << "Is the vector empty? " << squares.empty() << endl;
	
	//front - references the first element.
	cout << "Front gives you: " << squares.front() << endl;
	
	//back
	cout << "Back gives you: " << squares.back() << endl;
	
	//push_back
	cout << "Pushing back 10" << endl;
	squares.push_back(10);
	cout << "Back now gives you: " << squares.back() << endl;
	
	//pop_back
	squares.pop_back();
	cout << "After pop_back(), the back is: " << squares.back() << endl;
	
	//insert
	it = squares.begin();
	cout << "Iterator sent to the beginning." << endl;
	cout << "squares.insert(it, 300) 3 times." << endl;
	for(int i=0; i<3; i++){
		squares.insert(it, 300);
		cout << *it << endl;
	}	
	
	//erase - removes element at specified position.
	cout << "Removing the Second element: " << endl;
	squares.erase(squares.begin()+2);
	for(it=squares.begin(); it<squares.end(); it++){
		cout << *it << endl;
	}
	
	//swap - swaps all content between 2 vectors.
	vector<int> other (5,10);
	cout << "other vector includes: " << endl;
	for(int i=0; i< other.size(); i++){
		cout << other[i] << endl;
	}
	squares.swap(other);
	cout << "After Swap, Squares now is: " << endl;
	for(int i=0; i< squares.size(); i++){
		cout << squares[i] << endl;
	}
	
	
}