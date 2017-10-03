// Generate random integers

#include <stdio.h>
#include <stdlib.h>

int cube (int y); //Function prototype

int main(void){
	int i;
	unsigned seed;
	
	printf("Enter seed: ");
	scanf("%u", &seed); //%u requires us to put in an integer greater than -1.
	srand(seed);
	
	for(i=1; i<=10; i++){
		printf("%10d", rand()%1000);
	}
}

int cube (int m){
	return m*m*m;
}