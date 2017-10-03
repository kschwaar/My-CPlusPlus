// Recursion

#include <stdio.h>
#include <stdlib.h>

long long factorial (long n);

int main(void){
	int i;

	for(i=1; i<=20; i++){
		printf("%2d! = %lld\n", i, factorial(i));
	}
}

long long factorial(long n){
	if(n<=1){
		return 1;
	}
	else{
		return (n*factorial(n-1));
	}
}