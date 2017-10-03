//Call by reference versus call by value
//by Kevin Schwaar

#include <stdio.h>

void cubeByValue (int n);
void cubeByReference(int *ip);

int main(void){
	int n=10;
	printf("The original value of n = %d\n", n);
	cubeByValue(n);
	printf("n after cubeByValue is %d \n",n);
	printf("The original value of n = %d\n", n);
	cubeByReference(&n);
	printf("n after cubeByReference is %d \n",n);
}

void cubeByValue(int n){
	n=n*n*n;
	printf("Input cubed = %d\n",n);
}

void cubeByReference(int *ip){
	*ip=(*ip)*(*ip)*(*ip);
	printf("Input cubed is %d \n", *ip);
}