// 

#include <iostream>
#include <string>

using namespace std;

int main(){
	string s1("Now is the time");
	string s2(" for all good programmers ");
	string s3;
	
	cout << "s1: " << s1 << " s2:" << s2 << endl << "s3: " << s3 << endl;
	
	cout << "Is s3 empty? " << s3.empty() << endl;
	
	cout << s1.substr(7) << endl;
	
	string s4(s1);  // a copy constructor.  DEEP COPY!  Copies all of s1 into s4;
	cout << "s4 = " << s4 << endl;
	
	
}