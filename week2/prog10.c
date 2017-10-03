// Arrays


#include <stdio.h>
#define size 10


long long factorial (long n);

int main(void){
	int n[10] = {10,20,30,40,50,60,70,80,90,100};
	int i;
	int total = 0;
	
	for(i=0; i<10; i++){
		total=total+n[i];
	}
	printf("The sum is %d\n",total);
}