//factorials!

#include <iostream>
using namespace std;

typedef unsigned long long ULL;

ULL factorial(ULL n); // this is called a "Prototype"

int main(){
	ULL max = 20;
	
	for(int i=1; i<=max; i++){
		cout << i << "\t" << factorial(i) << endl;
	}
}

ULL factorial (ULL n){
	if(n==1){
		return 1;
	}
	else{
		return n*factorial(n-1);
	}
}