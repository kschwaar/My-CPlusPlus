// square elements of an array

#include <stdio.h>
#include <stdlib.h>

void square(int m[], int size);

int main(void){
	unsigned n;
	
	printf("Enter positive integer: ");
	scanf("%u", &n);
	int myArray[n];
	int i;
	for(i=0; i<n; i++){
		myArray[i]=i+1;
	}
	
	square(myArray,n);
}

void square(int m[], int size){
	int j;
	for(j=0; j<size; j++){
		printf("%d squared is %d\n",m[j],m[j]*m[j]);
	}
}