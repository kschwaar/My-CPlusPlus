//
#include <iostream>
#include <vector>
using namespace std;

typedef vector<int>::iterator It; // Unlike java, we can use primitive types, not forced to use objects
// Because it is a typedef, we make it a capital letter It

int main(){
	vector<int> v(11);
	
	for (int i = 0; i <= 10; i++){
		v[i] = i*i;
	}
	
	cout << "Using the iterator 'it' in a for loop." << endl;
	
	for (It it = v.begin(); it != v.end(); it++){
		cout << *it << endl; // dereferencing the pointer it
	}
	 cout << "Using the iterator 'it' in a while loop." << endl;
	 
	 It p = v.begin();
	 while (p != v.end()){
		 cout << *p++ << endl; // Using the pointer arithmetic to advance 4 memory spaces after printing.
	 }
	
	
}
