//n values of sine function between 0 and 2PI

#include <stdio.h>
#include <math.h>

int main (){
	int pieces;
	printf("How many pieces of SIN do you want?\n");
	scanf("%d",&pieces);
	double start = (M_PI*2)/(double)pieces;
	double incr = start;
	while(incr<=(M_PI*2)){
		printf("sin(%f) = %f\n",incr,sin(incr));
		incr+=start;
	}
}