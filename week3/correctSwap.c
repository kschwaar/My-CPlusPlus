//incorrect swap
//by Kevin Schwaar

#include <stdio.h>

void swap (int *x, int *y);

int main(void){
	int x=1;
	int y=123;
	
	printf("Before the swap, x=%d and y=%d\n",x,y);
	swap(&x,&y);
	printf("After the swap, x=%d and y=%d.\n",x,y);
}

void swap (int *x, int *y){
	int tmp = *x;
	*x = *y;
	*y = tmp;
}