//Print the powers of 2 from 2^1 to 2^20
//written by Kevin Schwaar

#include <math.h>
#include <stdio.h>

int main(void){
	int i;
	printf("The following is the powers of 2.\n");
	for(i=1; i<21; i++){
		printf("2^%d = %d\n",i,(int)pow(2,i));
	}
}