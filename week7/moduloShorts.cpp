//32768 is the max signed int found in a short.
//The largest possible starts at negative.  Which makes the highest value of an signed short 32767.

#include <iostream>
using namespace std;

int main(){
	//unsigned short n = 65500;
	short n = 32700;
	
	for(int i= n; i<= 32800; i++){
		n++;
		cout << n << endl;
	}
}