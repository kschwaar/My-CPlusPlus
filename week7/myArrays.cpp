#include <iostream>
#include <iomanip>
#include <array>
#include <algorithm>

using namespace std;

int main(){
	array<int,5> n;
	
	for(int i=0; i<n.size(); i++){
		n[i]=0;
	}
	
	cout << "element" << setw(14) << "Value" << endl;
	
	for(int i=0; i<n.size(); i++){
		cout << setw(5) << i << setw(14) << n[i] << endl;
	}
	
	//BEGIN and END
	cout << "Iterrating: " << endl;
	for(auto it=n.begin(); it<n.end(); it++){
		cout << *it << endl;
	}

	//size 
	cout << "Size of array n is: " << n.size() << endl;
	
	//empty
	cout << boolalpha << "Empty? = " << n.empty() << endl;
	cout << "Created array m." << endl;
	array<int,5> m;
	cout << boolalpha << "Is m empty? = " << m.empty() << endl;
	
	//at
	cout << "Using at() to assign new values" << endl;
	for(int i=0; i<n.size(); i++){
		n.at(i) = (i+1)*(i+1);
		cout << n.at(i) << " ";
	}
	cout << endl;
	
	//front & back
	cout << "Front is " << n.front() << endl;
	cout << "Back is " << n.back() << endl;
	
	//fill
	
	m.fill(13);
	cout << "New array m created.  Filled with value 13," << endl;
	for(int i=0; i<m.size(); i++){
		cout << m[i] << " ";
	}
	cout << endl;
	
	//swap
	n.swap(m);
	cout << "Swapped n with m." << endl;
	for(int j=0; j<n.size(); j++){
		cout << "n[j] = " << n[j] << " ";
	}
}