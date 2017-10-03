//Print squares of n from n=1 to n=100
//written by Kevin Schwwar

#include <stdio.h>
#include <math.h>

int main (void){
	int n;
	for(n=1; n<=100; n++){
		printf("n=%d and n^2=%d\n",n,(int)pow(n,2));
	}	
}