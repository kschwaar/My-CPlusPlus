//Write and test a function that computes the distance between 2 points in 2D.

#include <stdio.h>
#include <math.h>

int main (void){
	int i,j,m,n;
	double distance;
	
	printf("Enter the first (x,y) point.\n");
	scanf("%d%d",&i,&j);
	
	printf("Enter the second (x,y) point.\n");
	scanf("%d%d",&m,&n);
	
	distance = sqrt((double)((m-i)*(m-i))+(double)((n-j)*(n-j)));
	printf("The distance between (%d,%d) and (%d,%d) is %f",i,j,m,n,distance);
}