//pointer incraments.

#include <stdio.h>

int main (){
	int *a;
	char *b;
	int i = 0;
	char c = 'X';
	
	a = &i;
	b = &c;
	
	for(i=0; i<4; i++){
		printf("a + %d = %d\n",i,a+i);
	}
	
	for(i=0; i<4; i++){
		printf("b + %d = %d\n",i,b+i);
	}
	
}