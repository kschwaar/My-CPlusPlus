//write a function that prints out if an integer is odd.  Test 4 integers.

#include <stdio.h>

int main (void){
	int i;
	int j;
	for(i=0; i<4; i++){
		printf("Enter an integer\n");
		scanf("%d", &j);
		if(j%2 == 0){
			printf("Your integer is even.\n");
		}
		else{
			printf("Your integer is odd.\n");
		}
	}
}