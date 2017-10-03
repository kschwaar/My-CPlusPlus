// Arrays

#include <stdio.h>

long long factorial (long n);

int main(void){
	int n[10] = {10,20,30,40,50,60,70,80,90,100};
	int i;
	
	printf("%s%12s\n","Index","Value");
	
	for(i=0; i<10; i++){
		printf("%3d%13d\n",i,n[i]);
	}
}