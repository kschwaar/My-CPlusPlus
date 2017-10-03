//This is the correct implementation of swap.
//Now we're swapping the addresses of a and b so they point to the other values.

#include <iostream>
using namespace std;

void swap (int &a, int &b);

int main(){
	int x=37;
	int y=52;
	cout << x << " " << y << endl;
	swap(x,y);
	cout << x << " " << y << endl;
	
}

void swap (int &a, int &b){
	int temp=a;
	a=b;
	b=temp;
}