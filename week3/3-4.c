//pointer incraments.

#include <stdio.h>

int main (){
	double *dptr;
	long long *llptr;
	double i = 1.0;
	long long c = 100;
	
	dptr = &i;
	llptr = &c;
	
	for(i=0; i<4; i++){
		
		printf("a + %d = %d\n",(int)i,dptr+=1);
	}
	
	for(i=0; i<4; i++){
		printf("b + %d = %d\n",(int)i,llptr+=1);
	}
	
}