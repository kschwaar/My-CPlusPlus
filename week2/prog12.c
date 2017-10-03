// Static Variables
// Static values are aware of history.  Non static variables reset each time the method is called.


#include <stdio.h>

void staticVariable(int n);

int main(void){
	printf("The first call to function: \n");
	staticVariable(5);
	printf("The second call to function: \n");
	staticVariable(11);
	printf("The third call to function: \n");
	staticVariable(37);
}

void staticVariable(int n){
	static int test=0;
	//int test = 0;
	test=test+n;
	printf("variable test = %d\n",test);
	
}