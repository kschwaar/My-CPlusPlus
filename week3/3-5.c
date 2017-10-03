//Leaking Memory
//Kevin Schwaar

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
	int n=1000;
	int i;
	int *a;
	
	printf("Leaking Memory...\n");

	for(i=0; i<n; i++){
		printf("Ammount of memory used = %d\n",n);
		a = (int *)malloc(n * sizeof(int));
		n=n+n;
	}	
}