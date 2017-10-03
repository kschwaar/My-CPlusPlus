// getting input

#include <stdio.h>

int main(void){
	int n;
	int m;
	int sum;
	
	printf("Enter the first integer\n");
	scanf("%d", &n);
	
	printf("Enter the second integer\n");
	scanf("%d", &m);
	
	sum = n+m;
	printf("The sum is %d", sum);
}