//Declaring pointers
//by Kevin Schwaar

#include <stdio.h>

int main(void){
	int n=10;
	int *ip = &n;
	
	printf("The value of n: %d \n",n);
	printf("The address of n: %p \n",ip);
	printf("ip points to: %p \n", &n);
	printf("What's in the cell pointed to by ip? %d \n",*ip);
	printf("What's the address of the cell ip? %p\n",&ip);
}