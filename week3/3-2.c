//Call by reference versus call by value
//by Kevin Schwaar

#include <stdio.h>

void intToBinary (long int n);
void intToBinaryByReference(long int *ip);

int main(void){
	long n;
	printf("Enter positive integer less than 256: ");
	scanf("%ld", &n);
	printf("The original value of n = %ld\n", n);
	intToBinary(n);
	printf("n after intToBinary is %ld \n",n);
	printf("The original value of n = %ld\n", n);
	intToBinaryByReference(&n);
	printf("n after intToBinaryByReference is %ld \n",n);
}

void intToBinary(long int n){
	long int remainder; 
    long int binary = 0, i = 1;
     
    while(n != 0) {
        remainder = n%2;
        n = n/2;
        binary= binary + (remainder*i);
        i = i*10;
    }
	n=binary;
	printf("Input to Binary = %ld\n",n);
}

void intToBinaryByReference(long *ip){
	long int remainder; 
    long int binary = 0, i = 1;
     
    while(*ip != 0) {
        remainder = *ip%2;
        *ip = *ip/2;
        binary= binary + (remainder*i);
        i = i*10;
    }
	*ip=binary;
	printf("Input to Binary = %ld\n",*ip);
}