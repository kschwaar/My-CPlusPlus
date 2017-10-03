//Explicitly using pointers to point at things.

#include <iostream>
#include <iomanip>
#include <string>
#include <array>
using namespace std;

int main(){
	array<int,5> n = {32,27,64,18,95};
	
	cout << "element" << setw(14) << "Value" << endl;
	
	for(int i=0; i<n.size(); i++){
		cout << setw(5) << i << setw(14) << n[i] << endl;
	}
	
	//begin & end
	/*cout << "I'm printing with an iterator that travels from beginning to end" << endl;
	array<int>::iterator it=n.begin();
	for(it=n.begin(); it != n.end(); n++){
		cout << *n << "\t" << endl;
	}*/
	
	//end
	
	//size
	
	//empty
	
	//at
	
	//front
	
	//back
	
	//swap
	
	//fill
	
}