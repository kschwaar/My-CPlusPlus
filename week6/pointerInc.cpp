//pointer incraments.

#include <iostream>
using namespace std;

int main (){
	int *a;
	char *b;
	int i = 0;
	char c = 'X';
	
	a = &i;
	b = &c;
	
	for(i=0; i<4; i++){
		cout << "a + " << i  << " = " << a+i << endl;
	}
	
	for(i=0; i<4; i++){
		cout << "b + " << i << " = " << b+i << endl;
	}
	
}