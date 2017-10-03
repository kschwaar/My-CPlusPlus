//Explicitly using pointers to point at things.
//g++ -std=gnu++0x arrays01.cpp -o arrays01

#include <iostream>
#include <iomanip>
#include <array>
#include <algorithm>

using namespace std;

int main(){
	array<string,7> colors = {"red","orange","yellow","green","blue","indigo","violet"};
	
	cout << "Unsorted array: " << endl;
	
	for(int i=0; i<colors.size(); i++){
		cout << colors[i] << " ";
	}
	cout << endl;
	
	sort(colors.begin(),colors.end());
	
	cout << "Sorted array: " << endl;
	
	for(int i=0; i<colors.size(); i++){
		cout << colors[i] << " ";
	}
	cout << endl;
	
	bool found = binary_search(colors.begin(), colors.end(), "indigo");
	cout << " \"indigo\" " << (found ? "was" : "was not") << " found." << endl;
	
	found = binary_search(colors.begin(), colors.end(), "chartruse");
	cout << " \"chartruse\" " << (found ? "was" : "was not") << " found." << endl;
	
}