// Static Variables
// Static values are aware of history.  Non static variables reset each time the method is called.

#include <stdio.h>
#include <limits.h>

int main(void){
	char ch = '$';
	int n=5;
	unsigned int m=37; //gives you possibilities from about 0-4billion
	long long k = 123456789;
	double t = 3.14159;
	
	printf("%c \n",ch);
	printf("%d \n",n);	
	printf("%u \n",m);
	printf("%lld \n",k);
	printf("%f \n",t);

	printf("The size of long long: %d \n",sizeof(k));
	printf("The maximum integer is: %d \n", INT_MAX);
	printf("The minimum integer is: %d \n", INT_MIN);
}