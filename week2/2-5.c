//n values of sine function between 0 and 2PI

#include <stdio.h>
#include <math.h>

int main (){
	int n;
	printf("How many fibonacci numbers do you want?\n");
	scanf("%d",&n);
	int temp, first, second;
	temp=0; first=1; second=1;
	printf("%d\t%d\t",first,second);
	int counter=3;
	while (counter<=n){
		temp=first;
		first=second;
		second=temp+first;
		printf("%d\t",second);
		counter++;
	}
}