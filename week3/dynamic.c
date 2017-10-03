//Dynamic memory allocation.
//malloc: set the ammount of memory you want to use.
//This command returns a void pointer.
//I'm supposed to cast it to the right type.
//by Kevin Schwaar

#include <stdio.h>
#include <stdlib.h>

int main(void){
	int n;
	int i;
	int *a;
	
	printf("Enter the size of the array: ");
	scanf("%d", &n);
	a = (int *)malloc(n * sizeof(int));
	for(i=0; i<n; i++){
		scanf("%d",(a+i));
		//every time you go throught this loop, you go 4 bytes down the line
	}
	printf("Here are the numbers in the reverse order: \n");
	for(i=n-1; i>=0; i--){
		printf("%d\n",a[i]);
	}
	
}